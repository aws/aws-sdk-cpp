/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class BatchGetCommandExecutionsRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API BatchGetCommandExecutionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetCommandExecutions"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A <code>sandboxId</code> or <code>sandboxArn</code>.</p>
     */
    inline const Aws::String& GetSandboxId() const { return m_sandboxId; }
    inline bool SandboxIdHasBeenSet() const { return m_sandboxIdHasBeenSet; }
    template<typename SandboxIdT = Aws::String>
    void SetSandboxId(SandboxIdT&& value) { m_sandboxIdHasBeenSet = true; m_sandboxId = std::forward<SandboxIdT>(value); }
    template<typename SandboxIdT = Aws::String>
    BatchGetCommandExecutionsRequest& WithSandboxId(SandboxIdT&& value) { SetSandboxId(std::forward<SandboxIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comma separated list of <code>commandExecutionIds</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommandExecutionIds() const { return m_commandExecutionIds; }
    inline bool CommandExecutionIdsHasBeenSet() const { return m_commandExecutionIdsHasBeenSet; }
    template<typename CommandExecutionIdsT = Aws::Vector<Aws::String>>
    void SetCommandExecutionIds(CommandExecutionIdsT&& value) { m_commandExecutionIdsHasBeenSet = true; m_commandExecutionIds = std::forward<CommandExecutionIdsT>(value); }
    template<typename CommandExecutionIdsT = Aws::Vector<Aws::String>>
    BatchGetCommandExecutionsRequest& WithCommandExecutionIds(CommandExecutionIdsT&& value) { SetCommandExecutionIds(std::forward<CommandExecutionIdsT>(value)); return *this;}
    template<typename CommandExecutionIdsT = Aws::String>
    BatchGetCommandExecutionsRequest& AddCommandExecutionIds(CommandExecutionIdsT&& value) { m_commandExecutionIdsHasBeenSet = true; m_commandExecutionIds.emplace_back(std::forward<CommandExecutionIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_sandboxId;
    bool m_sandboxIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_commandExecutionIds;
    bool m_commandExecutionIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
