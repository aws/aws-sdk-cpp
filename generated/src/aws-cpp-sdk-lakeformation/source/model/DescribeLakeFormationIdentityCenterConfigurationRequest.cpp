/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/DescribeLakeFormationIdentityCenterConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeLakeFormationIdentityCenterConfigurationRequest::DescribeLakeFormationIdentityCenterConfigurationRequest() : 
    m_catalogIdHasBeenSet(false)
{
}

Aws::String DescribeLakeFormationIdentityCenterConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  return payload.View().WriteReadable();
}




