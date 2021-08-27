/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/PolicySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

PolicySummary::PolicySummary() : 
    m_policyArnHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_securityServiceType(SecurityServiceType::NOT_SET),
    m_securityServiceTypeHasBeenSet(false),
    m_remediationEnabled(false),
    m_remediationEnabledHasBeenSet(false)
{
}

PolicySummary::PolicySummary(JsonView jsonValue) : 
    m_policyArnHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_securityServiceType(SecurityServiceType::NOT_SET),
    m_securityServiceTypeHasBeenSet(false),
    m_remediationEnabled(false),
    m_remediationEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

PolicySummary& PolicySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PolicyArn"))
  {
    m_policyArn = jsonValue.GetString("PolicyArn");

    m_policyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyId"))
  {
    m_policyId = jsonValue.GetString("PolicyId");

    m_policyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyName"))
  {
    m_policyName = jsonValue.GetString("PolicyName");

    m_policyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityServiceType"))
  {
    m_securityServiceType = SecurityServiceTypeMapper::GetSecurityServiceTypeForName(jsonValue.GetString("SecurityServiceType"));

    m_securityServiceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RemediationEnabled"))
  {
    m_remediationEnabled = jsonValue.GetBool("RemediationEnabled");

    m_remediationEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue PolicySummary::Jsonize() const
{
  JsonValue payload;

  if(m_policyArnHasBeenSet)
  {
   payload.WithString("PolicyArn", m_policyArn);

  }

  if(m_policyIdHasBeenSet)
  {
   payload.WithString("PolicyId", m_policyId);

  }

  if(m_policyNameHasBeenSet)
  {
   payload.WithString("PolicyName", m_policyName);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_securityServiceTypeHasBeenSet)
  {
   payload.WithString("SecurityServiceType", SecurityServiceTypeMapper::GetNameForSecurityServiceType(m_securityServiceType));
  }

  if(m_remediationEnabledHasBeenSet)
  {
   payload.WithBool("RemediationEnabled", m_remediationEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
