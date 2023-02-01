/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/ApplicationStatus.h>
#include <aws/kinesisanalyticsv2/model/RuntimeEnvironment.h>
#include <aws/kinesisanalyticsv2/model/ApplicationMode.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Provides application summary information, including the application Amazon
   * Resource Name (ARN), name, and status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ApplicationSummary">AWS
   * API Reference</a></p>
   */
  class ApplicationSummary
  {
  public:
    AWS_KINESISANALYTICSV2_API ApplicationSummary();
    AWS_KINESISANALYTICSV2_API ApplicationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ApplicationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline ApplicationSummary& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline ApplicationSummary& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline ApplicationSummary& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>The ARN of the application.</p>
     */
    inline const Aws::String& GetApplicationARN() const{ return m_applicationARN; }

    /**
     * <p>The ARN of the application.</p>
     */
    inline bool ApplicationARNHasBeenSet() const { return m_applicationARNHasBeenSet; }

    /**
     * <p>The ARN of the application.</p>
     */
    inline void SetApplicationARN(const Aws::String& value) { m_applicationARNHasBeenSet = true; m_applicationARN = value; }

    /**
     * <p>The ARN of the application.</p>
     */
    inline void SetApplicationARN(Aws::String&& value) { m_applicationARNHasBeenSet = true; m_applicationARN = std::move(value); }

    /**
     * <p>The ARN of the application.</p>
     */
    inline void SetApplicationARN(const char* value) { m_applicationARNHasBeenSet = true; m_applicationARN.assign(value); }

    /**
     * <p>The ARN of the application.</p>
     */
    inline ApplicationSummary& WithApplicationARN(const Aws::String& value) { SetApplicationARN(value); return *this;}

    /**
     * <p>The ARN of the application.</p>
     */
    inline ApplicationSummary& WithApplicationARN(Aws::String&& value) { SetApplicationARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the application.</p>
     */
    inline ApplicationSummary& WithApplicationARN(const char* value) { SetApplicationARN(value); return *this;}


    /**
     * <p>The status of the application.</p>
     */
    inline const ApplicationStatus& GetApplicationStatus() const{ return m_applicationStatus; }

    /**
     * <p>The status of the application.</p>
     */
    inline bool ApplicationStatusHasBeenSet() const { return m_applicationStatusHasBeenSet; }

    /**
     * <p>The status of the application.</p>
     */
    inline void SetApplicationStatus(const ApplicationStatus& value) { m_applicationStatusHasBeenSet = true; m_applicationStatus = value; }

    /**
     * <p>The status of the application.</p>
     */
    inline void SetApplicationStatus(ApplicationStatus&& value) { m_applicationStatusHasBeenSet = true; m_applicationStatus = std::move(value); }

    /**
     * <p>The status of the application.</p>
     */
    inline ApplicationSummary& WithApplicationStatus(const ApplicationStatus& value) { SetApplicationStatus(value); return *this;}

    /**
     * <p>The status of the application.</p>
     */
    inline ApplicationSummary& WithApplicationStatus(ApplicationStatus&& value) { SetApplicationStatus(std::move(value)); return *this;}


    /**
     * <p>Provides the current application version.</p>
     */
    inline long long GetApplicationVersionId() const{ return m_applicationVersionId; }

    /**
     * <p>Provides the current application version.</p>
     */
    inline bool ApplicationVersionIdHasBeenSet() const { return m_applicationVersionIdHasBeenSet; }

    /**
     * <p>Provides the current application version.</p>
     */
    inline void SetApplicationVersionId(long long value) { m_applicationVersionIdHasBeenSet = true; m_applicationVersionId = value; }

    /**
     * <p>Provides the current application version.</p>
     */
    inline ApplicationSummary& WithApplicationVersionId(long long value) { SetApplicationVersionId(value); return *this;}


    /**
     * <p>The runtime environment for the application.</p>
     */
    inline const RuntimeEnvironment& GetRuntimeEnvironment() const{ return m_runtimeEnvironment; }

    /**
     * <p>The runtime environment for the application.</p>
     */
    inline bool RuntimeEnvironmentHasBeenSet() const { return m_runtimeEnvironmentHasBeenSet; }

    /**
     * <p>The runtime environment for the application.</p>
     */
    inline void SetRuntimeEnvironment(const RuntimeEnvironment& value) { m_runtimeEnvironmentHasBeenSet = true; m_runtimeEnvironment = value; }

    /**
     * <p>The runtime environment for the application.</p>
     */
    inline void SetRuntimeEnvironment(RuntimeEnvironment&& value) { m_runtimeEnvironmentHasBeenSet = true; m_runtimeEnvironment = std::move(value); }

    /**
     * <p>The runtime environment for the application.</p>
     */
    inline ApplicationSummary& WithRuntimeEnvironment(const RuntimeEnvironment& value) { SetRuntimeEnvironment(value); return *this;}

    /**
     * <p>The runtime environment for the application.</p>
     */
    inline ApplicationSummary& WithRuntimeEnvironment(RuntimeEnvironment&& value) { SetRuntimeEnvironment(std::move(value)); return *this;}


    /**
     * <p>For a Kinesis Data Analytics for Apache Flink application, the mode is
     * <code>STREAMING</code>. For a Kinesis Data Analytics Studio notebook, it is
     * <code>INTERACTIVE</code>.</p>
     */
    inline const ApplicationMode& GetApplicationMode() const{ return m_applicationMode; }

    /**
     * <p>For a Kinesis Data Analytics for Apache Flink application, the mode is
     * <code>STREAMING</code>. For a Kinesis Data Analytics Studio notebook, it is
     * <code>INTERACTIVE</code>.</p>
     */
    inline bool ApplicationModeHasBeenSet() const { return m_applicationModeHasBeenSet; }

    /**
     * <p>For a Kinesis Data Analytics for Apache Flink application, the mode is
     * <code>STREAMING</code>. For a Kinesis Data Analytics Studio notebook, it is
     * <code>INTERACTIVE</code>.</p>
     */
    inline void SetApplicationMode(const ApplicationMode& value) { m_applicationModeHasBeenSet = true; m_applicationMode = value; }

    /**
     * <p>For a Kinesis Data Analytics for Apache Flink application, the mode is
     * <code>STREAMING</code>. For a Kinesis Data Analytics Studio notebook, it is
     * <code>INTERACTIVE</code>.</p>
     */
    inline void SetApplicationMode(ApplicationMode&& value) { m_applicationModeHasBeenSet = true; m_applicationMode = std::move(value); }

    /**
     * <p>For a Kinesis Data Analytics for Apache Flink application, the mode is
     * <code>STREAMING</code>. For a Kinesis Data Analytics Studio notebook, it is
     * <code>INTERACTIVE</code>.</p>
     */
    inline ApplicationSummary& WithApplicationMode(const ApplicationMode& value) { SetApplicationMode(value); return *this;}

    /**
     * <p>For a Kinesis Data Analytics for Apache Flink application, the mode is
     * <code>STREAMING</code>. For a Kinesis Data Analytics Studio notebook, it is
     * <code>INTERACTIVE</code>.</p>
     */
    inline ApplicationSummary& WithApplicationMode(ApplicationMode&& value) { SetApplicationMode(std::move(value)); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_applicationARN;
    bool m_applicationARNHasBeenSet = false;

    ApplicationStatus m_applicationStatus;
    bool m_applicationStatusHasBeenSet = false;

    long long m_applicationVersionId;
    bool m_applicationVersionIdHasBeenSet = false;

    RuntimeEnvironment m_runtimeEnvironment;
    bool m_runtimeEnvironmentHasBeenSet = false;

    ApplicationMode m_applicationMode;
    bool m_applicationModeHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
