/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/RelatedDeployments.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

RelatedDeployments::RelatedDeployments() : 
    m_autoUpdateOutdatedInstancesRootDeploymentIdHasBeenSet(false),
    m_autoUpdateOutdatedInstancesDeploymentIdsHasBeenSet(false)
{
}

RelatedDeployments::RelatedDeployments(JsonView jsonValue) : 
    m_autoUpdateOutdatedInstancesRootDeploymentIdHasBeenSet(false),
    m_autoUpdateOutdatedInstancesDeploymentIdsHasBeenSet(false)
{
  *this = jsonValue;
}

RelatedDeployments& RelatedDeployments::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("autoUpdateOutdatedInstancesRootDeploymentId"))
  {
    m_autoUpdateOutdatedInstancesRootDeploymentId = jsonValue.GetString("autoUpdateOutdatedInstancesRootDeploymentId");

    m_autoUpdateOutdatedInstancesRootDeploymentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoUpdateOutdatedInstancesDeploymentIds"))
  {
    Array<JsonView> autoUpdateOutdatedInstancesDeploymentIdsJsonList = jsonValue.GetArray("autoUpdateOutdatedInstancesDeploymentIds");
    for(unsigned autoUpdateOutdatedInstancesDeploymentIdsIndex = 0; autoUpdateOutdatedInstancesDeploymentIdsIndex < autoUpdateOutdatedInstancesDeploymentIdsJsonList.GetLength(); ++autoUpdateOutdatedInstancesDeploymentIdsIndex)
    {
      m_autoUpdateOutdatedInstancesDeploymentIds.push_back(autoUpdateOutdatedInstancesDeploymentIdsJsonList[autoUpdateOutdatedInstancesDeploymentIdsIndex].AsString());
    }
    m_autoUpdateOutdatedInstancesDeploymentIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue RelatedDeployments::Jsonize() const
{
  JsonValue payload;

  if(m_autoUpdateOutdatedInstancesRootDeploymentIdHasBeenSet)
  {
   payload.WithString("autoUpdateOutdatedInstancesRootDeploymentId", m_autoUpdateOutdatedInstancesRootDeploymentId);

  }

  if(m_autoUpdateOutdatedInstancesDeploymentIdsHasBeenSet)
  {
   Array<JsonValue> autoUpdateOutdatedInstancesDeploymentIdsJsonList(m_autoUpdateOutdatedInstancesDeploymentIds.size());
   for(unsigned autoUpdateOutdatedInstancesDeploymentIdsIndex = 0; autoUpdateOutdatedInstancesDeploymentIdsIndex < autoUpdateOutdatedInstancesDeploymentIdsJsonList.GetLength(); ++autoUpdateOutdatedInstancesDeploymentIdsIndex)
   {
     autoUpdateOutdatedInstancesDeploymentIdsJsonList[autoUpdateOutdatedInstancesDeploymentIdsIndex].AsString(m_autoUpdateOutdatedInstancesDeploymentIds[autoUpdateOutdatedInstancesDeploymentIdsIndex]);
   }
   payload.WithArray("autoUpdateOutdatedInstancesDeploymentIds", std::move(autoUpdateOutdatedInstancesDeploymentIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
