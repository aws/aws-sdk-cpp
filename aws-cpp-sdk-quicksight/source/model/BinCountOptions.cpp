/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/BinCountOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

BinCountOptions::BinCountOptions() : 
    m_value(0),
    m_valueHasBeenSet(false)
{
}

BinCountOptions::BinCountOptions(JsonView jsonValue) : 
    m_value(0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

BinCountOptions& BinCountOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetInteger("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue BinCountOptions::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithInteger("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
