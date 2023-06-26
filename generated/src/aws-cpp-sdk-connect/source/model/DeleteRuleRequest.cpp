/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DeleteRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteRuleRequest::DeleteRuleRequest() : 
    m_instanceIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false)
{
}

Aws::String DeleteRuleRequest::SerializePayload() const
{
  return {};
}




