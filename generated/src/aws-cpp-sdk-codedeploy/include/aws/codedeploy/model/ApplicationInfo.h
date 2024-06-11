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
    AWS_CODEDEPLOY_API ApplicationInfo();
    AWS_CODEDEPLOY_API ApplicationInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API ApplicationInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The application ID.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline ApplicationInfo& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline ApplicationInfo& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline ApplicationInfo& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application name.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }
    inline ApplicationInfo& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}
    inline ApplicationInfo& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}
    inline ApplicationInfo& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the application was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline ApplicationInfo& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline ApplicationInfo& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if the user has authenticated with GitHub for the specified application.
     * Otherwise, false.</p>
     */
    inline bool GetLinkedToGitHub() const{ return m_linkedToGitHub; }
    inline bool LinkedToGitHubHasBeenSet() const { return m_linkedToGitHubHasBeenSet; }
    inline void SetLinkedToGitHub(bool value) { m_linkedToGitHubHasBeenSet = true; m_linkedToGitHub = value; }
    inline ApplicationInfo& WithLinkedToGitHub(bool value) { SetLinkedToGitHub(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for a connection to a GitHub account.</p>
     */
    inline const Aws::String& GetGitHubAccountName() const{ return m_gitHubAccountName; }
    inline bool GitHubAccountNameHasBeenSet() const { return m_gitHubAccountNameHasBeenSet; }
    inline void SetGitHubAccountName(const Aws::String& value) { m_gitHubAccountNameHasBeenSet = true; m_gitHubAccountName = value; }
    inline void SetGitHubAccountName(Aws::String&& value) { m_gitHubAccountNameHasBeenSet = true; m_gitHubAccountName = std::move(value); }
    inline void SetGitHubAccountName(const char* value) { m_gitHubAccountNameHasBeenSet = true; m_gitHubAccountName.assign(value); }
    inline ApplicationInfo& WithGitHubAccountName(const Aws::String& value) { SetGitHubAccountName(value); return *this;}
    inline ApplicationInfo& WithGitHubAccountName(Aws::String&& value) { SetGitHubAccountName(std::move(value)); return *this;}
    inline ApplicationInfo& WithGitHubAccountName(const char* value) { SetGitHubAccountName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination platform type for deployment of the application
     * (<code>Lambda</code> or <code>Server</code>).</p>
     */
    inline const ComputePlatform& GetComputePlatform() const{ return m_computePlatform; }
    inline bool ComputePlatformHasBeenSet() const { return m_computePlatformHasBeenSet; }
    inline void SetComputePlatform(const ComputePlatform& value) { m_computePlatformHasBeenSet = true; m_computePlatform = value; }
    inline void SetComputePlatform(ComputePlatform&& value) { m_computePlatformHasBeenSet = true; m_computePlatform = std::move(value); }
    inline ApplicationInfo& WithComputePlatform(const ComputePlatform& value) { SetComputePlatform(value); return *this;}
    inline ApplicationInfo& WithComputePlatform(ComputePlatform&& value) { SetComputePlatform(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    bool m_linkedToGitHub;
    bool m_linkedToGitHubHasBeenSet = false;

    Aws::String m_gitHubAccountName;
    bool m_gitHubAccountNameHasBeenSet = false;

    ComputePlatform m_computePlatform;
    bool m_computePlatformHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
