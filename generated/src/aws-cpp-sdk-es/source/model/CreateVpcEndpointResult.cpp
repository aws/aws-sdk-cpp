/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/CreateVpcEndpointResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateVpcEndpointResult::CreateVpcEndpointResult()
{
}

CreateVpcEndpointResult::CreateVpcEndpointResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateVpcEndpointResult& CreateVpcEndpointResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("VpcEndpoint"))
  {
    m_vpcEndpoint = jsonValue.GetObject("VpcEndpoint");

  }



  return *this;
}
