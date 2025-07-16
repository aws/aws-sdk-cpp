/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/WorkloadIdentityDetails.h>
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

WorkloadIdentityDetails::WorkloadIdentityDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

WorkloadIdentityDetails& WorkloadIdentityDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("workloadIdentityArn"))
  {
    m_workloadIdentityArn = jsonValue.GetString("workloadIdentityArn");
    m_workloadIdentityArnHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkloadIdentityDetails::Jsonize() const
{
  JsonValue payload;

  if(m_workloadIdentityArnHasBeenSet)
  {
   payload.WithString("workloadIdentityArn", m_workloadIdentityArn);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
