/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/ResponseAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Shield
{
namespace Model
{

ResponseAction::ResponseAction() : 
    m_blockHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

ResponseAction::ResponseAction(JsonView jsonValue) : 
    m_blockHasBeenSet(false),
    m_countHasBeenSet(false)
{
  *this = jsonValue;
}

ResponseAction& ResponseAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Block"))
  {
    m_block = jsonValue.GetObject("Block");

    m_blockHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Count"))
  {
    m_count = jsonValue.GetObject("Count");

    m_countHasBeenSet = true;
  }

  return *this;
}

JsonValue ResponseAction::Jsonize() const
{
  JsonValue payload;

  if(m_blockHasBeenSet)
  {
   payload.WithObject("Block", m_block.Jsonize());

  }

  if(m_countHasBeenSet)
  {
   payload.WithObject("Count", m_count.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws
