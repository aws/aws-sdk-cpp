/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/UpgradeAppliedSchemaRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpgradeAppliedSchemaRequest::UpgradeAppliedSchemaRequest() : 
    m_publishedSchemaArnHasBeenSet(false),
    m_directoryArnHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String UpgradeAppliedSchemaRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_publishedSchemaArnHasBeenSet)
  {
   payload.WithString("PublishedSchemaArn", m_publishedSchemaArn);

  }

  if(m_directoryArnHasBeenSet)
  {
   payload.WithString("DirectoryArn", m_directoryArn);

  }

  if(m_dryRunHasBeenSet)
  {
   payload.WithBool("DryRun", m_dryRun);

  }

  return payload.View().WriteReadable();
}




