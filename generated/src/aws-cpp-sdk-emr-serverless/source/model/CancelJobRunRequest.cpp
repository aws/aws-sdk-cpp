/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/CancelJobRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EMRServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String CancelJobRunRequest::SerializePayload() const
{
  return {};
}

void CancelJobRunRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_shutdownGracePeriodInSecondsHasBeenSet)
    {
      ss << m_shutdownGracePeriodInSeconds;
      uri.AddQueryStringParameter("shutdownGracePeriodInSeconds", ss.str());
      ss.str("");
    }

}



