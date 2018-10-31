/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/greengrass/model/BulkDeployment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

BulkDeployment::BulkDeployment() : 
    m_bulkDeploymentArnHasBeenSet(false),
    m_bulkDeploymentIdHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
}

BulkDeployment::BulkDeployment(JsonView jsonValue) : 
    m_bulkDeploymentArnHasBeenSet(false),
    m_bulkDeploymentIdHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
  *this = jsonValue;
}

BulkDeployment& BulkDeployment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BulkDeploymentArn"))
  {
    m_bulkDeploymentArn = jsonValue.GetString("BulkDeploymentArn");

    m_bulkDeploymentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BulkDeploymentId"))
  {
    m_bulkDeploymentId = jsonValue.GetString("BulkDeploymentId");

    m_bulkDeploymentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  return *this;
}

JsonValue BulkDeployment::Jsonize() const
{
  JsonValue payload;

  if(m_bulkDeploymentArnHasBeenSet)
  {
   payload.WithString("BulkDeploymentArn", m_bulkDeploymentArn);

  }

  if(m_bulkDeploymentIdHasBeenSet)
  {
   payload.WithString("BulkDeploymentId", m_bulkDeploymentId);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("CreatedAt", m_createdAt);

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
