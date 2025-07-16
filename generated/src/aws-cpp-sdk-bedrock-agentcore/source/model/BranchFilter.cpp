/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/BranchFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{

BranchFilter::BranchFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

BranchFilter& BranchFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("includeParentBranches"))
  {
    m_includeParentBranches = jsonValue.GetBool("includeParentBranches");
    m_includeParentBranchesHasBeenSet = true;
  }
  return *this;
}

JsonValue BranchFilter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_includeParentBranchesHasBeenSet)
  {
   payload.WithBool("includeParentBranches", m_includeParentBranches);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
