/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/AmpConfiguration.h>
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

AmpConfiguration::AmpConfiguration() : 
    m_workspaceArnHasBeenSet(false)
{
}

AmpConfiguration::AmpConfiguration(JsonView jsonValue) : 
    m_workspaceArnHasBeenSet(false)
{
  *this = jsonValue;
}

AmpConfiguration& AmpConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("workspaceArn"))
  {
    m_workspaceArn = jsonValue.GetString("workspaceArn");

    m_workspaceArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AmpConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_workspaceArnHasBeenSet)
  {
   payload.WithString("workspaceArn", m_workspaceArn);

  }

  return payload;
}

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
