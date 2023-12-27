/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/CreateAssetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAssetRequest::CreateAssetRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_descriptionHasBeenSet(false),
    m_domainIdentifierHasBeenSet(false),
    m_externalIdentifierHasBeenSet(false),
    m_formsInputHasBeenSet(false),
    m_glossaryTermsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_owningProjectIdentifierHasBeenSet(false),
    m_predictionConfigurationHasBeenSet(false),
    m_typeIdentifierHasBeenSet(false),
    m_typeRevisionHasBeenSet(false)
{
}

Aws::String CreateAssetRequest::SerializePayload() const
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

  if(m_externalIdentifierHasBeenSet)
  {
   payload.WithString("externalIdentifier", m_externalIdentifier);

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

  if(m_owningProjectIdentifierHasBeenSet)
  {
   payload.WithString("owningProjectIdentifier", m_owningProjectIdentifier);

  }

  if(m_predictionConfigurationHasBeenSet)
  {
   payload.WithObject("predictionConfiguration", m_predictionConfiguration.Jsonize());

  }

  if(m_typeIdentifierHasBeenSet)
  {
   payload.WithString("typeIdentifier", m_typeIdentifier);

  }

  if(m_typeRevisionHasBeenSet)
  {
   payload.WithString("typeRevision", m_typeRevision);

  }

  return payload.View().WriteReadable();
}




