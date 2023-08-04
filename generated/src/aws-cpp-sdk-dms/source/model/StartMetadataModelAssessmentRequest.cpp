/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/StartMetadataModelAssessmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartMetadataModelAssessmentRequest::StartMetadataModelAssessmentRequest() : 
    m_migrationProjectIdentifierHasBeenSet(false),
    m_selectionRulesHasBeenSet(false)
{
}

Aws::String StartMetadataModelAssessmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_migrationProjectIdentifierHasBeenSet)
  {
   payload.WithString("MigrationProjectIdentifier", m_migrationProjectIdentifier);

  }

  if(m_selectionRulesHasBeenSet)
  {
   payload.WithString("SelectionRules", m_selectionRules);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartMetadataModelAssessmentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.StartMetadataModelAssessment"));
  return headers;

}




