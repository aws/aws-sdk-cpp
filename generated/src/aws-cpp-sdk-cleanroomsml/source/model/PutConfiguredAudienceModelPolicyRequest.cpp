/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/PutConfiguredAudienceModelPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRoomsML::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutConfiguredAudienceModelPolicyRequest::PutConfiguredAudienceModelPolicyRequest() : 
    m_configuredAudienceModelArnHasBeenSet(false),
    m_configuredAudienceModelPolicyHasBeenSet(false),
    m_policyExistenceCondition(PolicyExistenceCondition::NOT_SET),
    m_policyExistenceConditionHasBeenSet(false),
    m_previousPolicyHashHasBeenSet(false)
{
}

Aws::String PutConfiguredAudienceModelPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configuredAudienceModelPolicyHasBeenSet)
  {
   payload.WithString("configuredAudienceModelPolicy", m_configuredAudienceModelPolicy);

  }

  if(m_policyExistenceConditionHasBeenSet)
  {
   payload.WithString("policyExistenceCondition", PolicyExistenceConditionMapper::GetNameForPolicyExistenceCondition(m_policyExistenceCondition));
  }

  if(m_previousPolicyHashHasBeenSet)
  {
   payload.WithString("previousPolicyHash", m_previousPolicyHash);

  }

  return payload.View().WriteReadable();
}




