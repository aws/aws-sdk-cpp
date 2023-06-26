/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/UsageFeatureResult.h>
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

UsageFeatureResult::UsageFeatureResult() : 
    m_feature(UsageFeature::NOT_SET),
    m_featureHasBeenSet(false),
    m_totalHasBeenSet(false)
{
}

UsageFeatureResult::UsageFeatureResult(JsonView jsonValue) : 
    m_feature(UsageFeature::NOT_SET),
    m_featureHasBeenSet(false),
    m_totalHasBeenSet(false)
{
  *this = jsonValue;
}

UsageFeatureResult& UsageFeatureResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("feature"))
  {
    m_feature = UsageFeatureMapper::GetUsageFeatureForName(jsonValue.GetString("feature"));

    m_featureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("total"))
  {
    m_total = jsonValue.GetObject("total");

    m_totalHasBeenSet = true;
  }

  return *this;
}

JsonValue UsageFeatureResult::Jsonize() const
{
  JsonValue payload;

  if(m_featureHasBeenSet)
  {
   payload.WithString("feature", UsageFeatureMapper::GetNameForUsageFeature(m_feature));
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
