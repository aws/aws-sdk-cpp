/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/CommandType.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class StartCommandExecutionRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API StartCommandExecutionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartCommandExecution"; }

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
    StartCommandExecutionRequest& WithSandboxId(SandboxIdT&& value) { SetSandboxId(std::forward<SandboxIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The command that needs to be executed.</p>
     */
    inline const Aws::String& GetCommand() const { return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    template<typename CommandT = Aws::String>
    void SetCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command = std::forward<CommandT>(value); }
    template<typename CommandT = Aws::String>
    StartCommandExecutionRequest& WithCommand(CommandT&& value) { SetCommand(std::forward<CommandT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The command type.</p>
     */
    inline CommandType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(CommandType value) { m_typeHasBeenSet = true; m_type = value; }
    inline StartCommandExecutionRequest& WithType(CommandType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_sandboxId;
    bool m_sandboxIdHasBeenSet = false;

    Aws::String m_command;
    bool m_commandHasBeenSet = false;

    CommandType m_type{CommandType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
