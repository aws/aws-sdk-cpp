/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
