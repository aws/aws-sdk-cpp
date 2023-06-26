/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ConnectivityInfo.h>
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

ConnectivityInfo::ConnectivityInfo() : 
    m_publicAccessHasBeenSet(false),
    m_vpcConnectivityHasBeenSet(false)
{
}

ConnectivityInfo::ConnectivityInfo(JsonView jsonValue) : 
    m_publicAccessHasBeenSet(false),
    m_vpcConnectivityHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectivityInfo& ConnectivityInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("publicAccess"))
  {
    m_publicAccess = jsonValue.GetObject("publicAccess");

    m_publicAccessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcConnectivity"))
  {
    m_vpcConnectivity = jsonValue.GetObject("vpcConnectivity");

    m_vpcConnectivityHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectivityInfo::Jsonize() const
{
  JsonValue payload;

  if(m_publicAccessHasBeenSet)
  {
   payload.WithObject("publicAccess", m_publicAccess.Jsonize());

  }

  if(m_vpcConnectivityHasBeenSet)
  {
   payload.WithObject("vpcConnectivity", m_vpcConnectivity.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
