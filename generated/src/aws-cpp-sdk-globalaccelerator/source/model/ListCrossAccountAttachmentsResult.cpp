/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/ListCrossAccountAttachmentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCrossAccountAttachmentsResult::ListCrossAccountAttachmentsResult()
{
}

ListCrossAccountAttachmentsResult::ListCrossAccountAttachmentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCrossAccountAttachmentsResult& ListCrossAccountAttachmentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CrossAccountAttachments"))
  {
    Aws::Utils::Array<JsonView> crossAccountAttachmentsJsonList = jsonValue.GetArray("CrossAccountAttachments");
    for(unsigned crossAccountAttachmentsIndex = 0; crossAccountAttachmentsIndex < crossAccountAttachmentsJsonList.GetLength(); ++crossAccountAttachmentsIndex)
    {
      m_crossAccountAttachments.push_back(crossAccountAttachmentsJsonList[crossAccountAttachmentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
