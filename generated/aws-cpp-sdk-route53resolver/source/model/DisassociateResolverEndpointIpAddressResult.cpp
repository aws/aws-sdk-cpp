/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/DisassociateResolverEndpointIpAddressResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DisassociateResolverEndpointIpAddressResult::DisassociateResolverEndpointIpAddressResult()
{
}

DisassociateResolverEndpointIpAddressResult::DisassociateResolverEndpointIpAddressResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DisassociateResolverEndpointIpAddressResult& DisassociateResolverEndpointIpAddressResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResolverEndpoint"))
  {
    m_resolverEndpoint = jsonValue.GetObject("ResolverEndpoint");

  }



  return *this;
}
