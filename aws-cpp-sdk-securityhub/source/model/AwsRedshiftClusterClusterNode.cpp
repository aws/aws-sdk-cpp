/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRedshiftClusterClusterNode.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsRedshiftClusterClusterNode::AwsRedshiftClusterClusterNode() : 
    m_nodeRoleHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_publicIpAddressHasBeenSet(false)
{
}

AwsRedshiftClusterClusterNode::AwsRedshiftClusterClusterNode(JsonView jsonValue) : 
    m_nodeRoleHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_publicIpAddressHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRedshiftClusterClusterNode& AwsRedshiftClusterClusterNode::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NodeRole"))
  {
    m_nodeRole = jsonValue.GetString("NodeRole");

    m_nodeRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrivateIpAddress"))
  {
    m_privateIpAddress = jsonValue.GetString("PrivateIpAddress");

    m_privateIpAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PublicIpAddress"))
  {
    m_publicIpAddress = jsonValue.GetString("PublicIpAddress");

    m_publicIpAddressHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRedshiftClusterClusterNode::Jsonize() const
{
  JsonValue payload;

  if(m_nodeRoleHasBeenSet)
  {
   payload.WithString("NodeRole", m_nodeRole);

  }

  if(m_privateIpAddressHasBeenSet)
  {
   payload.WithString("PrivateIpAddress", m_privateIpAddress);

  }

  if(m_publicIpAddressHasBeenSet)
  {
   payload.WithString("PublicIpAddress", m_publicIpAddress);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
