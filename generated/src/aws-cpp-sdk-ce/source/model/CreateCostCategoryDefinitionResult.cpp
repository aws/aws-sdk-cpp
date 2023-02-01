/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CreateCostCategoryDefinitionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateCostCategoryDefinitionResult::CreateCostCategoryDefinitionResult()
{
}

CreateCostCategoryDefinitionResult::CreateCostCategoryDefinitionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateCostCategoryDefinitionResult& CreateCostCategoryDefinitionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CostCategoryArn"))
  {
    m_costCategoryArn = jsonValue.GetString("CostCategoryArn");

  }

  if(jsonValue.ValueExists("EffectiveStart"))
  {
    m_effectiveStart = jsonValue.GetString("EffectiveStart");

  }



  return *this;
}
