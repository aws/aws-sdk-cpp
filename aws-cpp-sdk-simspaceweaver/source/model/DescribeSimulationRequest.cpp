/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simspaceweaver/model/DescribeSimulationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SimSpaceWeaver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeSimulationRequest::DescribeSimulationRequest() : 
    m_simulationHasBeenSet(false)
{
}

Aws::String DescribeSimulationRequest::SerializePayload() const
{
  return {};
}

void DescribeSimulationRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_simulationHasBeenSet)
    {
      ss << m_simulation;
      uri.AddQueryStringParameter("simulation", ss.str());
      ss.str("");
    }

}



