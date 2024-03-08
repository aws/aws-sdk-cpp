/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/FormEntryOutput.h>
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

FormEntryOutput::FormEntryOutput() : 
    m_required(false),
    m_requiredHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_typeRevisionHasBeenSet(false)
{
}

FormEntryOutput::FormEntryOutput(JsonView jsonValue) : 
    m_required(false),
    m_requiredHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_typeRevisionHasBeenSet(false)
{
  *this = jsonValue;
}

FormEntryOutput& FormEntryOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("required"))
  {
    m_required = jsonValue.GetBool("required");

    m_requiredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("typeName"))
  {
    m_typeName = jsonValue.GetString("typeName");

    m_typeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("typeRevision"))
  {
    m_typeRevision = jsonValue.GetString("typeRevision");

    m_typeRevisionHasBeenSet = true;
  }

  return *this;
}

JsonValue FormEntryOutput::Jsonize() const
{
  JsonValue payload;

  if(m_requiredHasBeenSet)
  {
   payload.WithBool("required", m_required);

  }

  if(m_typeNameHasBeenSet)
  {
   payload.WithString("typeName", m_typeName);

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
