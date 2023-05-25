/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/AWSMigrationHub/model/AssociateCreatedArtifactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MigrationHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateCreatedArtifactRequest::AssociateCreatedArtifactRequest() : 
    m_progressUpdateStreamHasBeenSet(false),
    m_migrationTaskNameHasBeenSet(false),
    m_createdArtifactHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String AssociateCreatedArtifactRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_progressUpdateStreamHasBeenSet)
  {
   payload.WithString("ProgressUpdateStream", m_progressUpdateStream);

  }

  if(m_migrationTaskNameHasBeenSet)
  {
   payload.WithString("MigrationTaskName", m_migrationTaskName);

  }

  if(m_createdArtifactHasBeenSet)
  {
   payload.WithObject("CreatedArtifact", m_createdArtifact.Jsonize());

  }

  if(m_dryRunHasBeenSet)
  {
   payload.WithBool("DryRun", m_dryRun);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateCreatedArtifactRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSMigrationHub.AssociateCreatedArtifact"));
  return headers;

}




