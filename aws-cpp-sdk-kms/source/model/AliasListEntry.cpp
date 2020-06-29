/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/AliasListEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KMS
{
namespace Model
{

AliasListEntry::AliasListEntry() : 
    m_aliasNameHasBeenSet(false),
    m_aliasArnHasBeenSet(false),
    m_targetKeyIdHasBeenSet(false)
{
}

AliasListEntry::AliasListEntry(JsonView jsonValue) : 
    m_aliasNameHasBeenSet(false),
    m_aliasArnHasBeenSet(false),
    m_targetKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

AliasListEntry& AliasListEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AliasName"))
  {
    m_aliasName = jsonValue.GetString("AliasName");

    m_aliasNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AliasArn"))
  {
    m_aliasArn = jsonValue.GetString("AliasArn");

    m_aliasArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetKeyId"))
  {
    m_targetKeyId = jsonValue.GetString("TargetKeyId");

    m_targetKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AliasListEntry::Jsonize() const
{
  JsonValue payload;

  if(m_aliasNameHasBeenSet)
  {
   payload.WithString("AliasName", m_aliasName);

  }

  if(m_aliasArnHasBeenSet)
  {
   payload.WithString("AliasArn", m_aliasArn);

  }

  if(m_targetKeyIdHasBeenSet)
  {
   payload.WithString("TargetKeyId", m_targetKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace KMS
} // namespace Aws
