/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DeploymentDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

DeploymentDetails::DeploymentDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

DeploymentDetails& DeploymentDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LatestDeploymentId"))
  {
    m_latestDeploymentId = jsonValue.GetString("LatestDeploymentId");
    m_latestDeploymentIdHasBeenSet = true;
  }
  return *this;
}

JsonValue DeploymentDetails::Jsonize() const
{
  JsonValue payload;

  if(m_latestDeploymentIdHasBeenSet)
  {
   payload.WithString("LatestDeploymentId", m_latestDeploymentId);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
