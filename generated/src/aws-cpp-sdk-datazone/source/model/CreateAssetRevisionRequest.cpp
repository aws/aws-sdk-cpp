/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/CreateAssetRevisionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAssetRevisionRequest::CreateAssetRevisionRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_descriptionHasBeenSet(false),
    m_domainIdentifierHasBeenSet(false),
    m_formsInputHasBeenSet(false),
    m_glossaryTermsHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_predictionConfigurationHasBeenSet(false),
    m_typeRevisionHasBeenSet(false)
{
}

Aws::String CreateAssetRevisionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_formsInputHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> formsInputJsonList(m_formsInput.size());
   for(unsigned formsInputIndex = 0; formsInputIndex < formsInputJsonList.GetLength(); ++formsInputIndex)
   {
     formsInputJsonList[formsInputIndex].AsObject(m_formsInput[formsInputIndex].Jsonize());
   }
   payload.WithArray("formsInput", std::move(formsInputJsonList));

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

  if(m_predictionConfigurationHasBeenSet)
  {
   payload.WithObject("predictionConfiguration", m_predictionConfiguration.Jsonize());

  }

  if(m_typeRevisionHasBeenSet)
  {
   payload.WithString("typeRevision", m_typeRevision);

  }

  return payload.View().WriteReadable();
}




