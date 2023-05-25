/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/UpdateDistributionConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDistributionConfigurationRequest::UpdateDistributionConfigurationRequest() : 
    m_distributionConfigurationArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_distributionsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String UpdateDistributionConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_distributionConfigurationArnHasBeenSet)
  {
   payload.WithString("distributionConfigurationArn", m_distributionConfigurationArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_distributionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> distributionsJsonList(m_distributions.size());
   for(unsigned distributionsIndex = 0; distributionsIndex < distributionsJsonList.GetLength(); ++distributionsIndex)
   {
     distributionsJsonList[distributionsIndex].AsObject(m_distributions[distributionsIndex].Jsonize());
   }
   payload.WithArray("distributions", std::move(distributionsJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




