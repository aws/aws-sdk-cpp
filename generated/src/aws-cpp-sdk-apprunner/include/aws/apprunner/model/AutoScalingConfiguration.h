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
   * <p>Describes an App Runner automatic scaling configuration resource.</p> <p>A
   * higher <code>MinSize</code> increases the spread of your App Runner service over
   * more Availability Zones in the Amazon Web Services Region. The tradeoff is a
   * higher minimal cost.</p> <p>A lower <code>MaxSize</code> controls your cost. The
   * tradeoff is lower responsiveness during peak demand.</p> <p>Multiple revisions
   * of a configuration might have the same <code>AutoScalingConfigurationName</code>
   * and different <code>AutoScalingConfigurationRevision</code>
   * values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/AutoScalingConfiguration">AWS
   * API Reference</a></p>
   */
  class AutoScalingConfiguration
  {
  public:
    AWS_APPRUNNER_API AutoScalingConfiguration() = default;
    AWS_APPRUNNER_API AutoScalingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API AutoScalingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    AutoScalingConfiguration& WithAutoScalingConfigurationArn(AutoScalingConfigurationArnT&& value) { SetAutoScalingConfigurationArn(std::forward<AutoScalingConfigurationArnT>(value)); return *this;}
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
    AutoScalingConfiguration& WithAutoScalingConfigurationName(AutoScalingConfigurationNameT&& value) { SetAutoScalingConfigurationName(std::forward<AutoScalingConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of this auto scaling configuration. It's unique among all the
     * active configurations (<code>"Status": "ACTIVE"</code>) that share the same
     * <code>AutoScalingConfigurationName</code>.</p>
     */
    inline int GetAutoScalingConfigurationRevision() const { return m_autoScalingConfigurationRevision; }
    inline bool AutoScalingConfigurationRevisionHasBeenSet() const { return m_autoScalingConfigurationRevisionHasBeenSet; }
    inline void SetAutoScalingConfigurationRevision(int value) { m_autoScalingConfigurationRevisionHasBeenSet = true; m_autoScalingConfigurationRevision = value; }
    inline AutoScalingConfiguration& WithAutoScalingConfigurationRevision(int value) { SetAutoScalingConfigurationRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>It's set to <code>true</code> for the configuration with the highest
     * <code>Revision</code> among all configurations that share the same
     * <code>AutoScalingConfigurationName</code>. It's set to <code>false</code>
     * otherwise.</p>
     */
    inline bool GetLatest() const { return m_latest; }
    inline bool LatestHasBeenSet() const { return m_latestHasBeenSet; }
    inline void SetLatest(bool value) { m_latestHasBeenSet = true; m_latest = value; }
    inline AutoScalingConfiguration& WithLatest(bool value) { SetLatest(value); return *this;}
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
    inline AutoScalingConfiguration& WithStatus(AutoScalingConfigurationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of concurrent requests that an instance processes. If the
     * number of concurrent requests exceeds this limit, App Runner scales the service
     * up.</p>
     */
    inline int GetMaxConcurrency() const { return m_maxConcurrency; }
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }
    inline void SetMaxConcurrency(int value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = value; }
    inline AutoScalingConfiguration& WithMaxConcurrency(int value) { SetMaxConcurrency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of instances that App Runner provisions for a service. The
     * service always has at least <code>MinSize</code> provisioned instances. Some of
     * them actively serve traffic. The rest of them (provisioned and inactive
     * instances) are a cost-effective compute capacity reserve and are ready to be
     * quickly activated. You pay for memory usage of all the provisioned instances.
     * You pay for CPU usage of only the active subset.</p> <p>App Runner temporarily
     * doubles the number of provisioned instances during deployments, to maintain the
     * same capacity for both old and new code.</p>
     */
    inline int GetMinSize() const { return m_minSize; }
    inline bool MinSizeHasBeenSet() const { return m_minSizeHasBeenSet; }
    inline void SetMinSize(int value) { m_minSizeHasBeenSet = true; m_minSize = value; }
    inline AutoScalingConfiguration& WithMinSize(int value) { SetMinSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of instances that a service scales up to. At most
     * <code>MaxSize</code> instances actively serve traffic for your service.</p>
     */
    inline int GetMaxSize() const { return m_maxSize; }
    inline bool MaxSizeHasBeenSet() const { return m_maxSizeHasBeenSet; }
    inline void SetMaxSize(int value) { m_maxSizeHasBeenSet = true; m_maxSize = value; }
    inline AutoScalingConfiguration& WithMaxSize(int value) { SetMaxSize(value); return *this;}
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
    AutoScalingConfiguration& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the auto scaling configuration was deleted. It's in Unix time
     * stamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletedAt() const { return m_deletedAt; }
    inline bool DeletedAtHasBeenSet() const { return m_deletedAtHasBeenSet; }
    template<typename DeletedAtT = Aws::Utils::DateTime>
    void SetDeletedAt(DeletedAtT&& value) { m_deletedAtHasBeenSet = true; m_deletedAt = std::forward<DeletedAtT>(value); }
    template<typename DeletedAtT = Aws::Utils::DateTime>
    AutoScalingConfiguration& WithDeletedAt(DeletedAtT&& value) { SetDeletedAt(std::forward<DeletedAtT>(value)); return *this;}
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
    inline AutoScalingConfiguration& WithHasAssociatedService(bool value) { SetHasAssociatedService(value); return *this;}
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
    inline AutoScalingConfiguration& WithIsDefault(bool value) { SetIsDefault(value); return *this;}
    ///@}
  private:

    Aws::String m_autoScalingConfigurationArn;
    bool m_autoScalingConfigurationArnHasBeenSet = false;

    Aws::String m_autoScalingConfigurationName;
    bool m_autoScalingConfigurationNameHasBeenSet = false;

    int m_autoScalingConfigurationRevision{0};
    bool m_autoScalingConfigurationRevisionHasBeenSet = false;

    bool m_latest{false};
    bool m_latestHasBeenSet = false;

    AutoScalingConfigurationStatus m_status{AutoScalingConfigurationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    int m_maxConcurrency{0};
    bool m_maxConcurrencyHasBeenSet = false;

    int m_minSize{0};
    bool m_minSizeHasBeenSet = false;

    int m_maxSize{0};
    bool m_maxSizeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_deletedAt{};
    bool m_deletedAtHasBeenSet = false;

    bool m_hasAssociatedService{false};
    bool m_hasAssociatedServiceHasBeenSet = false;

    bool m_isDefault{false};
    bool m_isDefaultHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
