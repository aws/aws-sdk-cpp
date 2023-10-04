/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/CreateEnvironmentProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEnvironmentProfileRequest::CreateEnvironmentProfileRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_awsAccountRegionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_domainIdentifierHasBeenSet(false),
    m_environmentBlueprintIdentifierHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_projectIdentifierHasBeenSet(false),
    m_userParametersHasBeenSet(false)
{
}

Aws::String CreateEnvironmentProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_awsAccountIdHasBeenSet)
  {
   payload.WithString("awsAccountId", m_awsAccountId);

  }

  if(m_awsAccountRegionHasBeenSet)
  {
   payload.WithString("awsAccountRegion", m_awsAccountRegion);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_environmentBlueprintIdentifierHasBeenSet)
  {
   payload.WithString("environmentBlueprintIdentifier", m_environmentBlueprintIdentifier);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_projectIdentifierHasBeenSet)
  {
   payload.WithString("projectIdentifier", m_projectIdentifier);

  }

  if(m_userParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userParametersJsonList(m_userParameters.size());
   for(unsigned userParametersIndex = 0; userParametersIndex < userParametersJsonList.GetLength(); ++userParametersIndex)
   {
     userParametersJsonList[userParametersIndex].AsObject(m_userParameters[userParametersIndex].Jsonize());
   }
   payload.WithArray("userParameters", std::move(userParametersJsonList));

  }

  return payload.View().WriteReadable();
}




