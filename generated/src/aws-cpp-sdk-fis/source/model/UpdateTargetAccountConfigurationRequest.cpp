/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/UpdateTargetAccountConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FIS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTargetAccountConfigurationRequest::UpdateTargetAccountConfigurationRequest() : 
    m_experimentTemplateIdHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String UpdateTargetAccountConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload.View().WriteReadable();
}




