/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/RuleGroupResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

RuleGroupResponse::RuleGroupResponse() : 
    m_ruleGroupArnHasBeenSet(false),
    m_ruleGroupNameHasBeenSet(false),
    m_ruleGroupIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_type(RuleGroupType::NOT_SET),
    m_typeHasBeenSet(false),
    m_capacity(0),
    m_capacityHasBeenSet(false),
    m_ruleGroupStatus(ResourceStatus::NOT_SET),
    m_ruleGroupStatusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

RuleGroupResponse::RuleGroupResponse(JsonView jsonValue) : 
    m_ruleGroupArnHasBeenSet(false),
    m_ruleGroupNameHasBeenSet(false),
    m_ruleGroupIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_type(RuleGroupType::NOT_SET),
    m_typeHasBeenSet(false),
    m_capacity(0),
    m_capacityHasBeenSet(false),
    m_ruleGroupStatus(ResourceStatus::NOT_SET),
    m_ruleGroupStatusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

RuleGroupResponse& RuleGroupResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleGroupArn"))
  {
    m_ruleGroupArn = jsonValue.GetString("RuleGroupArn");

    m_ruleGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleGroupName"))
  {
    m_ruleGroupName = jsonValue.GetString("RuleGroupName");

    m_ruleGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleGroupId"))
  {
    m_ruleGroupId = jsonValue.GetString("RuleGroupId");

    m_ruleGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = RuleGroupTypeMapper::GetRuleGroupTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Capacity"))
  {
    m_capacity = jsonValue.GetInteger("Capacity");

    m_capacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleGroupStatus"))
  {
    m_ruleGroupStatus = ResourceStatusMapper::GetResourceStatusForName(jsonValue.GetString("RuleGroupStatus"));

    m_ruleGroupStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleGroupResponse::Jsonize() const
{
  JsonValue payload;

  if(m_ruleGroupArnHasBeenSet)
  {
   payload.WithString("RuleGroupArn", m_ruleGroupArn);

  }

  if(m_ruleGroupNameHasBeenSet)
  {
   payload.WithString("RuleGroupName", m_ruleGroupName);

  }

  if(m_ruleGroupIdHasBeenSet)
  {
   payload.WithString("RuleGroupId", m_ruleGroupId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", RuleGroupTypeMapper::GetNameForRuleGroupType(m_type));
  }

  if(m_capacityHasBeenSet)
  {
   payload.WithInteger("Capacity", m_capacity);

  }

  if(m_ruleGroupStatusHasBeenSet)
  {
   payload.WithString("RuleGroupStatus", ResourceStatusMapper::GetNameForResourceStatus(m_ruleGroupStatus));
  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
