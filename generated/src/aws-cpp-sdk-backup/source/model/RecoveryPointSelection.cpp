/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/RecoveryPointSelection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

RecoveryPointSelection::RecoveryPointSelection() : 
    m_vaultNamesHasBeenSet(false),
    m_resourceIdentifiersHasBeenSet(false),
    m_dateRangeHasBeenSet(false)
{
}

RecoveryPointSelection::RecoveryPointSelection(JsonView jsonValue) : 
    m_vaultNamesHasBeenSet(false),
    m_resourceIdentifiersHasBeenSet(false),
    m_dateRangeHasBeenSet(false)
{
  *this = jsonValue;
}

RecoveryPointSelection& RecoveryPointSelection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VaultNames"))
  {
    Aws::Utils::Array<JsonView> vaultNamesJsonList = jsonValue.GetArray("VaultNames");
    for(unsigned vaultNamesIndex = 0; vaultNamesIndex < vaultNamesJsonList.GetLength(); ++vaultNamesIndex)
    {
      m_vaultNames.push_back(vaultNamesJsonList[vaultNamesIndex].AsString());
    }
    m_vaultNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceIdentifiers"))
  {
    Aws::Utils::Array<JsonView> resourceIdentifiersJsonList = jsonValue.GetArray("ResourceIdentifiers");
    for(unsigned resourceIdentifiersIndex = 0; resourceIdentifiersIndex < resourceIdentifiersJsonList.GetLength(); ++resourceIdentifiersIndex)
    {
      m_resourceIdentifiers.push_back(resourceIdentifiersJsonList[resourceIdentifiersIndex].AsString());
    }
    m_resourceIdentifiersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateRange"))
  {
    m_dateRange = jsonValue.GetObject("DateRange");

    m_dateRangeHasBeenSet = true;
  }

  return *this;
}

JsonValue RecoveryPointSelection::Jsonize() const
{
  JsonValue payload;

  if(m_vaultNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vaultNamesJsonList(m_vaultNames.size());
   for(unsigned vaultNamesIndex = 0; vaultNamesIndex < vaultNamesJsonList.GetLength(); ++vaultNamesIndex)
   {
     vaultNamesJsonList[vaultNamesIndex].AsString(m_vaultNames[vaultNamesIndex]);
   }
   payload.WithArray("VaultNames", std::move(vaultNamesJsonList));

  }

  if(m_resourceIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceIdentifiersJsonList(m_resourceIdentifiers.size());
   for(unsigned resourceIdentifiersIndex = 0; resourceIdentifiersIndex < resourceIdentifiersJsonList.GetLength(); ++resourceIdentifiersIndex)
   {
     resourceIdentifiersJsonList[resourceIdentifiersIndex].AsString(m_resourceIdentifiers[resourceIdentifiersIndex]);
   }
   payload.WithArray("ResourceIdentifiers", std::move(resourceIdentifiersJsonList));

  }

  if(m_dateRangeHasBeenSet)
  {
   payload.WithObject("DateRange", m_dateRange.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
