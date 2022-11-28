/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/DiscoverPollEndpointResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DiscoverPollEndpointResult::DiscoverPollEndpointResult()
{
}

DiscoverPollEndpointResult::DiscoverPollEndpointResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DiscoverPollEndpointResult& DiscoverPollEndpointResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("endpoint"))
  {
    m_endpoint = jsonValue.GetString("endpoint");

  }

  if(jsonValue.ValueExists("telemetryEndpoint"))
  {
    m_telemetryEndpoint = jsonValue.GetString("telemetryEndpoint");

  }

  if(jsonValue.ValueExists("serviceConnectEndpoint"))
  {
    m_serviceConnectEndpoint = jsonValue.GetString("serviceConnectEndpoint");

  }



  return *this;
}
