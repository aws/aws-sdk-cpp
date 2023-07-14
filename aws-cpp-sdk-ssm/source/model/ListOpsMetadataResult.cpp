﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ListOpsMetadataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListOpsMetadataResult::ListOpsMetadataResult()
{
}

ListOpsMetadataResult::ListOpsMetadataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListOpsMetadataResult& ListOpsMetadataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OpsMetadataList"))
  {
    Array<JsonView> opsMetadataListJsonList = jsonValue.GetArray("OpsMetadataList");
    for(unsigned opsMetadataListIndex = 0; opsMetadataListIndex < opsMetadataListJsonList.GetLength(); ++opsMetadataListIndex)
    {
      m_opsMetadataList.push_back(opsMetadataListJsonList[opsMetadataListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
