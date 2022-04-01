/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/Policy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Organizations
{
namespace Model
{

Policy::Policy() : 
    m_policySummaryHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

Policy::Policy(JsonView jsonValue) : 
    m_policySummaryHasBeenSet(false),
    m_contentHasBeenSet(false)
{
  *this = jsonValue;
}

Policy& Policy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PolicySummary"))
  {
    m_policySummary = jsonValue.GetObject("PolicySummary");

    m_policySummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetString("Content");

    m_contentHasBeenSet = true;
  }

  return *this;
}

JsonValue Policy::Jsonize() const
{
  JsonValue payload;

  if(m_policySummaryHasBeenSet)
  {
   payload.WithObject("PolicySummary", m_policySummary.Jsonize());

  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  return payload;
}

} // namespace Model
} // namespace Organizations
} // namespace Aws
