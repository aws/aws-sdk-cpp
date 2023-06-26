/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/Type.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

Type::Type() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_format(TypeDefinitionFormat::NOT_SET),
    m_formatHasBeenSet(false)
{
}

Type::Type(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_format(TypeDefinitionFormat::NOT_SET),
    m_formatHasBeenSet(false)
{
  *this = jsonValue;
}

Type& Type::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("definition"))
  {
    m_definition = jsonValue.GetString("definition");

    m_definitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("format"))
  {
    m_format = TypeDefinitionFormatMapper::GetTypeDefinitionFormatForName(jsonValue.GetString("format"));

    m_formatHasBeenSet = true;
  }

  return *this;
}

JsonValue Type::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_definitionHasBeenSet)
  {
   payload.WithString("definition", m_definition);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", TypeDefinitionFormatMapper::GetNameForTypeDefinitionFormat(m_format));
  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
