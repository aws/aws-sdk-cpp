/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/SourceDataColumnProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Honeycode
{
namespace Model
{

SourceDataColumnProperties::SourceDataColumnProperties() : 
    m_columnIndex(0),
    m_columnIndexHasBeenSet(false)
{
}

SourceDataColumnProperties::SourceDataColumnProperties(JsonView jsonValue) : 
    m_columnIndex(0),
    m_columnIndexHasBeenSet(false)
{
  *this = jsonValue;
}

SourceDataColumnProperties& SourceDataColumnProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("columnIndex"))
  {
    m_columnIndex = jsonValue.GetInteger("columnIndex");

    m_columnIndexHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceDataColumnProperties::Jsonize() const
{
  JsonValue payload;

  if(m_columnIndexHasBeenSet)
  {
   payload.WithInteger("columnIndex", m_columnIndex);

  }

  return payload;
}

} // namespace Model
} // namespace Honeycode
} // namespace Aws
