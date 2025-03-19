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
    AWS_KINESISANALYTICSV2_API ApplicationSummary() = default;
    AWS_KINESISANALYTICSV2_API ApplicationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ApplicationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    ApplicationSummary& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the application.</p>
     */
    inline const Aws::String& GetApplicationARN() const { return m_applicationARN; }
    inline bool ApplicationARNHasBeenSet() const { return m_applicationARNHasBeenSet; }
    template<typename ApplicationARNT = Aws::String>
    void SetApplicationARN(ApplicationARNT&& value) { m_applicationARNHasBeenSet = true; m_applicationARN = std::forward<ApplicationARNT>(value); }
    template<typename ApplicationARNT = Aws::String>
    ApplicationSummary& WithApplicationARN(ApplicationARNT&& value) { SetApplicationARN(std::forward<ApplicationARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the application.</p>
     */
    inline ApplicationStatus GetApplicationStatus() const { return m_applicationStatus; }
    inline bool ApplicationStatusHasBeenSet() const { return m_applicationStatusHasBeenSet; }
    inline void SetApplicationStatus(ApplicationStatus value) { m_applicationStatusHasBeenSet = true; m_applicationStatus = value; }
    inline ApplicationSummary& WithApplicationStatus(ApplicationStatus value) { SetApplicationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the current application version.</p>
     */
    inline long long GetApplicationVersionId() const { return m_applicationVersionId; }
    inline bool ApplicationVersionIdHasBeenSet() const { return m_applicationVersionIdHasBeenSet; }
    inline void SetApplicationVersionId(long long value) { m_applicationVersionIdHasBeenSet = true; m_applicationVersionId = value; }
    inline ApplicationSummary& WithApplicationVersionId(long long value) { SetApplicationVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime environment for the application.</p>
     */
    inline RuntimeEnvironment GetRuntimeEnvironment() const { return m_runtimeEnvironment; }
    inline bool RuntimeEnvironmentHasBeenSet() const { return m_runtimeEnvironmentHasBeenSet; }
    inline void SetRuntimeEnvironment(RuntimeEnvironment value) { m_runtimeEnvironmentHasBeenSet = true; m_runtimeEnvironment = value; }
    inline ApplicationSummary& WithRuntimeEnvironment(RuntimeEnvironment value) { SetRuntimeEnvironment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For a Managed Service for Apache Flink application, the mode is
     * <code>STREAMING</code>. For a Managed Service for Apache Flink Studio notebook,
     * it is <code>INTERACTIVE</code>.</p>
     */
    inline ApplicationMode GetApplicationMode() const { return m_applicationMode; }
    inline bool ApplicationModeHasBeenSet() const { return m_applicationModeHasBeenSet; }
    inline void SetApplicationMode(ApplicationMode value) { m_applicationModeHasBeenSet = true; m_applicationMode = value; }
    inline ApplicationSummary& WithApplicationMode(ApplicationMode value) { SetApplicationMode(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_applicationARN;
    bool m_applicationARNHasBeenSet = false;

    ApplicationStatus m_applicationStatus{ApplicationStatus::NOT_SET};
    bool m_applicationStatusHasBeenSet = false;

    long long m_applicationVersionId{0};
    bool m_applicationVersionIdHasBeenSet = false;

    RuntimeEnvironment m_runtimeEnvironment{RuntimeEnvironment::NOT_SET};
    bool m_runtimeEnvironmentHasBeenSet = false;

    ApplicationMode m_applicationMode{ApplicationMode::NOT_SET};
    bool m_applicationModeHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
