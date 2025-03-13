/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apprunner/model/TraceConfiguration.h>
#include <aws/apprunner/model/ObservabilityConfigurationStatus.h>
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
   * <p>Describes an App Runner observability configuration resource. Multiple
   * revisions of a configuration have the same
   * <code>ObservabilityConfigurationName</code> and different
   * <code>ObservabilityConfigurationRevision</code> values.</p> <p>The resource is
   * designed to configure multiple features (currently one feature, tracing). This
   * type contains optional members that describe the configuration of these features
   * (currently one member, <code>TraceConfiguration</code>). If a feature member
   * isn't specified, the feature isn't enabled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ObservabilityConfiguration">AWS
   * API Reference</a></p>
   */
  class ObservabilityConfiguration
  {
  public:
    AWS_APPRUNNER_API ObservabilityConfiguration() = default;
    AWS_APPRUNNER_API ObservabilityConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API ObservabilityConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of this observability configuration.</p>
     */
    inline const Aws::String& GetObservabilityConfigurationArn() const { return m_observabilityConfigurationArn; }
    inline bool ObservabilityConfigurationArnHasBeenSet() const { return m_observabilityConfigurationArnHasBeenSet; }
    template<typename ObservabilityConfigurationArnT = Aws::String>
    void SetObservabilityConfigurationArn(ObservabilityConfigurationArnT&& value) { m_observabilityConfigurationArnHasBeenSet = true; m_observabilityConfigurationArn = std::forward<ObservabilityConfigurationArnT>(value); }
    template<typename ObservabilityConfigurationArnT = Aws::String>
    ObservabilityConfiguration& WithObservabilityConfigurationArn(ObservabilityConfigurationArnT&& value) { SetObservabilityConfigurationArn(std::forward<ObservabilityConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer-provided observability configuration name. It can be used in
     * multiple revisions of a configuration.</p>
     */
    inline const Aws::String& GetObservabilityConfigurationName() const { return m_observabilityConfigurationName; }
    inline bool ObservabilityConfigurationNameHasBeenSet() const { return m_observabilityConfigurationNameHasBeenSet; }
    template<typename ObservabilityConfigurationNameT = Aws::String>
    void SetObservabilityConfigurationName(ObservabilityConfigurationNameT&& value) { m_observabilityConfigurationNameHasBeenSet = true; m_observabilityConfigurationName = std::forward<ObservabilityConfigurationNameT>(value); }
    template<typename ObservabilityConfigurationNameT = Aws::String>
    ObservabilityConfiguration& WithObservabilityConfigurationName(ObservabilityConfigurationNameT&& value) { SetObservabilityConfigurationName(std::forward<ObservabilityConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the tracing feature within this observability
     * configuration. If not specified, tracing isn't enabled.</p>
     */
    inline const TraceConfiguration& GetTraceConfiguration() const { return m_traceConfiguration; }
    inline bool TraceConfigurationHasBeenSet() const { return m_traceConfigurationHasBeenSet; }
    template<typename TraceConfigurationT = TraceConfiguration>
    void SetTraceConfiguration(TraceConfigurationT&& value) { m_traceConfigurationHasBeenSet = true; m_traceConfiguration = std::forward<TraceConfigurationT>(value); }
    template<typename TraceConfigurationT = TraceConfiguration>
    ObservabilityConfiguration& WithTraceConfiguration(TraceConfigurationT&& value) { SetTraceConfiguration(std::forward<TraceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of this observability configuration. It's unique among all the
     * active configurations (<code>"Status": "ACTIVE"</code>) that share the same
     * <code>ObservabilityConfigurationName</code>.</p>
     */
    inline int GetObservabilityConfigurationRevision() const { return m_observabilityConfigurationRevision; }
    inline bool ObservabilityConfigurationRevisionHasBeenSet() const { return m_observabilityConfigurationRevisionHasBeenSet; }
    inline void SetObservabilityConfigurationRevision(int value) { m_observabilityConfigurationRevisionHasBeenSet = true; m_observabilityConfigurationRevision = value; }
    inline ObservabilityConfiguration& WithObservabilityConfigurationRevision(int value) { SetObservabilityConfigurationRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>It's set to <code>true</code> for the configuration with the highest
     * <code>Revision</code> among all configurations that share the same
     * <code>ObservabilityConfigurationName</code>. It's set to <code>false</code>
     * otherwise.</p>
     */
    inline bool GetLatest() const { return m_latest; }
    inline bool LatestHasBeenSet() const { return m_latestHasBeenSet; }
    inline void SetLatest(bool value) { m_latestHasBeenSet = true; m_latest = value; }
    inline ObservabilityConfiguration& WithLatest(bool value) { SetLatest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the observability configuration. If the status of a
     * configuration revision is <code>INACTIVE</code>, it was deleted and can't be
     * used. Inactive configuration revisions are permanently removed some time after
     * they are deleted.</p>
     */
    inline ObservabilityConfigurationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ObservabilityConfigurationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ObservabilityConfiguration& WithStatus(ObservabilityConfigurationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the observability configuration was created. It's in Unix time
     * stamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ObservabilityConfiguration& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the observability configuration was deleted. It's in Unix time
     * stamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletedAt() const { return m_deletedAt; }
    inline bool DeletedAtHasBeenSet() const { return m_deletedAtHasBeenSet; }
    template<typename DeletedAtT = Aws::Utils::DateTime>
    void SetDeletedAt(DeletedAtT&& value) { m_deletedAtHasBeenSet = true; m_deletedAt = std::forward<DeletedAtT>(value); }
    template<typename DeletedAtT = Aws::Utils::DateTime>
    ObservabilityConfiguration& WithDeletedAt(DeletedAtT&& value) { SetDeletedAt(std::forward<DeletedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_observabilityConfigurationArn;
    bool m_observabilityConfigurationArnHasBeenSet = false;

    Aws::String m_observabilityConfigurationName;
    bool m_observabilityConfigurationNameHasBeenSet = false;

    TraceConfiguration m_traceConfiguration;
    bool m_traceConfigurationHasBeenSet = false;

    int m_observabilityConfigurationRevision{0};
    bool m_observabilityConfigurationRevisionHasBeenSet = false;

    bool m_latest{false};
    bool m_latestHasBeenSet = false;

    ObservabilityConfigurationStatus m_status{ObservabilityConfigurationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_deletedAt{};
    bool m_deletedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
