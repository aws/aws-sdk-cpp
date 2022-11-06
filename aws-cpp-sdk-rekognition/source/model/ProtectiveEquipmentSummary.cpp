/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/ProtectiveEquipmentSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

ProtectiveEquipmentSummary::ProtectiveEquipmentSummary() : 
    m_personsWithRequiredEquipmentHasBeenSet(false),
    m_personsWithoutRequiredEquipmentHasBeenSet(false),
    m_personsIndeterminateHasBeenSet(false)
{
}

ProtectiveEquipmentSummary::ProtectiveEquipmentSummary(JsonView jsonValue) : 
    m_personsWithRequiredEquipmentHasBeenSet(false),
    m_personsWithoutRequiredEquipmentHasBeenSet(false),
    m_personsIndeterminateHasBeenSet(false)
{
  *this = jsonValue;
}

ProtectiveEquipmentSummary& ProtectiveEquipmentSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PersonsWithRequiredEquipment"))
  {
    Aws::Utils::Array<JsonView> personsWithRequiredEquipmentJsonList = jsonValue.GetArray("PersonsWithRequiredEquipment");
    for(unsigned personsWithRequiredEquipmentIndex = 0; personsWithRequiredEquipmentIndex < personsWithRequiredEquipmentJsonList.GetLength(); ++personsWithRequiredEquipmentIndex)
    {
      m_personsWithRequiredEquipment.push_back(personsWithRequiredEquipmentJsonList[personsWithRequiredEquipmentIndex].AsInteger());
    }
    m_personsWithRequiredEquipmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PersonsWithoutRequiredEquipment"))
  {
    Aws::Utils::Array<JsonView> personsWithoutRequiredEquipmentJsonList = jsonValue.GetArray("PersonsWithoutRequiredEquipment");
    for(unsigned personsWithoutRequiredEquipmentIndex = 0; personsWithoutRequiredEquipmentIndex < personsWithoutRequiredEquipmentJsonList.GetLength(); ++personsWithoutRequiredEquipmentIndex)
    {
      m_personsWithoutRequiredEquipment.push_back(personsWithoutRequiredEquipmentJsonList[personsWithoutRequiredEquipmentIndex].AsInteger());
    }
    m_personsWithoutRequiredEquipmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PersonsIndeterminate"))
  {
    Aws::Utils::Array<JsonView> personsIndeterminateJsonList = jsonValue.GetArray("PersonsIndeterminate");
    for(unsigned personsIndeterminateIndex = 0; personsIndeterminateIndex < personsIndeterminateJsonList.GetLength(); ++personsIndeterminateIndex)
    {
      m_personsIndeterminate.push_back(personsIndeterminateJsonList[personsIndeterminateIndex].AsInteger());
    }
    m_personsIndeterminateHasBeenSet = true;
  }

  return *this;
}

JsonValue ProtectiveEquipmentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_personsWithRequiredEquipmentHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> personsWithRequiredEquipmentJsonList(m_personsWithRequiredEquipment.size());
   for(unsigned personsWithRequiredEquipmentIndex = 0; personsWithRequiredEquipmentIndex < personsWithRequiredEquipmentJsonList.GetLength(); ++personsWithRequiredEquipmentIndex)
   {
     personsWithRequiredEquipmentJsonList[personsWithRequiredEquipmentIndex].AsInteger(m_personsWithRequiredEquipment[personsWithRequiredEquipmentIndex]);
   }
   payload.WithArray("PersonsWithRequiredEquipment", std::move(personsWithRequiredEquipmentJsonList));

  }

  if(m_personsWithoutRequiredEquipmentHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> personsWithoutRequiredEquipmentJsonList(m_personsWithoutRequiredEquipment.size());
   for(unsigned personsWithoutRequiredEquipmentIndex = 0; personsWithoutRequiredEquipmentIndex < personsWithoutRequiredEquipmentJsonList.GetLength(); ++personsWithoutRequiredEquipmentIndex)
   {
     personsWithoutRequiredEquipmentJsonList[personsWithoutRequiredEquipmentIndex].AsInteger(m_personsWithoutRequiredEquipment[personsWithoutRequiredEquipmentIndex]);
   }
   payload.WithArray("PersonsWithoutRequiredEquipment", std::move(personsWithoutRequiredEquipmentJsonList));

  }

  if(m_personsIndeterminateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> personsIndeterminateJsonList(m_personsIndeterminate.size());
   for(unsigned personsIndeterminateIndex = 0; personsIndeterminateIndex < personsIndeterminateJsonList.GetLength(); ++personsIndeterminateIndex)
   {
     personsIndeterminateJsonList[personsIndeterminateIndex].AsInteger(m_personsIndeterminate[personsIndeterminateIndex]);
   }
   payload.WithArray("PersonsIndeterminate", std::move(personsIndeterminateJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
