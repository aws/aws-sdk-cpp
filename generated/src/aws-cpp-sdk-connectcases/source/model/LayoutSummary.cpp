/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/LayoutSummary.h>
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

LayoutSummary::LayoutSummary() : 
    m_layoutArnHasBeenSet(false),
    m_layoutIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

LayoutSummary::LayoutSummary(JsonView jsonValue) : 
    m_layoutArnHasBeenSet(false),
    m_layoutIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

LayoutSummary& LayoutSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("layoutArn"))
  {
    m_layoutArn = jsonValue.GetString("layoutArn");

    m_layoutArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("layoutId"))
  {
    m_layoutId = jsonValue.GetString("layoutId");

    m_layoutIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue LayoutSummary::Jsonize() const
{
  JsonValue payload;

  if(m_layoutArnHasBeenSet)
  {
   payload.WithString("layoutArn", m_layoutArn);

  }

  if(m_layoutIdHasBeenSet)
  {
   payload.WithString("layoutId", m_layoutId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
