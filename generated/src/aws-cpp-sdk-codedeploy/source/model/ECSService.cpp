/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/ECSService.h>
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

ECSService::ECSService() : 
    m_serviceNameHasBeenSet(false),
    m_clusterNameHasBeenSet(false)
{
}

ECSService::ECSService(JsonView jsonValue) : 
    m_serviceNameHasBeenSet(false),
    m_clusterNameHasBeenSet(false)
{
  *this = jsonValue;
}

ECSService& ECSService::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serviceName"))
  {
    m_serviceName = jsonValue.GetString("serviceName");

    m_serviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clusterName"))
  {
    m_clusterName = jsonValue.GetString("clusterName");

    m_clusterNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ECSService::Jsonize() const
{
  JsonValue payload;

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("clusterName", m_clusterName);

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
