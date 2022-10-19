/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/TrafficDistributionGroupSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

TrafficDistributionGroupSummary::TrafficDistributionGroupSummary() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_instanceArnHasBeenSet(false),
    m_status(TrafficDistributionGroupStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

TrafficDistributionGroupSummary::TrafficDistributionGroupSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_instanceArnHasBeenSet(false),
    m_status(TrafficDistributionGroupStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

TrafficDistributionGroupSummary& TrafficDistributionGroupSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceArn"))
  {
    m_instanceArn = jsonValue.GetString("InstanceArn");

    m_instanceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = TrafficDistributionGroupStatusMapper::GetTrafficDistributionGroupStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue TrafficDistributionGroupSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_instanceArnHasBeenSet)
  {
   payload.WithString("InstanceArn", m_instanceArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", TrafficDistributionGroupStatusMapper::GetNameForTrafficDistributionGroupStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
