/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AgentVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

AgentVersion::AgentVersion() : 
    m_versionHasBeenSet(false),
    m_agentCount(0),
    m_agentCountHasBeenSet(false)
{
}

AgentVersion::AgentVersion(JsonView jsonValue) : 
    m_versionHasBeenSet(false),
    m_agentCount(0),
    m_agentCountHasBeenSet(false)
{
  *this = jsonValue;
}

AgentVersion& AgentVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AgentCount"))
  {
    m_agentCount = jsonValue.GetInt64("AgentCount");

    m_agentCountHasBeenSet = true;
  }

  return *this;
}

JsonValue AgentVersion::Jsonize() const
{
  JsonValue payload;

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  if(m_agentCountHasBeenSet)
  {
   payload.WithInt64("AgentCount", m_agentCount);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
