/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRedshiftClusterEndpoint.h>
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

AwsRedshiftClusterEndpoint::AwsRedshiftClusterEndpoint() : 
    m_addressHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false)
{
}

AwsRedshiftClusterEndpoint::AwsRedshiftClusterEndpoint(JsonView jsonValue) : 
    m_addressHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRedshiftClusterEndpoint& AwsRedshiftClusterEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Address"))
  {
    m_address = jsonValue.GetString("Address");

    m_addressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");

    m_portHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRedshiftClusterEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_addressHasBeenSet)
  {
   payload.WithString("Address", m_address);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
