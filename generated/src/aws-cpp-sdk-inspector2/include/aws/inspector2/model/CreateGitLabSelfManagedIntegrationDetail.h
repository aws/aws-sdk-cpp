/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Contains details required to create an integration with a self-managed GitLab
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CreateGitLabSelfManagedIntegrationDetail">AWS
   * API Reference</a></p>
   */
  class CreateGitLabSelfManagedIntegrationDetail
  {
  public:
    AWS_INSPECTOR2_API CreateGitLabSelfManagedIntegrationDetail() = default;
    AWS_INSPECTOR2_API CreateGitLabSelfManagedIntegrationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CreateGitLabSelfManagedIntegrationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL of the self-managed GitLab instance.</p>
     */
    inline const Aws::String& GetInstanceUrl() const { return m_instanceUrl; }
    inline bool InstanceUrlHasBeenSet() const { return m_instanceUrlHasBeenSet; }
    template<typename InstanceUrlT = Aws::String>
    void SetInstanceUrl(InstanceUrlT&& value) { m_instanceUrlHasBeenSet = true; m_instanceUrl = std::forward<InstanceUrlT>(value); }
    template<typename InstanceUrlT = Aws::String>
    CreateGitLabSelfManagedIntegrationDetail& WithInstanceUrl(InstanceUrlT&& value) { SetInstanceUrl(std::forward<InstanceUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The personal access token used to authenticate with the self-managed GitLab
     * instance.</p>
     */
    inline const Aws::String& GetAccessToken() const { return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    template<typename AccessTokenT = Aws::String>
    void SetAccessToken(AccessTokenT&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::forward<AccessTokenT>(value); }
    template<typename AccessTokenT = Aws::String>
    CreateGitLabSelfManagedIntegrationDetail& WithAccessToken(AccessTokenT&& value) { SetAccessToken(std::forward<AccessTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceUrl;
    bool m_instanceUrlHasBeenSet = false;

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
