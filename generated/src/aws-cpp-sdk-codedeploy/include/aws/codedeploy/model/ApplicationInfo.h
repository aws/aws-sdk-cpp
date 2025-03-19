/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codedeploy/model/ComputePlatform.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about an application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ApplicationInfo">AWS
   * API Reference</a></p>
   */
  class ApplicationInfo
  {
  public:
    AWS_CODEDEPLOY_API ApplicationInfo() = default;
    AWS_CODEDEPLOY_API ApplicationInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API ApplicationInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The application ID.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    ApplicationInfo& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application name.</p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    ApplicationInfo& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the application was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    ApplicationInfo& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if the user has authenticated with GitHub for the specified application.
     * Otherwise, false.</p>
     */
    inline bool GetLinkedToGitHub() const { return m_linkedToGitHub; }
    inline bool LinkedToGitHubHasBeenSet() const { return m_linkedToGitHubHasBeenSet; }
    inline void SetLinkedToGitHub(bool value) { m_linkedToGitHubHasBeenSet = true; m_linkedToGitHub = value; }
    inline ApplicationInfo& WithLinkedToGitHub(bool value) { SetLinkedToGitHub(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for a connection to a GitHub account.</p>
     */
    inline const Aws::String& GetGitHubAccountName() const { return m_gitHubAccountName; }
    inline bool GitHubAccountNameHasBeenSet() const { return m_gitHubAccountNameHasBeenSet; }
    template<typename GitHubAccountNameT = Aws::String>
    void SetGitHubAccountName(GitHubAccountNameT&& value) { m_gitHubAccountNameHasBeenSet = true; m_gitHubAccountName = std::forward<GitHubAccountNameT>(value); }
    template<typename GitHubAccountNameT = Aws::String>
    ApplicationInfo& WithGitHubAccountName(GitHubAccountNameT&& value) { SetGitHubAccountName(std::forward<GitHubAccountNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination platform type for deployment of the application
     * (<code>Lambda</code> or <code>Server</code>).</p>
     */
    inline ComputePlatform GetComputePlatform() const { return m_computePlatform; }
    inline bool ComputePlatformHasBeenSet() const { return m_computePlatformHasBeenSet; }
    inline void SetComputePlatform(ComputePlatform value) { m_computePlatformHasBeenSet = true; m_computePlatform = value; }
    inline ApplicationInfo& WithComputePlatform(ComputePlatform value) { SetComputePlatform(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    bool m_linkedToGitHub{false};
    bool m_linkedToGitHubHasBeenSet = false;

    Aws::String m_gitHubAccountName;
    bool m_gitHubAccountNameHasBeenSet = false;

    ComputePlatform m_computePlatform{ComputePlatform::NOT_SET};
    bool m_computePlatformHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
