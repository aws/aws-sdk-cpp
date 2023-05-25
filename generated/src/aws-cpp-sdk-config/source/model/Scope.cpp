/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/Scope.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

Scope::Scope() : 
    m_complianceResourceTypesHasBeenSet(false),
    m_tagKeyHasBeenSet(false),
    m_tagValueHasBeenSet(false),
    m_complianceResourceIdHasBeenSet(false)
{
}

Scope::Scope(JsonView jsonValue) : 
    m_complianceResourceTypesHasBeenSet(false),
    m_tagKeyHasBeenSet(false),
    m_tagValueHasBeenSet(false),
    m_complianceResourceIdHasBeenSet(false)
{
  *this = jsonValue;
}

Scope& Scope::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComplianceResourceTypes"))
  {
    Aws::Utils::Array<JsonView> complianceResourceTypesJsonList = jsonValue.GetArray("ComplianceResourceTypes");
    for(unsigned complianceResourceTypesIndex = 0; complianceResourceTypesIndex < complianceResourceTypesJsonList.GetLength(); ++complianceResourceTypesIndex)
    {
      m_complianceResourceTypes.push_back(complianceResourceTypesJsonList[complianceResourceTypesIndex].AsString());
    }
    m_complianceResourceTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TagKey"))
  {
    m_tagKey = jsonValue.GetString("TagKey");

    m_tagKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TagValue"))
  {
    m_tagValue = jsonValue.GetString("TagValue");

    m_tagValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComplianceResourceId"))
  {
    m_complianceResourceId = jsonValue.GetString("ComplianceResourceId");

    m_complianceResourceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Scope::Jsonize() const
{
  JsonValue payload;

  if(m_complianceResourceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> complianceResourceTypesJsonList(m_complianceResourceTypes.size());
   for(unsigned complianceResourceTypesIndex = 0; complianceResourceTypesIndex < complianceResourceTypesJsonList.GetLength(); ++complianceResourceTypesIndex)
   {
     complianceResourceTypesJsonList[complianceResourceTypesIndex].AsString(m_complianceResourceTypes[complianceResourceTypesIndex]);
   }
   payload.WithArray("ComplianceResourceTypes", std::move(complianceResourceTypesJsonList));

  }

  if(m_tagKeyHasBeenSet)
  {
   payload.WithString("TagKey", m_tagKey);

  }

  if(m_tagValueHasBeenSet)
  {
   payload.WithString("TagValue", m_tagValue);

  }

  if(m_complianceResourceIdHasBeenSet)
  {
   payload.WithString("ComplianceResourceId", m_complianceResourceId);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
