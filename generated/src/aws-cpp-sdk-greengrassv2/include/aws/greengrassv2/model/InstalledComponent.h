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
    AWS_GREENGRASSV2_API InstalledComponent();
    AWS_GREENGRASSV2_API InstalledComponent(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API InstalledComponent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetComponentName() const{ return m_componentName; }
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }
    inline void SetComponentName(const Aws::String& value) { m_componentNameHasBeenSet = true; m_componentName = value; }
    inline void SetComponentName(Aws::String&& value) { m_componentNameHasBeenSet = true; m_componentName = std::move(value); }
    inline void SetComponentName(const char* value) { m_componentNameHasBeenSet = true; m_componentName.assign(value); }
    inline InstalledComponent& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}
    inline InstalledComponent& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}
    inline InstalledComponent& WithComponentName(const char* value) { SetComponentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the component.</p>
     */
    inline const Aws::String& GetComponentVersion() const{ return m_componentVersion; }
    inline bool ComponentVersionHasBeenSet() const { return m_componentVersionHasBeenSet; }
    inline void SetComponentVersion(const Aws::String& value) { m_componentVersionHasBeenSet = true; m_componentVersion = value; }
    inline void SetComponentVersion(Aws::String&& value) { m_componentVersionHasBeenSet = true; m_componentVersion = std::move(value); }
    inline void SetComponentVersion(const char* value) { m_componentVersionHasBeenSet = true; m_componentVersion.assign(value); }
    inline InstalledComponent& WithComponentVersion(const Aws::String& value) { SetComponentVersion(value); return *this;}
    inline InstalledComponent& WithComponentVersion(Aws::String&& value) { SetComponentVersion(std::move(value)); return *this;}
    inline InstalledComponent& WithComponentVersion(const char* value) { SetComponentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle state of the component.</p>
     */
    inline const InstalledComponentLifecycleState& GetLifecycleState() const{ return m_lifecycleState; }
    inline bool LifecycleStateHasBeenSet() const { return m_lifecycleStateHasBeenSet; }
    inline void SetLifecycleState(const InstalledComponentLifecycleState& value) { m_lifecycleStateHasBeenSet = true; m_lifecycleState = value; }
    inline void SetLifecycleState(InstalledComponentLifecycleState&& value) { m_lifecycleStateHasBeenSet = true; m_lifecycleState = std::move(value); }
    inline InstalledComponent& WithLifecycleState(const InstalledComponentLifecycleState& value) { SetLifecycleState(value); return *this;}
    inline InstalledComponent& WithLifecycleState(InstalledComponentLifecycleState&& value) { SetLifecycleState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed response about the lifecycle state of the component that explains
     * the reason why a component has an error or is broken.</p>
     */
    inline const Aws::String& GetLifecycleStateDetails() const{ return m_lifecycleStateDetails; }
    inline bool LifecycleStateDetailsHasBeenSet() const { return m_lifecycleStateDetailsHasBeenSet; }
    inline void SetLifecycleStateDetails(const Aws::String& value) { m_lifecycleStateDetailsHasBeenSet = true; m_lifecycleStateDetails = value; }
    inline void SetLifecycleStateDetails(Aws::String&& value) { m_lifecycleStateDetailsHasBeenSet = true; m_lifecycleStateDetails = std::move(value); }
    inline void SetLifecycleStateDetails(const char* value) { m_lifecycleStateDetailsHasBeenSet = true; m_lifecycleStateDetails.assign(value); }
    inline InstalledComponent& WithLifecycleStateDetails(const Aws::String& value) { SetLifecycleStateDetails(value); return *this;}
    inline InstalledComponent& WithLifecycleStateDetails(Aws::String&& value) { SetLifecycleStateDetails(std::move(value)); return *this;}
    inline InstalledComponent& WithLifecycleStateDetails(const char* value) { SetLifecycleStateDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not the component is a root component.</p>
     */
    inline bool GetIsRoot() const{ return m_isRoot; }
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
    inline const Aws::Utils::DateTime& GetLastStatusChangeTimestamp() const{ return m_lastStatusChangeTimestamp; }
    inline bool LastStatusChangeTimestampHasBeenSet() const { return m_lastStatusChangeTimestampHasBeenSet; }
    inline void SetLastStatusChangeTimestamp(const Aws::Utils::DateTime& value) { m_lastStatusChangeTimestampHasBeenSet = true; m_lastStatusChangeTimestamp = value; }
    inline void SetLastStatusChangeTimestamp(Aws::Utils::DateTime&& value) { m_lastStatusChangeTimestampHasBeenSet = true; m_lastStatusChangeTimestamp = std::move(value); }
    inline InstalledComponent& WithLastStatusChangeTimestamp(const Aws::Utils::DateTime& value) { SetLastStatusChangeTimestamp(value); return *this;}
    inline InstalledComponent& WithLastStatusChangeTimestamp(Aws::Utils::DateTime&& value) { SetLastStatusChangeTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the Greengrass core device sent a message containing a
     * component's state to the Amazon Web Services Cloud.</p> <p>A component does not
     * need to see a state change for this field to update.</p>
     */
    inline const Aws::Utils::DateTime& GetLastReportedTimestamp() const{ return m_lastReportedTimestamp; }
    inline bool LastReportedTimestampHasBeenSet() const { return m_lastReportedTimestampHasBeenSet; }
    inline void SetLastReportedTimestamp(const Aws::Utils::DateTime& value) { m_lastReportedTimestampHasBeenSet = true; m_lastReportedTimestamp = value; }
    inline void SetLastReportedTimestamp(Aws::Utils::DateTime&& value) { m_lastReportedTimestampHasBeenSet = true; m_lastReportedTimestamp = std::move(value); }
    inline InstalledComponent& WithLastReportedTimestamp(const Aws::Utils::DateTime& value) { SetLastReportedTimestamp(value); return *this;}
    inline InstalledComponent& WithLastReportedTimestamp(Aws::Utils::DateTime&& value) { SetLastReportedTimestamp(std::move(value)); return *this;}
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
    inline const Aws::String& GetLastInstallationSource() const{ return m_lastInstallationSource; }
    inline bool LastInstallationSourceHasBeenSet() const { return m_lastInstallationSourceHasBeenSet; }
    inline void SetLastInstallationSource(const Aws::String& value) { m_lastInstallationSourceHasBeenSet = true; m_lastInstallationSource = value; }
    inline void SetLastInstallationSource(Aws::String&& value) { m_lastInstallationSourceHasBeenSet = true; m_lastInstallationSource = std::move(value); }
    inline void SetLastInstallationSource(const char* value) { m_lastInstallationSourceHasBeenSet = true; m_lastInstallationSource.assign(value); }
    inline InstalledComponent& WithLastInstallationSource(const Aws::String& value) { SetLastInstallationSource(value); return *this;}
    inline InstalledComponent& WithLastInstallationSource(Aws::String&& value) { SetLastInstallationSource(std::move(value)); return *this;}
    inline InstalledComponent& WithLastInstallationSource(const char* value) { SetLastInstallationSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status codes that indicate the reason for failure whenever the
     * <code>lifecycleState</code> has an error or is in a broken state.</p> 
     * <p>Greengrass nucleus v2.8.0 or later is required to get an accurate
     * <code>lifecycleStatusCodes</code> response. This response can be inaccurate in
     * earlier Greengrass nucleus versions.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetLifecycleStatusCodes() const{ return m_lifecycleStatusCodes; }
    inline bool LifecycleStatusCodesHasBeenSet() const { return m_lifecycleStatusCodesHasBeenSet; }
    inline void SetLifecycleStatusCodes(const Aws::Vector<Aws::String>& value) { m_lifecycleStatusCodesHasBeenSet = true; m_lifecycleStatusCodes = value; }
    inline void SetLifecycleStatusCodes(Aws::Vector<Aws::String>&& value) { m_lifecycleStatusCodesHasBeenSet = true; m_lifecycleStatusCodes = std::move(value); }
    inline InstalledComponent& WithLifecycleStatusCodes(const Aws::Vector<Aws::String>& value) { SetLifecycleStatusCodes(value); return *this;}
    inline InstalledComponent& WithLifecycleStatusCodes(Aws::Vector<Aws::String>&& value) { SetLifecycleStatusCodes(std::move(value)); return *this;}
    inline InstalledComponent& AddLifecycleStatusCodes(const Aws::String& value) { m_lifecycleStatusCodesHasBeenSet = true; m_lifecycleStatusCodes.push_back(value); return *this; }
    inline InstalledComponent& AddLifecycleStatusCodes(Aws::String&& value) { m_lifecycleStatusCodesHasBeenSet = true; m_lifecycleStatusCodes.push_back(std::move(value)); return *this; }
    inline InstalledComponent& AddLifecycleStatusCodes(const char* value) { m_lifecycleStatusCodesHasBeenSet = true; m_lifecycleStatusCodes.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::String m_componentVersion;
    bool m_componentVersionHasBeenSet = false;

    InstalledComponentLifecycleState m_lifecycleState;
    bool m_lifecycleStateHasBeenSet = false;

    Aws::String m_lifecycleStateDetails;
    bool m_lifecycleStateDetailsHasBeenSet = false;

    bool m_isRoot;
    bool m_isRootHasBeenSet = false;

    Aws::Utils::DateTime m_lastStatusChangeTimestamp;
    bool m_lastStatusChangeTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastReportedTimestamp;
    bool m_lastReportedTimestampHasBeenSet = false;

    Aws::String m_lastInstallationSource;
    bool m_lastInstallationSourceHasBeenSet = false;

    Aws::Vector<Aws::String> m_lifecycleStatusCodes;
    bool m_lifecycleStatusCodesHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
