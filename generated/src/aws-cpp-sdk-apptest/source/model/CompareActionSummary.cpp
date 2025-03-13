/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/CompareActionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppTest
{
namespace Model
{

CompareActionSummary::CompareActionSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

CompareActionSummary& CompareActionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetObject("type");
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue CompareActionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithObject("type", m_type.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
