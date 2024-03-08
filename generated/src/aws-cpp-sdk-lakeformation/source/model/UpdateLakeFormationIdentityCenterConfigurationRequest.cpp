/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/UpdateLakeFormationIdentityCenterConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateLakeFormationIdentityCenterConfigurationRequest::UpdateLakeFormationIdentityCenterConfigurationRequest() : 
    m_catalogIdHasBeenSet(false),
    m_applicationStatus(ApplicationStatus::NOT_SET),
    m_applicationStatusHasBeenSet(false),
    m_externalFilteringHasBeenSet(false)
{
}

Aws::String UpdateLakeFormationIdentityCenterConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  if(m_applicationStatusHasBeenSet)
  {
   payload.WithString("ApplicationStatus", ApplicationStatusMapper::GetNameForApplicationStatus(m_applicationStatus));
  }

  if(m_externalFilteringHasBeenSet)
  {
   payload.WithObject("ExternalFiltering", m_externalFiltering.Jsonize());

  }

  return payload.View().WriteReadable();
}




