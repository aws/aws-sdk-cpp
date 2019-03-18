/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/PhaseStatus.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>Describes the detailed result of a <code>TaskExecution</code> operation. This
   * result includes the time in milliseconds spent in each phase, the status of the
   * task execution, and the errors encountered.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/TaskExecutionResultDetail">AWS
   * API Reference</a></p>
   */
  class AWS_DATASYNC_API TaskExecutionResultDetail
  {
  public:
    TaskExecutionResultDetail();
    TaskExecutionResultDetail(Aws::Utils::Json::JsonView jsonValue);
    TaskExecutionResultDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total time in milliseconds that AWS DataSync spent in the PREPARING
     * phase. </p>
     */
    inline long long GetPrepareDuration() const{ return m_prepareDuration; }

    /**
     * <p>The total time in milliseconds that AWS DataSync spent in the PREPARING
     * phase. </p>
     */
    inline bool PrepareDurationHasBeenSet() const { return m_prepareDurationHasBeenSet; }

    /**
     * <p>The total time in milliseconds that AWS DataSync spent in the PREPARING
     * phase. </p>
     */
    inline void SetPrepareDuration(long long value) { m_prepareDurationHasBeenSet = true; m_prepareDuration = value; }

    /**
     * <p>The total time in milliseconds that AWS DataSync spent in the PREPARING
     * phase. </p>
     */
    inline TaskExecutionResultDetail& WithPrepareDuration(long long value) { SetPrepareDuration(value); return *this;}


    /**
     * <p>The status of the PREPARING phase.</p>
     */
    inline const PhaseStatus& GetPrepareStatus() const{ return m_prepareStatus; }

    /**
     * <p>The status of the PREPARING phase.</p>
     */
    inline bool PrepareStatusHasBeenSet() const { return m_prepareStatusHasBeenSet; }

    /**
     * <p>The status of the PREPARING phase.</p>
     */
    inline void SetPrepareStatus(const PhaseStatus& value) { m_prepareStatusHasBeenSet = true; m_prepareStatus = value; }

    /**
     * <p>The status of the PREPARING phase.</p>
     */
    inline void SetPrepareStatus(PhaseStatus&& value) { m_prepareStatusHasBeenSet = true; m_prepareStatus = std::move(value); }

    /**
     * <p>The status of the PREPARING phase.</p>
     */
    inline TaskExecutionResultDetail& WithPrepareStatus(const PhaseStatus& value) { SetPrepareStatus(value); return *this;}

    /**
     * <p>The status of the PREPARING phase.</p>
     */
    inline TaskExecutionResultDetail& WithPrepareStatus(PhaseStatus&& value) { SetPrepareStatus(std::move(value)); return *this;}


    /**
     * <p>The total time in milliseconds that AWS DataSync spent in the TRANSFERRING
     * phase.</p>
     */
    inline long long GetTransferDuration() const{ return m_transferDuration; }

    /**
     * <p>The total time in milliseconds that AWS DataSync spent in the TRANSFERRING
     * phase.</p>
     */
    inline bool TransferDurationHasBeenSet() const { return m_transferDurationHasBeenSet; }

    /**
     * <p>The total time in milliseconds that AWS DataSync spent in the TRANSFERRING
     * phase.</p>
     */
    inline void SetTransferDuration(long long value) { m_transferDurationHasBeenSet = true; m_transferDuration = value; }

    /**
     * <p>The total time in milliseconds that AWS DataSync spent in the TRANSFERRING
     * phase.</p>
     */
    inline TaskExecutionResultDetail& WithTransferDuration(long long value) { SetTransferDuration(value); return *this;}


    /**
     * <p>The status of the TRANSFERRING Phase.</p>
     */
    inline const PhaseStatus& GetTransferStatus() const{ return m_transferStatus; }

    /**
     * <p>The status of the TRANSFERRING Phase.</p>
     */
    inline bool TransferStatusHasBeenSet() const { return m_transferStatusHasBeenSet; }

    /**
     * <p>The status of the TRANSFERRING Phase.</p>
     */
    inline void SetTransferStatus(const PhaseStatus& value) { m_transferStatusHasBeenSet = true; m_transferStatus = value; }

    /**
     * <p>The status of the TRANSFERRING Phase.</p>
     */
    inline void SetTransferStatus(PhaseStatus&& value) { m_transferStatusHasBeenSet = true; m_transferStatus = std::move(value); }

    /**
     * <p>The status of the TRANSFERRING Phase.</p>
     */
    inline TaskExecutionResultDetail& WithTransferStatus(const PhaseStatus& value) { SetTransferStatus(value); return *this;}

    /**
     * <p>The status of the TRANSFERRING Phase.</p>
     */
    inline TaskExecutionResultDetail& WithTransferStatus(PhaseStatus&& value) { SetTransferStatus(std::move(value)); return *this;}


    /**
     * <p>The total time in milliseconds that AWS DataSync spent in the VERIFYING
     * phase.</p>
     */
    inline long long GetVerifyDuration() const{ return m_verifyDuration; }

    /**
     * <p>The total time in milliseconds that AWS DataSync spent in the VERIFYING
     * phase.</p>
     */
    inline bool VerifyDurationHasBeenSet() const { return m_verifyDurationHasBeenSet; }

    /**
     * <p>The total time in milliseconds that AWS DataSync spent in the VERIFYING
     * phase.</p>
     */
    inline void SetVerifyDuration(long long value) { m_verifyDurationHasBeenSet = true; m_verifyDuration = value; }

    /**
     * <p>The total time in milliseconds that AWS DataSync spent in the VERIFYING
     * phase.</p>
     */
    inline TaskExecutionResultDetail& WithVerifyDuration(long long value) { SetVerifyDuration(value); return *this;}


    /**
     * <p>The status of the VERIFYING Phase.</p>
     */
    inline const PhaseStatus& GetVerifyStatus() const{ return m_verifyStatus; }

    /**
     * <p>The status of the VERIFYING Phase.</p>
     */
    inline bool VerifyStatusHasBeenSet() const { return m_verifyStatusHasBeenSet; }

    /**
     * <p>The status of the VERIFYING Phase.</p>
     */
    inline void SetVerifyStatus(const PhaseStatus& value) { m_verifyStatusHasBeenSet = true; m_verifyStatus = value; }

    /**
     * <p>The status of the VERIFYING Phase.</p>
     */
    inline void SetVerifyStatus(PhaseStatus&& value) { m_verifyStatusHasBeenSet = true; m_verifyStatus = std::move(value); }

    /**
     * <p>The status of the VERIFYING Phase.</p>
     */
    inline TaskExecutionResultDetail& WithVerifyStatus(const PhaseStatus& value) { SetVerifyStatus(value); return *this;}

    /**
     * <p>The status of the VERIFYING Phase.</p>
     */
    inline TaskExecutionResultDetail& WithVerifyStatus(PhaseStatus&& value) { SetVerifyStatus(std::move(value)); return *this;}


    /**
     * <p>Errors that AWS DataSync encountered during execution of the task. You can
     * use this error code to help troubleshoot issues.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>Errors that AWS DataSync encountered during execution of the task. You can
     * use this error code to help troubleshoot issues.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>Errors that AWS DataSync encountered during execution of the task. You can
     * use this error code to help troubleshoot issues.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>Errors that AWS DataSync encountered during execution of the task. You can
     * use this error code to help troubleshoot issues.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>Errors that AWS DataSync encountered during execution of the task. You can
     * use this error code to help troubleshoot issues.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>Errors that AWS DataSync encountered during execution of the task. You can
     * use this error code to help troubleshoot issues.</p>
     */
    inline TaskExecutionResultDetail& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>Errors that AWS DataSync encountered during execution of the task. You can
     * use this error code to help troubleshoot issues.</p>
     */
    inline TaskExecutionResultDetail& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>Errors that AWS DataSync encountered during execution of the task. You can
     * use this error code to help troubleshoot issues.</p>
     */
    inline TaskExecutionResultDetail& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>Detailed description of an error that was encountered during the task
     * execution. You can use this information to help troubleshoot issues. </p>
     */
    inline const Aws::String& GetErrorDetail() const{ return m_errorDetail; }

    /**
     * <p>Detailed description of an error that was encountered during the task
     * execution. You can use this information to help troubleshoot issues. </p>
     */
    inline bool ErrorDetailHasBeenSet() const { return m_errorDetailHasBeenSet; }

    /**
     * <p>Detailed description of an error that was encountered during the task
     * execution. You can use this information to help troubleshoot issues. </p>
     */
    inline void SetErrorDetail(const Aws::String& value) { m_errorDetailHasBeenSet = true; m_errorDetail = value; }

    /**
     * <p>Detailed description of an error that was encountered during the task
     * execution. You can use this information to help troubleshoot issues. </p>
     */
    inline void SetErrorDetail(Aws::String&& value) { m_errorDetailHasBeenSet = true; m_errorDetail = std::move(value); }

    /**
     * <p>Detailed description of an error that was encountered during the task
     * execution. You can use this information to help troubleshoot issues. </p>
     */
    inline void SetErrorDetail(const char* value) { m_errorDetailHasBeenSet = true; m_errorDetail.assign(value); }

    /**
     * <p>Detailed description of an error that was encountered during the task
     * execution. You can use this information to help troubleshoot issues. </p>
     */
    inline TaskExecutionResultDetail& WithErrorDetail(const Aws::String& value) { SetErrorDetail(value); return *this;}

    /**
     * <p>Detailed description of an error that was encountered during the task
     * execution. You can use this information to help troubleshoot issues. </p>
     */
    inline TaskExecutionResultDetail& WithErrorDetail(Aws::String&& value) { SetErrorDetail(std::move(value)); return *this;}

    /**
     * <p>Detailed description of an error that was encountered during the task
     * execution. You can use this information to help troubleshoot issues. </p>
     */
    inline TaskExecutionResultDetail& WithErrorDetail(const char* value) { SetErrorDetail(value); return *this;}

  private:

    long long m_prepareDuration;
    bool m_prepareDurationHasBeenSet;

    PhaseStatus m_prepareStatus;
    bool m_prepareStatusHasBeenSet;

    long long m_transferDuration;
    bool m_transferDurationHasBeenSet;

    PhaseStatus m_transferStatus;
    bool m_transferStatusHasBeenSet;

    long long m_verifyDuration;
    bool m_verifyDurationHasBeenSet;

    PhaseStatus m_verifyStatus;
    bool m_verifyStatusHasBeenSet;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet;

    Aws::String m_errorDetail;
    bool m_errorDetailHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
