/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/ListIndexResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListIndexResult::ListIndexResult()
{
}

ListIndexResult::ListIndexResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListIndexResult& ListIndexResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IndexAttachments"))
  {
    Aws::Utils::Array<JsonView> indexAttachmentsJsonList = jsonValue.GetArray("IndexAttachments");
    for(unsigned indexAttachmentsIndex = 0; indexAttachmentsIndex < indexAttachmentsJsonList.GetLength(); ++indexAttachmentsIndex)
    {
      m_indexAttachments.push_back(indexAttachmentsJsonList[indexAttachmentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
