/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/UpdateResourcePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

UpdateResourcePolicyRequest::UpdateResourcePolicyRequest() : 
    m_resourceArnHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_expectedRevisionIdHasBeenSet(false)
{
}

Aws::String UpdateResourcePolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyHasBeenSet)
  {
   payload.WithString("policy", m_policy);

  }

  return payload.View().WriteReadable();
}

void UpdateResourcePolicyRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_expectedRevisionIdHasBeenSet)
    {
      ss << m_expectedRevisionId;
      uri.AddQueryStringParameter("expectedRevisionId", ss.str());
      ss.str("");
    }

}



