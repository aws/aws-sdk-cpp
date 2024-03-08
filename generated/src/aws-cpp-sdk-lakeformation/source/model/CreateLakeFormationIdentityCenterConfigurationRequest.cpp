/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/CreateLakeFormationIdentityCenterConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLakeFormationIdentityCenterConfigurationRequest::CreateLakeFormationIdentityCenterConfigurationRequest() : 
    m_catalogIdHasBeenSet(false),
    m_instanceArnHasBeenSet(false),
    m_externalFilteringHasBeenSet(false)
{
}

Aws::String CreateLakeFormationIdentityCenterConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  if(m_instanceArnHasBeenSet)
  {
   payload.WithString("InstanceArn", m_instanceArn);

  }

  if(m_externalFilteringHasBeenSet)
  {
   payload.WithObject("ExternalFiltering", m_externalFiltering.Jsonize());

  }

  return payload.View().WriteReadable();
}




