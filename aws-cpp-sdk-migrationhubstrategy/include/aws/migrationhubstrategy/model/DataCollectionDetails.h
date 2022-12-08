/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/migrationhubstrategy/model/AssessmentStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   * <p> Detailed information about an assessment. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/DataCollectionDetails">AWS
   * API Reference</a></p>
   */
  class DataCollectionDetails
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API DataCollectionDetails();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API DataCollectionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API DataCollectionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The time the assessment completes. </p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }

    /**
     * <p> The time the assessment completes. </p>
     */
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }

    /**
     * <p> The time the assessment completes. </p>
     */
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }

    /**
     * <p> The time the assessment completes. </p>
     */
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }

    /**
     * <p> The time the assessment completes. </p>
     */
    inline DataCollectionDetails& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p> The time the assessment completes. </p>
     */
    inline DataCollectionDetails& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}


    /**
     * <p> The number of failed servers in the assessment. </p>
     */
    inline int GetFailed() const{ return m_failed; }

    /**
     * <p> The number of failed servers in the assessment. </p>
     */
    inline bool FailedHasBeenSet() const { return m_failedHasBeenSet; }

    /**
     * <p> The number of failed servers in the assessment. </p>
     */
    inline void SetFailed(int value) { m_failedHasBeenSet = true; m_failed = value; }

    /**
     * <p> The number of failed servers in the assessment. </p>
     */
    inline DataCollectionDetails& WithFailed(int value) { SetFailed(value); return *this;}


    /**
     * <p> The number of servers with the assessment status <code>IN_PROGESS</code>.
     * </p>
     */
    inline int GetInProgress() const{ return m_inProgress; }

    /**
     * <p> The number of servers with the assessment status <code>IN_PROGESS</code>.
     * </p>
     */
    inline bool InProgressHasBeenSet() const { return m_inProgressHasBeenSet; }

    /**
     * <p> The number of servers with the assessment status <code>IN_PROGESS</code>.
     * </p>
     */
    inline void SetInProgress(int value) { m_inProgressHasBeenSet = true; m_inProgress = value; }

    /**
     * <p> The number of servers with the assessment status <code>IN_PROGESS</code>.
     * </p>
     */
    inline DataCollectionDetails& WithInProgress(int value) { SetInProgress(value); return *this;}


    /**
     * <p> The total number of servers in the assessment. </p>
     */
    inline int GetServers() const{ return m_servers; }

    /**
     * <p> The total number of servers in the assessment. </p>
     */
    inline bool ServersHasBeenSet() const { return m_serversHasBeenSet; }

    /**
     * <p> The total number of servers in the assessment. </p>
     */
    inline void SetServers(int value) { m_serversHasBeenSet = true; m_servers = value; }

    /**
     * <p> The total number of servers in the assessment. </p>
     */
    inline DataCollectionDetails& WithServers(int value) { SetServers(value); return *this;}


    /**
     * <p> The start time of assessment. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p> The start time of assessment. </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p> The start time of assessment. </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p> The start time of assessment. </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p> The start time of assessment. </p>
     */
    inline DataCollectionDetails& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p> The start time of assessment. </p>
     */
    inline DataCollectionDetails& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p> The status of the assessment. </p>
     */
    inline const AssessmentStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The status of the assessment. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status of the assessment. </p>
     */
    inline void SetStatus(const AssessmentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status of the assessment. </p>
     */
    inline void SetStatus(AssessmentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status of the assessment. </p>
     */
    inline DataCollectionDetails& WithStatus(const AssessmentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of the assessment. </p>
     */
    inline DataCollectionDetails& WithStatus(AssessmentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The status message of the assessment.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message of the assessment.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The status message of the assessment.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status message of the assessment.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status message of the assessment.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status message of the assessment.</p>
     */
    inline DataCollectionDetails& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message of the assessment.</p>
     */
    inline DataCollectionDetails& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message of the assessment.</p>
     */
    inline DataCollectionDetails& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p> The number of successful servers in the assessment. </p>
     */
    inline int GetSuccess() const{ return m_success; }

    /**
     * <p> The number of successful servers in the assessment. </p>
     */
    inline bool SuccessHasBeenSet() const { return m_successHasBeenSet; }

    /**
     * <p> The number of successful servers in the assessment. </p>
     */
    inline void SetSuccess(int value) { m_successHasBeenSet = true; m_success = value; }

    /**
     * <p> The number of successful servers in the assessment. </p>
     */
    inline DataCollectionDetails& WithSuccess(int value) { SetSuccess(value); return *this;}

  private:

    Aws::Utils::DateTime m_completionTime;
    bool m_completionTimeHasBeenSet = false;

    int m_failed;
    bool m_failedHasBeenSet = false;

    int m_inProgress;
    bool m_inProgressHasBeenSet = false;

    int m_servers;
    bool m_serversHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    AssessmentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    int m_success;
    bool m_successHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
