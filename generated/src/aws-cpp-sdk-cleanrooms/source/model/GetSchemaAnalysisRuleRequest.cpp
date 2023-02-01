/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/GetSchemaAnalysisRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSchemaAnalysisRuleRequest::GetSchemaAnalysisRuleRequest() : 
    m_collaborationIdentifierHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(AnalysisRuleType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String GetSchemaAnalysisRuleRequest::SerializePayload() const
{
  return {};
}




