/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GetGuardrailRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetGuardrailRequest::GetGuardrailRequest() : 
    m_guardrailIdentifierHasBeenSet(false),
    m_guardrailVersionHasBeenSet(false)
{
}

Aws::String GetGuardrailRequest::SerializePayload() const
{
  return {};
}

void GetGuardrailRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_guardrailVersionHasBeenSet)
    {
      ss << m_guardrailVersion;
      uri.AddQueryStringParameter("guardrailVersion", ss.str());
      ss.str("");
    }

}



