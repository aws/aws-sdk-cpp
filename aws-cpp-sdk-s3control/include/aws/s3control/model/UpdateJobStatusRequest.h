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
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/RequestedJobStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace S3Control
{
namespace Model
{

  /**
   */
  class AWS_S3CONTROL_API UpdateJobStatusRequest : public S3ControlRequest
  {
  public:
    UpdateJobStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateJobStatus"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p/>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p/>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p/>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p/>
     */
    inline UpdateJobStatusRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p/>
     */
    inline UpdateJobStatusRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline UpdateJobStatusRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The ID of the job whose status you want to update.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The ID of the job whose status you want to update.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The ID of the job whose status you want to update.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The ID of the job whose status you want to update.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The ID of the job whose status you want to update.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The ID of the job whose status you want to update.</p>
     */
    inline UpdateJobStatusRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID of the job whose status you want to update.</p>
     */
    inline UpdateJobStatusRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the job whose status you want to update.</p>
     */
    inline UpdateJobStatusRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The status that you want to move the specified job to.</p>
     */
    inline const RequestedJobStatus& GetRequestedJobStatus() const{ return m_requestedJobStatus; }

    /**
     * <p>The status that you want to move the specified job to.</p>
     */
    inline bool RequestedJobStatusHasBeenSet() const { return m_requestedJobStatusHasBeenSet; }

    /**
     * <p>The status that you want to move the specified job to.</p>
     */
    inline void SetRequestedJobStatus(const RequestedJobStatus& value) { m_requestedJobStatusHasBeenSet = true; m_requestedJobStatus = value; }

    /**
     * <p>The status that you want to move the specified job to.</p>
     */
    inline void SetRequestedJobStatus(RequestedJobStatus&& value) { m_requestedJobStatusHasBeenSet = true; m_requestedJobStatus = std::move(value); }

    /**
     * <p>The status that you want to move the specified job to.</p>
     */
    inline UpdateJobStatusRequest& WithRequestedJobStatus(const RequestedJobStatus& value) { SetRequestedJobStatus(value); return *this;}

    /**
     * <p>The status that you want to move the specified job to.</p>
     */
    inline UpdateJobStatusRequest& WithRequestedJobStatus(RequestedJobStatus&& value) { SetRequestedJobStatus(std::move(value)); return *this;}


    /**
     * <p>A description of the reason why you want to change the specified job's
     * status. This field can be any string up to the maximum length.</p>
     */
    inline const Aws::String& GetStatusUpdateReason() const{ return m_statusUpdateReason; }

    /**
     * <p>A description of the reason why you want to change the specified job's
     * status. This field can be any string up to the maximum length.</p>
     */
    inline bool StatusUpdateReasonHasBeenSet() const { return m_statusUpdateReasonHasBeenSet; }

    /**
     * <p>A description of the reason why you want to change the specified job's
     * status. This field can be any string up to the maximum length.</p>
     */
    inline void SetStatusUpdateReason(const Aws::String& value) { m_statusUpdateReasonHasBeenSet = true; m_statusUpdateReason = value; }

    /**
     * <p>A description of the reason why you want to change the specified job's
     * status. This field can be any string up to the maximum length.</p>
     */
    inline void SetStatusUpdateReason(Aws::String&& value) { m_statusUpdateReasonHasBeenSet = true; m_statusUpdateReason = std::move(value); }

    /**
     * <p>A description of the reason why you want to change the specified job's
     * status. This field can be any string up to the maximum length.</p>
     */
    inline void SetStatusUpdateReason(const char* value) { m_statusUpdateReasonHasBeenSet = true; m_statusUpdateReason.assign(value); }

    /**
     * <p>A description of the reason why you want to change the specified job's
     * status. This field can be any string up to the maximum length.</p>
     */
    inline UpdateJobStatusRequest& WithStatusUpdateReason(const Aws::String& value) { SetStatusUpdateReason(value); return *this;}

    /**
     * <p>A description of the reason why you want to change the specified job's
     * status. This field can be any string up to the maximum length.</p>
     */
    inline UpdateJobStatusRequest& WithStatusUpdateReason(Aws::String&& value) { SetStatusUpdateReason(std::move(value)); return *this;}

    /**
     * <p>A description of the reason why you want to change the specified job's
     * status. This field can be any string up to the maximum length.</p>
     */
    inline UpdateJobStatusRequest& WithStatusUpdateReason(const char* value) { SetStatusUpdateReason(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;

    RequestedJobStatus m_requestedJobStatus;
    bool m_requestedJobStatusHasBeenSet;

    Aws::String m_statusUpdateReason;
    bool m_statusUpdateReasonHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
