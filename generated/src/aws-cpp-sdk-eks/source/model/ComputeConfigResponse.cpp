/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/ComputeConfigResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

ComputeConfigResponse::ComputeConfigResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

ComputeConfigResponse& ComputeConfigResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");
    m_enabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nodePools"))
  {
    Aws::Utils::Array<JsonView> nodePoolsJsonList = jsonValue.GetArray("nodePools");
    for(unsigned nodePoolsIndex = 0; nodePoolsIndex < nodePoolsJsonList.GetLength(); ++nodePoolsIndex)
    {
      m_nodePools.push_back(nodePoolsJsonList[nodePoolsIndex].AsString());
    }
    m_nodePoolsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nodeRoleArn"))
  {
    m_nodeRoleArn = jsonValue.GetString("nodeRoleArn");
    m_nodeRoleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ComputeConfigResponse::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_nodePoolsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nodePoolsJsonList(m_nodePools.size());
   for(unsigned nodePoolsIndex = 0; nodePoolsIndex < nodePoolsJsonList.GetLength(); ++nodePoolsIndex)
   {
     nodePoolsJsonList[nodePoolsIndex].AsString(m_nodePools[nodePoolsIndex]);
   }
   payload.WithArray("nodePools", std::move(nodePoolsJsonList));

  }

  if(m_nodeRoleArnHasBeenSet)
  {
   payload.WithString("nodeRoleArn", m_nodeRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
