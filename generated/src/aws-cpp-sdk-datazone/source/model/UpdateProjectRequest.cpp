/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/UpdateProjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateProjectRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_domainUnitIdHasBeenSet)
  {
   payload.WithString("domainUnitId", m_domainUnitId);

  }

  if(m_environmentDeploymentDetailsHasBeenSet)
  {
   payload.WithObject("environmentDeploymentDetails", m_environmentDeploymentDetails.Jsonize());

  }

  if(m_glossaryTermsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> glossaryTermsJsonList(m_glossaryTerms.size());
   for(unsigned glossaryTermsIndex = 0; glossaryTermsIndex < glossaryTermsJsonList.GetLength(); ++glossaryTermsIndex)
   {
     glossaryTermsJsonList[glossaryTermsIndex].AsString(m_glossaryTerms[glossaryTermsIndex]);
   }
   payload.WithArray("glossaryTerms", std::move(glossaryTermsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_projectProfileVersionHasBeenSet)
  {
   payload.WithString("projectProfileVersion", m_projectProfileVersion);

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




