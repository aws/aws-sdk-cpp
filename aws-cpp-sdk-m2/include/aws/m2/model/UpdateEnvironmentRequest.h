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
    AWS_MAINFRAMEMODERNIZATION_API UpdateEnvironmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEnvironment"; }

    AWS_MAINFRAMEMODERNIZATION_API Aws::String SerializePayload() const override;


    /**
     * <p>Indicates whether to update the runtime environment during the maintenance
     * window. The default is false. Currently, Amazon Web Services Mainframe
     * Modernization accepts the <code>engineVersion</code> parameter only if
     * <code>applyDuringMaintenanceWindow</code> is true. If any parameter other than
     * <code>engineVersion</code> is provided in <code>UpdateEnvironmentRequest</code>,
     * it will fail if <code>applyDuringMaintenanceWindow</code> is set to true.</p>
     */
    inline bool GetApplyDuringMaintenanceWindow() const{ return m_applyDuringMaintenanceWindow; }

    /**
     * <p>Indicates whether to update the runtime environment during the maintenance
     * window. The default is false. Currently, Amazon Web Services Mainframe
     * Modernization accepts the <code>engineVersion</code> parameter only if
     * <code>applyDuringMaintenanceWindow</code> is true. If any parameter other than
     * <code>engineVersion</code> is provided in <code>UpdateEnvironmentRequest</code>,
     * it will fail if <code>applyDuringMaintenanceWindow</code> is set to true.</p>
     */
    inline bool ApplyDuringMaintenanceWindowHasBeenSet() const { return m_applyDuringMaintenanceWindowHasBeenSet; }

    /**
     * <p>Indicates whether to update the runtime environment during the maintenance
     * window. The default is false. Currently, Amazon Web Services Mainframe
     * Modernization accepts the <code>engineVersion</code> parameter only if
     * <code>applyDuringMaintenanceWindow</code> is true. If any parameter other than
     * <code>engineVersion</code> is provided in <code>UpdateEnvironmentRequest</code>,
     * it will fail if <code>applyDuringMaintenanceWindow</code> is set to true.</p>
     */
    inline void SetApplyDuringMaintenanceWindow(bool value) { m_applyDuringMaintenanceWindowHasBeenSet = true; m_applyDuringMaintenanceWindow = value; }

    /**
     * <p>Indicates whether to update the runtime environment during the maintenance
     * window. The default is false. Currently, Amazon Web Services Mainframe
     * Modernization accepts the <code>engineVersion</code> parameter only if
     * <code>applyDuringMaintenanceWindow</code> is true. If any parameter other than
     * <code>engineVersion</code> is provided in <code>UpdateEnvironmentRequest</code>,
     * it will fail if <code>applyDuringMaintenanceWindow</code> is set to true.</p>
     */
    inline UpdateEnvironmentRequest& WithApplyDuringMaintenanceWindow(bool value) { SetApplyDuringMaintenanceWindow(value); return *this;}


    /**
     * <p>The desired capacity for the runtime environment to update.</p>
     */
    inline int GetDesiredCapacity() const{ return m_desiredCapacity; }

    /**
     * <p>The desired capacity for the runtime environment to update.</p>
     */
    inline bool DesiredCapacityHasBeenSet() const { return m_desiredCapacityHasBeenSet; }

    /**
     * <p>The desired capacity for the runtime environment to update.</p>
     */
    inline void SetDesiredCapacity(int value) { m_desiredCapacityHasBeenSet = true; m_desiredCapacity = value; }

    /**
     * <p>The desired capacity for the runtime environment to update.</p>
     */
    inline UpdateEnvironmentRequest& WithDesiredCapacity(int value) { SetDesiredCapacity(value); return *this;}


    /**
     * <p>The version of the runtime engine for the runtime environment.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version of the runtime engine for the runtime environment.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The version of the runtime engine for the runtime environment.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version of the runtime engine for the runtime environment.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The version of the runtime engine for the runtime environment.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version of the runtime engine for the runtime environment.</p>
     */
    inline UpdateEnvironmentRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version of the runtime engine for the runtime environment.</p>
     */
    inline UpdateEnvironmentRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the runtime engine for the runtime environment.</p>
     */
    inline UpdateEnvironmentRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The unique identifier of the runtime environment that you want to update.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The unique identifier of the runtime environment that you want to update.</p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>The unique identifier of the runtime environment that you want to update.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>The unique identifier of the runtime environment that you want to update.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>The unique identifier of the runtime environment that you want to update.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>The unique identifier of the runtime environment that you want to update.</p>
     */
    inline UpdateEnvironmentRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The unique identifier of the runtime environment that you want to update.</p>
     */
    inline UpdateEnvironmentRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the runtime environment that you want to update.</p>
     */
    inline UpdateEnvironmentRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>The instance type for the runtime environment to update.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type for the runtime environment to update.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type for the runtime environment to update.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type for the runtime environment to update.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type for the runtime environment to update.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type for the runtime environment to update.</p>
     */
    inline UpdateEnvironmentRequest& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type for the runtime environment to update.</p>
     */
    inline UpdateEnvironmentRequest& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type for the runtime environment to update.</p>
     */
    inline UpdateEnvironmentRequest& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>Configures the maintenance window you want for the runtime environment. If
     * you do not provide a value, a random system-generated value will be
     * assigned.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>Configures the maintenance window you want for the runtime environment. If
     * you do not provide a value, a random system-generated value will be
     * assigned.</p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>Configures the maintenance window you want for the runtime environment. If
     * you do not provide a value, a random system-generated value will be
     * assigned.</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>Configures the maintenance window you want for the runtime environment. If
     * you do not provide a value, a random system-generated value will be
     * assigned.</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>Configures the maintenance window you want for the runtime environment. If
     * you do not provide a value, a random system-generated value will be
     * assigned.</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>Configures the maintenance window you want for the runtime environment. If
     * you do not provide a value, a random system-generated value will be
     * assigned.</p>
     */
    inline UpdateEnvironmentRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>Configures the maintenance window you want for the runtime environment. If
     * you do not provide a value, a random system-generated value will be
     * assigned.</p>
     */
    inline UpdateEnvironmentRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>Configures the maintenance window you want for the runtime environment. If
     * you do not provide a value, a random system-generated value will be
     * assigned.</p>
     */
    inline UpdateEnvironmentRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}

  private:

    bool m_applyDuringMaintenanceWindow;
    bool m_applyDuringMaintenanceWindowHasBeenSet = false;

    int m_desiredCapacity;
    bool m_desiredCapacityHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
