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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Information about an application revision.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GenericRevisionInfo">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API GenericRevisionInfo
  {
  public:
    GenericRevisionInfo();
    GenericRevisionInfo(Aws::Utils::Json::JsonView jsonValue);
    GenericRevisionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A comment about the revision.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A comment about the revision.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A comment about the revision.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A comment about the revision.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A comment about the revision.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A comment about the revision.</p>
     */
    inline GenericRevisionInfo& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A comment about the revision.</p>
     */
    inline GenericRevisionInfo& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A comment about the revision.</p>
     */
    inline GenericRevisionInfo& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The deployment groups for which this is the current target revision.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeploymentGroups() const{ return m_deploymentGroups; }

    /**
     * <p>The deployment groups for which this is the current target revision.</p>
     */
    inline bool DeploymentGroupsHasBeenSet() const { return m_deploymentGroupsHasBeenSet; }

    /**
     * <p>The deployment groups for which this is the current target revision.</p>
     */
    inline void SetDeploymentGroups(const Aws::Vector<Aws::String>& value) { m_deploymentGroupsHasBeenSet = true; m_deploymentGroups = value; }

    /**
     * <p>The deployment groups for which this is the current target revision.</p>
     */
    inline void SetDeploymentGroups(Aws::Vector<Aws::String>&& value) { m_deploymentGroupsHasBeenSet = true; m_deploymentGroups = std::move(value); }

    /**
     * <p>The deployment groups for which this is the current target revision.</p>
     */
    inline GenericRevisionInfo& WithDeploymentGroups(const Aws::Vector<Aws::String>& value) { SetDeploymentGroups(value); return *this;}

    /**
     * <p>The deployment groups for which this is the current target revision.</p>
     */
    inline GenericRevisionInfo& WithDeploymentGroups(Aws::Vector<Aws::String>&& value) { SetDeploymentGroups(std::move(value)); return *this;}

    /**
     * <p>The deployment groups for which this is the current target revision.</p>
     */
    inline GenericRevisionInfo& AddDeploymentGroups(const Aws::String& value) { m_deploymentGroupsHasBeenSet = true; m_deploymentGroups.push_back(value); return *this; }

    /**
     * <p>The deployment groups for which this is the current target revision.</p>
     */
    inline GenericRevisionInfo& AddDeploymentGroups(Aws::String&& value) { m_deploymentGroupsHasBeenSet = true; m_deploymentGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>The deployment groups for which this is the current target revision.</p>
     */
    inline GenericRevisionInfo& AddDeploymentGroups(const char* value) { m_deploymentGroupsHasBeenSet = true; m_deploymentGroups.push_back(value); return *this; }


    /**
     * <p>When the revision was first used by AWS CodeDeploy.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstUsedTime() const{ return m_firstUsedTime; }

    /**
     * <p>When the revision was first used by AWS CodeDeploy.</p>
     */
    inline bool FirstUsedTimeHasBeenSet() const { return m_firstUsedTimeHasBeenSet; }

    /**
     * <p>When the revision was first used by AWS CodeDeploy.</p>
     */
    inline void SetFirstUsedTime(const Aws::Utils::DateTime& value) { m_firstUsedTimeHasBeenSet = true; m_firstUsedTime = value; }

    /**
     * <p>When the revision was first used by AWS CodeDeploy.</p>
     */
    inline void SetFirstUsedTime(Aws::Utils::DateTime&& value) { m_firstUsedTimeHasBeenSet = true; m_firstUsedTime = std::move(value); }

    /**
     * <p>When the revision was first used by AWS CodeDeploy.</p>
     */
    inline GenericRevisionInfo& WithFirstUsedTime(const Aws::Utils::DateTime& value) { SetFirstUsedTime(value); return *this;}

    /**
     * <p>When the revision was first used by AWS CodeDeploy.</p>
     */
    inline GenericRevisionInfo& WithFirstUsedTime(Aws::Utils::DateTime&& value) { SetFirstUsedTime(std::move(value)); return *this;}


    /**
     * <p>When the revision was last used by AWS CodeDeploy.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUsedTime() const{ return m_lastUsedTime; }

    /**
     * <p>When the revision was last used by AWS CodeDeploy.</p>
     */
    inline bool LastUsedTimeHasBeenSet() const { return m_lastUsedTimeHasBeenSet; }

    /**
     * <p>When the revision was last used by AWS CodeDeploy.</p>
     */
    inline void SetLastUsedTime(const Aws::Utils::DateTime& value) { m_lastUsedTimeHasBeenSet = true; m_lastUsedTime = value; }

    /**
     * <p>When the revision was last used by AWS CodeDeploy.</p>
     */
    inline void SetLastUsedTime(Aws::Utils::DateTime&& value) { m_lastUsedTimeHasBeenSet = true; m_lastUsedTime = std::move(value); }

    /**
     * <p>When the revision was last used by AWS CodeDeploy.</p>
     */
    inline GenericRevisionInfo& WithLastUsedTime(const Aws::Utils::DateTime& value) { SetLastUsedTime(value); return *this;}

    /**
     * <p>When the revision was last used by AWS CodeDeploy.</p>
     */
    inline GenericRevisionInfo& WithLastUsedTime(Aws::Utils::DateTime&& value) { SetLastUsedTime(std::move(value)); return *this;}


    /**
     * <p>When the revision was registered with AWS CodeDeploy.</p>
     */
    inline const Aws::Utils::DateTime& GetRegisterTime() const{ return m_registerTime; }

    /**
     * <p>When the revision was registered with AWS CodeDeploy.</p>
     */
    inline bool RegisterTimeHasBeenSet() const { return m_registerTimeHasBeenSet; }

    /**
     * <p>When the revision was registered with AWS CodeDeploy.</p>
     */
    inline void SetRegisterTime(const Aws::Utils::DateTime& value) { m_registerTimeHasBeenSet = true; m_registerTime = value; }

    /**
     * <p>When the revision was registered with AWS CodeDeploy.</p>
     */
    inline void SetRegisterTime(Aws::Utils::DateTime&& value) { m_registerTimeHasBeenSet = true; m_registerTime = std::move(value); }

    /**
     * <p>When the revision was registered with AWS CodeDeploy.</p>
     */
    inline GenericRevisionInfo& WithRegisterTime(const Aws::Utils::DateTime& value) { SetRegisterTime(value); return *this;}

    /**
     * <p>When the revision was registered with AWS CodeDeploy.</p>
     */
    inline GenericRevisionInfo& WithRegisterTime(Aws::Utils::DateTime&& value) { SetRegisterTime(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Aws::String> m_deploymentGroups;
    bool m_deploymentGroupsHasBeenSet;

    Aws::Utils::DateTime m_firstUsedTime;
    bool m_firstUsedTimeHasBeenSet;

    Aws::Utils::DateTime m_lastUsedTime;
    bool m_lastUsedTimeHasBeenSet;

    Aws::Utils::DateTime m_registerTime;
    bool m_registerTimeHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
