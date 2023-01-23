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
    AWS_APPRUNNER_API AutoScalingConfiguration();
    AWS_APPRUNNER_API AutoScalingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API AutoScalingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of this auto scaling configuration.</p>
     */
    inline const Aws::String& GetAutoScalingConfigurationArn() const{ return m_autoScalingConfigurationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of this auto scaling configuration.</p>
     */
    inline bool AutoScalingConfigurationArnHasBeenSet() const { return m_autoScalingConfigurationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of this auto scaling configuration.</p>
     */
    inline void SetAutoScalingConfigurationArn(const Aws::String& value) { m_autoScalingConfigurationArnHasBeenSet = true; m_autoScalingConfigurationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of this auto scaling configuration.</p>
     */
    inline void SetAutoScalingConfigurationArn(Aws::String&& value) { m_autoScalingConfigurationArnHasBeenSet = true; m_autoScalingConfigurationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of this auto scaling configuration.</p>
     */
    inline void SetAutoScalingConfigurationArn(const char* value) { m_autoScalingConfigurationArnHasBeenSet = true; m_autoScalingConfigurationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of this auto scaling configuration.</p>
     */
    inline AutoScalingConfiguration& WithAutoScalingConfigurationArn(const Aws::String& value) { SetAutoScalingConfigurationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of this auto scaling configuration.</p>
     */
    inline AutoScalingConfiguration& WithAutoScalingConfigurationArn(Aws::String&& value) { SetAutoScalingConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of this auto scaling configuration.</p>
     */
    inline AutoScalingConfiguration& WithAutoScalingConfigurationArn(const char* value) { SetAutoScalingConfigurationArn(value); return *this;}


    /**
     * <p>The customer-provided auto scaling configuration name. It can be used in
     * multiple revisions of a configuration.</p>
     */
    inline const Aws::String& GetAutoScalingConfigurationName() const{ return m_autoScalingConfigurationName; }

    /**
     * <p>The customer-provided auto scaling configuration name. It can be used in
     * multiple revisions of a configuration.</p>
     */
    inline bool AutoScalingConfigurationNameHasBeenSet() const { return m_autoScalingConfigurationNameHasBeenSet; }

    /**
     * <p>The customer-provided auto scaling configuration name. It can be used in
     * multiple revisions of a configuration.</p>
     */
    inline void SetAutoScalingConfigurationName(const Aws::String& value) { m_autoScalingConfigurationNameHasBeenSet = true; m_autoScalingConfigurationName = value; }

    /**
     * <p>The customer-provided auto scaling configuration name. It can be used in
     * multiple revisions of a configuration.</p>
     */
    inline void SetAutoScalingConfigurationName(Aws::String&& value) { m_autoScalingConfigurationNameHasBeenSet = true; m_autoScalingConfigurationName = std::move(value); }

    /**
     * <p>The customer-provided auto scaling configuration name. It can be used in
     * multiple revisions of a configuration.</p>
     */
    inline void SetAutoScalingConfigurationName(const char* value) { m_autoScalingConfigurationNameHasBeenSet = true; m_autoScalingConfigurationName.assign(value); }

    /**
     * <p>The customer-provided auto scaling configuration name. It can be used in
     * multiple revisions of a configuration.</p>
     */
    inline AutoScalingConfiguration& WithAutoScalingConfigurationName(const Aws::String& value) { SetAutoScalingConfigurationName(value); return *this;}

    /**
     * <p>The customer-provided auto scaling configuration name. It can be used in
     * multiple revisions of a configuration.</p>
     */
    inline AutoScalingConfiguration& WithAutoScalingConfigurationName(Aws::String&& value) { SetAutoScalingConfigurationName(std::move(value)); return *this;}

    /**
     * <p>The customer-provided auto scaling configuration name. It can be used in
     * multiple revisions of a configuration.</p>
     */
    inline AutoScalingConfiguration& WithAutoScalingConfigurationName(const char* value) { SetAutoScalingConfigurationName(value); return *this;}


    /**
     * <p>The revision of this auto scaling configuration. It's unique among all the
     * active configurations (<code>"Status": "ACTIVE"</code>) that share the same
     * <code>AutoScalingConfigurationName</code>.</p>
     */
    inline int GetAutoScalingConfigurationRevision() const{ return m_autoScalingConfigurationRevision; }

    /**
     * <p>The revision of this auto scaling configuration. It's unique among all the
     * active configurations (<code>"Status": "ACTIVE"</code>) that share the same
     * <code>AutoScalingConfigurationName</code>.</p>
     */
    inline bool AutoScalingConfigurationRevisionHasBeenSet() const { return m_autoScalingConfigurationRevisionHasBeenSet; }

    /**
     * <p>The revision of this auto scaling configuration. It's unique among all the
     * active configurations (<code>"Status": "ACTIVE"</code>) that share the same
     * <code>AutoScalingConfigurationName</code>.</p>
     */
    inline void SetAutoScalingConfigurationRevision(int value) { m_autoScalingConfigurationRevisionHasBeenSet = true; m_autoScalingConfigurationRevision = value; }

    /**
     * <p>The revision of this auto scaling configuration. It's unique among all the
     * active configurations (<code>"Status": "ACTIVE"</code>) that share the same
     * <code>AutoScalingConfigurationName</code>.</p>
     */
    inline AutoScalingConfiguration& WithAutoScalingConfigurationRevision(int value) { SetAutoScalingConfigurationRevision(value); return *this;}


    /**
     * <p>It's set to <code>true</code> for the configuration with the highest
     * <code>Revision</code> among all configurations that share the same
     * <code>AutoScalingConfigurationName</code>. It's set to <code>false</code>
     * otherwise.</p>
     */
    inline bool GetLatest() const{ return m_latest; }

    /**
     * <p>It's set to <code>true</code> for the configuration with the highest
     * <code>Revision</code> among all configurations that share the same
     * <code>AutoScalingConfigurationName</code>. It's set to <code>false</code>
     * otherwise.</p>
     */
    inline bool LatestHasBeenSet() const { return m_latestHasBeenSet; }

    /**
     * <p>It's set to <code>true</code> for the configuration with the highest
     * <code>Revision</code> among all configurations that share the same
     * <code>AutoScalingConfigurationName</code>. It's set to <code>false</code>
     * otherwise.</p>
     */
    inline void SetLatest(bool value) { m_latestHasBeenSet = true; m_latest = value; }

    /**
     * <p>It's set to <code>true</code> for the configuration with the highest
     * <code>Revision</code> among all configurations that share the same
     * <code>AutoScalingConfigurationName</code>. It's set to <code>false</code>
     * otherwise.</p>
     */
    inline AutoScalingConfiguration& WithLatest(bool value) { SetLatest(value); return *this;}


    /**
     * <p>The current state of the auto scaling configuration. If the status of a
     * configuration revision is <code>INACTIVE</code>, it was deleted and can't be
     * used. Inactive configuration revisions are permanently removed some time after
     * they are deleted.</p>
     */
    inline const AutoScalingConfigurationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of the auto scaling configuration. If the status of a
     * configuration revision is <code>INACTIVE</code>, it was deleted and can't be
     * used. Inactive configuration revisions are permanently removed some time after
     * they are deleted.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current state of the auto scaling configuration. If the status of a
     * configuration revision is <code>INACTIVE</code>, it was deleted and can't be
     * used. Inactive configuration revisions are permanently removed some time after
     * they are deleted.</p>
     */
    inline void SetStatus(const AutoScalingConfigurationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current state of the auto scaling configuration. If the status of a
     * configuration revision is <code>INACTIVE</code>, it was deleted and can't be
     * used. Inactive configuration revisions are permanently removed some time after
     * they are deleted.</p>
     */
    inline void SetStatus(AutoScalingConfigurationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current state of the auto scaling configuration. If the status of a
     * configuration revision is <code>INACTIVE</code>, it was deleted and can't be
     * used. Inactive configuration revisions are permanently removed some time after
     * they are deleted.</p>
     */
    inline AutoScalingConfiguration& WithStatus(const AutoScalingConfigurationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of the auto scaling configuration. If the status of a
     * configuration revision is <code>INACTIVE</code>, it was deleted and can't be
     * used. Inactive configuration revisions are permanently removed some time after
     * they are deleted.</p>
     */
    inline AutoScalingConfiguration& WithStatus(AutoScalingConfigurationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The maximum number of concurrent requests that an instance processes. If the
     * number of concurrent requests exceeds this limit, App Runner scales the service
     * up.</p>
     */
    inline int GetMaxConcurrency() const{ return m_maxConcurrency; }

    /**
     * <p>The maximum number of concurrent requests that an instance processes. If the
     * number of concurrent requests exceeds this limit, App Runner scales the service
     * up.</p>
     */
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }

    /**
     * <p>The maximum number of concurrent requests that an instance processes. If the
     * number of concurrent requests exceeds this limit, App Runner scales the service
     * up.</p>
     */
    inline void SetMaxConcurrency(int value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = value; }

    /**
     * <p>The maximum number of concurrent requests that an instance processes. If the
     * number of concurrent requests exceeds this limit, App Runner scales the service
     * up.</p>
     */
    inline AutoScalingConfiguration& WithMaxConcurrency(int value) { SetMaxConcurrency(value); return *this;}


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
    inline int GetMinSize() const{ return m_minSize; }

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
    inline bool MinSizeHasBeenSet() const { return m_minSizeHasBeenSet; }

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
    inline void SetMinSize(int value) { m_minSizeHasBeenSet = true; m_minSize = value; }

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
    inline AutoScalingConfiguration& WithMinSize(int value) { SetMinSize(value); return *this;}


    /**
     * <p>The maximum number of instances that a service scales up to. At most
     * <code>MaxSize</code> instances actively serve traffic for your service.</p>
     */
    inline int GetMaxSize() const{ return m_maxSize; }

    /**
     * <p>The maximum number of instances that a service scales up to. At most
     * <code>MaxSize</code> instances actively serve traffic for your service.</p>
     */
    inline bool MaxSizeHasBeenSet() const { return m_maxSizeHasBeenSet; }

    /**
     * <p>The maximum number of instances that a service scales up to. At most
     * <code>MaxSize</code> instances actively serve traffic for your service.</p>
     */
    inline void SetMaxSize(int value) { m_maxSizeHasBeenSet = true; m_maxSize = value; }

    /**
     * <p>The maximum number of instances that a service scales up to. At most
     * <code>MaxSize</code> instances actively serve traffic for your service.</p>
     */
    inline AutoScalingConfiguration& WithMaxSize(int value) { SetMaxSize(value); return *this;}


    /**
     * <p>The time when the auto scaling configuration was created. It's in Unix time
     * stamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time when the auto scaling configuration was created. It's in Unix time
     * stamp format.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time when the auto scaling configuration was created. It's in Unix time
     * stamp format.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time when the auto scaling configuration was created. It's in Unix time
     * stamp format.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time when the auto scaling configuration was created. It's in Unix time
     * stamp format.</p>
     */
    inline AutoScalingConfiguration& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time when the auto scaling configuration was created. It's in Unix time
     * stamp format.</p>
     */
    inline AutoScalingConfiguration& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The time when the auto scaling configuration was deleted. It's in Unix time
     * stamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletedAt() const{ return m_deletedAt; }

    /**
     * <p>The time when the auto scaling configuration was deleted. It's in Unix time
     * stamp format.</p>
     */
    inline bool DeletedAtHasBeenSet() const { return m_deletedAtHasBeenSet; }

    /**
     * <p>The time when the auto scaling configuration was deleted. It's in Unix time
     * stamp format.</p>
     */
    inline void SetDeletedAt(const Aws::Utils::DateTime& value) { m_deletedAtHasBeenSet = true; m_deletedAt = value; }

    /**
     * <p>The time when the auto scaling configuration was deleted. It's in Unix time
     * stamp format.</p>
     */
    inline void SetDeletedAt(Aws::Utils::DateTime&& value) { m_deletedAtHasBeenSet = true; m_deletedAt = std::move(value); }

    /**
     * <p>The time when the auto scaling configuration was deleted. It's in Unix time
     * stamp format.</p>
     */
    inline AutoScalingConfiguration& WithDeletedAt(const Aws::Utils::DateTime& value) { SetDeletedAt(value); return *this;}

    /**
     * <p>The time when the auto scaling configuration was deleted. It's in Unix time
     * stamp format.</p>
     */
    inline AutoScalingConfiguration& WithDeletedAt(Aws::Utils::DateTime&& value) { SetDeletedAt(std::move(value)); return *this;}

  private:

    Aws::String m_autoScalingConfigurationArn;
    bool m_autoScalingConfigurationArnHasBeenSet = false;

    Aws::String m_autoScalingConfigurationName;
    bool m_autoScalingConfigurationNameHasBeenSet = false;

    int m_autoScalingConfigurationRevision;
    bool m_autoScalingConfigurationRevisionHasBeenSet = false;

    bool m_latest;
    bool m_latestHasBeenSet = false;

    AutoScalingConfigurationStatus m_status;
    bool m_statusHasBeenSet = false;

    int m_maxConcurrency;
    bool m_maxConcurrencyHasBeenSet = false;

    int m_minSize;
    bool m_minSizeHasBeenSet = false;

    int m_maxSize;
    bool m_maxSizeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_deletedAt;
    bool m_deletedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
