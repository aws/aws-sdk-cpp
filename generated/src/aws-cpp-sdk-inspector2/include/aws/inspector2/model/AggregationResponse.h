/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/AccountAggregationResponse.h>
#include <aws/inspector2/model/AmiAggregationResponse.h>
#include <aws/inspector2/model/AwsEcrContainerAggregationResponse.h>
#include <aws/inspector2/model/Ec2InstanceAggregationResponse.h>
#include <aws/inspector2/model/FindingTypeAggregationResponse.h>
#include <aws/inspector2/model/ImageLayerAggregationResponse.h>
#include <aws/inspector2/model/LambdaFunctionAggregationResponse.h>
#include <aws/inspector2/model/LambdaLayerAggregationResponse.h>
#include <aws/inspector2/model/PackageAggregationResponse.h>
#include <aws/inspector2/model/RepositoryAggregationResponse.h>
#include <aws/inspector2/model/TitleAggregationResponse.h>
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
   * <p>A structure that contains details about the results of an aggregation
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/AggregationResponse">AWS
   * API Reference</a></p>
   */
  class AggregationResponse
  {
  public:
    AWS_INSPECTOR2_API AggregationResponse();
    AWS_INSPECTOR2_API AggregationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API AggregationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * Web Services account IDs.</p>
     */
    inline const AccountAggregationResponse& GetAccountAggregation() const{ return m_accountAggregation; }

    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * Web Services account IDs.</p>
     */
    inline bool AccountAggregationHasBeenSet() const { return m_accountAggregationHasBeenSet; }

    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * Web Services account IDs.</p>
     */
    inline void SetAccountAggregation(const AccountAggregationResponse& value) { m_accountAggregationHasBeenSet = true; m_accountAggregation = value; }

    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * Web Services account IDs.</p>
     */
    inline void SetAccountAggregation(AccountAggregationResponse&& value) { m_accountAggregationHasBeenSet = true; m_accountAggregation = std::move(value); }

    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * Web Services account IDs.</p>
     */
    inline AggregationResponse& WithAccountAggregation(const AccountAggregationResponse& value) { SetAccountAggregation(value); return *this;}

    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * Web Services account IDs.</p>
     */
    inline AggregationResponse& WithAccountAggregation(AccountAggregationResponse&& value) { SetAccountAggregation(std::move(value)); return *this;}


    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * Machine Images (AMIs).</p>
     */
    inline const AmiAggregationResponse& GetAmiAggregation() const{ return m_amiAggregation; }

    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * Machine Images (AMIs).</p>
     */
    inline bool AmiAggregationHasBeenSet() const { return m_amiAggregationHasBeenSet; }

    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * Machine Images (AMIs).</p>
     */
    inline void SetAmiAggregation(const AmiAggregationResponse& value) { m_amiAggregationHasBeenSet = true; m_amiAggregation = value; }

    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * Machine Images (AMIs).</p>
     */
    inline void SetAmiAggregation(AmiAggregationResponse&& value) { m_amiAggregationHasBeenSet = true; m_amiAggregation = std::move(value); }

    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * Machine Images (AMIs).</p>
     */
    inline AggregationResponse& WithAmiAggregation(const AmiAggregationResponse& value) { SetAmiAggregation(value); return *this;}

    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * Machine Images (AMIs).</p>
     */
    inline AggregationResponse& WithAmiAggregation(AmiAggregationResponse&& value) { SetAmiAggregation(std::move(value)); return *this;}


    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * ECR container images.</p>
     */
    inline const AwsEcrContainerAggregationResponse& GetAwsEcrContainerAggregation() const{ return m_awsEcrContainerAggregation; }

    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * ECR container images.</p>
     */
    inline bool AwsEcrContainerAggregationHasBeenSet() const { return m_awsEcrContainerAggregationHasBeenSet; }

    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * ECR container images.</p>
     */
    inline void SetAwsEcrContainerAggregation(const AwsEcrContainerAggregationResponse& value) { m_awsEcrContainerAggregationHasBeenSet = true; m_awsEcrContainerAggregation = value; }

    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * ECR container images.</p>
     */
    inline void SetAwsEcrContainerAggregation(AwsEcrContainerAggregationResponse&& value) { m_awsEcrContainerAggregationHasBeenSet = true; m_awsEcrContainerAggregation = std::move(value); }

    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * ECR container images.</p>
     */
    inline AggregationResponse& WithAwsEcrContainerAggregation(const AwsEcrContainerAggregationResponse& value) { SetAwsEcrContainerAggregation(value); return *this;}

    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * ECR container images.</p>
     */
    inline AggregationResponse& WithAwsEcrContainerAggregation(AwsEcrContainerAggregationResponse&& value) { SetAwsEcrContainerAggregation(std::move(value)); return *this;}


    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * EC2 instances.</p>
     */
    inline const Ec2InstanceAggregationResponse& GetEc2InstanceAggregation() const{ return m_ec2InstanceAggregation; }

    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * EC2 instances.</p>
     */
    inline bool Ec2InstanceAggregationHasBeenSet() const { return m_ec2InstanceAggregationHasBeenSet; }

    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * EC2 instances.</p>
     */
    inline void SetEc2InstanceAggregation(const Ec2InstanceAggregationResponse& value) { m_ec2InstanceAggregationHasBeenSet = true; m_ec2InstanceAggregation = value; }

    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * EC2 instances.</p>
     */
    inline void SetEc2InstanceAggregation(Ec2InstanceAggregationResponse&& value) { m_ec2InstanceAggregationHasBeenSet = true; m_ec2InstanceAggregation = std::move(value); }

    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * EC2 instances.</p>
     */
    inline AggregationResponse& WithEc2InstanceAggregation(const Ec2InstanceAggregationResponse& value) { SetEc2InstanceAggregation(value); return *this;}

    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * EC2 instances.</p>
     */
    inline AggregationResponse& WithEc2InstanceAggregation(Ec2InstanceAggregationResponse&& value) { SetEc2InstanceAggregation(std::move(value)); return *this;}


    /**
     * <p>An object that contains details about an aggregation response based on
     * finding types.</p>
     */
    inline const FindingTypeAggregationResponse& GetFindingTypeAggregation() const{ return m_findingTypeAggregation; }

    /**
     * <p>An object that contains details about an aggregation response based on
     * finding types.</p>
     */
    inline bool FindingTypeAggregationHasBeenSet() const { return m_findingTypeAggregationHasBeenSet; }

    /**
     * <p>An object that contains details about an aggregation response based on
     * finding types.</p>
     */
    inline void SetFindingTypeAggregation(const FindingTypeAggregationResponse& value) { m_findingTypeAggregationHasBeenSet = true; m_findingTypeAggregation = value; }

    /**
     * <p>An object that contains details about an aggregation response based on
     * finding types.</p>
     */
    inline void SetFindingTypeAggregation(FindingTypeAggregationResponse&& value) { m_findingTypeAggregationHasBeenSet = true; m_findingTypeAggregation = std::move(value); }

    /**
     * <p>An object that contains details about an aggregation response based on
     * finding types.</p>
     */
    inline AggregationResponse& WithFindingTypeAggregation(const FindingTypeAggregationResponse& value) { SetFindingTypeAggregation(value); return *this;}

    /**
     * <p>An object that contains details about an aggregation response based on
     * finding types.</p>
     */
    inline AggregationResponse& WithFindingTypeAggregation(FindingTypeAggregationResponse&& value) { SetFindingTypeAggregation(std::move(value)); return *this;}


    /**
     * <p>An object that contains details about an aggregation response based on
     * container image layers.</p>
     */
    inline const ImageLayerAggregationResponse& GetImageLayerAggregation() const{ return m_imageLayerAggregation; }

    /**
     * <p>An object that contains details about an aggregation response based on
     * container image layers.</p>
     */
    inline bool ImageLayerAggregationHasBeenSet() const { return m_imageLayerAggregationHasBeenSet; }

    /**
     * <p>An object that contains details about an aggregation response based on
     * container image layers.</p>
     */
    inline void SetImageLayerAggregation(const ImageLayerAggregationResponse& value) { m_imageLayerAggregationHasBeenSet = true; m_imageLayerAggregation = value; }

    /**
     * <p>An object that contains details about an aggregation response based on
     * container image layers.</p>
     */
    inline void SetImageLayerAggregation(ImageLayerAggregationResponse&& value) { m_imageLayerAggregationHasBeenSet = true; m_imageLayerAggregation = std::move(value); }

    /**
     * <p>An object that contains details about an aggregation response based on
     * container image layers.</p>
     */
    inline AggregationResponse& WithImageLayerAggregation(const ImageLayerAggregationResponse& value) { SetImageLayerAggregation(value); return *this;}

    /**
     * <p>An object that contains details about an aggregation response based on
     * container image layers.</p>
     */
    inline AggregationResponse& WithImageLayerAggregation(ImageLayerAggregationResponse&& value) { SetImageLayerAggregation(std::move(value)); return *this;}


    /**
     * <p>An aggregation of findings by AWS Lambda function.</p>
     */
    inline const LambdaFunctionAggregationResponse& GetLambdaFunctionAggregation() const{ return m_lambdaFunctionAggregation; }

    /**
     * <p>An aggregation of findings by AWS Lambda function.</p>
     */
    inline bool LambdaFunctionAggregationHasBeenSet() const { return m_lambdaFunctionAggregationHasBeenSet; }

    /**
     * <p>An aggregation of findings by AWS Lambda function.</p>
     */
    inline void SetLambdaFunctionAggregation(const LambdaFunctionAggregationResponse& value) { m_lambdaFunctionAggregationHasBeenSet = true; m_lambdaFunctionAggregation = value; }

    /**
     * <p>An aggregation of findings by AWS Lambda function.</p>
     */
    inline void SetLambdaFunctionAggregation(LambdaFunctionAggregationResponse&& value) { m_lambdaFunctionAggregationHasBeenSet = true; m_lambdaFunctionAggregation = std::move(value); }

    /**
     * <p>An aggregation of findings by AWS Lambda function.</p>
     */
    inline AggregationResponse& WithLambdaFunctionAggregation(const LambdaFunctionAggregationResponse& value) { SetLambdaFunctionAggregation(value); return *this;}

    /**
     * <p>An aggregation of findings by AWS Lambda function.</p>
     */
    inline AggregationResponse& WithLambdaFunctionAggregation(LambdaFunctionAggregationResponse&& value) { SetLambdaFunctionAggregation(std::move(value)); return *this;}


    /**
     * <p>An aggregation of findings by AWS Lambda layer.</p>
     */
    inline const LambdaLayerAggregationResponse& GetLambdaLayerAggregation() const{ return m_lambdaLayerAggregation; }

    /**
     * <p>An aggregation of findings by AWS Lambda layer.</p>
     */
    inline bool LambdaLayerAggregationHasBeenSet() const { return m_lambdaLayerAggregationHasBeenSet; }

    /**
     * <p>An aggregation of findings by AWS Lambda layer.</p>
     */
    inline void SetLambdaLayerAggregation(const LambdaLayerAggregationResponse& value) { m_lambdaLayerAggregationHasBeenSet = true; m_lambdaLayerAggregation = value; }

    /**
     * <p>An aggregation of findings by AWS Lambda layer.</p>
     */
    inline void SetLambdaLayerAggregation(LambdaLayerAggregationResponse&& value) { m_lambdaLayerAggregationHasBeenSet = true; m_lambdaLayerAggregation = std::move(value); }

    /**
     * <p>An aggregation of findings by AWS Lambda layer.</p>
     */
    inline AggregationResponse& WithLambdaLayerAggregation(const LambdaLayerAggregationResponse& value) { SetLambdaLayerAggregation(value); return *this;}

    /**
     * <p>An aggregation of findings by AWS Lambda layer.</p>
     */
    inline AggregationResponse& WithLambdaLayerAggregation(LambdaLayerAggregationResponse&& value) { SetLambdaLayerAggregation(std::move(value)); return *this;}


    /**
     * <p>An object that contains details about an aggregation response based on
     * operating system package type.</p>
     */
    inline const PackageAggregationResponse& GetPackageAggregation() const{ return m_packageAggregation; }

    /**
     * <p>An object that contains details about an aggregation response based on
     * operating system package type.</p>
     */
    inline bool PackageAggregationHasBeenSet() const { return m_packageAggregationHasBeenSet; }

    /**
     * <p>An object that contains details about an aggregation response based on
     * operating system package type.</p>
     */
    inline void SetPackageAggregation(const PackageAggregationResponse& value) { m_packageAggregationHasBeenSet = true; m_packageAggregation = value; }

    /**
     * <p>An object that contains details about an aggregation response based on
     * operating system package type.</p>
     */
    inline void SetPackageAggregation(PackageAggregationResponse&& value) { m_packageAggregationHasBeenSet = true; m_packageAggregation = std::move(value); }

    /**
     * <p>An object that contains details about an aggregation response based on
     * operating system package type.</p>
     */
    inline AggregationResponse& WithPackageAggregation(const PackageAggregationResponse& value) { SetPackageAggregation(value); return *this;}

    /**
     * <p>An object that contains details about an aggregation response based on
     * operating system package type.</p>
     */
    inline AggregationResponse& WithPackageAggregation(PackageAggregationResponse&& value) { SetPackageAggregation(std::move(value)); return *this;}


    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * ECR repositories.</p>
     */
    inline const RepositoryAggregationResponse& GetRepositoryAggregation() const{ return m_repositoryAggregation; }

    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * ECR repositories.</p>
     */
    inline bool RepositoryAggregationHasBeenSet() const { return m_repositoryAggregationHasBeenSet; }

    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * ECR repositories.</p>
     */
    inline void SetRepositoryAggregation(const RepositoryAggregationResponse& value) { m_repositoryAggregationHasBeenSet = true; m_repositoryAggregation = value; }

    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * ECR repositories.</p>
     */
    inline void SetRepositoryAggregation(RepositoryAggregationResponse&& value) { m_repositoryAggregationHasBeenSet = true; m_repositoryAggregation = std::move(value); }

    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * ECR repositories.</p>
     */
    inline AggregationResponse& WithRepositoryAggregation(const RepositoryAggregationResponse& value) { SetRepositoryAggregation(value); return *this;}

    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * ECR repositories.</p>
     */
    inline AggregationResponse& WithRepositoryAggregation(RepositoryAggregationResponse&& value) { SetRepositoryAggregation(std::move(value)); return *this;}


    /**
     * <p>An object that contains details about an aggregation response based on
     * finding title.</p>
     */
    inline const TitleAggregationResponse& GetTitleAggregation() const{ return m_titleAggregation; }

    /**
     * <p>An object that contains details about an aggregation response based on
     * finding title.</p>
     */
    inline bool TitleAggregationHasBeenSet() const { return m_titleAggregationHasBeenSet; }

    /**
     * <p>An object that contains details about an aggregation response based on
     * finding title.</p>
     */
    inline void SetTitleAggregation(const TitleAggregationResponse& value) { m_titleAggregationHasBeenSet = true; m_titleAggregation = value; }

    /**
     * <p>An object that contains details about an aggregation response based on
     * finding title.</p>
     */
    inline void SetTitleAggregation(TitleAggregationResponse&& value) { m_titleAggregationHasBeenSet = true; m_titleAggregation = std::move(value); }

    /**
     * <p>An object that contains details about an aggregation response based on
     * finding title.</p>
     */
    inline AggregationResponse& WithTitleAggregation(const TitleAggregationResponse& value) { SetTitleAggregation(value); return *this;}

    /**
     * <p>An object that contains details about an aggregation response based on
     * finding title.</p>
     */
    inline AggregationResponse& WithTitleAggregation(TitleAggregationResponse&& value) { SetTitleAggregation(std::move(value)); return *this;}

  private:

    AccountAggregationResponse m_accountAggregation;
    bool m_accountAggregationHasBeenSet = false;

    AmiAggregationResponse m_amiAggregation;
    bool m_amiAggregationHasBeenSet = false;

    AwsEcrContainerAggregationResponse m_awsEcrContainerAggregation;
    bool m_awsEcrContainerAggregationHasBeenSet = false;

    Ec2InstanceAggregationResponse m_ec2InstanceAggregation;
    bool m_ec2InstanceAggregationHasBeenSet = false;

    FindingTypeAggregationResponse m_findingTypeAggregation;
    bool m_findingTypeAggregationHasBeenSet = false;

    ImageLayerAggregationResponse m_imageLayerAggregation;
    bool m_imageLayerAggregationHasBeenSet = false;

    LambdaFunctionAggregationResponse m_lambdaFunctionAggregation;
    bool m_lambdaFunctionAggregationHasBeenSet = false;

    LambdaLayerAggregationResponse m_lambdaLayerAggregation;
    bool m_lambdaLayerAggregationHasBeenSet = false;

    PackageAggregationResponse m_packageAggregation;
    bool m_packageAggregationHasBeenSet = false;

    RepositoryAggregationResponse m_repositoryAggregation;
    bool m_repositoryAggregationHasBeenSet = false;

    TitleAggregationResponse m_titleAggregation;
    bool m_titleAggregationHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
