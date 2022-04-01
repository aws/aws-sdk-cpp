/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/StartAssessmentFrameworkShareRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartAssessmentFrameworkShareRequest::StartAssessmentFrameworkShareRequest() : 
    m_frameworkIdHasBeenSet(false),
    m_destinationAccountHasBeenSet(false),
    m_destinationRegionHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

Aws::String StartAssessmentFrameworkShareRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_destinationAccountHasBeenSet)
  {
   payload.WithString("destinationAccount", m_destinationAccount);

  }

  if(m_destinationRegionHasBeenSet)
  {
   payload.WithString("destinationRegion", m_destinationRegion);

  }

  if(m_commentHasBeenSet)
  {
   payload.WithString("comment", m_comment);

  }

  return payload.View().WriteReadable();
}




