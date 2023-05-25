/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/GetEvidenceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetEvidenceRequest::GetEvidenceRequest() : 
    m_assessmentIdHasBeenSet(false),
    m_controlSetIdHasBeenSet(false),
    m_evidenceFolderIdHasBeenSet(false),
    m_evidenceIdHasBeenSet(false)
{
}

Aws::String GetEvidenceRequest::SerializePayload() const
{
  return {};
}




