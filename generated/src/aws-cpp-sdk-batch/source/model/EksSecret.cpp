/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EksSecret.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

EksSecret::EksSecret() : 
    m_secretNameHasBeenSet(false),
    m_optional(false),
    m_optionalHasBeenSet(false)
{
}

EksSecret::EksSecret(JsonView jsonValue) : 
    m_secretNameHasBeenSet(false),
    m_optional(false),
    m_optionalHasBeenSet(false)
{
  *this = jsonValue;
}

EksSecret& EksSecret::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("secretName"))
  {
    m_secretName = jsonValue.GetString("secretName");

    m_secretNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("optional"))
  {
    m_optional = jsonValue.GetBool("optional");

    m_optionalHasBeenSet = true;
  }

  return *this;
}

JsonValue EksSecret::Jsonize() const
{
  JsonValue payload;

  if(m_secretNameHasBeenSet)
  {
   payload.WithString("secretName", m_secretName);

  }

  if(m_optionalHasBeenSet)
  {
   payload.WithBool("optional", m_optional);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
