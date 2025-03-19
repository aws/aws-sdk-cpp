/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/UsageReportSchedule.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/LastReportGenerationExecutionError.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes information about the usage report subscription.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UsageReportSubscription">AWS
   * API Reference</a></p>
   */
  class UsageReportSubscription
  {
  public:
    AWS_APPSTREAM_API UsageReportSubscription() = default;
    AWS_APPSTREAM_API UsageReportSubscription(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API UsageReportSubscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 bucket where generated reports are stored.</p> <p>If you
     * enabled on-instance session scripts and Amazon S3 logging for your session
     * script configuration, AppStream 2.0 created an S3 bucket to store the script
     * output. The bucket is unique to your account and Region. When you enable usage
     * reporting in this case, AppStream 2.0 uses the same bucket to store your usage
     * reports. If you haven't already enabled on-instance session scripts, when you
     * enable usage reports, AppStream 2.0 creates a new S3 bucket.</p>
     */
    inline const Aws::String& GetS3BucketName() const { return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    template<typename S3BucketNameT = Aws::String>
    void SetS3BucketName(S3BucketNameT&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::forward<S3BucketNameT>(value); }
    template<typename S3BucketNameT = Aws::String>
    UsageReportSubscription& WithS3BucketName(S3BucketNameT&& value) { SetS3BucketName(std::forward<S3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule for generating usage reports.</p>
     */
    inline UsageReportSchedule GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    inline void SetSchedule(UsageReportSchedule value) { m_scheduleHasBeenSet = true; m_schedule = value; }
    inline UsageReportSubscription& WithSchedule(UsageReportSchedule value) { SetSchedule(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the last usage report was generated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastGeneratedReportDate() const { return m_lastGeneratedReportDate; }
    inline bool LastGeneratedReportDateHasBeenSet() const { return m_lastGeneratedReportDateHasBeenSet; }
    template<typename LastGeneratedReportDateT = Aws::Utils::DateTime>
    void SetLastGeneratedReportDate(LastGeneratedReportDateT&& value) { m_lastGeneratedReportDateHasBeenSet = true; m_lastGeneratedReportDate = std::forward<LastGeneratedReportDateT>(value); }
    template<typename LastGeneratedReportDateT = Aws::Utils::DateTime>
    UsageReportSubscription& WithLastGeneratedReportDate(LastGeneratedReportDateT&& value) { SetLastGeneratedReportDate(std::forward<LastGeneratedReportDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The errors that were returned if usage reports couldn't be generated.</p>
     */
    inline const Aws::Vector<LastReportGenerationExecutionError>& GetSubscriptionErrors() const { return m_subscriptionErrors; }
    inline bool SubscriptionErrorsHasBeenSet() const { return m_subscriptionErrorsHasBeenSet; }
    template<typename SubscriptionErrorsT = Aws::Vector<LastReportGenerationExecutionError>>
    void SetSubscriptionErrors(SubscriptionErrorsT&& value) { m_subscriptionErrorsHasBeenSet = true; m_subscriptionErrors = std::forward<SubscriptionErrorsT>(value); }
    template<typename SubscriptionErrorsT = Aws::Vector<LastReportGenerationExecutionError>>
    UsageReportSubscription& WithSubscriptionErrors(SubscriptionErrorsT&& value) { SetSubscriptionErrors(std::forward<SubscriptionErrorsT>(value)); return *this;}
    template<typename SubscriptionErrorsT = LastReportGenerationExecutionError>
    UsageReportSubscription& AddSubscriptionErrors(SubscriptionErrorsT&& value) { m_subscriptionErrorsHasBeenSet = true; m_subscriptionErrors.emplace_back(std::forward<SubscriptionErrorsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    UsageReportSchedule m_schedule{UsageReportSchedule::NOT_SET};
    bool m_scheduleHasBeenSet = false;

    Aws::Utils::DateTime m_lastGeneratedReportDate{};
    bool m_lastGeneratedReportDateHasBeenSet = false;

    Aws::Vector<LastReportGenerationExecutionError> m_subscriptionErrors;
    bool m_subscriptionErrorsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
