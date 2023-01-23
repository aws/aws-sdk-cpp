/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/ATIModelPerformance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

ATIModelPerformance::ATIModelPerformance() : 
    m_asi(0.0),
    m_asiHasBeenSet(false)
{
}

ATIModelPerformance::ATIModelPerformance(JsonView jsonValue) : 
    m_asi(0.0),
    m_asiHasBeenSet(false)
{
  *this = jsonValue;
}

ATIModelPerformance& ATIModelPerformance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("asi"))
  {
    m_asi = jsonValue.GetDouble("asi");

    m_asiHasBeenSet = true;
  }

  return *this;
}

JsonValue ATIModelPerformance::Jsonize() const
{
  JsonValue payload;

  if(m_asiHasBeenSet)
  {
   payload.WithDouble("asi", m_asi);

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
