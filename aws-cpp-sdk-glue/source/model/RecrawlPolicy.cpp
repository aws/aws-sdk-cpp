/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/RecrawlPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

RecrawlPolicy::RecrawlPolicy() : 
    m_recrawlBehavior(RecrawlBehavior::NOT_SET),
    m_recrawlBehaviorHasBeenSet(false)
{
}

RecrawlPolicy::RecrawlPolicy(JsonView jsonValue) : 
    m_recrawlBehavior(RecrawlBehavior::NOT_SET),
    m_recrawlBehaviorHasBeenSet(false)
{
  *this = jsonValue;
}

RecrawlPolicy& RecrawlPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RecrawlBehavior"))
  {
    m_recrawlBehavior = RecrawlBehaviorMapper::GetRecrawlBehaviorForName(jsonValue.GetString("RecrawlBehavior"));

    m_recrawlBehaviorHasBeenSet = true;
  }

  return *this;
}

JsonValue RecrawlPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_recrawlBehaviorHasBeenSet)
  {
   payload.WithString("RecrawlBehavior", RecrawlBehaviorMapper::GetNameForRecrawlBehavior(m_recrawlBehavior));
  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
