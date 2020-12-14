/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/ListInsightsStatusFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

ListInsightsStatusFilter::ListInsightsStatusFilter() : 
    m_ongoingHasBeenSet(false),
    m_closedHasBeenSet(false),
    m_anyHasBeenSet(false)
{
}

ListInsightsStatusFilter::ListInsightsStatusFilter(JsonView jsonValue) : 
    m_ongoingHasBeenSet(false),
    m_closedHasBeenSet(false),
    m_anyHasBeenSet(false)
{
  *this = jsonValue;
}

ListInsightsStatusFilter& ListInsightsStatusFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Ongoing"))
  {
    m_ongoing = jsonValue.GetObject("Ongoing");

    m_ongoingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Closed"))
  {
    m_closed = jsonValue.GetObject("Closed");

    m_closedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Any"))
  {
    m_any = jsonValue.GetObject("Any");

    m_anyHasBeenSet = true;
  }

  return *this;
}

JsonValue ListInsightsStatusFilter::Jsonize() const
{
  JsonValue payload;

  if(m_ongoingHasBeenSet)
  {
   payload.WithObject("Ongoing", m_ongoing.Jsonize());

  }

  if(m_closedHasBeenSet)
  {
   payload.WithObject("Closed", m_closed.Jsonize());

  }

  if(m_anyHasBeenSet)
  {
   payload.WithObject("Any", m_any.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
