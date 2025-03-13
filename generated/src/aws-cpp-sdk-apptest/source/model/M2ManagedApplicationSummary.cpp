/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/M2ManagedApplicationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppTest
{
namespace Model
{

M2ManagedApplicationSummary::M2ManagedApplicationSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

M2ManagedApplicationSummary& M2ManagedApplicationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");
    m_applicationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("runtime"))
  {
    m_runtime = M2ManagedRuntimeMapper::GetM2ManagedRuntimeForName(jsonValue.GetString("runtime"));
    m_runtimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("listenerPort"))
  {
    m_listenerPort = jsonValue.GetInteger("listenerPort");
    m_listenerPortHasBeenSet = true;
  }
  return *this;
}

JsonValue M2ManagedApplicationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("applicationId", m_applicationId);

  }

  if(m_runtimeHasBeenSet)
  {
   payload.WithString("runtime", M2ManagedRuntimeMapper::GetNameForM2ManagedRuntime(m_runtime));
  }

  if(m_listenerPortHasBeenSet)
  {
   payload.WithInteger("listenerPort", m_listenerPort);

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
