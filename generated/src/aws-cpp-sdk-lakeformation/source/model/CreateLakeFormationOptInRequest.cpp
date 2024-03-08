/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/CreateLakeFormationOptInRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLakeFormationOptInRequest::CreateLakeFormationOptInRequest() : 
    m_principalHasBeenSet(false),
    m_resourceHasBeenSet(false)
{
}

Aws::String CreateLakeFormationOptInRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_principalHasBeenSet)
  {
   payload.WithObject("Principal", m_principal.Jsonize());

  }

  if(m_resourceHasBeenSet)
  {
   payload.WithObject("Resource", m_resource.Jsonize());

  }

  return payload.View().WriteReadable();
}




