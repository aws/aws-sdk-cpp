/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/InputConfig.h>
#include <aws/sagemaker/model/OutputConfig.h>
#include <aws/sagemaker/model/StoppingCondition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API CreateCompilationJobRequest : public SageMakerRequest
  {
  public:
    CreateCompilationJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCompilationJob"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A name for the model compilation job. The name must be unique within the AWS
     * Region and within your AWS account. </p>
     */
    inline const Aws::String& GetCompilationJobName() const{ return m_compilationJobName; }

    /**
     * <p>A name for the model compilation job. The name must be unique within the AWS
     * Region and within your AWS account. </p>
     */
    inline bool CompilationJobNameHasBeenSet() const { return m_compilationJobNameHasBeenSet; }

    /**
     * <p>A name for the model compilation job. The name must be unique within the AWS
     * Region and within your AWS account. </p>
     */
    inline void SetCompilationJobName(const Aws::String& value) { m_compilationJobNameHasBeenSet = true; m_compilationJobName = value; }

    /**
     * <p>A name for the model compilation job. The name must be unique within the AWS
     * Region and within your AWS account. </p>
     */
    inline void SetCompilationJobName(Aws::String&& value) { m_compilationJobNameHasBeenSet = true; m_compilationJobName = std::move(value); }

    /**
     * <p>A name for the model compilation job. The name must be unique within the AWS
     * Region and within your AWS account. </p>
     */
    inline void SetCompilationJobName(const char* value) { m_compilationJobNameHasBeenSet = true; m_compilationJobName.assign(value); }

    /**
     * <p>A name for the model compilation job. The name must be unique within the AWS
     * Region and within your AWS account. </p>
     */
    inline CreateCompilationJobRequest& WithCompilationJobName(const Aws::String& value) { SetCompilationJobName(value); return *this;}

    /**
     * <p>A name for the model compilation job. The name must be unique within the AWS
     * Region and within your AWS account. </p>
     */
    inline CreateCompilationJobRequest& WithCompilationJobName(Aws::String&& value) { SetCompilationJobName(std::move(value)); return *this;}

    /**
     * <p>A name for the model compilation job. The name must be unique within the AWS
     * Region and within your AWS account. </p>
     */
    inline CreateCompilationJobRequest& WithCompilationJobName(const char* value) { SetCompilationJobName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to perform tasks on your behalf. </p> <p>During model compilation, Amazon
     * SageMaker needs your permission to:</p> <ul> <li> <p>Read input data from an S3
     * bucket</p> </li> <li> <p>Write model artifacts to an S3 bucket</p> </li> <li>
     * <p>Write logs to Amazon CloudWatch Logs</p> </li> <li> <p>Publish metrics to
     * Amazon CloudWatch</p> </li> </ul> <p>You grant permissions for all of these
     * tasks to an IAM role. To pass this role to Amazon SageMaker, the caller of this
     * API must have the <code>iam:PassRole</code> permission. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles.</a> </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to perform tasks on your behalf. </p> <p>During model compilation, Amazon
     * SageMaker needs your permission to:</p> <ul> <li> <p>Read input data from an S3
     * bucket</p> </li> <li> <p>Write model artifacts to an S3 bucket</p> </li> <li>
     * <p>Write logs to Amazon CloudWatch Logs</p> </li> <li> <p>Publish metrics to
     * Amazon CloudWatch</p> </li> </ul> <p>You grant permissions for all of these
     * tasks to an IAM role. To pass this role to Amazon SageMaker, the caller of this
     * API must have the <code>iam:PassRole</code> permission. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles.</a> </p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to perform tasks on your behalf. </p> <p>During model compilation, Amazon
     * SageMaker needs your permission to:</p> <ul> <li> <p>Read input data from an S3
     * bucket</p> </li> <li> <p>Write model artifacts to an S3 bucket</p> </li> <li>
     * <p>Write logs to Amazon CloudWatch Logs</p> </li> <li> <p>Publish metrics to
     * Amazon CloudWatch</p> </li> </ul> <p>You grant permissions for all of these
     * tasks to an IAM role. To pass this role to Amazon SageMaker, the caller of this
     * API must have the <code>iam:PassRole</code> permission. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles.</a> </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to perform tasks on your behalf. </p> <p>During model compilation, Amazon
     * SageMaker needs your permission to:</p> <ul> <li> <p>Read input data from an S3
     * bucket</p> </li> <li> <p>Write model artifacts to an S3 bucket</p> </li> <li>
     * <p>Write logs to Amazon CloudWatch Logs</p> </li> <li> <p>Publish metrics to
     * Amazon CloudWatch</p> </li> </ul> <p>You grant permissions for all of these
     * tasks to an IAM role. To pass this role to Amazon SageMaker, the caller of this
     * API must have the <code>iam:PassRole</code> permission. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles.</a> </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to perform tasks on your behalf. </p> <p>During model compilation, Amazon
     * SageMaker needs your permission to:</p> <ul> <li> <p>Read input data from an S3
     * bucket</p> </li> <li> <p>Write model artifacts to an S3 bucket</p> </li> <li>
     * <p>Write logs to Amazon CloudWatch Logs</p> </li> <li> <p>Publish metrics to
     * Amazon CloudWatch</p> </li> </ul> <p>You grant permissions for all of these
     * tasks to an IAM role. To pass this role to Amazon SageMaker, the caller of this
     * API must have the <code>iam:PassRole</code> permission. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles.</a> </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to perform tasks on your behalf. </p> <p>During model compilation, Amazon
     * SageMaker needs your permission to:</p> <ul> <li> <p>Read input data from an S3
     * bucket</p> </li> <li> <p>Write model artifacts to an S3 bucket</p> </li> <li>
     * <p>Write logs to Amazon CloudWatch Logs</p> </li> <li> <p>Publish metrics to
     * Amazon CloudWatch</p> </li> </ul> <p>You grant permissions for all of these
     * tasks to an IAM role. To pass this role to Amazon SageMaker, the caller of this
     * API must have the <code>iam:PassRole</code> permission. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles.</a> </p>
     */
    inline CreateCompilationJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to perform tasks on your behalf. </p> <p>During model compilation, Amazon
     * SageMaker needs your permission to:</p> <ul> <li> <p>Read input data from an S3
     * bucket</p> </li> <li> <p>Write model artifacts to an S3 bucket</p> </li> <li>
     * <p>Write logs to Amazon CloudWatch Logs</p> </li> <li> <p>Publish metrics to
     * Amazon CloudWatch</p> </li> </ul> <p>You grant permissions for all of these
     * tasks to an IAM role. To pass this role to Amazon SageMaker, the caller of this
     * API must have the <code>iam:PassRole</code> permission. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles.</a> </p>
     */
    inline CreateCompilationJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to perform tasks on your behalf. </p> <p>During model compilation, Amazon
     * SageMaker needs your permission to:</p> <ul> <li> <p>Read input data from an S3
     * bucket</p> </li> <li> <p>Write model artifacts to an S3 bucket</p> </li> <li>
     * <p>Write logs to Amazon CloudWatch Logs</p> </li> <li> <p>Publish metrics to
     * Amazon CloudWatch</p> </li> </ul> <p>You grant permissions for all of these
     * tasks to an IAM role. To pass this role to Amazon SageMaker, the caller of this
     * API must have the <code>iam:PassRole</code> permission. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles.</a> </p>
     */
    inline CreateCompilationJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Provides information about the location of input model artifacts, the name
     * and shape of the expected data inputs, and the framework in which the model was
     * trained.</p>
     */
    inline const InputConfig& GetInputConfig() const{ return m_inputConfig; }

    /**
     * <p>Provides information about the location of input model artifacts, the name
     * and shape of the expected data inputs, and the framework in which the model was
     * trained.</p>
     */
    inline bool InputConfigHasBeenSet() const { return m_inputConfigHasBeenSet; }

    /**
     * <p>Provides information about the location of input model artifacts, the name
     * and shape of the expected data inputs, and the framework in which the model was
     * trained.</p>
     */
    inline void SetInputConfig(const InputConfig& value) { m_inputConfigHasBeenSet = true; m_inputConfig = value; }

    /**
     * <p>Provides information about the location of input model artifacts, the name
     * and shape of the expected data inputs, and the framework in which the model was
     * trained.</p>
     */
    inline void SetInputConfig(InputConfig&& value) { m_inputConfigHasBeenSet = true; m_inputConfig = std::move(value); }

    /**
     * <p>Provides information about the location of input model artifacts, the name
     * and shape of the expected data inputs, and the framework in which the model was
     * trained.</p>
     */
    inline CreateCompilationJobRequest& WithInputConfig(const InputConfig& value) { SetInputConfig(value); return *this;}

    /**
     * <p>Provides information about the location of input model artifacts, the name
     * and shape of the expected data inputs, and the framework in which the model was
     * trained.</p>
     */
    inline CreateCompilationJobRequest& WithInputConfig(InputConfig&& value) { SetInputConfig(std::move(value)); return *this;}


    /**
     * <p>Provides information about the output location for the compiled model and the
     * target device the model runs on.</p>
     */
    inline const OutputConfig& GetOutputConfig() const{ return m_outputConfig; }

    /**
     * <p>Provides information about the output location for the compiled model and the
     * target device the model runs on.</p>
     */
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }

    /**
     * <p>Provides information about the output location for the compiled model and the
     * target device the model runs on.</p>
     */
    inline void SetOutputConfig(const OutputConfig& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }

    /**
     * <p>Provides information about the output location for the compiled model and the
     * target device the model runs on.</p>
     */
    inline void SetOutputConfig(OutputConfig&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }

    /**
     * <p>Provides information about the output location for the compiled model and the
     * target device the model runs on.</p>
     */
    inline CreateCompilationJobRequest& WithOutputConfig(const OutputConfig& value) { SetOutputConfig(value); return *this;}

    /**
     * <p>Provides information about the output location for the compiled model and the
     * target device the model runs on.</p>
     */
    inline CreateCompilationJobRequest& WithOutputConfig(OutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}


    /**
     * <p>Specifies a limit to how long a model compilation job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the compilation job. Use this API
     * to cap model training costs.</p>
     */
    inline const StoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }

    /**
     * <p>Specifies a limit to how long a model compilation job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the compilation job. Use this API
     * to cap model training costs.</p>
     */
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }

    /**
     * <p>Specifies a limit to how long a model compilation job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the compilation job. Use this API
     * to cap model training costs.</p>
     */
    inline void SetStoppingCondition(const StoppingCondition& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = value; }

    /**
     * <p>Specifies a limit to how long a model compilation job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the compilation job. Use this API
     * to cap model training costs.</p>
     */
    inline void SetStoppingCondition(StoppingCondition&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::move(value); }

    /**
     * <p>Specifies a limit to how long a model compilation job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the compilation job. Use this API
     * to cap model training costs.</p>
     */
    inline CreateCompilationJobRequest& WithStoppingCondition(const StoppingCondition& value) { SetStoppingCondition(value); return *this;}

    /**
     * <p>Specifies a limit to how long a model compilation job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the compilation job. Use this API
     * to cap model training costs.</p>
     */
    inline CreateCompilationJobRequest& WithStoppingCondition(StoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}


    /**
     * <p>An array of key-value pairs that you want to use to organize and track your
     * AWS resource costs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of key-value pairs that you want to use to organize and track your
     * AWS resource costs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of key-value pairs that you want to use to organize and track your
     * AWS resource costs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of key-value pairs that you want to use to organize and track your
     * AWS resource costs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of key-value pairs that you want to use to organize and track your
     * AWS resource costs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline CreateCompilationJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of key-value pairs that you want to use to organize and track your
     * AWS resource costs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline CreateCompilationJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of key-value pairs that you want to use to organize and track your
     * AWS resource costs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline CreateCompilationJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of key-value pairs that you want to use to organize and track your
     * AWS resource costs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline CreateCompilationJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_compilationJobName;
    bool m_compilationJobNameHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    InputConfig m_inputConfig;
    bool m_inputConfigHasBeenSet;

    OutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet;

    StoppingCondition m_stoppingCondition;
    bool m_stoppingConditionHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
