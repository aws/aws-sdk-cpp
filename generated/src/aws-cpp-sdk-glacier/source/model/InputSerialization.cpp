/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/InputSerialization.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glacier
{
namespace Model
{

InputSerialization::InputSerialization() : 
    m_csvHasBeenSet(false)
{
}

InputSerialization::InputSerialization(JsonView jsonValue) : 
    m_csvHasBeenSet(false)
{
  *this = jsonValue;
}

InputSerialization& InputSerialization::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("csv"))
  {
    m_csv = jsonValue.GetObject("csv");

    m_csvHasBeenSet = true;
  }

  return *this;
}

JsonValue InputSerialization::Jsonize() const
{
  JsonValue payload;

  if(m_csvHasBeenSet)
  {
   payload.WithObject("csv", m_csv.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glacier
} // namespace Aws
