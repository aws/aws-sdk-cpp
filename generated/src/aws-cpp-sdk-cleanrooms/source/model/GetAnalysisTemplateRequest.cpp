/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/GetAnalysisTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAnalysisTemplateRequest::GetAnalysisTemplateRequest() : 
    m_membershipIdentifierHasBeenSet(false),
    m_analysisTemplateIdentifierHasBeenSet(false)
{
}

Aws::String GetAnalysisTemplateRequest::SerializePayload() const
{
  return {};
}




