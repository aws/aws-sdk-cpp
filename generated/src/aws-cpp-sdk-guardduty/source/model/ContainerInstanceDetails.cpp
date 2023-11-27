/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ContainerInstanceDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

ContainerInstanceDetails::ContainerInstanceDetails() : 
    m_coveredContainerInstances(0),
    m_coveredContainerInstancesHasBeenSet(false),
    m_compatibleContainerInstances(0),
    m_compatibleContainerInstancesHasBeenSet(false)
{
}

ContainerInstanceDetails::ContainerInstanceDetails(JsonView jsonValue) : 
    m_coveredContainerInstances(0),
    m_coveredContainerInstancesHasBeenSet(false),
    m_compatibleContainerInstances(0),
    m_compatibleContainerInstancesHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerInstanceDetails& ContainerInstanceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("coveredContainerInstances"))
  {
    m_coveredContainerInstances = jsonValue.GetInt64("coveredContainerInstances");

    m_coveredContainerInstancesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("compatibleContainerInstances"))
  {
    m_compatibleContainerInstances = jsonValue.GetInt64("compatibleContainerInstances");

    m_compatibleContainerInstancesHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerInstanceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_coveredContainerInstancesHasBeenSet)
  {
   payload.WithInt64("coveredContainerInstances", m_coveredContainerInstances);

  }

  if(m_compatibleContainerInstancesHasBeenSet)
  {
   payload.WithInt64("compatibleContainerInstances", m_compatibleContainerInstances);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
