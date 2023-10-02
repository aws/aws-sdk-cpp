/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ListFoundationModelsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListFoundationModelsRequest::ListFoundationModelsRequest() : 
    m_byProviderHasBeenSet(false),
    m_byCustomizationType(ModelCustomization::NOT_SET),
    m_byCustomizationTypeHasBeenSet(false),
    m_byOutputModality(ModelModality::NOT_SET),
    m_byOutputModalityHasBeenSet(false),
    m_byInferenceType(InferenceType::NOT_SET),
    m_byInferenceTypeHasBeenSet(false)
{
}

Aws::String ListFoundationModelsRequest::SerializePayload() const
{
  return {};
}

void ListFoundationModelsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_byProviderHasBeenSet)
    {
      ss << m_byProvider;
      uri.AddQueryStringParameter("byProvider", ss.str());
      ss.str("");
    }

    if(m_byCustomizationTypeHasBeenSet)
    {
      ss << ModelCustomizationMapper::GetNameForModelCustomization(m_byCustomizationType);
      uri.AddQueryStringParameter("byCustomizationType", ss.str());
      ss.str("");
    }

    if(m_byOutputModalityHasBeenSet)
    {
      ss << ModelModalityMapper::GetNameForModelModality(m_byOutputModality);
      uri.AddQueryStringParameter("byOutputModality", ss.str());
      ss.str("");
    }

    if(m_byInferenceTypeHasBeenSet)
    {
      ss << InferenceTypeMapper::GetNameForInferenceType(m_byInferenceType);
      uri.AddQueryStringParameter("byInferenceType", ss.str());
      ss.str("");
    }

}



