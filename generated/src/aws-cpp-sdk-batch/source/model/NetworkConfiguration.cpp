/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/NetworkConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

NetworkConfiguration::NetworkConfiguration() : 
    m_assignPublicIp(AssignPublicIp::NOT_SET),
    m_assignPublicIpHasBeenSet(false)
{
}

NetworkConfiguration::NetworkConfiguration(JsonView jsonValue) : 
    m_assignPublicIp(AssignPublicIp::NOT_SET),
    m_assignPublicIpHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkConfiguration& NetworkConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assignPublicIp"))
  {
    m_assignPublicIp = AssignPublicIpMapper::GetAssignPublicIpForName(jsonValue.GetString("assignPublicIp"));

    m_assignPublicIpHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_assignPublicIpHasBeenSet)
  {
   payload.WithString("assignPublicIp", AssignPublicIpMapper::GetNameForAssignPublicIp(m_assignPublicIp));
  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
