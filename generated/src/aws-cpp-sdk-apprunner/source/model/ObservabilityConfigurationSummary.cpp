/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/ObservabilityConfigurationSummary.h>
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

ObservabilityConfigurationSummary::ObservabilityConfigurationSummary() : 
    m_observabilityConfigurationArnHasBeenSet(false),
    m_observabilityConfigurationNameHasBeenSet(false),
    m_observabilityConfigurationRevision(0),
    m_observabilityConfigurationRevisionHasBeenSet(false)
{
}

ObservabilityConfigurationSummary::ObservabilityConfigurationSummary(JsonView jsonValue) : 
    m_observabilityConfigurationArnHasBeenSet(false),
    m_observabilityConfigurationNameHasBeenSet(false),
    m_observabilityConfigurationRevision(0),
    m_observabilityConfigurationRevisionHasBeenSet(false)
{
  *this = jsonValue;
}

ObservabilityConfigurationSummary& ObservabilityConfigurationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ObservabilityConfigurationArn"))
  {
    m_observabilityConfigurationArn = jsonValue.GetString("ObservabilityConfigurationArn");

    m_observabilityConfigurationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObservabilityConfigurationName"))
  {
    m_observabilityConfigurationName = jsonValue.GetString("ObservabilityConfigurationName");

    m_observabilityConfigurationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObservabilityConfigurationRevision"))
  {
    m_observabilityConfigurationRevision = jsonValue.GetInteger("ObservabilityConfigurationRevision");

    m_observabilityConfigurationRevisionHasBeenSet = true;
  }

  return *this;
}

JsonValue ObservabilityConfigurationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_observabilityConfigurationArnHasBeenSet)
  {
   payload.WithString("ObservabilityConfigurationArn", m_observabilityConfigurationArn);

  }

  if(m_observabilityConfigurationNameHasBeenSet)
  {
   payload.WithString("ObservabilityConfigurationName", m_observabilityConfigurationName);

  }

  if(m_observabilityConfigurationRevisionHasBeenSet)
  {
   payload.WithInteger("ObservabilityConfigurationRevision", m_observabilityConfigurationRevision);

  }

  return payload;
}

} // namespace Model
} // namespace AppRunner
} // namespace Aws
