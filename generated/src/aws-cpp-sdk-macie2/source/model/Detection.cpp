/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/Detection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

Detection::Detection() : 
    m_arnHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_suppressed(false),
    m_suppressedHasBeenSet(false),
    m_type(DataIdentifierType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Detection::Detection(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_suppressed(false),
    m_suppressedHasBeenSet(false),
    m_type(DataIdentifierType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Detection& Detection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInt64("count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("suppressed"))
  {
    m_suppressed = jsonValue.GetBool("suppressed");

    m_suppressedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = DataIdentifierTypeMapper::GetDataIdentifierTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue Detection::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_countHasBeenSet)
  {
   payload.WithInt64("count", m_count);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_suppressedHasBeenSet)
  {
   payload.WithBool("suppressed", m_suppressed);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", DataIdentifierTypeMapper::GetNameForDataIdentifierType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
