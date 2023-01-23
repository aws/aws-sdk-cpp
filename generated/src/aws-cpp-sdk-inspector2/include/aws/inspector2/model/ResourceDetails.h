/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/AwsEc2InstanceDetails.h>
#include <aws/inspector2/model/AwsEcrContainerImageDetails.h>
#include <aws/inspector2/model/AwsLambdaFunctionDetails.h>
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
   * <p>Contains details about the resource involved in the finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ResourceDetails">AWS
   * API Reference</a></p>
   */
  class ResourceDetails
  {
  public:
    AWS_INSPECTOR2_API ResourceDetails();
    AWS_INSPECTOR2_API ResourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API ResourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that contains details about the Amazon EC2 instance involved in the
     * finding.</p>
     */
    inline const AwsEc2InstanceDetails& GetAwsEc2Instance() const{ return m_awsEc2Instance; }

    /**
     * <p>An object that contains details about the Amazon EC2 instance involved in the
     * finding.</p>
     */
    inline bool AwsEc2InstanceHasBeenSet() const { return m_awsEc2InstanceHasBeenSet; }

    /**
     * <p>An object that contains details about the Amazon EC2 instance involved in the
     * finding.</p>
     */
    inline void SetAwsEc2Instance(const AwsEc2InstanceDetails& value) { m_awsEc2InstanceHasBeenSet = true; m_awsEc2Instance = value; }

    /**
     * <p>An object that contains details about the Amazon EC2 instance involved in the
     * finding.</p>
     */
    inline void SetAwsEc2Instance(AwsEc2InstanceDetails&& value) { m_awsEc2InstanceHasBeenSet = true; m_awsEc2Instance = std::move(value); }

    /**
     * <p>An object that contains details about the Amazon EC2 instance involved in the
     * finding.</p>
     */
    inline ResourceDetails& WithAwsEc2Instance(const AwsEc2InstanceDetails& value) { SetAwsEc2Instance(value); return *this;}

    /**
     * <p>An object that contains details about the Amazon EC2 instance involved in the
     * finding.</p>
     */
    inline ResourceDetails& WithAwsEc2Instance(AwsEc2InstanceDetails&& value) { SetAwsEc2Instance(std::move(value)); return *this;}


    /**
     * <p>An object that contains details about the Amazon ECR container image involved
     * in the finding.</p>
     */
    inline const AwsEcrContainerImageDetails& GetAwsEcrContainerImage() const{ return m_awsEcrContainerImage; }

    /**
     * <p>An object that contains details about the Amazon ECR container image involved
     * in the finding.</p>
     */
    inline bool AwsEcrContainerImageHasBeenSet() const { return m_awsEcrContainerImageHasBeenSet; }

    /**
     * <p>An object that contains details about the Amazon ECR container image involved
     * in the finding.</p>
     */
    inline void SetAwsEcrContainerImage(const AwsEcrContainerImageDetails& value) { m_awsEcrContainerImageHasBeenSet = true; m_awsEcrContainerImage = value; }

    /**
     * <p>An object that contains details about the Amazon ECR container image involved
     * in the finding.</p>
     */
    inline void SetAwsEcrContainerImage(AwsEcrContainerImageDetails&& value) { m_awsEcrContainerImageHasBeenSet = true; m_awsEcrContainerImage = std::move(value); }

    /**
     * <p>An object that contains details about the Amazon ECR container image involved
     * in the finding.</p>
     */
    inline ResourceDetails& WithAwsEcrContainerImage(const AwsEcrContainerImageDetails& value) { SetAwsEcrContainerImage(value); return *this;}

    /**
     * <p>An object that contains details about the Amazon ECR container image involved
     * in the finding.</p>
     */
    inline ResourceDetails& WithAwsEcrContainerImage(AwsEcrContainerImageDetails&& value) { SetAwsEcrContainerImage(std::move(value)); return *this;}


    /**
     * <p>A summary of the information about an AWS Lambda function affected by a
     * finding.</p>
     */
    inline const AwsLambdaFunctionDetails& GetAwsLambdaFunction() const{ return m_awsLambdaFunction; }

    /**
     * <p>A summary of the information about an AWS Lambda function affected by a
     * finding.</p>
     */
    inline bool AwsLambdaFunctionHasBeenSet() const { return m_awsLambdaFunctionHasBeenSet; }

    /**
     * <p>A summary of the information about an AWS Lambda function affected by a
     * finding.</p>
     */
    inline void SetAwsLambdaFunction(const AwsLambdaFunctionDetails& value) { m_awsLambdaFunctionHasBeenSet = true; m_awsLambdaFunction = value; }

    /**
     * <p>A summary of the information about an AWS Lambda function affected by a
     * finding.</p>
     */
    inline void SetAwsLambdaFunction(AwsLambdaFunctionDetails&& value) { m_awsLambdaFunctionHasBeenSet = true; m_awsLambdaFunction = std::move(value); }

    /**
     * <p>A summary of the information about an AWS Lambda function affected by a
     * finding.</p>
     */
    inline ResourceDetails& WithAwsLambdaFunction(const AwsLambdaFunctionDetails& value) { SetAwsLambdaFunction(value); return *this;}

    /**
     * <p>A summary of the information about an AWS Lambda function affected by a
     * finding.</p>
     */
    inline ResourceDetails& WithAwsLambdaFunction(AwsLambdaFunctionDetails&& value) { SetAwsLambdaFunction(std::move(value)); return *this;}

  private:

    AwsEc2InstanceDetails m_awsEc2Instance;
    bool m_awsEc2InstanceHasBeenSet = false;

    AwsEcrContainerImageDetails m_awsEcrContainerImage;
    bool m_awsEcrContainerImageHasBeenSet = false;

    AwsLambdaFunctionDetails m_awsLambdaFunction;
    bool m_awsLambdaFunctionHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
