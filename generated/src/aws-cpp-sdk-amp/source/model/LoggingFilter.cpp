/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/LoggingFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PrometheusService
{
namespace Model
{

LoggingFilter::LoggingFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

LoggingFilter& LoggingFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("qspThreshold"))
  {
    m_qspThreshold = jsonValue.GetInt64("qspThreshold");
    m_qspThresholdHasBeenSet = true;
  }
  return *this;
}

JsonValue LoggingFilter::Jsonize() const
{
  JsonValue payload;

  if(m_qspThresholdHasBeenSet)
  {
   payload.WithInt64("qspThreshold", m_qspThreshold);

  }

  return payload;
}

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
