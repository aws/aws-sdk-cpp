/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AcceptPredictionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

AcceptPredictionsRequest::AcceptPredictionsRequest() : 
    m_acceptChoicesHasBeenSet(false),
    m_acceptRuleHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_domainIdentifierHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_revisionHasBeenSet(false)
{
}

Aws::String AcceptPredictionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_acceptChoicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> acceptChoicesJsonList(m_acceptChoices.size());
   for(unsigned acceptChoicesIndex = 0; acceptChoicesIndex < acceptChoicesJsonList.GetLength(); ++acceptChoicesIndex)
   {
     acceptChoicesJsonList[acceptChoicesIndex].AsObject(m_acceptChoices[acceptChoicesIndex].Jsonize());
   }
   payload.WithArray("acceptChoices", std::move(acceptChoicesJsonList));

  }

  if(m_acceptRuleHasBeenSet)
  {
   payload.WithObject("acceptRule", m_acceptRule.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}

void AcceptPredictionsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_revisionHasBeenSet)
    {
      ss << m_revision;
      uri.AddQueryStringParameter("revision", ss.str());
      ss.str("");
    }

}



