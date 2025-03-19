/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/DashboardDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

DashboardDetail::DashboardDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

DashboardDetail& DashboardDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DashboardArn"))
  {
    m_dashboardArn = jsonValue.GetString("DashboardArn");
    m_dashboardArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = DashboardTypeMapper::GetDashboardTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue DashboardDetail::Jsonize() const
{
  JsonValue payload;

  if(m_dashboardArnHasBeenSet)
  {
   payload.WithString("DashboardArn", m_dashboardArn);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", DashboardTypeMapper::GetNameForDashboardType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
