/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/personalize/model/UpdateCampaignRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateCampaignRequest::UpdateCampaignRequest() : 
    m_campaignArnHasBeenSet(false),
    m_solutionVersionArnHasBeenSet(false),
    m_minProvisionedTPS(0),
    m_minProvisionedTPSHasBeenSet(false)
{
}

Aws::String UpdateCampaignRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_campaignArnHasBeenSet)
  {
   payload.WithString("campaignArn", m_campaignArn);

  }

  if(m_solutionVersionArnHasBeenSet)
  {
   payload.WithString("solutionVersionArn", m_solutionVersionArn);

  }

  if(m_minProvisionedTPSHasBeenSet)
  {
   payload.WithInteger("minProvisionedTPS", m_minProvisionedTPS);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateCampaignRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.UpdateCampaign"));
  return headers;

}




