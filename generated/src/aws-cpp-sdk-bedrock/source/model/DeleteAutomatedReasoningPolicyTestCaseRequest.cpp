/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/DeleteAutomatedReasoningPolicyTestCaseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DeleteAutomatedReasoningPolicyTestCaseRequest::SerializePayload() const
{
  return {};
}

void DeleteAutomatedReasoningPolicyTestCaseRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_lastUpdatedAtHasBeenSet)
    {
      ss << m_lastUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("updatedAt", ss.str());
      ss.str("");
    }

}



