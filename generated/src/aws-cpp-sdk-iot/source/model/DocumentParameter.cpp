/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DocumentParameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

DocumentParameter::DocumentParameter() : 
    m_keyHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_regexHasBeenSet(false),
    m_exampleHasBeenSet(false),
    m_optional(false),
    m_optionalHasBeenSet(false)
{
}

DocumentParameter::DocumentParameter(JsonView jsonValue) : 
    m_keyHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_regexHasBeenSet(false),
    m_exampleHasBeenSet(false),
    m_optional(false),
    m_optionalHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentParameter& DocumentParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("regex"))
  {
    m_regex = jsonValue.GetString("regex");

    m_regexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("example"))
  {
    m_example = jsonValue.GetString("example");

    m_exampleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("optional"))
  {
    m_optional = jsonValue.GetBool("optional");

    m_optionalHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentParameter::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_regexHasBeenSet)
  {
   payload.WithString("regex", m_regex);

  }

  if(m_exampleHasBeenSet)
  {
   payload.WithString("example", m_example);

  }

  if(m_optionalHasBeenSet)
  {
   payload.WithBool("optional", m_optional);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
