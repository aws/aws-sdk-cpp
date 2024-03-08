/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RejectPredictionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

RejectPredictionsRequest::RejectPredictionsRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_domainIdentifierHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_rejectChoicesHasBeenSet(false),
    m_rejectRuleHasBeenSet(false),
    m_revisionHasBeenSet(false)
{
}

Aws::String RejectPredictionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_rejectChoicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rejectChoicesJsonList(m_rejectChoices.size());
   for(unsigned rejectChoicesIndex = 0; rejectChoicesIndex < rejectChoicesJsonList.GetLength(); ++rejectChoicesIndex)
   {
     rejectChoicesJsonList[rejectChoicesIndex].AsObject(m_rejectChoices[rejectChoicesIndex].Jsonize());
   }
   payload.WithArray("rejectChoices", std::move(rejectChoicesJsonList));

  }

  if(m_rejectRuleHasBeenSet)
  {
   payload.WithObject("rejectRule", m_rejectRule.Jsonize());

  }

  return payload.View().WriteReadable();
}

void RejectPredictionsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_revisionHasBeenSet)
    {
      ss << m_revision;
      uri.AddQueryStringParameter("revision", ss.str());
      ss.str("");
    }

}



