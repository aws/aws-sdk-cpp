/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/NodeInstance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Panorama
{
namespace Model
{

NodeInstance::NodeInstance() : 
    m_nodeInstanceIdHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_packageVersionHasBeenSet(false),
    m_packagePatchVersionHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_currentStatus(NodeInstanceStatus::NOT_SET),
    m_currentStatusHasBeenSet(false)
{
}

NodeInstance::NodeInstance(JsonView jsonValue) : 
    m_nodeInstanceIdHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_packageVersionHasBeenSet(false),
    m_packagePatchVersionHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_currentStatus(NodeInstanceStatus::NOT_SET),
    m_currentStatusHasBeenSet(false)
{
  *this = jsonValue;
}

NodeInstance& NodeInstance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NodeInstanceId"))
  {
    m_nodeInstanceId = jsonValue.GetString("NodeInstanceId");

    m_nodeInstanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NodeId"))
  {
    m_nodeId = jsonValue.GetString("NodeId");

    m_nodeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PackageName"))
  {
    m_packageName = jsonValue.GetString("PackageName");

    m_packageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PackageVersion"))
  {
    m_packageVersion = jsonValue.GetString("PackageVersion");

    m_packageVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PackagePatchVersion"))
  {
    m_packagePatchVersion = jsonValue.GetString("PackagePatchVersion");

    m_packagePatchVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NodeName"))
  {
    m_nodeName = jsonValue.GetString("NodeName");

    m_nodeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentStatus"))
  {
    m_currentStatus = NodeInstanceStatusMapper::GetNodeInstanceStatusForName(jsonValue.GetString("CurrentStatus"));

    m_currentStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue NodeInstance::Jsonize() const
{
  JsonValue payload;

  if(m_nodeInstanceIdHasBeenSet)
  {
   payload.WithString("NodeInstanceId", m_nodeInstanceId);

  }

  if(m_nodeIdHasBeenSet)
  {
   payload.WithString("NodeId", m_nodeId);

  }

  if(m_packageNameHasBeenSet)
  {
   payload.WithString("PackageName", m_packageName);

  }

  if(m_packageVersionHasBeenSet)
  {
   payload.WithString("PackageVersion", m_packageVersion);

  }

  if(m_packagePatchVersionHasBeenSet)
  {
   payload.WithString("PackagePatchVersion", m_packagePatchVersion);

  }

  if(m_nodeNameHasBeenSet)
  {
   payload.WithString("NodeName", m_nodeName);

  }

  if(m_currentStatusHasBeenSet)
  {
   payload.WithString("CurrentStatus", NodeInstanceStatusMapper::GetNameForNodeInstanceStatus(m_currentStatus));
  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws
