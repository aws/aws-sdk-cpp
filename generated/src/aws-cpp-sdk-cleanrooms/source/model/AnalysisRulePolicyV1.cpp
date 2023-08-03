/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AnalysisRulePolicyV1.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

AnalysisRulePolicyV1::AnalysisRulePolicyV1() : 
    m_listHasBeenSet(false),
    m_aggregationHasBeenSet(false),
    m_customHasBeenSet(false)
{
}

AnalysisRulePolicyV1::AnalysisRulePolicyV1(JsonView jsonValue) : 
    m_listHasBeenSet(false),
    m_aggregationHasBeenSet(false),
    m_customHasBeenSet(false)
{
  *this = jsonValue;
}

AnalysisRulePolicyV1& AnalysisRulePolicyV1::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("list"))
  {
    m_list = jsonValue.GetObject("list");

    m_listHasBeenSet = true;
  }

  if(jsonValue.ValueExists("aggregation"))
  {
    m_aggregation = jsonValue.GetObject("aggregation");

    m_aggregationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("custom"))
  {
    m_custom = jsonValue.GetObject("custom");

    m_customHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalysisRulePolicyV1::Jsonize() const
{
  JsonValue payload;

  if(m_listHasBeenSet)
  {
   payload.WithObject("list", m_list.Jsonize());

  }

  if(m_aggregationHasBeenSet)
  {
   payload.WithObject("aggregation", m_aggregation.Jsonize());

  }

  if(m_customHasBeenSet)
  {
   payload.WithObject("custom", m_custom.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
