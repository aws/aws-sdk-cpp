/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/DeleteCaseRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCases::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteCaseRuleRequest::DeleteCaseRuleRequest() : 
    m_caseRuleIdHasBeenSet(false),
    m_domainIdHasBeenSet(false)
{
}

Aws::String DeleteCaseRuleRequest::SerializePayload() const
{
  return {};
}




