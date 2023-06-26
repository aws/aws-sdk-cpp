/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/DeleteAssessmentFrameworkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAssessmentFrameworkRequest::DeleteAssessmentFrameworkRequest() : 
    m_frameworkIdHasBeenSet(false)
{
}

Aws::String DeleteAssessmentFrameworkRequest::SerializePayload() const
{
  return {};
}




