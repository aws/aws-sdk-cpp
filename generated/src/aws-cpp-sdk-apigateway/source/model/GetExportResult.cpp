/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/GetExportResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetExportResult::GetExportResult()
{
}

GetExportResult::GetExportResult(GetExportResult&& toMove) : 
    m_contentType(std::move(toMove.m_contentType)),
    m_contentDisposition(std::move(toMove.m_contentDisposition)),
    m_body(std::move(toMove.m_body))
{
}

GetExportResult& GetExportResult::operator=(GetExportResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_contentType = std::move(toMove.m_contentType);
   m_contentDisposition = std::move(toMove.m_contentDisposition);
   m_body = std::move(toMove.m_body);

   return *this;
}

GetExportResult::GetExportResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

GetExportResult& GetExportResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_body = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& contentTypeIter = headers.find("content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = contentTypeIter->second;
  }

  const auto& contentDispositionIter = headers.find("content-disposition");
  if(contentDispositionIter != headers.end())
  {
    m_contentDisposition = contentDispositionIter->second;
  }

   return *this;
}
