﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/GetAssessmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAssessmentRequest::GetAssessmentRequest() : 
    m_assessmentIdHasBeenSet(false)
{
}

Aws::String GetAssessmentRequest::SerializePayload() const
{
  return {};
}




