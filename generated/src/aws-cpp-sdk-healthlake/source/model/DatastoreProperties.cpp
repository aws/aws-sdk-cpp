/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/healthlake/model/DatastoreProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace HealthLake
{
namespace Model
{

DatastoreProperties::DatastoreProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

DatastoreProperties& DatastoreProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatastoreId"))
  {
    m_datastoreId = jsonValue.GetString("DatastoreId");
    m_datastoreIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatastoreArn"))
  {
    m_datastoreArn = jsonValue.GetString("DatastoreArn");
    m_datastoreArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatastoreName"))
  {
    m_datastoreName = jsonValue.GetString("DatastoreName");
    m_datastoreNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatastoreStatus"))
  {
    m_datastoreStatus = DatastoreStatusMapper::GetDatastoreStatusForName(jsonValue.GetString("DatastoreStatus"));
    m_datastoreStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatastoreTypeVersion"))
  {
    m_datastoreTypeVersion = FHIRVersionMapper::GetFHIRVersionForName(jsonValue.GetString("DatastoreTypeVersion"));
    m_datastoreTypeVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatastoreEndpoint"))
  {
    m_datastoreEndpoint = jsonValue.GetString("DatastoreEndpoint");
    m_datastoreEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SseConfiguration"))
  {
    m_sseConfiguration = jsonValue.GetObject("SseConfiguration");
    m_sseConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PreloadDataConfig"))
  {
    m_preloadDataConfig = jsonValue.GetObject("PreloadDataConfig");
    m_preloadDataConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IdentityProviderConfiguration"))
  {
    m_identityProviderConfiguration = jsonValue.GetObject("IdentityProviderConfiguration");
    m_identityProviderConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorCause"))
  {
    m_errorCause = jsonValue.GetObject("ErrorCause");
    m_errorCauseHasBeenSet = true;
  }
  return *this;
}

JsonValue DatastoreProperties::Jsonize() const
{
  JsonValue payload;

  if(m_datastoreIdHasBeenSet)
  {
   payload.WithString("DatastoreId", m_datastoreId);

  }

  if(m_datastoreArnHasBeenSet)
  {
   payload.WithString("DatastoreArn", m_datastoreArn);

  }

  if(m_datastoreNameHasBeenSet)
  {
   payload.WithString("DatastoreName", m_datastoreName);

  }

  if(m_datastoreStatusHasBeenSet)
  {
   payload.WithString("DatastoreStatus", DatastoreStatusMapper::GetNameForDatastoreStatus(m_datastoreStatus));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_datastoreTypeVersionHasBeenSet)
  {
   payload.WithString("DatastoreTypeVersion", FHIRVersionMapper::GetNameForFHIRVersion(m_datastoreTypeVersion));
  }

  if(m_datastoreEndpointHasBeenSet)
  {
   payload.WithString("DatastoreEndpoint", m_datastoreEndpoint);

  }

  if(m_sseConfigurationHasBeenSet)
  {
   payload.WithObject("SseConfiguration", m_sseConfiguration.Jsonize());

  }

  if(m_preloadDataConfigHasBeenSet)
  {
   payload.WithObject("PreloadDataConfig", m_preloadDataConfig.Jsonize());

  }

  if(m_identityProviderConfigurationHasBeenSet)
  {
   payload.WithObject("IdentityProviderConfiguration", m_identityProviderConfiguration.Jsonize());

  }

  if(m_errorCauseHasBeenSet)
  {
   payload.WithObject("ErrorCause", m_errorCause.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace HealthLake
} // namespace Aws
