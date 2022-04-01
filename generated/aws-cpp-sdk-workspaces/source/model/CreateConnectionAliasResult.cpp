﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/CreateConnectionAliasResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateConnectionAliasResult::CreateConnectionAliasResult()
{
}

CreateConnectionAliasResult::CreateConnectionAliasResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateConnectionAliasResult& CreateConnectionAliasResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AliasId"))
  {
    m_aliasId = jsonValue.GetString("AliasId");

  }



  return *this;
}
