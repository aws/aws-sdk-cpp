/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/RecoveryPointMember.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

RecoveryPointMember::RecoveryPointMember() : 
    m_recoveryPointArnHasBeenSet(false)
{
}

RecoveryPointMember::RecoveryPointMember(JsonView jsonValue) : 
    m_recoveryPointArnHasBeenSet(false)
{
  *this = jsonValue;
}

RecoveryPointMember& RecoveryPointMember::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RecoveryPointArn"))
  {
    m_recoveryPointArn = jsonValue.GetString("RecoveryPointArn");

    m_recoveryPointArnHasBeenSet = true;
  }

  return *this;
}

JsonValue RecoveryPointMember::Jsonize() const
{
  JsonValue payload;

  if(m_recoveryPointArnHasBeenSet)
  {
   payload.WithString("RecoveryPointArn", m_recoveryPointArn);

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
