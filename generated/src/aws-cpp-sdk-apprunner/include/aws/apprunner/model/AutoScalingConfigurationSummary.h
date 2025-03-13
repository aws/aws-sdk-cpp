/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apprunner/model/AutoScalingConfigurationStatus.h>
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
namespace AppRunner
{
namespace Model
{

  /**
   * <p>Provides summary information about an App Runner automatic scaling
   * configuration resource.</p> <p>This type contains limited information about an
   * auto scaling configuration. It includes only identification information, without
   * configuration details. It's returned by the <a>ListAutoScalingConfigurations</a>
   * action. Complete configuration information is returned by the
   * <a>CreateAutoScalingConfiguration</a>, <a>DescribeAutoScalingConfiguration</a>,
   * and <a>DeleteAutoScalingConfiguration</a> actions using the
   * <a>AutoScalingConfiguration</a> type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/AutoScalingConfigurationSummary">AWS
   * API Reference</a></p>
   */
  class AutoScalingConfigurationSummary
  {
  public:
    AWS_APPRUNNER_API AutoScalingConfigurationSummary() = default;
    AWS_APPRUNNER_API AutoScalingConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API AutoScalingConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of this auto scaling configuration.</p>
     */
    inline const Aws::String& GetAutoScalingConfigurationArn() const { return m_autoScalingConfigurationArn; }
    inline bool AutoScalingConfigurationArnHasBeenSet() const { return m_autoScalingConfigurationArnHasBeenSet; }
    template<typename AutoScalingConfigurationArnT = Aws::String>
    void SetAutoScalingConfigurationArn(AutoScalingConfigurationArnT&& value) { m_autoScalingConfigurationArnHasBeenSet = true; m_autoScalingConfigurationArn = std::forward<AutoScalingConfigurationArnT>(value); }
    template<typename AutoScalingConfigurationArnT = Aws::String>
    AutoScalingConfigurationSummary& WithAutoScalingConfigurationArn(AutoScalingConfigurationArnT&& value) { SetAutoScalingConfigurationArn(std::forward<AutoScalingConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer-provided auto scaling configuration name. It can be used in
     * multiple revisions of a configuration.</p>
     */
    inline const Aws::String& GetAutoScalingConfigurationName() const { return m_autoScalingConfigurationName; }
    inline bool AutoScalingConfigurationNameHasBeenSet() const { return m_autoScalingConfigurationNameHasBeenSet; }
    template<typename AutoScalingConfigurationNameT = Aws::String>
    void SetAutoScalingConfigurationName(AutoScalingConfigurationNameT&& value) { m_autoScalingConfigurationNameHasBeenSet = true; m_autoScalingConfigurationName = std::forward<AutoScalingConfigurationNameT>(value); }
    template<typename AutoScalingConfigurationNameT = Aws::String>
    AutoScalingConfigurationSummary& WithAutoScalingConfigurationName(AutoScalingConfigurationNameT&& value) { SetAutoScalingConfigurationName(std::forward<AutoScalingConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of this auto scaling configuration. It's unique among all the
     * active configurations (<code>"Status": "ACTIVE"</code>) with the same
     * <code>AutoScalingConfigurationName</code>.</p>
     */
    inline int GetAutoScalingConfigurationRevision() const { return m_autoScalingConfigurationRevision; }
    inline bool AutoScalingConfigurationRevisionHasBeenSet() const { return m_autoScalingConfigurationRevisionHasBeenSet; }
    inline void SetAutoScalingConfigurationRevision(int value) { m_autoScalingConfigurationRevisionHasBeenSet = true; m_autoScalingConfigurationRevision = value; }
    inline AutoScalingConfigurationSummary& WithAutoScalingConfigurationRevision(int value) { SetAutoScalingConfigurationRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the auto scaling configuration. If the status of a
     * configuration revision is <code>INACTIVE</code>, it was deleted and can't be
     * used. Inactive configuration revisions are permanently removed some time after
     * they are deleted.</p>
     */
    inline AutoScalingConfigurationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AutoScalingConfigurationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AutoScalingConfigurationSummary& WithStatus(AutoScalingConfigurationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the auto scaling configuration was created. It's in Unix time
     * stamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    AutoScalingConfigurationSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if this auto scaling configuration has an App Runner service
     * associated with it. A value of <code>true</code> indicates one or more services
     * are associated. A value of <code>false</code> indicates no services are
     * associated.</p>
     */
    inline bool GetHasAssociatedService() const { return m_hasAssociatedService; }
    inline bool HasAssociatedServiceHasBeenSet() const { return m_hasAssociatedServiceHasBeenSet; }
    inline void SetHasAssociatedService(bool value) { m_hasAssociatedServiceHasBeenSet = true; m_hasAssociatedService = value; }
    inline AutoScalingConfigurationSummary& WithHasAssociatedService(bool value) { SetHasAssociatedService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if this auto scaling configuration should be used as the default
     * for a new App Runner service that does not have an auto scaling configuration
     * ARN specified during creation. Each account can have only one default
     * <code>AutoScalingConfiguration</code> per region. The default
     * <code>AutoScalingConfiguration</code> can be any revision under the same
     * <code>AutoScalingConfigurationName</code>.</p>
     */
    inline bool GetIsDefault() const { return m_isDefault; }
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }
    inline AutoScalingConfigurationSummary& WithIsDefault(bool value) { SetIsDefault(value); return *this;}
    ///@}
  private:

    Aws::String m_autoScalingConfigurationArn;
    bool m_autoScalingConfigurationArnHasBeenSet = false;

    Aws::String m_autoScalingConfigurationName;
    bool m_autoScalingConfigurationNameHasBeenSet = false;

    int m_autoScalingConfigurationRevision{0};
    bool m_autoScalingConfigurationRevisionHasBeenSet = false;

    AutoScalingConfigurationStatus m_status{AutoScalingConfigurationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    bool m_hasAssociatedService{false};
    bool m_hasAssociatedServiceHasBeenSet = false;

    bool m_isDefault{false};
    bool m_isDefaultHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
