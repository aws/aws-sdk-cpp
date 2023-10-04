/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/CoverageEksClusterDetails.h>
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

CoverageEksClusterDetails::CoverageEksClusterDetails() : 
    m_clusterNameHasBeenSet(false),
    m_coveredNodes(0),
    m_coveredNodesHasBeenSet(false),
    m_compatibleNodes(0),
    m_compatibleNodesHasBeenSet(false),
    m_addonDetailsHasBeenSet(false),
    m_managementType(ManagementType::NOT_SET),
    m_managementTypeHasBeenSet(false)
{
}

CoverageEksClusterDetails::CoverageEksClusterDetails(JsonView jsonValue) : 
    m_clusterNameHasBeenSet(false),
    m_coveredNodes(0),
    m_coveredNodesHasBeenSet(false),
    m_compatibleNodes(0),
    m_compatibleNodesHasBeenSet(false),
    m_addonDetailsHasBeenSet(false),
    m_managementType(ManagementType::NOT_SET),
    m_managementTypeHasBeenSet(false)
{
  *this = jsonValue;
}

CoverageEksClusterDetails& CoverageEksClusterDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clusterName"))
  {
    m_clusterName = jsonValue.GetString("clusterName");

    m_clusterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("coveredNodes"))
  {
    m_coveredNodes = jsonValue.GetInt64("coveredNodes");

    m_coveredNodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("compatibleNodes"))
  {
    m_compatibleNodes = jsonValue.GetInt64("compatibleNodes");

    m_compatibleNodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("addonDetails"))
  {
    m_addonDetails = jsonValue.GetObject("addonDetails");

    m_addonDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("managementType"))
  {
    m_managementType = ManagementTypeMapper::GetManagementTypeForName(jsonValue.GetString("managementType"));

    m_managementTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue CoverageEksClusterDetails::Jsonize() const
{
  JsonValue payload;

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("clusterName", m_clusterName);

  }

  if(m_coveredNodesHasBeenSet)
  {
   payload.WithInt64("coveredNodes", m_coveredNodes);

  }

  if(m_compatibleNodesHasBeenSet)
  {
   payload.WithInt64("compatibleNodes", m_compatibleNodes);

  }

  if(m_addonDetailsHasBeenSet)
  {
   payload.WithObject("addonDetails", m_addonDetails.Jsonize());

  }

  if(m_managementTypeHasBeenSet)
  {
   payload.WithString("managementType", ManagementTypeMapper::GetNameForManagementType(m_managementType));
  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
