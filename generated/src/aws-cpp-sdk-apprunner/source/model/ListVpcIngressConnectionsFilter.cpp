/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/ListVpcIngressConnectionsFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppRunner
{
namespace Model
{

ListVpcIngressConnectionsFilter::ListVpcIngressConnectionsFilter() : 
    m_serviceArnHasBeenSet(false),
    m_vpcEndpointIdHasBeenSet(false)
{
}

ListVpcIngressConnectionsFilter::ListVpcIngressConnectionsFilter(JsonView jsonValue) : 
    m_serviceArnHasBeenSet(false),
    m_vpcEndpointIdHasBeenSet(false)
{
  *this = jsonValue;
}

ListVpcIngressConnectionsFilter& ListVpcIngressConnectionsFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServiceArn"))
  {
    m_serviceArn = jsonValue.GetString("ServiceArn");

    m_serviceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcEndpointId"))
  {
    m_vpcEndpointId = jsonValue.GetString("VpcEndpointId");

    m_vpcEndpointIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ListVpcIngressConnectionsFilter::Jsonize() const
{
  JsonValue payload;

  if(m_serviceArnHasBeenSet)
  {
   payload.WithString("ServiceArn", m_serviceArn);

  }

  if(m_vpcEndpointIdHasBeenSet)
  {
   payload.WithString("VpcEndpointId", m_vpcEndpointId);

  }

  return payload;
}

} // namespace Model
} // namespace AppRunner
} // namespace Aws
