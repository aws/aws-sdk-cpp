﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/InputSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

InputSource::InputSource(JsonView jsonValue)
{
  *this = jsonValue;
}

InputSource& InputSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputSourceARN"))
  {
    m_inputSourceARN = jsonValue.GetString("inputSourceARN");
    m_inputSourceARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("schemaName"))
  {
    m_schemaName = jsonValue.GetString("schemaName");
    m_schemaNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("applyNormalization"))
  {
    m_applyNormalization = jsonValue.GetBool("applyNormalization");
    m_applyNormalizationHasBeenSet = true;
  }
  return *this;
}

JsonValue InputSource::Jsonize() const
{
  JsonValue payload;

  if(m_inputSourceARNHasBeenSet)
  {
   payload.WithString("inputSourceARN", m_inputSourceARN);

  }

  if(m_schemaNameHasBeenSet)
  {
   payload.WithString("schemaName", m_schemaName);

  }

  if(m_applyNormalizationHasBeenSet)
  {
   payload.WithBool("applyNormalization", m_applyNormalization);

  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
