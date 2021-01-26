/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/GetConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetConfigurationRequest::GetConfigurationRequest() : 
    m_applicationHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_clientConfigurationVersionHasBeenSet(false)
{
}

Aws::String GetConfigurationRequest::SerializePayload() const
{
  return {};
}

void GetConfigurationRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_clientIdHasBeenSet)
    {
      ss << m_clientId;
      uri.AddQueryStringParameter("client_id", ss.str());
      ss.str("");
    }

    if(m_clientConfigurationVersionHasBeenSet)
    {
      ss << m_clientConfigurationVersion;
      uri.AddQueryStringParameter("client_configuration_version", ss.str());
      ss.str("");
    }

}



