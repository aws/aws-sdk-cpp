/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/WorkloadIdentityType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{

WorkloadIdentityType::WorkloadIdentityType(JsonView jsonValue)
{
  *this = jsonValue;
}

WorkloadIdentityType& WorkloadIdentityType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workloadIdentityArn"))
  {
    m_workloadIdentityArn = jsonValue.GetString("workloadIdentityArn");
    m_workloadIdentityArnHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkloadIdentityType::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_workloadIdentityArnHasBeenSet)
  {
   payload.WithString("workloadIdentityArn", m_workloadIdentityArn);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
