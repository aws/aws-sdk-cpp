/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lambda/model/InvokeResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

InvokeResult::InvokeResult() : 
    m_statusCode(0)
{
}

InvokeResult::InvokeResult(InvokeResult&& toMove) : 
    m_statusCode(toMove.m_statusCode),
    m_functionError(std::move(toMove.m_functionError)),
    m_logResult(std::move(toMove.m_logResult)),
    m_payload(std::move(toMove.m_payload))
{
}

InvokeResult& InvokeResult::operator=(InvokeResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_statusCode = toMove.m_statusCode;
   m_functionError = std::move(toMove.m_functionError);
   m_logResult = std::move(toMove.m_logResult);
   m_payload = std::move(toMove.m_payload);

   return *this;
}

InvokeResult::InvokeResult(AmazonWebServiceResult<ResponseStream>&& result) : 
    m_statusCode(0)
{
  *this = std::move(result);
}

InvokeResult& InvokeResult::operator =(AmazonWebServiceResult<ResponseStream>&& result)
{
  m_payload = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& functionErrorIter = headers.find("x-amz-function-error");
  if(functionErrorIter != headers.end())
  {
    m_functionError = functionErrorIter->second;
  }

  const auto& logResultIter = headers.find("x-amz-log-result");
  if(logResultIter != headers.end())
  {
    m_logResult = logResultIter->second;
  }

  m_statusCode = static_cast<int>(result.GetResponseCode());

   return *this;
}
