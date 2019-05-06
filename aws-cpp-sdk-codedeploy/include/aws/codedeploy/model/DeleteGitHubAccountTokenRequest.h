/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Represents the input of a DeleteGitHubAccount operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeleteGitHubAccountTokenInput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API DeleteGitHubAccountTokenRequest : public CodeDeployRequest
  {
  public:
    DeleteGitHubAccountTokenRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteGitHubAccountToken"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the GitHub account connection to delete.</p>
     */
    inline const Aws::String& GetTokenName() const{ return m_tokenName; }

    /**
     * <p>The name of the GitHub account connection to delete.</p>
     */
    inline bool TokenNameHasBeenSet() const { return m_tokenNameHasBeenSet; }

    /**
     * <p>The name of the GitHub account connection to delete.</p>
     */
    inline void SetTokenName(const Aws::String& value) { m_tokenNameHasBeenSet = true; m_tokenName = value; }

    /**
     * <p>The name of the GitHub account connection to delete.</p>
     */
    inline void SetTokenName(Aws::String&& value) { m_tokenNameHasBeenSet = true; m_tokenName = std::move(value); }

    /**
     * <p>The name of the GitHub account connection to delete.</p>
     */
    inline void SetTokenName(const char* value) { m_tokenNameHasBeenSet = true; m_tokenName.assign(value); }

    /**
     * <p>The name of the GitHub account connection to delete.</p>
     */
    inline DeleteGitHubAccountTokenRequest& WithTokenName(const Aws::String& value) { SetTokenName(value); return *this;}

    /**
     * <p>The name of the GitHub account connection to delete.</p>
     */
    inline DeleteGitHubAccountTokenRequest& WithTokenName(Aws::String&& value) { SetTokenName(std::move(value)); return *this;}

    /**
     * <p>The name of the GitHub account connection to delete.</p>
     */
    inline DeleteGitHubAccountTokenRequest& WithTokenName(const char* value) { SetTokenName(value); return *this;}

  private:

    Aws::String m_tokenName;
    bool m_tokenNameHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
