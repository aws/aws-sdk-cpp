/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/ListExperimentTargetAccountConfigurationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::FIS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListExperimentTargetAccountConfigurationsRequest::ListExperimentTargetAccountConfigurationsRequest() : 
    m_experimentIdHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListExperimentTargetAccountConfigurationsRequest::SerializePayload() const
{
  return {};
}

void ListExperimentTargetAccountConfigurationsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

}



