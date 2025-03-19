/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/ApplicationStatus.h>
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
   * <p>The summary of the application version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ApplicationVersionSummary">AWS
   * API Reference</a></p>
   */
  class ApplicationVersionSummary
  {
  public:
    AWS_KINESISANALYTICSV2_API ApplicationVersionSummary() = default;
    AWS_KINESISANALYTICSV2_API ApplicationVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ApplicationVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the application version. Managed Service for Apache Flink updates
     * the <code>ApplicationVersionId</code> each time you update the application.</p>
     */
    inline long long GetApplicationVersionId() const { return m_applicationVersionId; }
    inline bool ApplicationVersionIdHasBeenSet() const { return m_applicationVersionIdHasBeenSet; }
    inline void SetApplicationVersionId(long long value) { m_applicationVersionIdHasBeenSet = true; m_applicationVersionId = value; }
    inline ApplicationVersionSummary& WithApplicationVersionId(long long value) { SetApplicationVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the application.</p>
     */
    inline ApplicationStatus GetApplicationStatus() const { return m_applicationStatus; }
    inline bool ApplicationStatusHasBeenSet() const { return m_applicationStatusHasBeenSet; }
    inline void SetApplicationStatus(ApplicationStatus value) { m_applicationStatusHasBeenSet = true; m_applicationStatus = value; }
    inline ApplicationVersionSummary& WithApplicationStatus(ApplicationStatus value) { SetApplicationStatus(value); return *this;}
    ///@}
  private:

    long long m_applicationVersionId{0};
    bool m_applicationVersionIdHasBeenSet = false;

    ApplicationStatus m_applicationStatus{ApplicationStatus::NOT_SET};
    bool m_applicationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
