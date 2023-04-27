/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/VpcConnectivity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

VpcConnectivity::VpcConnectivity() : 
    m_clientAuthenticationHasBeenSet(false)
{
}

VpcConnectivity::VpcConnectivity(JsonView jsonValue) : 
    m_clientAuthenticationHasBeenSet(false)
{
  *this = jsonValue;
}

VpcConnectivity& VpcConnectivity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clientAuthentication"))
  {
    m_clientAuthentication = jsonValue.GetObject("clientAuthentication");

    m_clientAuthenticationHasBeenSet = true;
  }

  return *this;
}

JsonValue VpcConnectivity::Jsonize() const
{
  JsonValue payload;

  if(m_clientAuthenticationHasBeenSet)
  {
   payload.WithObject("clientAuthentication", m_clientAuthentication.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
