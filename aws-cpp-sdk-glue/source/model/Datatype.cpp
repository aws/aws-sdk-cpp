/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Datatype.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

Datatype::Datatype() : 
    m_idHasBeenSet(false),
    m_labelHasBeenSet(false)
{
}

Datatype::Datatype(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_labelHasBeenSet(false)
{
  *this = jsonValue;
}

Datatype& Datatype::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Label"))
  {
    m_label = jsonValue.GetString("Label");

    m_labelHasBeenSet = true;
  }

  return *this;
}

JsonValue Datatype::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_labelHasBeenSet)
  {
   payload.WithString("Label", m_label);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
