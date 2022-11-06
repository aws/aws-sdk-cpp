/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/ListTableStorageOptimizersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTableStorageOptimizersResult::ListTableStorageOptimizersResult()
{
}

ListTableStorageOptimizersResult::ListTableStorageOptimizersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTableStorageOptimizersResult& ListTableStorageOptimizersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("StorageOptimizerList"))
  {
    Aws::Utils::Array<JsonView> storageOptimizerListJsonList = jsonValue.GetArray("StorageOptimizerList");
    for(unsigned storageOptimizerListIndex = 0; storageOptimizerListIndex < storageOptimizerListJsonList.GetLength(); ++storageOptimizerListIndex)
    {
      m_storageOptimizerList.push_back(storageOptimizerListJsonList[storageOptimizerListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
