/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/PullRequestBuildPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

PullRequestBuildPolicy::PullRequestBuildPolicy(JsonView jsonValue)
{
  *this = jsonValue;
}

PullRequestBuildPolicy& PullRequestBuildPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("requiresCommentApproval"))
  {
    m_requiresCommentApproval = PullRequestBuildCommentApprovalMapper::GetPullRequestBuildCommentApprovalForName(jsonValue.GetString("requiresCommentApproval"));
    m_requiresCommentApprovalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("approverRoles"))
  {
    Aws::Utils::Array<JsonView> approverRolesJsonList = jsonValue.GetArray("approverRoles");
    for(unsigned approverRolesIndex = 0; approverRolesIndex < approverRolesJsonList.GetLength(); ++approverRolesIndex)
    {
      m_approverRoles.push_back(PullRequestBuildApproverRoleMapper::GetPullRequestBuildApproverRoleForName(approverRolesJsonList[approverRolesIndex].AsString()));
    }
    m_approverRolesHasBeenSet = true;
  }
  return *this;
}

JsonValue PullRequestBuildPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_requiresCommentApprovalHasBeenSet)
  {
   payload.WithString("requiresCommentApproval", PullRequestBuildCommentApprovalMapper::GetNameForPullRequestBuildCommentApproval(m_requiresCommentApproval));
  }

  if(m_approverRolesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> approverRolesJsonList(m_approverRoles.size());
   for(unsigned approverRolesIndex = 0; approverRolesIndex < approverRolesJsonList.GetLength(); ++approverRolesIndex)
   {
     approverRolesJsonList[approverRolesIndex].AsString(PullRequestBuildApproverRoleMapper::GetNameForPullRequestBuildApproverRole(m_approverRoles[approverRolesIndex]));
   }
   payload.WithArray("approverRoles", std::move(approverRolesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
