/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/DatabaseSourceVPCConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

DatabaseSourceVPCConfiguration::DatabaseSourceVPCConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

DatabaseSourceVPCConfiguration& DatabaseSourceVPCConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VpcEndpointServiceName"))
  {
    m_vpcEndpointServiceName = jsonValue.GetString("VpcEndpointServiceName");
    m_vpcEndpointServiceNameHasBeenSet = true;
  }
  return *this;
}

JsonValue DatabaseSourceVPCConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_vpcEndpointServiceNameHasBeenSet)
  {
   payload.WithString("VpcEndpointServiceName", m_vpcEndpointServiceName);

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
