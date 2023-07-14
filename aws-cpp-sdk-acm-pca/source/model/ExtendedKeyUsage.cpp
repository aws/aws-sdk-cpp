/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/ExtendedKeyUsage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

ExtendedKeyUsage::ExtendedKeyUsage() : 
    m_extendedKeyUsageType(ExtendedKeyUsageType::NOT_SET),
    m_extendedKeyUsageTypeHasBeenSet(false),
    m_extendedKeyUsageObjectIdentifierHasBeenSet(false)
{
}

ExtendedKeyUsage::ExtendedKeyUsage(JsonView jsonValue) : 
    m_extendedKeyUsageType(ExtendedKeyUsageType::NOT_SET),
    m_extendedKeyUsageTypeHasBeenSet(false),
    m_extendedKeyUsageObjectIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

ExtendedKeyUsage& ExtendedKeyUsage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExtendedKeyUsageType"))
  {
    m_extendedKeyUsageType = ExtendedKeyUsageTypeMapper::GetExtendedKeyUsageTypeForName(jsonValue.GetString("ExtendedKeyUsageType"));

    m_extendedKeyUsageTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExtendedKeyUsageObjectIdentifier"))
  {
    m_extendedKeyUsageObjectIdentifier = jsonValue.GetString("ExtendedKeyUsageObjectIdentifier");

    m_extendedKeyUsageObjectIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue ExtendedKeyUsage::Jsonize() const
{
  JsonValue payload;

  if(m_extendedKeyUsageTypeHasBeenSet)
  {
   payload.WithString("ExtendedKeyUsageType", ExtendedKeyUsageTypeMapper::GetNameForExtendedKeyUsageType(m_extendedKeyUsageType));
  }

  if(m_extendedKeyUsageObjectIdentifierHasBeenSet)
  {
   payload.WithString("ExtendedKeyUsageObjectIdentifier", m_extendedKeyUsageObjectIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
