/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/InvalidConfigurationDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppConfig
{
namespace Model
{

InvalidConfigurationDetail::InvalidConfigurationDetail() : 
    m_constraintHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

InvalidConfigurationDetail::InvalidConfigurationDetail(JsonView jsonValue) : 
    m_constraintHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

InvalidConfigurationDetail& InvalidConfigurationDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Constraint"))
  {
    m_constraint = jsonValue.GetString("Constraint");

    m_constraintHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Location"))
  {
    m_location = jsonValue.GetString("Location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = jsonValue.GetString("Reason");

    m_reasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue InvalidConfigurationDetail::Jsonize() const
{
  JsonValue payload;

  if(m_constraintHasBeenSet)
  {
   payload.WithString("Constraint", m_constraint);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("Location", m_location);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", m_reason);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace AppConfig
} // namespace Aws
