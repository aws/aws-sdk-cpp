/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/SsmControls.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

SsmControls::SsmControls() : 
    m_concurrentExecutionRatePercentage(0),
    m_concurrentExecutionRatePercentageHasBeenSet(false),
    m_errorPercentage(0),
    m_errorPercentageHasBeenSet(false)
{
}

SsmControls::SsmControls(JsonView jsonValue) : 
    m_concurrentExecutionRatePercentage(0),
    m_concurrentExecutionRatePercentageHasBeenSet(false),
    m_errorPercentage(0),
    m_errorPercentageHasBeenSet(false)
{
  *this = jsonValue;
}

SsmControls& SsmControls::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConcurrentExecutionRatePercentage"))
  {
    m_concurrentExecutionRatePercentage = jsonValue.GetInteger("ConcurrentExecutionRatePercentage");

    m_concurrentExecutionRatePercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorPercentage"))
  {
    m_errorPercentage = jsonValue.GetInteger("ErrorPercentage");

    m_errorPercentageHasBeenSet = true;
  }

  return *this;
}

JsonValue SsmControls::Jsonize() const
{
  JsonValue payload;

  if(m_concurrentExecutionRatePercentageHasBeenSet)
  {
   payload.WithInteger("ConcurrentExecutionRatePercentage", m_concurrentExecutionRatePercentage);

  }

  if(m_errorPercentageHasBeenSet)
  {
   payload.WithInteger("ErrorPercentage", m_errorPercentage);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
