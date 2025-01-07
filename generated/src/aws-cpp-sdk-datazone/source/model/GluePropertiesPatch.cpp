﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GluePropertiesPatch.h>
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

GluePropertiesPatch::GluePropertiesPatch() : 
    m_glueConnectionInputHasBeenSet(false)
{
}

GluePropertiesPatch::GluePropertiesPatch(JsonView jsonValue)
  : GluePropertiesPatch()
{
  *this = jsonValue;
}

GluePropertiesPatch& GluePropertiesPatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("glueConnectionInput"))
  {
    m_glueConnectionInput = jsonValue.GetObject("glueConnectionInput");

    m_glueConnectionInputHasBeenSet = true;
  }

  return *this;
}

JsonValue GluePropertiesPatch::Jsonize() const
{
  JsonValue payload;

  if(m_glueConnectionInputHasBeenSet)
  {
   payload.WithObject("glueConnectionInput", m_glueConnectionInput.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
