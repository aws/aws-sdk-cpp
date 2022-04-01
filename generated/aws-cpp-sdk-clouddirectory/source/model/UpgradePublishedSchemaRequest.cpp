/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/UpgradePublishedSchemaRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpgradePublishedSchemaRequest::UpgradePublishedSchemaRequest() : 
    m_developmentSchemaArnHasBeenSet(false),
    m_publishedSchemaArnHasBeenSet(false),
    m_minorVersionHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String UpgradePublishedSchemaRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_developmentSchemaArnHasBeenSet)
  {
   payload.WithString("DevelopmentSchemaArn", m_developmentSchemaArn);

  }

  if(m_publishedSchemaArnHasBeenSet)
  {
   payload.WithString("PublishedSchemaArn", m_publishedSchemaArn);

  }

  if(m_minorVersionHasBeenSet)
  {
   payload.WithString("MinorVersion", m_minorVersion);

  }

  if(m_dryRunHasBeenSet)
  {
   payload.WithBool("DryRun", m_dryRun);

  }

  return payload.View().WriteReadable();
}




