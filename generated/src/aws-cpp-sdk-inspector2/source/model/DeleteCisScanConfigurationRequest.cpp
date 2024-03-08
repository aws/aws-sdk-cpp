/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/DeleteCisScanConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteCisScanConfigurationRequest::DeleteCisScanConfigurationRequest() : 
    m_scanConfigurationArnHasBeenSet(false)
{
}

Aws::String DeleteCisScanConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_scanConfigurationArnHasBeenSet)
  {
   payload.WithString("scanConfigurationArn", m_scanConfigurationArn);

  }

  return payload.View().WriteReadable();
}




