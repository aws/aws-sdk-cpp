/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/DependencyCounts.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

DependencyCounts::DependencyCounts(JsonView jsonValue)
{
  *this = jsonValue;
}

DependencyCounts& DependencyCounts::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dependenciesResolved"))
  {
    m_dependenciesResolved = jsonValue.GetInteger("dependenciesResolved");
    m_dependenciesResolvedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dependenciesUnresolved"))
  {
    m_dependenciesUnresolved = jsonValue.GetInteger("dependenciesUnresolved");
    m_dependenciesUnresolvedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("consumersResolved"))
  {
    m_consumersResolved = jsonValue.GetInteger("consumersResolved");
    m_consumersResolvedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("consumersUnresolved"))
  {
    m_consumersUnresolved = jsonValue.GetInteger("consumersUnresolved");
    m_consumersUnresolvedHasBeenSet = true;
  }
  return *this;
}

JsonValue DependencyCounts::Jsonize() const
{
  JsonValue payload;

  if(m_dependenciesResolvedHasBeenSet)
  {
   payload.WithInteger("dependenciesResolved", m_dependenciesResolved);

  }

  if(m_dependenciesUnresolvedHasBeenSet)
  {
   payload.WithInteger("dependenciesUnresolved", m_dependenciesUnresolved);

  }

  if(m_consumersResolvedHasBeenSet)
  {
   payload.WithInteger("consumersResolved", m_consumersResolved);

  }

  if(m_consumersUnresolvedHasBeenSet)
  {
   payload.WithInteger("consumersUnresolved", m_consumersUnresolved);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
