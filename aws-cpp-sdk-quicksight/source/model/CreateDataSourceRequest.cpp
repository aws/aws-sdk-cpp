/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CreateDataSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDataSourceRequest::CreateDataSourceRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(DataSourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_dataSourceParametersHasBeenSet(false),
    m_credentialsHasBeenSet(false),
    m_permissionsHasBeenSet(false),
    m_vpcConnectionPropertiesHasBeenSet(false),
    m_sslPropertiesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDataSourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dataSourceIdHasBeenSet)
  {
   payload.WithString("DataSourceId", m_dataSourceId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", DataSourceTypeMapper::GetNameForDataSourceType(m_type));
  }

  if(m_dataSourceParametersHasBeenSet)
  {
   payload.WithObject("DataSourceParameters", m_dataSourceParameters.Jsonize());

  }

  if(m_credentialsHasBeenSet)
  {
   payload.WithObject("Credentials", m_credentials.Jsonize());

  }

  if(m_permissionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> permissionsJsonList(m_permissions.size());
   for(unsigned permissionsIndex = 0; permissionsIndex < permissionsJsonList.GetLength(); ++permissionsIndex)
   {
     permissionsJsonList[permissionsIndex].AsObject(m_permissions[permissionsIndex].Jsonize());
   }
   payload.WithArray("Permissions", std::move(permissionsJsonList));

  }

  if(m_vpcConnectionPropertiesHasBeenSet)
  {
   payload.WithObject("VpcConnectionProperties", m_vpcConnectionProperties.Jsonize());

  }

  if(m_sslPropertiesHasBeenSet)
  {
   payload.WithObject("SslProperties", m_sslProperties.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}




