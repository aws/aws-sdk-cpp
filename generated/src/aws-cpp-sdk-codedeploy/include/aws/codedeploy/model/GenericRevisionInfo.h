/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GenericRevisionInfo
  {
  public:
    AWS_CODEDEPLOY_API GenericRevisionInfo() = default;
    AWS_CODEDEPLOY_API GenericRevisionInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API GenericRevisionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A comment about the revision.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GenericRevisionInfo& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment groups for which this is the current target revision.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeploymentGroups() const { return m_deploymentGroups; }
    inline bool DeploymentGroupsHasBeenSet() const { return m_deploymentGroupsHasBeenSet; }
    template<typename DeploymentGroupsT = Aws::Vector<Aws::String>>
    void SetDeploymentGroups(DeploymentGroupsT&& value) { m_deploymentGroupsHasBeenSet = true; m_deploymentGroups = std::forward<DeploymentGroupsT>(value); }
    template<typename DeploymentGroupsT = Aws::Vector<Aws::String>>
    GenericRevisionInfo& WithDeploymentGroups(DeploymentGroupsT&& value) { SetDeploymentGroups(std::forward<DeploymentGroupsT>(value)); return *this;}
    template<typename DeploymentGroupsT = Aws::String>
    GenericRevisionInfo& AddDeploymentGroups(DeploymentGroupsT&& value) { m_deploymentGroupsHasBeenSet = true; m_deploymentGroups.emplace_back(std::forward<DeploymentGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When the revision was first used by CodeDeploy.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstUsedTime() const { return m_firstUsedTime; }
    inline bool FirstUsedTimeHasBeenSet() const { return m_firstUsedTimeHasBeenSet; }
    template<typename FirstUsedTimeT = Aws::Utils::DateTime>
    void SetFirstUsedTime(FirstUsedTimeT&& value) { m_firstUsedTimeHasBeenSet = true; m_firstUsedTime = std::forward<FirstUsedTimeT>(value); }
    template<typename FirstUsedTimeT = Aws::Utils::DateTime>
    GenericRevisionInfo& WithFirstUsedTime(FirstUsedTimeT&& value) { SetFirstUsedTime(std::forward<FirstUsedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the revision was last used by CodeDeploy.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUsedTime() const { return m_lastUsedTime; }
    inline bool LastUsedTimeHasBeenSet() const { return m_lastUsedTimeHasBeenSet; }
    template<typename LastUsedTimeT = Aws::Utils::DateTime>
    void SetLastUsedTime(LastUsedTimeT&& value) { m_lastUsedTimeHasBeenSet = true; m_lastUsedTime = std::forward<LastUsedTimeT>(value); }
    template<typename LastUsedTimeT = Aws::Utils::DateTime>
    GenericRevisionInfo& WithLastUsedTime(LastUsedTimeT&& value) { SetLastUsedTime(std::forward<LastUsedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the revision was registered with CodeDeploy.</p>
     */
    inline const Aws::Utils::DateTime& GetRegisterTime() const { return m_registerTime; }
    inline bool RegisterTimeHasBeenSet() const { return m_registerTimeHasBeenSet; }
    template<typename RegisterTimeT = Aws::Utils::DateTime>
    void SetRegisterTime(RegisterTimeT&& value) { m_registerTimeHasBeenSet = true; m_registerTime = std::forward<RegisterTimeT>(value); }
    template<typename RegisterTimeT = Aws::Utils::DateTime>
    GenericRevisionInfo& WithRegisterTime(RegisterTimeT&& value) { SetRegisterTime(std::forward<RegisterTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_deploymentGroups;
    bool m_deploymentGroupsHasBeenSet = false;

    Aws::Utils::DateTime m_firstUsedTime{};
    bool m_firstUsedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUsedTime{};
    bool m_lastUsedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_registerTime{};
    bool m_registerTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
