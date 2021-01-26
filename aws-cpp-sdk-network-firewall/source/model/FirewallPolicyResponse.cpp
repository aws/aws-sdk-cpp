/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/FirewallPolicyResponse.h>
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

FirewallPolicyResponse::FirewallPolicyResponse() : 
    m_firewallPolicyNameHasBeenSet(false),
    m_firewallPolicyArnHasBeenSet(false),
    m_firewallPolicyIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_firewallPolicyStatus(ResourceStatus::NOT_SET),
    m_firewallPolicyStatusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

FirewallPolicyResponse::FirewallPolicyResponse(JsonView jsonValue) : 
    m_firewallPolicyNameHasBeenSet(false),
    m_firewallPolicyArnHasBeenSet(false),
    m_firewallPolicyIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_firewallPolicyStatus(ResourceStatus::NOT_SET),
    m_firewallPolicyStatusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

FirewallPolicyResponse& FirewallPolicyResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FirewallPolicyName"))
  {
    m_firewallPolicyName = jsonValue.GetString("FirewallPolicyName");

    m_firewallPolicyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirewallPolicyArn"))
  {
    m_firewallPolicyArn = jsonValue.GetString("FirewallPolicyArn");

    m_firewallPolicyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirewallPolicyId"))
  {
    m_firewallPolicyId = jsonValue.GetString("FirewallPolicyId");

    m_firewallPolicyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirewallPolicyStatus"))
  {
    m_firewallPolicyStatus = ResourceStatusMapper::GetResourceStatusForName(jsonValue.GetString("FirewallPolicyStatus"));

    m_firewallPolicyStatusHasBeenSet = true;
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

JsonValue FirewallPolicyResponse::Jsonize() const
{
  JsonValue payload;

  if(m_firewallPolicyNameHasBeenSet)
  {
   payload.WithString("FirewallPolicyName", m_firewallPolicyName);

  }

  if(m_firewallPolicyArnHasBeenSet)
  {
   payload.WithString("FirewallPolicyArn", m_firewallPolicyArn);

  }

  if(m_firewallPolicyIdHasBeenSet)
  {
   payload.WithString("FirewallPolicyId", m_firewallPolicyId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_firewallPolicyStatusHasBeenSet)
  {
   payload.WithString("FirewallPolicyStatus", ResourceStatusMapper::GetNameForResourceStatus(m_firewallPolicyStatus));
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
