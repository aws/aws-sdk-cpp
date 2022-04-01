/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/SigV4Authorization.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

SigV4Authorization::SigV4Authorization() : 
    m_signingRegionHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

SigV4Authorization::SigV4Authorization(JsonView jsonValue) : 
    m_signingRegionHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

SigV4Authorization& SigV4Authorization::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("signingRegion"))
  {
    m_signingRegion = jsonValue.GetString("signingRegion");

    m_signingRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceName"))
  {
    m_serviceName = jsonValue.GetString("serviceName");

    m_serviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue SigV4Authorization::Jsonize() const
{
  JsonValue payload;

  if(m_signingRegionHasBeenSet)
  {
   payload.WithString("signingRegion", m_signingRegion);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
