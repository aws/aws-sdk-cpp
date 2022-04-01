/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-control-config/model/DeleteSafetyRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53RecoveryControlConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteSafetyRuleRequest::DeleteSafetyRuleRequest() : 
    m_safetyRuleArnHasBeenSet(false)
{
}

Aws::String DeleteSafetyRuleRequest::SerializePayload() const
{
  return {};
}




