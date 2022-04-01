/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/NoteUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

NoteUpdate::NoteUpdate() : 
    m_textHasBeenSet(false),
    m_updatedByHasBeenSet(false)
{
}

NoteUpdate::NoteUpdate(JsonView jsonValue) : 
    m_textHasBeenSet(false),
    m_updatedByHasBeenSet(false)
{
  *this = jsonValue;
}

NoteUpdate& NoteUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetString("Text");

    m_textHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedBy"))
  {
    m_updatedBy = jsonValue.GetString("UpdatedBy");

    m_updatedByHasBeenSet = true;
  }

  return *this;
}

JsonValue NoteUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  if(m_updatedByHasBeenSet)
  {
   payload.WithString("UpdatedBy", m_updatedBy);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
