/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/AutoScalingConfigurationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppRunner
{
namespace Model
{

AutoScalingConfigurationSummary::AutoScalingConfigurationSummary() : 
    m_autoScalingConfigurationArnHasBeenSet(false),
    m_autoScalingConfigurationNameHasBeenSet(false),
    m_autoScalingConfigurationRevision(0),
    m_autoScalingConfigurationRevisionHasBeenSet(false)
{
}

AutoScalingConfigurationSummary::AutoScalingConfigurationSummary(JsonView jsonValue) : 
    m_autoScalingConfigurationArnHasBeenSet(false),
    m_autoScalingConfigurationNameHasBeenSet(false),
    m_autoScalingConfigurationRevision(0),
    m_autoScalingConfigurationRevisionHasBeenSet(false)
{
  *this = jsonValue;
}

AutoScalingConfigurationSummary& AutoScalingConfigurationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AutoScalingConfigurationArn"))
  {
    m_autoScalingConfigurationArn = jsonValue.GetString("AutoScalingConfigurationArn");

    m_autoScalingConfigurationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoScalingConfigurationName"))
  {
    m_autoScalingConfigurationName = jsonValue.GetString("AutoScalingConfigurationName");

    m_autoScalingConfigurationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoScalingConfigurationRevision"))
  {
    m_autoScalingConfigurationRevision = jsonValue.GetInteger("AutoScalingConfigurationRevision");

    m_autoScalingConfigurationRevisionHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoScalingConfigurationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_autoScalingConfigurationArnHasBeenSet)
  {
   payload.WithString("AutoScalingConfigurationArn", m_autoScalingConfigurationArn);

  }

  if(m_autoScalingConfigurationNameHasBeenSet)
  {
   payload.WithString("AutoScalingConfigurationName", m_autoScalingConfigurationName);

  }

  if(m_autoScalingConfigurationRevisionHasBeenSet)
  {
   payload.WithInteger("AutoScalingConfigurationRevision", m_autoScalingConfigurationRevision);

  }

  return payload;
}

} // namespace Model
} // namespace AppRunner
} // namespace Aws
