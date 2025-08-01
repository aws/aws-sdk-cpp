/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/EksCluster.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{

EksCluster::EksCluster(JsonView jsonValue)
{
  *this = jsonValue;
}

EksCluster& EksCluster::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("crossAccountRole"))
  {
    m_crossAccountRole = jsonValue.GetString("crossAccountRole");
    m_crossAccountRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("externalId"))
  {
    m_externalId = jsonValue.GetString("externalId");
    m_externalIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clusterArn"))
  {
    m_clusterArn = jsonValue.GetString("clusterArn");
    m_clusterArnHasBeenSet = true;
  }
  return *this;
}

JsonValue EksCluster::Jsonize() const
{
  JsonValue payload;

  if(m_crossAccountRoleHasBeenSet)
  {
   payload.WithString("crossAccountRole", m_crossAccountRole);

  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("externalId", m_externalId);

  }

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("clusterArn", m_clusterArn);

  }

  return payload;
}

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
