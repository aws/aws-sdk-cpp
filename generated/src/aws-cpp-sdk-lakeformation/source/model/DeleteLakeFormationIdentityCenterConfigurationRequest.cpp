/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/DeleteLakeFormationIdentityCenterConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteLakeFormationIdentityCenterConfigurationRequest::DeleteLakeFormationIdentityCenterConfigurationRequest() : 
    m_catalogIdHasBeenSet(false)
{
}

Aws::String DeleteLakeFormationIdentityCenterConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  return payload.View().WriteReadable();
}




