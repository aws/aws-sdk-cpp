/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/RestoreTestingRecoveryPointSelection.h>
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

RestoreTestingRecoveryPointSelection::RestoreTestingRecoveryPointSelection() : 
    m_algorithm(RestoreTestingRecoveryPointSelectionAlgorithm::NOT_SET),
    m_algorithmHasBeenSet(false),
    m_excludeVaultsHasBeenSet(false),
    m_includeVaultsHasBeenSet(false),
    m_recoveryPointTypesHasBeenSet(false),
    m_selectionWindowDays(0),
    m_selectionWindowDaysHasBeenSet(false)
{
}

RestoreTestingRecoveryPointSelection::RestoreTestingRecoveryPointSelection(JsonView jsonValue) : 
    m_algorithm(RestoreTestingRecoveryPointSelectionAlgorithm::NOT_SET),
    m_algorithmHasBeenSet(false),
    m_excludeVaultsHasBeenSet(false),
    m_includeVaultsHasBeenSet(false),
    m_recoveryPointTypesHasBeenSet(false),
    m_selectionWindowDays(0),
    m_selectionWindowDaysHasBeenSet(false)
{
  *this = jsonValue;
}

RestoreTestingRecoveryPointSelection& RestoreTestingRecoveryPointSelection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Algorithm"))
  {
    m_algorithm = RestoreTestingRecoveryPointSelectionAlgorithmMapper::GetRestoreTestingRecoveryPointSelectionAlgorithmForName(jsonValue.GetString("Algorithm"));

    m_algorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExcludeVaults"))
  {
    Aws::Utils::Array<JsonView> excludeVaultsJsonList = jsonValue.GetArray("ExcludeVaults");
    for(unsigned excludeVaultsIndex = 0; excludeVaultsIndex < excludeVaultsJsonList.GetLength(); ++excludeVaultsIndex)
    {
      m_excludeVaults.push_back(excludeVaultsJsonList[excludeVaultsIndex].AsString());
    }
    m_excludeVaultsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeVaults"))
  {
    Aws::Utils::Array<JsonView> includeVaultsJsonList = jsonValue.GetArray("IncludeVaults");
    for(unsigned includeVaultsIndex = 0; includeVaultsIndex < includeVaultsJsonList.GetLength(); ++includeVaultsIndex)
    {
      m_includeVaults.push_back(includeVaultsJsonList[includeVaultsIndex].AsString());
    }
    m_includeVaultsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecoveryPointTypes"))
  {
    Aws::Utils::Array<JsonView> recoveryPointTypesJsonList = jsonValue.GetArray("RecoveryPointTypes");
    for(unsigned recoveryPointTypesIndex = 0; recoveryPointTypesIndex < recoveryPointTypesJsonList.GetLength(); ++recoveryPointTypesIndex)
    {
      m_recoveryPointTypes.push_back(RestoreTestingRecoveryPointTypeMapper::GetRestoreTestingRecoveryPointTypeForName(recoveryPointTypesJsonList[recoveryPointTypesIndex].AsString()));
    }
    m_recoveryPointTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelectionWindowDays"))
  {
    m_selectionWindowDays = jsonValue.GetInteger("SelectionWindowDays");

    m_selectionWindowDaysHasBeenSet = true;
  }

  return *this;
}

JsonValue RestoreTestingRecoveryPointSelection::Jsonize() const
{
  JsonValue payload;

  if(m_algorithmHasBeenSet)
  {
   payload.WithString("Algorithm", RestoreTestingRecoveryPointSelectionAlgorithmMapper::GetNameForRestoreTestingRecoveryPointSelectionAlgorithm(m_algorithm));
  }

  if(m_excludeVaultsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludeVaultsJsonList(m_excludeVaults.size());
   for(unsigned excludeVaultsIndex = 0; excludeVaultsIndex < excludeVaultsJsonList.GetLength(); ++excludeVaultsIndex)
   {
     excludeVaultsJsonList[excludeVaultsIndex].AsString(m_excludeVaults[excludeVaultsIndex]);
   }
   payload.WithArray("ExcludeVaults", std::move(excludeVaultsJsonList));

  }

  if(m_includeVaultsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includeVaultsJsonList(m_includeVaults.size());
   for(unsigned includeVaultsIndex = 0; includeVaultsIndex < includeVaultsJsonList.GetLength(); ++includeVaultsIndex)
   {
     includeVaultsJsonList[includeVaultsIndex].AsString(m_includeVaults[includeVaultsIndex]);
   }
   payload.WithArray("IncludeVaults", std::move(includeVaultsJsonList));

  }

  if(m_recoveryPointTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recoveryPointTypesJsonList(m_recoveryPointTypes.size());
   for(unsigned recoveryPointTypesIndex = 0; recoveryPointTypesIndex < recoveryPointTypesJsonList.GetLength(); ++recoveryPointTypesIndex)
   {
     recoveryPointTypesJsonList[recoveryPointTypesIndex].AsString(RestoreTestingRecoveryPointTypeMapper::GetNameForRestoreTestingRecoveryPointType(m_recoveryPointTypes[recoveryPointTypesIndex]));
   }
   payload.WithArray("RecoveryPointTypes", std::move(recoveryPointTypesJsonList));

  }

  if(m_selectionWindowDaysHasBeenSet)
  {
   payload.WithInteger("SelectionWindowDays", m_selectionWindowDays);

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
