/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resourcegroupstaggingapi/model/ComplianceDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResourceGroupsTaggingAPI
{
namespace Model
{

ComplianceDetails::ComplianceDetails() : 
    m_noncompliantKeysHasBeenSet(false),
    m_keysWithNoncompliantValuesHasBeenSet(false),
    m_complianceStatus(false),
    m_complianceStatusHasBeenSet(false)
{
}

ComplianceDetails::ComplianceDetails(JsonView jsonValue) : 
    m_noncompliantKeysHasBeenSet(false),
    m_keysWithNoncompliantValuesHasBeenSet(false),
    m_complianceStatus(false),
    m_complianceStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ComplianceDetails& ComplianceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NoncompliantKeys"))
  {
    Aws::Utils::Array<JsonView> noncompliantKeysJsonList = jsonValue.GetArray("NoncompliantKeys");
    for(unsigned noncompliantKeysIndex = 0; noncompliantKeysIndex < noncompliantKeysJsonList.GetLength(); ++noncompliantKeysIndex)
    {
      m_noncompliantKeys.push_back(noncompliantKeysJsonList[noncompliantKeysIndex].AsString());
    }
    m_noncompliantKeysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeysWithNoncompliantValues"))
  {
    Aws::Utils::Array<JsonView> keysWithNoncompliantValuesJsonList = jsonValue.GetArray("KeysWithNoncompliantValues");
    for(unsigned keysWithNoncompliantValuesIndex = 0; keysWithNoncompliantValuesIndex < keysWithNoncompliantValuesJsonList.GetLength(); ++keysWithNoncompliantValuesIndex)
    {
      m_keysWithNoncompliantValues.push_back(keysWithNoncompliantValuesJsonList[keysWithNoncompliantValuesIndex].AsString());
    }
    m_keysWithNoncompliantValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComplianceStatus"))
  {
    m_complianceStatus = jsonValue.GetBool("ComplianceStatus");

    m_complianceStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ComplianceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_noncompliantKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> noncompliantKeysJsonList(m_noncompliantKeys.size());
   for(unsigned noncompliantKeysIndex = 0; noncompliantKeysIndex < noncompliantKeysJsonList.GetLength(); ++noncompliantKeysIndex)
   {
     noncompliantKeysJsonList[noncompliantKeysIndex].AsString(m_noncompliantKeys[noncompliantKeysIndex]);
   }
   payload.WithArray("NoncompliantKeys", std::move(noncompliantKeysJsonList));

  }

  if(m_keysWithNoncompliantValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> keysWithNoncompliantValuesJsonList(m_keysWithNoncompliantValues.size());
   for(unsigned keysWithNoncompliantValuesIndex = 0; keysWithNoncompliantValuesIndex < keysWithNoncompliantValuesJsonList.GetLength(); ++keysWithNoncompliantValuesIndex)
   {
     keysWithNoncompliantValuesJsonList[keysWithNoncompliantValuesIndex].AsString(m_keysWithNoncompliantValues[keysWithNoncompliantValuesIndex]);
   }
   payload.WithArray("KeysWithNoncompliantValues", std::move(keysWithNoncompliantValuesJsonList));

  }

  if(m_complianceStatusHasBeenSet)
  {
   payload.WithBool("ComplianceStatus", m_complianceStatus);

  }

  return payload;
}

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
