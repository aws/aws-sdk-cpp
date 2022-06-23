/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/DeleteResourceSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53RecoveryReadiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteResourceSetRequest::DeleteResourceSetRequest() : 
    m_resourceSetNameHasBeenSet(false)
{
}

Aws::String DeleteResourceSetRequest::SerializePayload() const
{
  return {};
}




