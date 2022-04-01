/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ActionTypeProperty.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

ActionTypeProperty::ActionTypeProperty() : 
    m_nameHasBeenSet(false),
    m_optional(false),
    m_optionalHasBeenSet(false),
    m_key(false),
    m_keyHasBeenSet(false),
    m_noEcho(false),
    m_noEchoHasBeenSet(false),
    m_queryable(false),
    m_queryableHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

ActionTypeProperty::ActionTypeProperty(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_optional(false),
    m_optionalHasBeenSet(false),
    m_key(false),
    m_keyHasBeenSet(false),
    m_noEcho(false),
    m_noEchoHasBeenSet(false),
    m_queryable(false),
    m_queryableHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

ActionTypeProperty& ActionTypeProperty::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("optional"))
  {
    m_optional = jsonValue.GetBool("optional");

    m_optionalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetBool("key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("noEcho"))
  {
    m_noEcho = jsonValue.GetBool("noEcho");

    m_noEchoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queryable"))
  {
    m_queryable = jsonValue.GetBool("queryable");

    m_queryableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionTypeProperty::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_optionalHasBeenSet)
  {
   payload.WithBool("optional", m_optional);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithBool("key", m_key);

  }

  if(m_noEchoHasBeenSet)
  {
   payload.WithBool("noEcho", m_noEcho);

  }

  if(m_queryableHasBeenSet)
  {
   payload.WithBool("queryable", m_queryable);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
