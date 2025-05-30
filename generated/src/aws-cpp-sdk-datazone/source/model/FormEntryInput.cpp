﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/FormEntryInput.h>
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

FormEntryInput::FormEntryInput(JsonView jsonValue)
{
  *this = jsonValue;
}

FormEntryInput& FormEntryInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("required"))
  {
    m_required = jsonValue.GetBool("required");
    m_requiredHasBeenSet = true;
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

JsonValue FormEntryInput::Jsonize() const
{
  JsonValue payload;

  if(m_requiredHasBeenSet)
  {
   payload.WithBool("required", m_required);

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
