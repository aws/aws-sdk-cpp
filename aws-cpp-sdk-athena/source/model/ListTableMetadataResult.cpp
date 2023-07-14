﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ListTableMetadataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTableMetadataResult::ListTableMetadataResult()
{
}

ListTableMetadataResult::ListTableMetadataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTableMetadataResult& ListTableMetadataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TableMetadataList"))
  {
    Array<JsonView> tableMetadataListJsonList = jsonValue.GetArray("TableMetadataList");
    for(unsigned tableMetadataListIndex = 0; tableMetadataListIndex < tableMetadataListJsonList.GetLength(); ++tableMetadataListIndex)
    {
      m_tableMetadataList.push_back(tableMetadataListJsonList[tableMetadataListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
