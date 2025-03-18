/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/StartInstanceOnboardingJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCampaignsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartInstanceOnboardingJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_encryptionConfigHasBeenSet)
  {
   payload.WithObject("encryptionConfig", m_encryptionConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




