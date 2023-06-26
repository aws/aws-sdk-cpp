/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ProvisioningHook.h>
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

ProvisioningHook::ProvisioningHook() : 
    m_payloadVersionHasBeenSet(false),
    m_targetArnHasBeenSet(false)
{
}

ProvisioningHook::ProvisioningHook(JsonView jsonValue) : 
    m_payloadVersionHasBeenSet(false),
    m_targetArnHasBeenSet(false)
{
  *this = jsonValue;
}

ProvisioningHook& ProvisioningHook::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("payloadVersion"))
  {
    m_payloadVersion = jsonValue.GetString("payloadVersion");

    m_payloadVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetArn"))
  {
    m_targetArn = jsonValue.GetString("targetArn");

    m_targetArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ProvisioningHook::Jsonize() const
{
  JsonValue payload;

  if(m_payloadVersionHasBeenSet)
  {
   payload.WithString("payloadVersion", m_payloadVersion);

  }

  if(m_targetArnHasBeenSet)
  {
   payload.WithString("targetArn", m_targetArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
