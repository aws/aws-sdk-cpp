/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/m2/MainframeModernizationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

  /**
   */
  class UpdateEnvironmentRequest : public MainframeModernizationRequest
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API UpdateEnvironmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEnvironment"; }

    AWS_MAINFRAMEMODERNIZATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Indicates whether to update the runtime environment during the maintenance
     * window. The default is false. Currently, Amazon Web Services Mainframe
     * Modernization accepts the <code>engineVersion</code> parameter only if
     * <code>applyDuringMaintenanceWindow</code> is true. If any parameter other than
     * <code>engineVersion</code> is provided in <code>UpdateEnvironmentRequest</code>,
     * it will fail if <code>applyDuringMaintenanceWindow</code> is set to true.</p>
     */
    inline bool GetApplyDuringMaintenanceWindow() const { return m_applyDuringMaintenanceWindow; }
    inline bool ApplyDuringMaintenanceWindowHasBeenSet() const { return m_applyDuringMaintenanceWindowHasBeenSet; }
    inline void SetApplyDuringMaintenanceWindow(bool value) { m_applyDuringMaintenanceWindowHasBeenSet = true; m_applyDuringMaintenanceWindow = value; }
    inline UpdateEnvironmentRequest& WithApplyDuringMaintenanceWindow(bool value) { SetApplyDuringMaintenanceWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired capacity for the runtime environment to update. The minimum
     * possible value is 0 and the maximum is 100.</p>
     */
    inline int GetDesiredCapacity() const { return m_desiredCapacity; }
    inline bool DesiredCapacityHasBeenSet() const { return m_desiredCapacityHasBeenSet; }
    inline void SetDesiredCapacity(int value) { m_desiredCapacityHasBeenSet = true; m_desiredCapacity = value; }
    inline UpdateEnvironmentRequest& WithDesiredCapacity(int value) { SetDesiredCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the runtime engine for the runtime environment.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    UpdateEnvironmentRequest& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the runtime environment that you want to update.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    UpdateEnvironmentRequest& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Forces the updates on the environment. This option is needed if the
     * applications in the environment are not stopped or if there are ongoing
     * application-related activities in the environment.</p> <p>If you use this
     * option, be aware that it could lead to data corruption in the applications, and
     * that you might need to perform repair and recovery procedures for the
     * applications.</p> <p>This option is not needed if the attribute being updated is
     * <code>preferredMaintenanceWindow</code>.</p>
     */
    inline bool GetForceUpdate() const { return m_forceUpdate; }
    inline bool ForceUpdateHasBeenSet() const { return m_forceUpdateHasBeenSet; }
    inline void SetForceUpdate(bool value) { m_forceUpdateHasBeenSet = true; m_forceUpdate = value; }
    inline UpdateEnvironmentRequest& WithForceUpdate(bool value) { SetForceUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type for the runtime environment to update.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    UpdateEnvironmentRequest& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures the maintenance window that you want for the runtime environment.
     * The maintenance window must have the format <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * and must be less than 24 hours. The following two examples are valid maintenance
     * windows: <code>sun:23:45-mon:00:15</code> or <code>sat:01:00-sat:03:00</code>.
     * </p> <p>If you do not provide a value, a random system-generated value will be
     * assigned.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value); }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    UpdateEnvironmentRequest& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
    ///@}
  private:

    bool m_applyDuringMaintenanceWindow{false};
    bool m_applyDuringMaintenanceWindowHasBeenSet = false;

    int m_desiredCapacity{0};
    bool m_desiredCapacityHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    bool m_forceUpdate{false};
    bool m_forceUpdateHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
