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
#include <aws/s3control/model/JobOperation.h>
#include <aws/s3control/model/JobReport.h>
#include <aws/s3control/model/JobManifest.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace S3Control
{
namespace Model
{

  /**
   */
  class AWS_S3CONTROL_API CreateJobRequest : public S3ControlRequest
  {
  public:
    CreateJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateJob"; }

    Aws::String SerializePayload() const override;

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
    inline CreateJobRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p/>
     */
    inline CreateJobRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline CreateJobRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>Indicates whether confirmation is required before Amazon S3 runs the job.
     * Confirmation is only required for jobs created through the Amazon S3
     * console.</p>
     */
    inline bool GetConfirmationRequired() const{ return m_confirmationRequired; }

    /**
     * <p>Indicates whether confirmation is required before Amazon S3 runs the job.
     * Confirmation is only required for jobs created through the Amazon S3
     * console.</p>
     */
    inline bool ConfirmationRequiredHasBeenSet() const { return m_confirmationRequiredHasBeenSet; }

    /**
     * <p>Indicates whether confirmation is required before Amazon S3 runs the job.
     * Confirmation is only required for jobs created through the Amazon S3
     * console.</p>
     */
    inline void SetConfirmationRequired(bool value) { m_confirmationRequiredHasBeenSet = true; m_confirmationRequired = value; }

    /**
     * <p>Indicates whether confirmation is required before Amazon S3 runs the job.
     * Confirmation is only required for jobs created through the Amazon S3
     * console.</p>
     */
    inline CreateJobRequest& WithConfirmationRequired(bool value) { SetConfirmationRequired(value); return *this;}


    /**
     * <p>The operation that you want this job to perform on each object listed in the
     * manifest. For more information about the available operations, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-operations.html">Available
     * Operations</a> in the <i>Amazon Simple Storage Service Developer Guide</i>.</p>
     */
    inline const JobOperation& GetOperation() const{ return m_operation; }

    /**
     * <p>The operation that you want this job to perform on each object listed in the
     * manifest. For more information about the available operations, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-operations.html">Available
     * Operations</a> in the <i>Amazon Simple Storage Service Developer Guide</i>.</p>
     */
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }

    /**
     * <p>The operation that you want this job to perform on each object listed in the
     * manifest. For more information about the available operations, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-operations.html">Available
     * Operations</a> in the <i>Amazon Simple Storage Service Developer Guide</i>.</p>
     */
    inline void SetOperation(const JobOperation& value) { m_operationHasBeenSet = true; m_operation = value; }

    /**
     * <p>The operation that you want this job to perform on each object listed in the
     * manifest. For more information about the available operations, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-operations.html">Available
     * Operations</a> in the <i>Amazon Simple Storage Service Developer Guide</i>.</p>
     */
    inline void SetOperation(JobOperation&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }

    /**
     * <p>The operation that you want this job to perform on each object listed in the
     * manifest. For more information about the available operations, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-operations.html">Available
     * Operations</a> in the <i>Amazon Simple Storage Service Developer Guide</i>.</p>
     */
    inline CreateJobRequest& WithOperation(const JobOperation& value) { SetOperation(value); return *this;}

    /**
     * <p>The operation that you want this job to perform on each object listed in the
     * manifest. For more information about the available operations, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-operations.html">Available
     * Operations</a> in the <i>Amazon Simple Storage Service Developer Guide</i>.</p>
     */
    inline CreateJobRequest& WithOperation(JobOperation&& value) { SetOperation(std::move(value)); return *this;}


    /**
     * <p>Configuration parameters for the optional job-completion report.</p>
     */
    inline const JobReport& GetReport() const{ return m_report; }

    /**
     * <p>Configuration parameters for the optional job-completion report.</p>
     */
    inline bool ReportHasBeenSet() const { return m_reportHasBeenSet; }

    /**
     * <p>Configuration parameters for the optional job-completion report.</p>
     */
    inline void SetReport(const JobReport& value) { m_reportHasBeenSet = true; m_report = value; }

    /**
     * <p>Configuration parameters for the optional job-completion report.</p>
     */
    inline void SetReport(JobReport&& value) { m_reportHasBeenSet = true; m_report = std::move(value); }

    /**
     * <p>Configuration parameters for the optional job-completion report.</p>
     */
    inline CreateJobRequest& WithReport(const JobReport& value) { SetReport(value); return *this;}

    /**
     * <p>Configuration parameters for the optional job-completion report.</p>
     */
    inline CreateJobRequest& WithReport(JobReport&& value) { SetReport(std::move(value)); return *this;}


    /**
     * <p>An idempotency token to ensure that you don't accidentally submit the same
     * request twice. You can use any string up to the maximum length.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>An idempotency token to ensure that you don't accidentally submit the same
     * request twice. You can use any string up to the maximum length.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>An idempotency token to ensure that you don't accidentally submit the same
     * request twice. You can use any string up to the maximum length.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>An idempotency token to ensure that you don't accidentally submit the same
     * request twice. You can use any string up to the maximum length.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>An idempotency token to ensure that you don't accidentally submit the same
     * request twice. You can use any string up to the maximum length.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>An idempotency token to ensure that you don't accidentally submit the same
     * request twice. You can use any string up to the maximum length.</p>
     */
    inline CreateJobRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>An idempotency token to ensure that you don't accidentally submit the same
     * request twice. You can use any string up to the maximum length.</p>
     */
    inline CreateJobRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>An idempotency token to ensure that you don't accidentally submit the same
     * request twice. You can use any string up to the maximum length.</p>
     */
    inline CreateJobRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>Configuration parameters for the manifest.</p>
     */
    inline const JobManifest& GetManifest() const{ return m_manifest; }

    /**
     * <p>Configuration parameters for the manifest.</p>
     */
    inline bool ManifestHasBeenSet() const { return m_manifestHasBeenSet; }

    /**
     * <p>Configuration parameters for the manifest.</p>
     */
    inline void SetManifest(const JobManifest& value) { m_manifestHasBeenSet = true; m_manifest = value; }

    /**
     * <p>Configuration parameters for the manifest.</p>
     */
    inline void SetManifest(JobManifest&& value) { m_manifestHasBeenSet = true; m_manifest = std::move(value); }

    /**
     * <p>Configuration parameters for the manifest.</p>
     */
    inline CreateJobRequest& WithManifest(const JobManifest& value) { SetManifest(value); return *this;}

    /**
     * <p>Configuration parameters for the manifest.</p>
     */
    inline CreateJobRequest& WithManifest(JobManifest&& value) { SetManifest(std::move(value)); return *this;}


    /**
     * <p>A description for this job. You can use any string within the permitted
     * length. Descriptions don't need to be unique and can be used for multiple
     * jobs.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for this job. You can use any string within the permitted
     * length. Descriptions don't need to be unique and can be used for multiple
     * jobs.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for this job. You can use any string within the permitted
     * length. Descriptions don't need to be unique and can be used for multiple
     * jobs.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for this job. You can use any string within the permitted
     * length. Descriptions don't need to be unique and can be used for multiple
     * jobs.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for this job. You can use any string within the permitted
     * length. Descriptions don't need to be unique and can be used for multiple
     * jobs.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for this job. You can use any string within the permitted
     * length. Descriptions don't need to be unique and can be used for multiple
     * jobs.</p>
     */
    inline CreateJobRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for this job. You can use any string within the permitted
     * length. Descriptions don't need to be unique and can be used for multiple
     * jobs.</p>
     */
    inline CreateJobRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for this job. You can use any string within the permitted
     * length. Descriptions don't need to be unique and can be used for multiple
     * jobs.</p>
     */
    inline CreateJobRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The numerical priority for this job. Higher numbers indicate higher
     * priority.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The numerical priority for this job. Higher numbers indicate higher
     * priority.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The numerical priority for this job. Higher numbers indicate higher
     * priority.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The numerical priority for this job. Higher numbers indicate higher
     * priority.</p>
     */
    inline CreateJobRequest& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the Identity and Access Management (IAM)
     * Role that batch operations will use to execute this job's operation on each
     * object in the manifest.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Identity and Access Management (IAM)
     * Role that batch operations will use to execute this job's operation on each
     * object in the manifest.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Identity and Access Management (IAM)
     * Role that batch operations will use to execute this job's operation on each
     * object in the manifest.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Identity and Access Management (IAM)
     * Role that batch operations will use to execute this job's operation on each
     * object in the manifest.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the Identity and Access Management (IAM)
     * Role that batch operations will use to execute this job's operation on each
     * object in the manifest.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the Identity and Access Management (IAM)
     * Role that batch operations will use to execute this job's operation on each
     * object in the manifest.</p>
     */
    inline CreateJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the Identity and Access Management (IAM)
     * Role that batch operations will use to execute this job's operation on each
     * object in the manifest.</p>
     */
    inline CreateJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the Identity and Access Management (IAM)
     * Role that batch operations will use to execute this job's operation on each
     * object in the manifest.</p>
     */
    inline CreateJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    bool m_confirmationRequired;
    bool m_confirmationRequiredHasBeenSet;

    JobOperation m_operation;
    bool m_operationHasBeenSet;

    JobReport m_report;
    bool m_reportHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    JobManifest m_manifest;
    bool m_manifestHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    int m_priority;
    bool m_priorityHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
