﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/Parameter.h>
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

Parameter::Parameter() : 
    m_descriptionHasBeenSet(false),
    m_required(false),
    m_requiredHasBeenSet(false)
{
}

Parameter::Parameter(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_required(false),
    m_requiredHasBeenSet(false)
{
  *this = jsonValue;
}

Parameter& Parameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Required"))
  {
    m_required = jsonValue.GetBool("Required");

    m_requiredHasBeenSet = true;
  }

  return *this;
}

JsonValue Parameter::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_requiredHasBeenSet)
  {
   payload.WithBool("Required", m_required);

  }

  return payload;
}

} // namespace Model
} // namespace AppConfig
} // namespace Aws
