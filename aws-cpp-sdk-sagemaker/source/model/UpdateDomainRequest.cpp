/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateDomainRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDomainRequest::UpdateDomainRequest() : 
    m_domainIdHasBeenSet(false),
    m_defaultUserSettingsHasBeenSet(false),
    m_domainSettingsForUpdateHasBeenSet(false),
    m_defaultSpaceSettingsHasBeenSet(false),
    m_appSecurityGroupManagement(AppSecurityGroupManagement::NOT_SET),
    m_appSecurityGroupManagementHasBeenSet(false)
{
}

Aws::String UpdateDomainRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("DomainId", m_domainId);

  }

  if(m_defaultUserSettingsHasBeenSet)
  {
   payload.WithObject("DefaultUserSettings", m_defaultUserSettings.Jsonize());

  }

  if(m_domainSettingsForUpdateHasBeenSet)
  {
   payload.WithObject("DomainSettingsForUpdate", m_domainSettingsForUpdate.Jsonize());

  }

  if(m_defaultSpaceSettingsHasBeenSet)
  {
   payload.WithObject("DefaultSpaceSettings", m_defaultSpaceSettings.Jsonize());

  }

  if(m_appSecurityGroupManagementHasBeenSet)
  {
   payload.WithString("AppSecurityGroupManagement", AppSecurityGroupManagementMapper::GetNameForAppSecurityGroupManagement(m_appSecurityGroupManagement));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDomainRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateDomain"));
  return headers;

}




