/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ExternalMetricsPreference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

ExternalMetricsPreference::ExternalMetricsPreference() : 
    m_source(ExternalMetricsSource::NOT_SET),
    m_sourceHasBeenSet(false)
{
}

ExternalMetricsPreference::ExternalMetricsPreference(JsonView jsonValue) : 
    m_source(ExternalMetricsSource::NOT_SET),
    m_sourceHasBeenSet(false)
{
  *this = jsonValue;
}

ExternalMetricsPreference& ExternalMetricsPreference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = ExternalMetricsSourceMapper::GetExternalMetricsSourceForName(jsonValue.GetString("source"));

    m_sourceHasBeenSet = true;
  }

  return *this;
}

JsonValue ExternalMetricsPreference::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", ExternalMetricsSourceMapper::GetNameForExternalMetricsSource(m_source));
  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
