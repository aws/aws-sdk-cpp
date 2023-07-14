/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/UsageResourceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

UsageResourceResult::UsageResourceResult() : 
    m_resourceHasBeenSet(false),
    m_totalHasBeenSet(false)
{
}

UsageResourceResult::UsageResourceResult(JsonView jsonValue) : 
    m_resourceHasBeenSet(false),
    m_totalHasBeenSet(false)
{
  *this = jsonValue;
}

UsageResourceResult& UsageResourceResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetString("resource");

    m_resourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("total"))
  {
    m_total = jsonValue.GetObject("total");

    m_totalHasBeenSet = true;
  }

  return *this;
}

JsonValue UsageResourceResult::Jsonize() const
{
  JsonValue payload;

  if(m_resourceHasBeenSet)
  {
   payload.WithString("resource", m_resource);

  }

  if(m_totalHasBeenSet)
  {
   payload.WithObject("total", m_total.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
