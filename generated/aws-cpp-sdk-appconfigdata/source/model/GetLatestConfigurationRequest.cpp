/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfigdata/model/GetLatestConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppConfigData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetLatestConfigurationRequest::GetLatestConfigurationRequest() : 
    m_configurationTokenHasBeenSet(false)
{
}

Aws::String GetLatestConfigurationRequest::SerializePayload() const
{
  return {};
}

void GetLatestConfigurationRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_configurationTokenHasBeenSet)
    {
      ss << m_configurationToken;
      uri.AddQueryStringParameter("configuration_token", ss.str());
      ss.str("");
    }

}



