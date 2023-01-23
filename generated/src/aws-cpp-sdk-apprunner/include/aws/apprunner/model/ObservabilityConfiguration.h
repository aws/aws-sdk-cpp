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
    AWS_APPRUNNER_API ObservabilityConfiguration();
    AWS_APPRUNNER_API ObservabilityConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API ObservabilityConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of this observability configuration.</p>
     */
    inline const Aws::String& GetObservabilityConfigurationArn() const{ return m_observabilityConfigurationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of this observability configuration.</p>
     */
    inline bool ObservabilityConfigurationArnHasBeenSet() const { return m_observabilityConfigurationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of this observability configuration.</p>
     */
    inline void SetObservabilityConfigurationArn(const Aws::String& value) { m_observabilityConfigurationArnHasBeenSet = true; m_observabilityConfigurationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of this observability configuration.</p>
     */
    inline void SetObservabilityConfigurationArn(Aws::String&& value) { m_observabilityConfigurationArnHasBeenSet = true; m_observabilityConfigurationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of this observability configuration.</p>
     */
    inline void SetObservabilityConfigurationArn(const char* value) { m_observabilityConfigurationArnHasBeenSet = true; m_observabilityConfigurationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of this observability configuration.</p>
     */
    inline ObservabilityConfiguration& WithObservabilityConfigurationArn(const Aws::String& value) { SetObservabilityConfigurationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of this observability configuration.</p>
     */
    inline ObservabilityConfiguration& WithObservabilityConfigurationArn(Aws::String&& value) { SetObservabilityConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of this observability configuration.</p>
     */
    inline ObservabilityConfiguration& WithObservabilityConfigurationArn(const char* value) { SetObservabilityConfigurationArn(value); return *this;}


    /**
     * <p>The customer-provided observability configuration name. It can be used in
     * multiple revisions of a configuration.</p>
     */
    inline const Aws::String& GetObservabilityConfigurationName() const{ return m_observabilityConfigurationName; }

    /**
     * <p>The customer-provided observability configuration name. It can be used in
     * multiple revisions of a configuration.</p>
     */
    inline bool ObservabilityConfigurationNameHasBeenSet() const { return m_observabilityConfigurationNameHasBeenSet; }

    /**
     * <p>The customer-provided observability configuration name. It can be used in
     * multiple revisions of a configuration.</p>
     */
    inline void SetObservabilityConfigurationName(const Aws::String& value) { m_observabilityConfigurationNameHasBeenSet = true; m_observabilityConfigurationName = value; }

    /**
     * <p>The customer-provided observability configuration name. It can be used in
     * multiple revisions of a configuration.</p>
     */
    inline void SetObservabilityConfigurationName(Aws::String&& value) { m_observabilityConfigurationNameHasBeenSet = true; m_observabilityConfigurationName = std::move(value); }

    /**
     * <p>The customer-provided observability configuration name. It can be used in
     * multiple revisions of a configuration.</p>
     */
    inline void SetObservabilityConfigurationName(const char* value) { m_observabilityConfigurationNameHasBeenSet = true; m_observabilityConfigurationName.assign(value); }

    /**
     * <p>The customer-provided observability configuration name. It can be used in
     * multiple revisions of a configuration.</p>
     */
    inline ObservabilityConfiguration& WithObservabilityConfigurationName(const Aws::String& value) { SetObservabilityConfigurationName(value); return *this;}

    /**
     * <p>The customer-provided observability configuration name. It can be used in
     * multiple revisions of a configuration.</p>
     */
    inline ObservabilityConfiguration& WithObservabilityConfigurationName(Aws::String&& value) { SetObservabilityConfigurationName(std::move(value)); return *this;}

    /**
     * <p>The customer-provided observability configuration name. It can be used in
     * multiple revisions of a configuration.</p>
     */
    inline ObservabilityConfiguration& WithObservabilityConfigurationName(const char* value) { SetObservabilityConfigurationName(value); return *this;}


    /**
     * <p>The configuration of the tracing feature within this observability
     * configuration. If not specified, tracing isn't enabled.</p>
     */
    inline const TraceConfiguration& GetTraceConfiguration() const{ return m_traceConfiguration; }

    /**
     * <p>The configuration of the tracing feature within this observability
     * configuration. If not specified, tracing isn't enabled.</p>
     */
    inline bool TraceConfigurationHasBeenSet() const { return m_traceConfigurationHasBeenSet; }

    /**
     * <p>The configuration of the tracing feature within this observability
     * configuration. If not specified, tracing isn't enabled.</p>
     */
    inline void SetTraceConfiguration(const TraceConfiguration& value) { m_traceConfigurationHasBeenSet = true; m_traceConfiguration = value; }

    /**
     * <p>The configuration of the tracing feature within this observability
     * configuration. If not specified, tracing isn't enabled.</p>
     */
    inline void SetTraceConfiguration(TraceConfiguration&& value) { m_traceConfigurationHasBeenSet = true; m_traceConfiguration = std::move(value); }

    /**
     * <p>The configuration of the tracing feature within this observability
     * configuration. If not specified, tracing isn't enabled.</p>
     */
    inline ObservabilityConfiguration& WithTraceConfiguration(const TraceConfiguration& value) { SetTraceConfiguration(value); return *this;}

    /**
     * <p>The configuration of the tracing feature within this observability
     * configuration. If not specified, tracing isn't enabled.</p>
     */
    inline ObservabilityConfiguration& WithTraceConfiguration(TraceConfiguration&& value) { SetTraceConfiguration(std::move(value)); return *this;}


    /**
     * <p>The revision of this observability configuration. It's unique among all the
     * active configurations (<code>"Status": "ACTIVE"</code>) that share the same
     * <code>ObservabilityConfigurationName</code>.</p>
     */
    inline int GetObservabilityConfigurationRevision() const{ return m_observabilityConfigurationRevision; }

    /**
     * <p>The revision of this observability configuration. It's unique among all the
     * active configurations (<code>"Status": "ACTIVE"</code>) that share the same
     * <code>ObservabilityConfigurationName</code>.</p>
     */
    inline bool ObservabilityConfigurationRevisionHasBeenSet() const { return m_observabilityConfigurationRevisionHasBeenSet; }

    /**
     * <p>The revision of this observability configuration. It's unique among all the
     * active configurations (<code>"Status": "ACTIVE"</code>) that share the same
     * <code>ObservabilityConfigurationName</code>.</p>
     */
    inline void SetObservabilityConfigurationRevision(int value) { m_observabilityConfigurationRevisionHasBeenSet = true; m_observabilityConfigurationRevision = value; }

    /**
     * <p>The revision of this observability configuration. It's unique among all the
     * active configurations (<code>"Status": "ACTIVE"</code>) that share the same
     * <code>ObservabilityConfigurationName</code>.</p>
     */
    inline ObservabilityConfiguration& WithObservabilityConfigurationRevision(int value) { SetObservabilityConfigurationRevision(value); return *this;}


    /**
     * <p>It's set to <code>true</code> for the configuration with the highest
     * <code>Revision</code> among all configurations that share the same
     * <code>ObservabilityConfigurationName</code>. It's set to <code>false</code>
     * otherwise.</p>
     */
    inline bool GetLatest() const{ return m_latest; }

    /**
     * <p>It's set to <code>true</code> for the configuration with the highest
     * <code>Revision</code> among all configurations that share the same
     * <code>ObservabilityConfigurationName</code>. It's set to <code>false</code>
     * otherwise.</p>
     */
    inline bool LatestHasBeenSet() const { return m_latestHasBeenSet; }

    /**
     * <p>It's set to <code>true</code> for the configuration with the highest
     * <code>Revision</code> among all configurations that share the same
     * <code>ObservabilityConfigurationName</code>. It's set to <code>false</code>
     * otherwise.</p>
     */
    inline void SetLatest(bool value) { m_latestHasBeenSet = true; m_latest = value; }

    /**
     * <p>It's set to <code>true</code> for the configuration with the highest
     * <code>Revision</code> among all configurations that share the same
     * <code>ObservabilityConfigurationName</code>. It's set to <code>false</code>
     * otherwise.</p>
     */
    inline ObservabilityConfiguration& WithLatest(bool value) { SetLatest(value); return *this;}


    /**
     * <p>The current state of the observability configuration. If the status of a
     * configuration revision is <code>INACTIVE</code>, it was deleted and can't be
     * used. Inactive configuration revisions are permanently removed some time after
     * they are deleted.</p>
     */
    inline const ObservabilityConfigurationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of the observability configuration. If the status of a
     * configuration revision is <code>INACTIVE</code>, it was deleted and can't be
     * used. Inactive configuration revisions are permanently removed some time after
     * they are deleted.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current state of the observability configuration. If the status of a
     * configuration revision is <code>INACTIVE</code>, it was deleted and can't be
     * used. Inactive configuration revisions are permanently removed some time after
     * they are deleted.</p>
     */
    inline void SetStatus(const ObservabilityConfigurationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current state of the observability configuration. If the status of a
     * configuration revision is <code>INACTIVE</code>, it was deleted and can't be
     * used. Inactive configuration revisions are permanently removed some time after
     * they are deleted.</p>
     */
    inline void SetStatus(ObservabilityConfigurationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current state of the observability configuration. If the status of a
     * configuration revision is <code>INACTIVE</code>, it was deleted and can't be
     * used. Inactive configuration revisions are permanently removed some time after
     * they are deleted.</p>
     */
    inline ObservabilityConfiguration& WithStatus(const ObservabilityConfigurationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of the observability configuration. If the status of a
     * configuration revision is <code>INACTIVE</code>, it was deleted and can't be
     * used. Inactive configuration revisions are permanently removed some time after
     * they are deleted.</p>
     */
    inline ObservabilityConfiguration& WithStatus(ObservabilityConfigurationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time when the observability configuration was created. It's in Unix time
     * stamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time when the observability configuration was created. It's in Unix time
     * stamp format.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time when the observability configuration was created. It's in Unix time
     * stamp format.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time when the observability configuration was created. It's in Unix time
     * stamp format.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time when the observability configuration was created. It's in Unix time
     * stamp format.</p>
     */
    inline ObservabilityConfiguration& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time when the observability configuration was created. It's in Unix time
     * stamp format.</p>
     */
    inline ObservabilityConfiguration& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The time when the observability configuration was deleted. It's in Unix time
     * stamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletedAt() const{ return m_deletedAt; }

    /**
     * <p>The time when the observability configuration was deleted. It's in Unix time
     * stamp format.</p>
     */
    inline bool DeletedAtHasBeenSet() const { return m_deletedAtHasBeenSet; }

    /**
     * <p>The time when the observability configuration was deleted. It's in Unix time
     * stamp format.</p>
     */
    inline void SetDeletedAt(const Aws::Utils::DateTime& value) { m_deletedAtHasBeenSet = true; m_deletedAt = value; }

    /**
     * <p>The time when the observability configuration was deleted. It's in Unix time
     * stamp format.</p>
     */
    inline void SetDeletedAt(Aws::Utils::DateTime&& value) { m_deletedAtHasBeenSet = true; m_deletedAt = std::move(value); }

    /**
     * <p>The time when the observability configuration was deleted. It's in Unix time
     * stamp format.</p>
     */
    inline ObservabilityConfiguration& WithDeletedAt(const Aws::Utils::DateTime& value) { SetDeletedAt(value); return *this;}

    /**
     * <p>The time when the observability configuration was deleted. It's in Unix time
     * stamp format.</p>
     */
    inline ObservabilityConfiguration& WithDeletedAt(Aws::Utils::DateTime&& value) { SetDeletedAt(std::move(value)); return *this;}

  private:

    Aws::String m_observabilityConfigurationArn;
    bool m_observabilityConfigurationArnHasBeenSet = false;

    Aws::String m_observabilityConfigurationName;
    bool m_observabilityConfigurationNameHasBeenSet = false;

    TraceConfiguration m_traceConfiguration;
    bool m_traceConfigurationHasBeenSet = false;

    int m_observabilityConfigurationRevision;
    bool m_observabilityConfigurationRevisionHasBeenSet = false;

    bool m_latest;
    bool m_latestHasBeenSet = false;

    ObservabilityConfigurationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_deletedAt;
    bool m_deletedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
