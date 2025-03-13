/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/InstalledComponentLifecycleState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace GreengrassV2
{
namespace Model
{

  /**
   * <p>Contains information about a component on a Greengrass core
   * device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/InstalledComponent">AWS
   * API Reference</a></p>
   */
  class InstalledComponent
  {
  public:
    AWS_GREENGRASSV2_API InstalledComponent() = default;
    AWS_GREENGRASSV2_API InstalledComponent(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API InstalledComponent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetComponentName() const { return m_componentName; }
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }
    template<typename ComponentNameT = Aws::String>
    void SetComponentName(ComponentNameT&& value) { m_componentNameHasBeenSet = true; m_componentName = std::forward<ComponentNameT>(value); }
    template<typename ComponentNameT = Aws::String>
    InstalledComponent& WithComponentName(ComponentNameT&& value) { SetComponentName(std::forward<ComponentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the component.</p>
     */
    inline const Aws::String& GetComponentVersion() const { return m_componentVersion; }
    inline bool ComponentVersionHasBeenSet() const { return m_componentVersionHasBeenSet; }
    template<typename ComponentVersionT = Aws::String>
    void SetComponentVersion(ComponentVersionT&& value) { m_componentVersionHasBeenSet = true; m_componentVersion = std::forward<ComponentVersionT>(value); }
    template<typename ComponentVersionT = Aws::String>
    InstalledComponent& WithComponentVersion(ComponentVersionT&& value) { SetComponentVersion(std::forward<ComponentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle state of the component.</p>
     */
    inline InstalledComponentLifecycleState GetLifecycleState() const { return m_lifecycleState; }
    inline bool LifecycleStateHasBeenSet() const { return m_lifecycleStateHasBeenSet; }
    inline void SetLifecycleState(InstalledComponentLifecycleState value) { m_lifecycleStateHasBeenSet = true; m_lifecycleState = value; }
    inline InstalledComponent& WithLifecycleState(InstalledComponentLifecycleState value) { SetLifecycleState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed response about the lifecycle state of the component that explains
     * the reason why a component has an error or is broken.</p>
     */
    inline const Aws::String& GetLifecycleStateDetails() const { return m_lifecycleStateDetails; }
    inline bool LifecycleStateDetailsHasBeenSet() const { return m_lifecycleStateDetailsHasBeenSet; }
    template<typename LifecycleStateDetailsT = Aws::String>
    void SetLifecycleStateDetails(LifecycleStateDetailsT&& value) { m_lifecycleStateDetailsHasBeenSet = true; m_lifecycleStateDetails = std::forward<LifecycleStateDetailsT>(value); }
    template<typename LifecycleStateDetailsT = Aws::String>
    InstalledComponent& WithLifecycleStateDetails(LifecycleStateDetailsT&& value) { SetLifecycleStateDetails(std::forward<LifecycleStateDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not the component is a root component.</p>
     */
    inline bool GetIsRoot() const { return m_isRoot; }
    inline bool IsRootHasBeenSet() const { return m_isRootHasBeenSet; }
    inline void SetIsRoot(bool value) { m_isRootHasBeenSet = true; m_isRoot = value; }
    inline InstalledComponent& WithIsRoot(bool value) { SetIsRoot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of how current the data is.</p> <p>This response is based off of
     * component state changes. The status reflects component disruptions and
     * deployments. If a component only sees a configuration update during a
     * deployment, it might not undergo a state change and this status would not be
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatusChangeTimestamp() const { return m_lastStatusChangeTimestamp; }
    inline bool LastStatusChangeTimestampHasBeenSet() const { return m_lastStatusChangeTimestampHasBeenSet; }
    template<typename LastStatusChangeTimestampT = Aws::Utils::DateTime>
    void SetLastStatusChangeTimestamp(LastStatusChangeTimestampT&& value) { m_lastStatusChangeTimestampHasBeenSet = true; m_lastStatusChangeTimestamp = std::forward<LastStatusChangeTimestampT>(value); }
    template<typename LastStatusChangeTimestampT = Aws::Utils::DateTime>
    InstalledComponent& WithLastStatusChangeTimestamp(LastStatusChangeTimestampT&& value) { SetLastStatusChangeTimestamp(std::forward<LastStatusChangeTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the Greengrass core device sent a message containing a
     * component's state to the Amazon Web Services Cloud.</p> <p>A component does not
     * need to see a state change for this field to update.</p>
     */
    inline const Aws::Utils::DateTime& GetLastReportedTimestamp() const { return m_lastReportedTimestamp; }
    inline bool LastReportedTimestampHasBeenSet() const { return m_lastReportedTimestampHasBeenSet; }
    template<typename LastReportedTimestampT = Aws::Utils::DateTime>
    void SetLastReportedTimestamp(LastReportedTimestampT&& value) { m_lastReportedTimestampHasBeenSet = true; m_lastReportedTimestamp = std::forward<LastReportedTimestampT>(value); }
    template<typename LastReportedTimestampT = Aws::Utils::DateTime>
    InstalledComponent& WithLastReportedTimestamp(LastReportedTimestampT&& value) { SetLastReportedTimestamp(std::forward<LastReportedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent deployment source that brought the component to the
     * Greengrass core device. For a thing group deployment or thing deployment, the
     * source will be the ID of the last deployment that contained the component. For
     * local deployments it will be <code>LOCAL</code>.</p>  <p>Any deployment
     * will attempt to reinstall currently broken components on the device, which will
     * update the last installation source.</p> 
     */
    inline const Aws::String& GetLastInstallationSource() const { return m_lastInstallationSource; }
    inline bool LastInstallationSourceHasBeenSet() const { return m_lastInstallationSourceHasBeenSet; }
    template<typename LastInstallationSourceT = Aws::String>
    void SetLastInstallationSource(LastInstallationSourceT&& value) { m_lastInstallationSourceHasBeenSet = true; m_lastInstallationSource = std::forward<LastInstallationSourceT>(value); }
    template<typename LastInstallationSourceT = Aws::String>
    InstalledComponent& WithLastInstallationSource(LastInstallationSourceT&& value) { SetLastInstallationSource(std::forward<LastInstallationSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status codes that indicate the reason for failure whenever the
     * <code>lifecycleState</code> has an error or is in a broken state.</p> 
     * <p>Greengrass nucleus v2.8.0 or later is required to get an accurate
     * <code>lifecycleStatusCodes</code> response. This response can be inaccurate in
     * earlier Greengrass nucleus versions.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetLifecycleStatusCodes() const { return m_lifecycleStatusCodes; }
    inline bool LifecycleStatusCodesHasBeenSet() const { return m_lifecycleStatusCodesHasBeenSet; }
    template<typename LifecycleStatusCodesT = Aws::Vector<Aws::String>>
    void SetLifecycleStatusCodes(LifecycleStatusCodesT&& value) { m_lifecycleStatusCodesHasBeenSet = true; m_lifecycleStatusCodes = std::forward<LifecycleStatusCodesT>(value); }
    template<typename LifecycleStatusCodesT = Aws::Vector<Aws::String>>
    InstalledComponent& WithLifecycleStatusCodes(LifecycleStatusCodesT&& value) { SetLifecycleStatusCodes(std::forward<LifecycleStatusCodesT>(value)); return *this;}
    template<typename LifecycleStatusCodesT = Aws::String>
    InstalledComponent& AddLifecycleStatusCodes(LifecycleStatusCodesT&& value) { m_lifecycleStatusCodesHasBeenSet = true; m_lifecycleStatusCodes.emplace_back(std::forward<LifecycleStatusCodesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::String m_componentVersion;
    bool m_componentVersionHasBeenSet = false;

    InstalledComponentLifecycleState m_lifecycleState{InstalledComponentLifecycleState::NOT_SET};
    bool m_lifecycleStateHasBeenSet = false;

    Aws::String m_lifecycleStateDetails;
    bool m_lifecycleStateDetailsHasBeenSet = false;

    bool m_isRoot{false};
    bool m_isRootHasBeenSet = false;

    Aws::Utils::DateTime m_lastStatusChangeTimestamp{};
    bool m_lastStatusChangeTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastReportedTimestamp{};
    bool m_lastReportedTimestampHasBeenSet = false;

    Aws::String m_lastInstallationSource;
    bool m_lastInstallationSourceHasBeenSet = false;

    Aws::Vector<Aws::String> m_lifecycleStatusCodes;
    bool m_lifecycleStatusCodesHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
