/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class StartSandboxConnectionRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API StartSandboxConnectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSandboxConnection"; }

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
    StartSandboxConnectionRequest& WithSandboxId(SandboxIdT&& value) { SetSandboxId(std::forward<SandboxIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sandboxId;
    bool m_sandboxIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
