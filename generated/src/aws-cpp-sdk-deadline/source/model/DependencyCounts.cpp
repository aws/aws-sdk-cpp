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

DependencyCounts::DependencyCounts() : 
    m_consumersResolved(0),
    m_consumersResolvedHasBeenSet(false),
    m_consumersUnresolved(0),
    m_consumersUnresolvedHasBeenSet(false),
    m_dependenciesResolved(0),
    m_dependenciesResolvedHasBeenSet(false),
    m_dependenciesUnresolved(0),
    m_dependenciesUnresolvedHasBeenSet(false)
{
}

DependencyCounts::DependencyCounts(JsonView jsonValue) : 
    m_consumersResolved(0),
    m_consumersResolvedHasBeenSet(false),
    m_consumersUnresolved(0),
    m_consumersUnresolvedHasBeenSet(false),
    m_dependenciesResolved(0),
    m_dependenciesResolvedHasBeenSet(false),
    m_dependenciesUnresolved(0),
    m_dependenciesUnresolvedHasBeenSet(false)
{
  *this = jsonValue;
}

DependencyCounts& DependencyCounts::operator =(JsonView jsonValue)
{
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

  return *this;
}

JsonValue DependencyCounts::Jsonize() const
{
  JsonValue payload;

  if(m_consumersResolvedHasBeenSet)
  {
   payload.WithInteger("consumersResolved", m_consumersResolved);

  }

  if(m_consumersUnresolvedHasBeenSet)
  {
   payload.WithInteger("consumersUnresolved", m_consumersUnresolved);

  }

  if(m_dependenciesResolvedHasBeenSet)
  {
   payload.WithInteger("dependenciesResolved", m_dependenciesResolved);

  }

  if(m_dependenciesUnresolvedHasBeenSet)
  {
   payload.WithInteger("dependenciesUnresolved", m_dependenciesUnresolved);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
