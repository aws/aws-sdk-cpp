/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/X12SplitOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace B2BI
{
namespace Model
{

X12SplitOptions::X12SplitOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

X12SplitOptions& X12SplitOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("splitBy"))
  {
    m_splitBy = X12SplitByMapper::GetX12SplitByForName(jsonValue.GetString("splitBy"));
    m_splitByHasBeenSet = true;
  }
  return *this;
}

JsonValue X12SplitOptions::Jsonize() const
{
  JsonValue payload;

  if(m_splitByHasBeenSet)
  {
   payload.WithString("splitBy", X12SplitByMapper::GetNameForX12SplitBy(m_splitBy));
  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
