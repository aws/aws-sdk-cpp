﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/BatchSegmentJobInput.h>
#include <aws/personalize/model/BatchSegmentJobOutput.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class AWS_PERSONALIZE_API CreateBatchSegmentJobRequest : public PersonalizeRequest
  {
  public:
    CreateBatchSegmentJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBatchSegmentJob"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the batch segment job to create.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the batch segment job to create.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name of the batch segment job to create.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the batch segment job to create.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name of the batch segment job to create.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the batch segment job to create.</p>
     */
    inline CreateBatchSegmentJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the batch segment job to create.</p>
     */
    inline CreateBatchSegmentJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the batch segment job to create.</p>
     */
    inline CreateBatchSegmentJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the solution version you want the batch
     * segment job to use to generate batch segments.</p>
     */
    inline const Aws::String& GetSolutionVersionArn() const{ return m_solutionVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version you want the batch
     * segment job to use to generate batch segments.</p>
     */
    inline bool SolutionVersionArnHasBeenSet() const { return m_solutionVersionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version you want the batch
     * segment job to use to generate batch segments.</p>
     */
    inline void SetSolutionVersionArn(const Aws::String& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version you want the batch
     * segment job to use to generate batch segments.</p>
     */
    inline void SetSolutionVersionArn(Aws::String&& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version you want the batch
     * segment job to use to generate batch segments.</p>
     */
    inline void SetSolutionVersionArn(const char* value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version you want the batch
     * segment job to use to generate batch segments.</p>
     */
    inline CreateBatchSegmentJobRequest& WithSolutionVersionArn(const Aws::String& value) { SetSolutionVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version you want the batch
     * segment job to use to generate batch segments.</p>
     */
    inline CreateBatchSegmentJobRequest& WithSolutionVersionArn(Aws::String&& value) { SetSolutionVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version you want the batch
     * segment job to use to generate batch segments.</p>
     */
    inline CreateBatchSegmentJobRequest& WithSolutionVersionArn(const char* value) { SetSolutionVersionArn(value); return *this;}


    /**
     * <p>The ARN of the filter to apply to the batch segment job. For more information
     * on using filters, see <a>filter-batch</a>.</p>
     */
    inline const Aws::String& GetFilterArn() const{ return m_filterArn; }

    /**
     * <p>The ARN of the filter to apply to the batch segment job. For more information
     * on using filters, see <a>filter-batch</a>.</p>
     */
    inline bool FilterArnHasBeenSet() const { return m_filterArnHasBeenSet; }

    /**
     * <p>The ARN of the filter to apply to the batch segment job. For more information
     * on using filters, see <a>filter-batch</a>.</p>
     */
    inline void SetFilterArn(const Aws::String& value) { m_filterArnHasBeenSet = true; m_filterArn = value; }

    /**
     * <p>The ARN of the filter to apply to the batch segment job. For more information
     * on using filters, see <a>filter-batch</a>.</p>
     */
    inline void SetFilterArn(Aws::String&& value) { m_filterArnHasBeenSet = true; m_filterArn = std::move(value); }

    /**
     * <p>The ARN of the filter to apply to the batch segment job. For more information
     * on using filters, see <a>filter-batch</a>.</p>
     */
    inline void SetFilterArn(const char* value) { m_filterArnHasBeenSet = true; m_filterArn.assign(value); }

    /**
     * <p>The ARN of the filter to apply to the batch segment job. For more information
     * on using filters, see <a>filter-batch</a>.</p>
     */
    inline CreateBatchSegmentJobRequest& WithFilterArn(const Aws::String& value) { SetFilterArn(value); return *this;}

    /**
     * <p>The ARN of the filter to apply to the batch segment job. For more information
     * on using filters, see <a>filter-batch</a>.</p>
     */
    inline CreateBatchSegmentJobRequest& WithFilterArn(Aws::String&& value) { SetFilterArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the filter to apply to the batch segment job. For more information
     * on using filters, see <a>filter-batch</a>.</p>
     */
    inline CreateBatchSegmentJobRequest& WithFilterArn(const char* value) { SetFilterArn(value); return *this;}


    /**
     * <p>The number of predicted users generated by the batch segment job for each
     * line of input data.</p>
     */
    inline int GetNumResults() const{ return m_numResults; }

    /**
     * <p>The number of predicted users generated by the batch segment job for each
     * line of input data.</p>
     */
    inline bool NumResultsHasBeenSet() const { return m_numResultsHasBeenSet; }

    /**
     * <p>The number of predicted users generated by the batch segment job for each
     * line of input data.</p>
     */
    inline void SetNumResults(int value) { m_numResultsHasBeenSet = true; m_numResults = value; }

    /**
     * <p>The number of predicted users generated by the batch segment job for each
     * line of input data.</p>
     */
    inline CreateBatchSegmentJobRequest& WithNumResults(int value) { SetNumResults(value); return *this;}


    /**
     * <p>The Amazon S3 path for the input data used to generate the batch segment
     * job.</p>
     */
    inline const BatchSegmentJobInput& GetJobInput() const{ return m_jobInput; }

    /**
     * <p>The Amazon S3 path for the input data used to generate the batch segment
     * job.</p>
     */
    inline bool JobInputHasBeenSet() const { return m_jobInputHasBeenSet; }

    /**
     * <p>The Amazon S3 path for the input data used to generate the batch segment
     * job.</p>
     */
    inline void SetJobInput(const BatchSegmentJobInput& value) { m_jobInputHasBeenSet = true; m_jobInput = value; }

    /**
     * <p>The Amazon S3 path for the input data used to generate the batch segment
     * job.</p>
     */
    inline void SetJobInput(BatchSegmentJobInput&& value) { m_jobInputHasBeenSet = true; m_jobInput = std::move(value); }

    /**
     * <p>The Amazon S3 path for the input data used to generate the batch segment
     * job.</p>
     */
    inline CreateBatchSegmentJobRequest& WithJobInput(const BatchSegmentJobInput& value) { SetJobInput(value); return *this;}

    /**
     * <p>The Amazon S3 path for the input data used to generate the batch segment
     * job.</p>
     */
    inline CreateBatchSegmentJobRequest& WithJobInput(BatchSegmentJobInput&& value) { SetJobInput(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 path for the bucket where the job's output will be stored.</p>
     */
    inline const BatchSegmentJobOutput& GetJobOutput() const{ return m_jobOutput; }

    /**
     * <p>The Amazon S3 path for the bucket where the job's output will be stored.</p>
     */
    inline bool JobOutputHasBeenSet() const { return m_jobOutputHasBeenSet; }

    /**
     * <p>The Amazon S3 path for the bucket where the job's output will be stored.</p>
     */
    inline void SetJobOutput(const BatchSegmentJobOutput& value) { m_jobOutputHasBeenSet = true; m_jobOutput = value; }

    /**
     * <p>The Amazon S3 path for the bucket where the job's output will be stored.</p>
     */
    inline void SetJobOutput(BatchSegmentJobOutput&& value) { m_jobOutputHasBeenSet = true; m_jobOutput = std::move(value); }

    /**
     * <p>The Amazon S3 path for the bucket where the job's output will be stored.</p>
     */
    inline CreateBatchSegmentJobRequest& WithJobOutput(const BatchSegmentJobOutput& value) { SetJobOutput(value); return *this;}

    /**
     * <p>The Amazon S3 path for the bucket where the job's output will be stored.</p>
     */
    inline CreateBatchSegmentJobRequest& WithJobOutput(BatchSegmentJobOutput&& value) { SetJobOutput(std::move(value)); return *this;}


    /**
     * <p>The ARN of the Amazon Identity and Access Management role that has
     * permissions to read and write to your input and output Amazon S3 buckets
     * respectively.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the Amazon Identity and Access Management role that has
     * permissions to read and write to your input and output Amazon S3 buckets
     * respectively.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the Amazon Identity and Access Management role that has
     * permissions to read and write to your input and output Amazon S3 buckets
     * respectively.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the Amazon Identity and Access Management role that has
     * permissions to read and write to your input and output Amazon S3 buckets
     * respectively.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the Amazon Identity and Access Management role that has
     * permissions to read and write to your input and output Amazon S3 buckets
     * respectively.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the Amazon Identity and Access Management role that has
     * permissions to read and write to your input and output Amazon S3 buckets
     * respectively.</p>
     */
    inline CreateBatchSegmentJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the Amazon Identity and Access Management role that has
     * permissions to read and write to your input and output Amazon S3 buckets
     * respectively.</p>
     */
    inline CreateBatchSegmentJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon Identity and Access Management role that has
     * permissions to read and write to your input and output Amazon S3 buckets
     * respectively.</p>
     */
    inline CreateBatchSegmentJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet;

    Aws::String m_solutionVersionArn;
    bool m_solutionVersionArnHasBeenSet;

    Aws::String m_filterArn;
    bool m_filterArnHasBeenSet;

    int m_numResults;
    bool m_numResultsHasBeenSet;

    BatchSegmentJobInput m_jobInput;
    bool m_jobInputHasBeenSet;

    BatchSegmentJobOutput m_jobOutput;
    bool m_jobOutputHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
