/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API DescribeProcessingJobRequest : public SageMakerRequest
  {
  public:
    DescribeProcessingJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeProcessingJob"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the processing job. The name must be unique within an AWS Region
     * in the AWS account.</p>
     */
    inline const Aws::String& GetProcessingJobName() const{ return m_processingJobName; }

    /**
     * <p>The name of the processing job. The name must be unique within an AWS Region
     * in the AWS account.</p>
     */
    inline bool ProcessingJobNameHasBeenSet() const { return m_processingJobNameHasBeenSet; }

    /**
     * <p>The name of the processing job. The name must be unique within an AWS Region
     * in the AWS account.</p>
     */
    inline void SetProcessingJobName(const Aws::String& value) { m_processingJobNameHasBeenSet = true; m_processingJobName = value; }

    /**
     * <p>The name of the processing job. The name must be unique within an AWS Region
     * in the AWS account.</p>
     */
    inline void SetProcessingJobName(Aws::String&& value) { m_processingJobNameHasBeenSet = true; m_processingJobName = std::move(value); }

    /**
     * <p>The name of the processing job. The name must be unique within an AWS Region
     * in the AWS account.</p>
     */
    inline void SetProcessingJobName(const char* value) { m_processingJobNameHasBeenSet = true; m_processingJobName.assign(value); }

    /**
     * <p>The name of the processing job. The name must be unique within an AWS Region
     * in the AWS account.</p>
     */
    inline DescribeProcessingJobRequest& WithProcessingJobName(const Aws::String& value) { SetProcessingJobName(value); return *this;}

    /**
     * <p>The name of the processing job. The name must be unique within an AWS Region
     * in the AWS account.</p>
     */
    inline DescribeProcessingJobRequest& WithProcessingJobName(Aws::String&& value) { SetProcessingJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the processing job. The name must be unique within an AWS Region
     * in the AWS account.</p>
     */
    inline DescribeProcessingJobRequest& WithProcessingJobName(const char* value) { SetProcessingJobName(value); return *this;}

  private:

    Aws::String m_processingJobName;
    bool m_processingJobNameHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
