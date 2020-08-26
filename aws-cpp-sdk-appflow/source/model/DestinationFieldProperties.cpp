/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/DestinationFieldProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

DestinationFieldProperties::DestinationFieldProperties() : 
    m_isCreatable(false),
    m_isCreatableHasBeenSet(false),
    m_isNullable(false),
    m_isNullableHasBeenSet(false),
    m_isUpsertable(false),
    m_isUpsertableHasBeenSet(false)
{
}

DestinationFieldProperties::DestinationFieldProperties(JsonView jsonValue) : 
    m_isCreatable(false),
    m_isCreatableHasBeenSet(false),
    m_isNullable(false),
    m_isNullableHasBeenSet(false),
    m_isUpsertable(false),
    m_isUpsertableHasBeenSet(false)
{
  *this = jsonValue;
}

DestinationFieldProperties& DestinationFieldProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("isCreatable"))
  {
    m_isCreatable = jsonValue.GetBool("isCreatable");

    m_isCreatableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isNullable"))
  {
    m_isNullable = jsonValue.GetBool("isNullable");

    m_isNullableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isUpsertable"))
  {
    m_isUpsertable = jsonValue.GetBool("isUpsertable");

    m_isUpsertableHasBeenSet = true;
  }

  return *this;
}

JsonValue DestinationFieldProperties::Jsonize() const
{
  JsonValue payload;

  if(m_isCreatableHasBeenSet)
  {
   payload.WithBool("isCreatable", m_isCreatable);

  }

  if(m_isNullableHasBeenSet)
  {
   payload.WithBool("isNullable", m_isNullable);

  }

  if(m_isUpsertableHasBeenSet)
  {
   payload.WithBool("isUpsertable", m_isUpsertable);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
