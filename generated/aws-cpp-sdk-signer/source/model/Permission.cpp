/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/Permission.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace signer
{
namespace Model
{

Permission::Permission() : 
    m_actionHasBeenSet(false),
    m_principalHasBeenSet(false),
    m_statementIdHasBeenSet(false),
    m_profileVersionHasBeenSet(false)
{
}

Permission::Permission(JsonView jsonValue) : 
    m_actionHasBeenSet(false),
    m_principalHasBeenSet(false),
    m_statementIdHasBeenSet(false),
    m_profileVersionHasBeenSet(false)
{
  *this = jsonValue;
}

Permission& Permission::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = jsonValue.GetString("action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("principal"))
  {
    m_principal = jsonValue.GetString("principal");

    m_principalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statementId"))
  {
    m_statementId = jsonValue.GetString("statementId");

    m_statementIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("profileVersion"))
  {
    m_profileVersion = jsonValue.GetString("profileVersion");

    m_profileVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue Permission::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", m_action);

  }

  if(m_principalHasBeenSet)
  {
   payload.WithString("principal", m_principal);

  }

  if(m_statementIdHasBeenSet)
  {
   payload.WithString("statementId", m_statementId);

  }

  if(m_profileVersionHasBeenSet)
  {
   payload.WithString("profileVersion", m_profileVersion);

  }

  return payload;
}

} // namespace Model
} // namespace signer
} // namespace Aws
