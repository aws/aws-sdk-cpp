/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/NetworkInterface.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

NetworkInterface::NetworkInterface() : 
    m_subnetIdHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false)
{
}

NetworkInterface::NetworkInterface(JsonView jsonValue) : 
    m_subnetIdHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkInterface& NetworkInterface::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("subnetId"))
  {
    m_subnetId = jsonValue.GetString("subnetId");

    m_subnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkInterfaceId"))
  {
    m_networkInterfaceId = jsonValue.GetString("networkInterfaceId");

    m_networkInterfaceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkInterface::Jsonize() const
{
  JsonValue payload;

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("subnetId", m_subnetId);

  }

  if(m_networkInterfaceIdHasBeenSet)
  {
   payload.WithString("networkInterfaceId", m_networkInterfaceId);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
