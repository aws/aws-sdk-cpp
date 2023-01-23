/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/QueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

QueryRequest::QueryRequest() : 
    m_indexIdHasBeenSet(false),
    m_queryTextHasBeenSet(false),
    m_attributeFilterHasBeenSet(false),
    m_facetsHasBeenSet(false),
    m_requestedDocumentAttributesHasBeenSet(false),
    m_queryResultTypeFilter(QueryResultType::NOT_SET),
    m_queryResultTypeFilterHasBeenSet(false),
    m_documentRelevanceOverrideConfigurationsHasBeenSet(false),
    m_pageNumber(0),
    m_pageNumberHasBeenSet(false),
    m_pageSize(0),
    m_pageSizeHasBeenSet(false),
    m_sortingConfigurationHasBeenSet(false),
    m_userContextHasBeenSet(false),
    m_visitorIdHasBeenSet(false),
    m_spellCorrectionConfigurationHasBeenSet(false)
{
}

Aws::String QueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_indexIdHasBeenSet)
  {
   payload.WithString("IndexId", m_indexId);

  }

  if(m_queryTextHasBeenSet)
  {
   payload.WithString("QueryText", m_queryText);

  }

  if(m_attributeFilterHasBeenSet)
  {
   payload.WithObject("AttributeFilter", m_attributeFilter.Jsonize());

  }

  if(m_facetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> facetsJsonList(m_facets.size());
   for(unsigned facetsIndex = 0; facetsIndex < facetsJsonList.GetLength(); ++facetsIndex)
   {
     facetsJsonList[facetsIndex].AsObject(m_facets[facetsIndex].Jsonize());
   }
   payload.WithArray("Facets", std::move(facetsJsonList));

  }

  if(m_requestedDocumentAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> requestedDocumentAttributesJsonList(m_requestedDocumentAttributes.size());
   for(unsigned requestedDocumentAttributesIndex = 0; requestedDocumentAttributesIndex < requestedDocumentAttributesJsonList.GetLength(); ++requestedDocumentAttributesIndex)
   {
     requestedDocumentAttributesJsonList[requestedDocumentAttributesIndex].AsString(m_requestedDocumentAttributes[requestedDocumentAttributesIndex]);
   }
   payload.WithArray("RequestedDocumentAttributes", std::move(requestedDocumentAttributesJsonList));

  }

  if(m_queryResultTypeFilterHasBeenSet)
  {
   payload.WithString("QueryResultTypeFilter", QueryResultTypeMapper::GetNameForQueryResultType(m_queryResultTypeFilter));
  }

  if(m_documentRelevanceOverrideConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> documentRelevanceOverrideConfigurationsJsonList(m_documentRelevanceOverrideConfigurations.size());
   for(unsigned documentRelevanceOverrideConfigurationsIndex = 0; documentRelevanceOverrideConfigurationsIndex < documentRelevanceOverrideConfigurationsJsonList.GetLength(); ++documentRelevanceOverrideConfigurationsIndex)
   {
     documentRelevanceOverrideConfigurationsJsonList[documentRelevanceOverrideConfigurationsIndex].AsObject(m_documentRelevanceOverrideConfigurations[documentRelevanceOverrideConfigurationsIndex].Jsonize());
   }
   payload.WithArray("DocumentRelevanceOverrideConfigurations", std::move(documentRelevanceOverrideConfigurationsJsonList));

  }

  if(m_pageNumberHasBeenSet)
  {
   payload.WithInteger("PageNumber", m_pageNumber);

  }

  if(m_pageSizeHasBeenSet)
  {
   payload.WithInteger("PageSize", m_pageSize);

  }

  if(m_sortingConfigurationHasBeenSet)
  {
   payload.WithObject("SortingConfiguration", m_sortingConfiguration.Jsonize());

  }

  if(m_userContextHasBeenSet)
  {
   payload.WithObject("UserContext", m_userContext.Jsonize());

  }

  if(m_visitorIdHasBeenSet)
  {
   payload.WithString("VisitorId", m_visitorId);

  }

  if(m_spellCorrectionConfigurationHasBeenSet)
  {
   payload.WithObject("SpellCorrectionConfiguration", m_spellCorrectionConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection QueryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSKendraFrontendService.Query"));
  return headers;

}




