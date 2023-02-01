/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/RdsDbClusterSnapshotAttributeValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

RdsDbClusterSnapshotAttributeValue::RdsDbClusterSnapshotAttributeValue() : 
    m_accountIdsHasBeenSet(false)
{
}

RdsDbClusterSnapshotAttributeValue::RdsDbClusterSnapshotAttributeValue(JsonView jsonValue) : 
    m_accountIdsHasBeenSet(false)
{
  *this = jsonValue;
}

RdsDbClusterSnapshotAttributeValue& RdsDbClusterSnapshotAttributeValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountIds"))
  {
    Aws::Utils::Array<JsonView> accountIdsJsonList = jsonValue.GetArray("accountIds");
    for(unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex)
    {
      m_accountIds.push_back(accountIdsJsonList[accountIdsIndex].AsString());
    }
    m_accountIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue RdsDbClusterSnapshotAttributeValue::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountIdsJsonList(m_accountIds.size());
   for(unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex)
   {
     accountIdsJsonList[accountIdsIndex].AsString(m_accountIds[accountIdsIndex]);
   }
   payload.WithArray("accountIds", std::move(accountIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
