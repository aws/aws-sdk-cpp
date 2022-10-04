/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/LayoutContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

LayoutContent::LayoutContent() : 
    m_basicHasBeenSet(false)
{
}

LayoutContent::LayoutContent(JsonView jsonValue) : 
    m_basicHasBeenSet(false)
{
  *this = jsonValue;
}

LayoutContent& LayoutContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("basic"))
  {
    m_basic = jsonValue.GetObject("basic");

    m_basicHasBeenSet = true;
  }

  return *this;
}

JsonValue LayoutContent::Jsonize() const
{
  JsonValue payload;

  if(m_basicHasBeenSet)
  {
   payload.WithObject("basic", m_basic.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
