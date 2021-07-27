/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/ListTagsForResourcesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53RecoveryReadiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListTagsForResourcesRequest::ListTagsForResourcesRequest() : 
    m_resourceArnHasBeenSet(false)
{
}

Aws::String ListTagsForResourcesRequest::SerializePayload() const
{
  return {};
}




