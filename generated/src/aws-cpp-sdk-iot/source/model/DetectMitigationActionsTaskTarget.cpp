/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DetectMitigationActionsTaskTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

DetectMitigationActionsTaskTarget::DetectMitigationActionsTaskTarget() : 
    m_violationIdsHasBeenSet(false),
    m_securityProfileNameHasBeenSet(false),
    m_behaviorNameHasBeenSet(false)
{
}

DetectMitigationActionsTaskTarget::DetectMitigationActionsTaskTarget(JsonView jsonValue) : 
    m_violationIdsHasBeenSet(false),
    m_securityProfileNameHasBeenSet(false),
    m_behaviorNameHasBeenSet(false)
{
  *this = jsonValue;
}

DetectMitigationActionsTaskTarget& DetectMitigationActionsTaskTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("violationIds"))
  {
    Aws::Utils::Array<JsonView> violationIdsJsonList = jsonValue.GetArray("violationIds");
    for(unsigned violationIdsIndex = 0; violationIdsIndex < violationIdsJsonList.GetLength(); ++violationIdsIndex)
    {
      m_violationIds.push_back(violationIdsJsonList[violationIdsIndex].AsString());
    }
    m_violationIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("securityProfileName"))
  {
    m_securityProfileName = jsonValue.GetString("securityProfileName");

    m_securityProfileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("behaviorName"))
  {
    m_behaviorName = jsonValue.GetString("behaviorName");

    m_behaviorNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DetectMitigationActionsTaskTarget::Jsonize() const
{
  JsonValue payload;

  if(m_violationIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> violationIdsJsonList(m_violationIds.size());
   for(unsigned violationIdsIndex = 0; violationIdsIndex < violationIdsJsonList.GetLength(); ++violationIdsIndex)
   {
     violationIdsJsonList[violationIdsIndex].AsString(m_violationIds[violationIdsIndex]);
   }
   payload.WithArray("violationIds", std::move(violationIdsJsonList));

  }

  if(m_securityProfileNameHasBeenSet)
  {
   payload.WithString("securityProfileName", m_securityProfileName);

  }

  if(m_behaviorNameHasBeenSet)
  {
   payload.WithString("behaviorName", m_behaviorName);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
