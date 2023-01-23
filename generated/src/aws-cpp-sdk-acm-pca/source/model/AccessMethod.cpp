/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/AccessMethod.h>
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

AccessMethod::AccessMethod() : 
    m_customObjectIdentifierHasBeenSet(false),
    m_accessMethodType(AccessMethodType::NOT_SET),
    m_accessMethodTypeHasBeenSet(false)
{
}

AccessMethod::AccessMethod(JsonView jsonValue) : 
    m_customObjectIdentifierHasBeenSet(false),
    m_accessMethodType(AccessMethodType::NOT_SET),
    m_accessMethodTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AccessMethod& AccessMethod::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustomObjectIdentifier"))
  {
    m_customObjectIdentifier = jsonValue.GetString("CustomObjectIdentifier");

    m_customObjectIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccessMethodType"))
  {
    m_accessMethodType = AccessMethodTypeMapper::GetAccessMethodTypeForName(jsonValue.GetString("AccessMethodType"));

    m_accessMethodTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessMethod::Jsonize() const
{
  JsonValue payload;

  if(m_customObjectIdentifierHasBeenSet)
  {
   payload.WithString("CustomObjectIdentifier", m_customObjectIdentifier);

  }

  if(m_accessMethodTypeHasBeenSet)
  {
   payload.WithString("AccessMethodType", AccessMethodTypeMapper::GetNameForAccessMethodType(m_accessMethodType));
  }

  return payload;
}

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
