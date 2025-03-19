/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>DeleteGitHubAccount</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeleteGitHubAccountTokenInput">AWS
   * API Reference</a></p>
   */
  class DeleteGitHubAccountTokenRequest : public CodeDeployRequest
  {
  public:
    AWS_CODEDEPLOY_API DeleteGitHubAccountTokenRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteGitHubAccountToken"; }

    AWS_CODEDEPLOY_API Aws::String SerializePayload() const override;

    AWS_CODEDEPLOY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the GitHub account connection to delete.</p>
     */
    inline const Aws::String& GetTokenName() const { return m_tokenName; }
    inline bool TokenNameHasBeenSet() const { return m_tokenNameHasBeenSet; }
    template<typename TokenNameT = Aws::String>
    void SetTokenName(TokenNameT&& value) { m_tokenNameHasBeenSet = true; m_tokenName = std::forward<TokenNameT>(value); }
    template<typename TokenNameT = Aws::String>
    DeleteGitHubAccountTokenRequest& WithTokenName(TokenNameT&& value) { SetTokenName(std::forward<TokenNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tokenName;
    bool m_tokenNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
