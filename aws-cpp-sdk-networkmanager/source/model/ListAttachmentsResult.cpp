/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/ListAttachmentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAttachmentsResult::ListAttachmentsResult()
{
}

ListAttachmentsResult::ListAttachmentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAttachmentsResult& ListAttachmentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Attachments"))
  {
    Aws::Utils::Array<JsonView> attachmentsJsonList = jsonValue.GetArray("Attachments");
    for(unsigned attachmentsIndex = 0; attachmentsIndex < attachmentsJsonList.GetLength(); ++attachmentsIndex)
    {
      m_attachments.push_back(attachmentsJsonList[attachmentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
