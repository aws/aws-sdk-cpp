/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/sagemaker-runtime/model/InvokeEndpointResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMakerRuntime::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

InvokeEndpointResult::InvokeEndpointResult()
{
}

InvokeEndpointResult::InvokeEndpointResult(InvokeEndpointResult&& toMove) : 
    m_body(std::move(toMove.m_body)),
    m_contentType(std::move(toMove.m_contentType)),
    m_invokedProductionVariant(std::move(toMove.m_invokedProductionVariant))
{
}

InvokeEndpointResult& InvokeEndpointResult::operator=(InvokeEndpointResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_body = std::move(toMove.m_body);
   m_contentType = std::move(toMove.m_contentType);
   m_invokedProductionVariant = std::move(toMove.m_invokedProductionVariant);

   return *this;
}

InvokeEndpointResult::InvokeEndpointResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

InvokeEndpointResult& InvokeEndpointResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_body = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& contentTypeIter = headers.find("content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = contentTypeIter->second;
  }

  const auto& invokedProductionVariantIter = headers.find("x-amzn-invoked-production-variant");
  if(invokedProductionVariantIter != headers.end())
  {
    m_invokedProductionVariant = invokedProductionVariantIter->second;
  }

   return *this;
}
