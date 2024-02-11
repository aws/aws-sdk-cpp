/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ModifyConversionConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ModifyConversionConfigurationRequest::ModifyConversionConfigurationRequest() : 
    m_migrationProjectIdentifierHasBeenSet(false),
    m_conversionConfigurationHasBeenSet(false)
{
}

Aws::String ModifyConversionConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_migrationProjectIdentifierHasBeenSet)
  {
   payload.WithString("MigrationProjectIdentifier", m_migrationProjectIdentifier);

  }

  if(m_conversionConfigurationHasBeenSet)
  {
   payload.WithString("ConversionConfiguration", m_conversionConfiguration);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ModifyConversionConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.ModifyConversionConfiguration"));
  return headers;

}




