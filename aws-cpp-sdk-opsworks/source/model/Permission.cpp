/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/Permission.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

Permission::Permission() : 
    m_stackIdHasBeenSet(false),
    m_iamUserArnHasBeenSet(false),
    m_allowSsh(false),
    m_allowSshHasBeenSet(false),
    m_allowSudo(false),
    m_allowSudoHasBeenSet(false),
    m_levelHasBeenSet(false)
{
}

Permission::Permission(JsonView jsonValue) : 
    m_stackIdHasBeenSet(false),
    m_iamUserArnHasBeenSet(false),
    m_allowSsh(false),
    m_allowSshHasBeenSet(false),
    m_allowSudo(false),
    m_allowSudoHasBeenSet(false),
    m_levelHasBeenSet(false)
{
  *this = jsonValue;
}

Permission& Permission::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StackId"))
  {
    m_stackId = jsonValue.GetString("StackId");

    m_stackIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IamUserArn"))
  {
    m_iamUserArn = jsonValue.GetString("IamUserArn");

    m_iamUserArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowSsh"))
  {
    m_allowSsh = jsonValue.GetBool("AllowSsh");

    m_allowSshHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowSudo"))
  {
    m_allowSudo = jsonValue.GetBool("AllowSudo");

    m_allowSudoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Level"))
  {
    m_level = jsonValue.GetString("Level");

    m_levelHasBeenSet = true;
  }

  return *this;
}

JsonValue Permission::Jsonize() const
{
  JsonValue payload;

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_iamUserArnHasBeenSet)
  {
   payload.WithString("IamUserArn", m_iamUserArn);

  }

  if(m_allowSshHasBeenSet)
  {
   payload.WithBool("AllowSsh", m_allowSsh);

  }

  if(m_allowSudoHasBeenSet)
  {
   payload.WithBool("AllowSudo", m_allowSudo);

  }

  if(m_levelHasBeenSet)
  {
   payload.WithString("Level", m_level);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
