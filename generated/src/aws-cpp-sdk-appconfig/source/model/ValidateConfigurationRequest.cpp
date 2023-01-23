/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/ValidateConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ValidateConfigurationRequest::ValidateConfigurationRequest() : 
    m_applicationIdHasBeenSet(false),
    m_configurationProfileIdHasBeenSet(false),
    m_configurationVersionHasBeenSet(false)
{
}

Aws::String ValidateConfigurationRequest::SerializePayload() const
{
  return {};
}

void ValidateConfigurationRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_configurationVersionHasBeenSet)
    {
      ss << m_configurationVersion;
      uri.AddQueryStringParameter("configuration_version", ss.str());
      ss.str("");
    }

}



