/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/MetricSource.h>
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

MetricSource::MetricSource() : 
    m_provider(MetricSourceProvider::NOT_SET),
    m_providerHasBeenSet(false),
    m_providerArnHasBeenSet(false)
{
}

MetricSource::MetricSource(JsonView jsonValue) : 
    m_provider(MetricSourceProvider::NOT_SET),
    m_providerHasBeenSet(false),
    m_providerArnHasBeenSet(false)
{
  *this = jsonValue;
}

MetricSource& MetricSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("provider"))
  {
    m_provider = MetricSourceProviderMapper::GetMetricSourceProviderForName(jsonValue.GetString("provider"));

    m_providerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("providerArn"))
  {
    m_providerArn = jsonValue.GetString("providerArn");

    m_providerArnHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricSource::Jsonize() const
{
  JsonValue payload;

  if(m_providerHasBeenSet)
  {
   payload.WithString("provider", MetricSourceProviderMapper::GetNameForMetricSourceProvider(m_provider));
  }

  if(m_providerArnHasBeenSet)
  {
   payload.WithString("providerArn", m_providerArn);

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
