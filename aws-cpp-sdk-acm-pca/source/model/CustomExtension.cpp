/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/CustomExtension.h>
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

CustomExtension::CustomExtension() : 
    m_objectIdentifierHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_critical(false),
    m_criticalHasBeenSet(false)
{
}

CustomExtension::CustomExtension(JsonView jsonValue) : 
    m_objectIdentifierHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_critical(false),
    m_criticalHasBeenSet(false)
{
  *this = jsonValue;
}

CustomExtension& CustomExtension::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ObjectIdentifier"))
  {
    m_objectIdentifier = jsonValue.GetString("ObjectIdentifier");

    m_objectIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Critical"))
  {
    m_critical = jsonValue.GetBool("Critical");

    m_criticalHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomExtension::Jsonize() const
{
  JsonValue payload;

  if(m_objectIdentifierHasBeenSet)
  {
   payload.WithString("ObjectIdentifier", m_objectIdentifier);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_criticalHasBeenSet)
  {
   payload.WithBool("Critical", m_critical);

  }

  return payload;
}

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
