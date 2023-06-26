/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/ControlPlanePlacementRequest.h>
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

ControlPlanePlacementRequest::ControlPlanePlacementRequest() : 
    m_groupNameHasBeenSet(false)
{
}

ControlPlanePlacementRequest::ControlPlanePlacementRequest(JsonView jsonValue) : 
    m_groupNameHasBeenSet(false)
{
  *this = jsonValue;
}

ControlPlanePlacementRequest& ControlPlanePlacementRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("groupName"))
  {
    m_groupName = jsonValue.GetString("groupName");

    m_groupNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ControlPlanePlacementRequest::Jsonize() const
{
  JsonValue payload;

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("groupName", m_groupName);

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
