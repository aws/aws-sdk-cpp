/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/LaunchedInstance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

LaunchedInstance::LaunchedInstance() : 
    m_ec2InstanceIDHasBeenSet(false),
    m_firstBoot(FirstBoot::NOT_SET),
    m_firstBootHasBeenSet(false),
    m_jobIDHasBeenSet(false)
{
}

LaunchedInstance::LaunchedInstance(JsonView jsonValue) : 
    m_ec2InstanceIDHasBeenSet(false),
    m_firstBoot(FirstBoot::NOT_SET),
    m_firstBootHasBeenSet(false),
    m_jobIDHasBeenSet(false)
{
  *this = jsonValue;
}

LaunchedInstance& LaunchedInstance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ec2InstanceID"))
  {
    m_ec2InstanceID = jsonValue.GetString("ec2InstanceID");

    m_ec2InstanceIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("firstBoot"))
  {
    m_firstBoot = FirstBootMapper::GetFirstBootForName(jsonValue.GetString("firstBoot"));

    m_firstBootHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobID"))
  {
    m_jobID = jsonValue.GetString("jobID");

    m_jobIDHasBeenSet = true;
  }

  return *this;
}

JsonValue LaunchedInstance::Jsonize() const
{
  JsonValue payload;

  if(m_ec2InstanceIDHasBeenSet)
  {
   payload.WithString("ec2InstanceID", m_ec2InstanceID);

  }

  if(m_firstBootHasBeenSet)
  {
   payload.WithString("firstBoot", FirstBootMapper::GetNameForFirstBoot(m_firstBoot));
  }

  if(m_jobIDHasBeenSet)
  {
   payload.WithString("jobID", m_jobID);

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
