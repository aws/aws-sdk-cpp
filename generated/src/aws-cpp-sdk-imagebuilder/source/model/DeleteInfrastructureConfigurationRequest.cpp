/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/DeleteInfrastructureConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteInfrastructureConfigurationRequest::DeleteInfrastructureConfigurationRequest() : 
    m_infrastructureConfigurationArnHasBeenSet(false)
{
}

Aws::String DeleteInfrastructureConfigurationRequest::SerializePayload() const
{
  return {};
}

void DeleteInfrastructureConfigurationRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_infrastructureConfigurationArnHasBeenSet)
    {
      ss << m_infrastructureConfigurationArn;
      uri.AddQueryStringParameter("infrastructureConfigurationArn", ss.str());
      ss.str("");
    }

}



