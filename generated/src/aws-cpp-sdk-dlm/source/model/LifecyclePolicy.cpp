/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/LifecyclePolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DLM
{
namespace Model
{

LifecyclePolicy::LifecyclePolicy() : 
    m_policyIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_state(GettablePolicyStateValues::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_dateModifiedHasBeenSet(false),
    m_policyDetailsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_policyArnHasBeenSet(false)
{
}

LifecyclePolicy::LifecyclePolicy(JsonView jsonValue) : 
    m_policyIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_state(GettablePolicyStateValues::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_dateModifiedHasBeenSet(false),
    m_policyDetailsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_policyArnHasBeenSet(false)
{
  *this = jsonValue;
}

LifecyclePolicy& LifecyclePolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PolicyId"))
  {
    m_policyId = jsonValue.GetString("PolicyId");

    m_policyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = GettablePolicyStateValuesMapper::GetGettablePolicyStateValuesForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionRoleArn"))
  {
    m_executionRoleArn = jsonValue.GetString("ExecutionRoleArn");

    m_executionRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateCreated"))
  {
    m_dateCreated = jsonValue.GetString("DateCreated");

    m_dateCreatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateModified"))
  {
    m_dateModified = jsonValue.GetString("DateModified");

    m_dateModifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyDetails"))
  {
    m_policyDetails = jsonValue.GetObject("PolicyDetails");

    m_policyDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyArn"))
  {
    m_policyArn = jsonValue.GetString("PolicyArn");

    m_policyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue LifecyclePolicy::Jsonize() const
{
  JsonValue payload;

  if(m_policyIdHasBeenSet)
  {
   payload.WithString("PolicyId", m_policyId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", GettablePolicyStateValuesMapper::GetNameForGettablePolicyStateValues(m_state));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("ExecutionRoleArn", m_executionRoleArn);

  }

  if(m_dateCreatedHasBeenSet)
  {
   payload.WithString("DateCreated", m_dateCreated.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_dateModifiedHasBeenSet)
  {
   payload.WithString("DateModified", m_dateModified.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_policyDetailsHasBeenSet)
  {
   payload.WithObject("PolicyDetails", m_policyDetails.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_policyArnHasBeenSet)
  {
   payload.WithString("PolicyArn", m_policyArn);

  }

  return payload;
}

} // namespace Model
} // namespace DLM
} // namespace Aws
