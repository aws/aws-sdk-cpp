/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/KmsKey.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

KmsKey::KmsKey() : 
    m_kmsAliasArnHasBeenSet(false),
    m_kmsAliasNameHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false)
{
}

KmsKey::KmsKey(JsonView jsonValue) : 
    m_kmsAliasArnHasBeenSet(false),
    m_kmsAliasNameHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false)
{
  *this = jsonValue;
}

KmsKey& KmsKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("kmsAliasArn"))
  {
    m_kmsAliasArn = jsonValue.GetString("kmsAliasArn");

    m_kmsAliasArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsAliasName"))
  {
    m_kmsAliasName = jsonValue.GetString("kmsAliasName");

    m_kmsAliasNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");

    m_kmsKeyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue KmsKey::Jsonize() const
{
  JsonValue payload;

  if(m_kmsAliasArnHasBeenSet)
  {
   payload.WithString("kmsAliasArn", m_kmsAliasArn);

  }

  if(m_kmsAliasNameHasBeenSet)
  {
   payload.WithString("kmsAliasName", m_kmsAliasName);

  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("kmsKeyArn", m_kmsKeyArn);

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
