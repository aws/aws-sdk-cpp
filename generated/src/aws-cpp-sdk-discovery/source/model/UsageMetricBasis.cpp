/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/UsageMetricBasis.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

UsageMetricBasis::UsageMetricBasis() : 
    m_nameHasBeenSet(false),
    m_percentageAdjust(0.0),
    m_percentageAdjustHasBeenSet(false)
{
}

UsageMetricBasis::UsageMetricBasis(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_percentageAdjust(0.0),
    m_percentageAdjustHasBeenSet(false)
{
  *this = jsonValue;
}

UsageMetricBasis& UsageMetricBasis::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("percentageAdjust"))
  {
    m_percentageAdjust = jsonValue.GetDouble("percentageAdjust");

    m_percentageAdjustHasBeenSet = true;
  }

  return *this;
}

JsonValue UsageMetricBasis::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_percentageAdjustHasBeenSet)
  {
   payload.WithDouble("percentageAdjust", m_percentageAdjust);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
