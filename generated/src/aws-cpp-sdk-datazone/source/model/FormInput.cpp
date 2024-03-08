/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/FormInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

FormInput::FormInput() : 
    m_contentHasBeenSet(false),
    m_formNameHasBeenSet(false),
    m_typeIdentifierHasBeenSet(false),
    m_typeRevisionHasBeenSet(false)
{
}

FormInput::FormInput(JsonView jsonValue) : 
    m_contentHasBeenSet(false),
    m_formNameHasBeenSet(false),
    m_typeIdentifierHasBeenSet(false),
    m_typeRevisionHasBeenSet(false)
{
  *this = jsonValue;
}

FormInput& FormInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("content"))
  {
    m_content = jsonValue.GetString("content");

    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("formName"))
  {
    m_formName = jsonValue.GetString("formName");

    m_formNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("typeIdentifier"))
  {
    m_typeIdentifier = jsonValue.GetString("typeIdentifier");

    m_typeIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("typeRevision"))
  {
    m_typeRevision = jsonValue.GetString("typeRevision");

    m_typeRevisionHasBeenSet = true;
  }

  return *this;
}

JsonValue FormInput::Jsonize() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithString("content", m_content);

  }

  if(m_formNameHasBeenSet)
  {
   payload.WithString("formName", m_formName);

  }

  if(m_typeIdentifierHasBeenSet)
  {
   payload.WithString("typeIdentifier", m_typeIdentifier);

  }

  if(m_typeRevisionHasBeenSet)
  {
   payload.WithString("typeRevision", m_typeRevision);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
