/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simspaceweaver/model/DeleteAppRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SimSpaceWeaver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteAppRequest::DeleteAppRequest() : 
    m_appHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_simulationHasBeenSet(false)
{
}

Aws::String DeleteAppRequest::SerializePayload() const
{
  return {};
}

void DeleteAppRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_appHasBeenSet)
    {
      ss << m_app;
      uri.AddQueryStringParameter("app", ss.str());
      ss.str("");
    }

    if(m_domainHasBeenSet)
    {
      ss << m_domain;
      uri.AddQueryStringParameter("domain", ss.str());
      ss.str("");
    }

    if(m_simulationHasBeenSet)
    {
      ss << m_simulation;
      uri.AddQueryStringParameter("simulation", ss.str());
      ss.str("");
    }

}



