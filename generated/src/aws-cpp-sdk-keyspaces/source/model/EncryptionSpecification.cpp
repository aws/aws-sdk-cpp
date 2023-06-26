/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/EncryptionSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Keyspaces
{
namespace Model
{

EncryptionSpecification::EncryptionSpecification() : 
    m_type(EncryptionType::NOT_SET),
    m_typeHasBeenSet(false),
    m_kmsKeyIdentifierHasBeenSet(false)
{
}

EncryptionSpecification::EncryptionSpecification(JsonView jsonValue) : 
    m_type(EncryptionType::NOT_SET),
    m_typeHasBeenSet(false),
    m_kmsKeyIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

EncryptionSpecification& EncryptionSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = EncryptionTypeMapper::GetEncryptionTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKeyIdentifier"))
  {
    m_kmsKeyIdentifier = jsonValue.GetString("kmsKeyIdentifier");

    m_kmsKeyIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue EncryptionSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", EncryptionTypeMapper::GetNameForEncryptionType(m_type));
  }

  if(m_kmsKeyIdentifierHasBeenSet)
  {
   payload.WithString("kmsKeyIdentifier", m_kmsKeyIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
