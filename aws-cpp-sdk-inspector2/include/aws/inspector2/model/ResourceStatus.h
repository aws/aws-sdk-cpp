/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/Status.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Details the status of Amazon Inspector for each resource type Amazon
   * Inspector scans.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ResourceStatus">AWS
   * API Reference</a></p>
   */
  class ResourceStatus
  {
  public:
    AWS_INSPECTOR2_API ResourceStatus();
    AWS_INSPECTOR2_API ResourceStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API ResourceStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of Amazon Inspector scanning for Amazon EC2 resources.</p>
     */
    inline const Status& GetEc2() const{ return m_ec2; }

    /**
     * <p>The status of Amazon Inspector scanning for Amazon EC2 resources.</p>
     */
    inline bool Ec2HasBeenSet() const { return m_ec2HasBeenSet; }

    /**
     * <p>The status of Amazon Inspector scanning for Amazon EC2 resources.</p>
     */
    inline void SetEc2(const Status& value) { m_ec2HasBeenSet = true; m_ec2 = value; }

    /**
     * <p>The status of Amazon Inspector scanning for Amazon EC2 resources.</p>
     */
    inline void SetEc2(Status&& value) { m_ec2HasBeenSet = true; m_ec2 = std::move(value); }

    /**
     * <p>The status of Amazon Inspector scanning for Amazon EC2 resources.</p>
     */
    inline ResourceStatus& WithEc2(const Status& value) { SetEc2(value); return *this;}

    /**
     * <p>The status of Amazon Inspector scanning for Amazon EC2 resources.</p>
     */
    inline ResourceStatus& WithEc2(Status&& value) { SetEc2(std::move(value)); return *this;}


    /**
     * <p>The status of Amazon Inspector scanning for Amazon ECR resources.</p>
     */
    inline const Status& GetEcr() const{ return m_ecr; }

    /**
     * <p>The status of Amazon Inspector scanning for Amazon ECR resources.</p>
     */
    inline bool EcrHasBeenSet() const { return m_ecrHasBeenSet; }

    /**
     * <p>The status of Amazon Inspector scanning for Amazon ECR resources.</p>
     */
    inline void SetEcr(const Status& value) { m_ecrHasBeenSet = true; m_ecr = value; }

    /**
     * <p>The status of Amazon Inspector scanning for Amazon ECR resources.</p>
     */
    inline void SetEcr(Status&& value) { m_ecrHasBeenSet = true; m_ecr = std::move(value); }

    /**
     * <p>The status of Amazon Inspector scanning for Amazon ECR resources.</p>
     */
    inline ResourceStatus& WithEcr(const Status& value) { SetEcr(value); return *this;}

    /**
     * <p>The status of Amazon Inspector scanning for Amazon ECR resources.</p>
     */
    inline ResourceStatus& WithEcr(Status&& value) { SetEcr(std::move(value)); return *this;}


    /**
     * <p>The status of Amazon Inspector scanning for AWS Lambda function
     * resources.</p>
     */
    inline const Status& GetLambda() const{ return m_lambda; }

    /**
     * <p>The status of Amazon Inspector scanning for AWS Lambda function
     * resources.</p>
     */
    inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }

    /**
     * <p>The status of Amazon Inspector scanning for AWS Lambda function
     * resources.</p>
     */
    inline void SetLambda(const Status& value) { m_lambdaHasBeenSet = true; m_lambda = value; }

    /**
     * <p>The status of Amazon Inspector scanning for AWS Lambda function
     * resources.</p>
     */
    inline void SetLambda(Status&& value) { m_lambdaHasBeenSet = true; m_lambda = std::move(value); }

    /**
     * <p>The status of Amazon Inspector scanning for AWS Lambda function
     * resources.</p>
     */
    inline ResourceStatus& WithLambda(const Status& value) { SetLambda(value); return *this;}

    /**
     * <p>The status of Amazon Inspector scanning for AWS Lambda function
     * resources.</p>
     */
    inline ResourceStatus& WithLambda(Status&& value) { SetLambda(std::move(value)); return *this;}

  private:

    Status m_ec2;
    bool m_ec2HasBeenSet = false;

    Status m_ecr;
    bool m_ecrHasBeenSet = false;

    Status m_lambda;
    bool m_lambdaHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
