/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MonitoringBaselineConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

MonitoringBaselineConfig::MonitoringBaselineConfig() : 
    m_constraintsResourceHasBeenSet(false),
    m_statisticsResourceHasBeenSet(false)
{
}

MonitoringBaselineConfig::MonitoringBaselineConfig(JsonView jsonValue) : 
    m_constraintsResourceHasBeenSet(false),
    m_statisticsResourceHasBeenSet(false)
{
  *this = jsonValue;
}

MonitoringBaselineConfig& MonitoringBaselineConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConstraintsResource"))
  {
    m_constraintsResource = jsonValue.GetObject("ConstraintsResource");

    m_constraintsResourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatisticsResource"))
  {
    m_statisticsResource = jsonValue.GetObject("StatisticsResource");

    m_statisticsResourceHasBeenSet = true;
  }

  return *this;
}

JsonValue MonitoringBaselineConfig::Jsonize() const
{
  JsonValue payload;

  if(m_constraintsResourceHasBeenSet)
  {
   payload.WithObject("ConstraintsResource", m_constraintsResource.Jsonize());

  }

  if(m_statisticsResourceHasBeenSet)
  {
   payload.WithObject("StatisticsResource", m_statisticsResource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
