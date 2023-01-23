/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/Action.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

Action::Action() : 
    m_sNSConfigurationHasBeenSet(false),
    m_lambdaConfigurationHasBeenSet(false)
{
}

Action::Action(JsonView jsonValue) : 
    m_sNSConfigurationHasBeenSet(false),
    m_lambdaConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

Action& Action::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SNSConfiguration"))
  {
    m_sNSConfiguration = jsonValue.GetObject("SNSConfiguration");

    m_sNSConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LambdaConfiguration"))
  {
    m_lambdaConfiguration = jsonValue.GetObject("LambdaConfiguration");

    m_lambdaConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue Action::Jsonize() const
{
  JsonValue payload;

  if(m_sNSConfigurationHasBeenSet)
  {
   payload.WithObject("SNSConfiguration", m_sNSConfiguration.Jsonize());

  }

  if(m_lambdaConfigurationHasBeenSet)
  {
   payload.WithObject("LambdaConfiguration", m_lambdaConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
