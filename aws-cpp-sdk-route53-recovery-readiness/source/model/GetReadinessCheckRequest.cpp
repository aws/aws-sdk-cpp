/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/GetReadinessCheckRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53RecoveryReadiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetReadinessCheckRequest::GetReadinessCheckRequest() : 
    m_readinessCheckNameHasBeenSet(false)
{
}

Aws::String GetReadinessCheckRequest::SerializePayload() const
{
  return {};
}




