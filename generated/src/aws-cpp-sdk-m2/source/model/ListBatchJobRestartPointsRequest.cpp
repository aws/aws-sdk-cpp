/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/ListBatchJobRestartPointsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MainframeModernization::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListBatchJobRestartPointsRequest::SerializePayload() const
{
  return {};
}

void ListBatchJobRestartPointsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_authSecretsManagerArnHasBeenSet)
    {
      ss << m_authSecretsManagerArn;
      uri.AddQueryStringParameter("authSecretsManagerArn", ss.str());
      ss.str("");
    }

}



