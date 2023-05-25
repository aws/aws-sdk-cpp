/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/DeleteResourcePolicyStatementRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteResourcePolicyStatementRequest::DeleteResourcePolicyStatementRequest() : 
    m_resourceArnHasBeenSet(false),
    m_statementIdHasBeenSet(false),
    m_expectedRevisionIdHasBeenSet(false)
{
}

Aws::String DeleteResourcePolicyStatementRequest::SerializePayload() const
{
  return {};
}

void DeleteResourcePolicyStatementRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_expectedRevisionIdHasBeenSet)
    {
      ss << m_expectedRevisionId;
      uri.AddQueryStringParameter("expectedRevisionId", ss.str());
      ss.str("");
    }

}



