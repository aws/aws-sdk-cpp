/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/HybridAdministratorAccountUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

HybridAdministratorAccountUpdate::HybridAdministratorAccountUpdate(JsonView jsonValue)
{
  *this = jsonValue;
}

HybridAdministratorAccountUpdate& HybridAdministratorAccountUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");
    m_secretArnHasBeenSet = true;
  }
  return *this;
}

JsonValue HybridAdministratorAccountUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("SecretArn", m_secretArn);

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
