/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/AccountAggregation.h>
#include <aws/inspector2/model/AmiAggregation.h>
#include <aws/inspector2/model/AwsEcrContainerAggregation.h>
#include <aws/inspector2/model/Ec2InstanceAggregation.h>
#include <aws/inspector2/model/FindingTypeAggregation.h>
#include <aws/inspector2/model/ImageLayerAggregation.h>
#include <aws/inspector2/model/LambdaFunctionAggregation.h>
#include <aws/inspector2/model/LambdaLayerAggregation.h>
#include <aws/inspector2/model/PackageAggregation.h>
#include <aws/inspector2/model/RepositoryAggregation.h>
#include <aws/inspector2/model/TitleAggregation.h>
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
   * <p>Contains details about an aggregation request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/AggregationRequest">AWS
   * API Reference</a></p>
   */
  class AggregationRequest
  {
  public:
    AWS_INSPECTOR2_API AggregationRequest();
    AWS_INSPECTOR2_API AggregationRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API AggregationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that contains details about an aggregation request based on Amazon
     * Web Services account IDs.</p>
     */
    inline const AccountAggregation& GetAccountAggregation() const{ return m_accountAggregation; }
    inline bool AccountAggregationHasBeenSet() const { return m_accountAggregationHasBeenSet; }
    inline void SetAccountAggregation(const AccountAggregation& value) { m_accountAggregationHasBeenSet = true; m_accountAggregation = value; }
    inline void SetAccountAggregation(AccountAggregation&& value) { m_accountAggregationHasBeenSet = true; m_accountAggregation = std::move(value); }
    inline AggregationRequest& WithAccountAggregation(const AccountAggregation& value) { SetAccountAggregation(value); return *this;}
    inline AggregationRequest& WithAccountAggregation(AccountAggregation&& value) { SetAccountAggregation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about an aggregation request based on Amazon
     * Machine Images (AMIs).</p>
     */
    inline const AmiAggregation& GetAmiAggregation() const{ return m_amiAggregation; }
    inline bool AmiAggregationHasBeenSet() const { return m_amiAggregationHasBeenSet; }
    inline void SetAmiAggregation(const AmiAggregation& value) { m_amiAggregationHasBeenSet = true; m_amiAggregation = value; }
    inline void SetAmiAggregation(AmiAggregation&& value) { m_amiAggregationHasBeenSet = true; m_amiAggregation = std::move(value); }
    inline AggregationRequest& WithAmiAggregation(const AmiAggregation& value) { SetAmiAggregation(value); return *this;}
    inline AggregationRequest& WithAmiAggregation(AmiAggregation&& value) { SetAmiAggregation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about an aggregation request based on Amazon
     * ECR container images.</p>
     */
    inline const AwsEcrContainerAggregation& GetAwsEcrContainerAggregation() const{ return m_awsEcrContainerAggregation; }
    inline bool AwsEcrContainerAggregationHasBeenSet() const { return m_awsEcrContainerAggregationHasBeenSet; }
    inline void SetAwsEcrContainerAggregation(const AwsEcrContainerAggregation& value) { m_awsEcrContainerAggregationHasBeenSet = true; m_awsEcrContainerAggregation = value; }
    inline void SetAwsEcrContainerAggregation(AwsEcrContainerAggregation&& value) { m_awsEcrContainerAggregationHasBeenSet = true; m_awsEcrContainerAggregation = std::move(value); }
    inline AggregationRequest& WithAwsEcrContainerAggregation(const AwsEcrContainerAggregation& value) { SetAwsEcrContainerAggregation(value); return *this;}
    inline AggregationRequest& WithAwsEcrContainerAggregation(AwsEcrContainerAggregation&& value) { SetAwsEcrContainerAggregation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about an aggregation request based on Amazon
     * EC2 instances.</p>
     */
    inline const Ec2InstanceAggregation& GetEc2InstanceAggregation() const{ return m_ec2InstanceAggregation; }
    inline bool Ec2InstanceAggregationHasBeenSet() const { return m_ec2InstanceAggregationHasBeenSet; }
    inline void SetEc2InstanceAggregation(const Ec2InstanceAggregation& value) { m_ec2InstanceAggregationHasBeenSet = true; m_ec2InstanceAggregation = value; }
    inline void SetEc2InstanceAggregation(Ec2InstanceAggregation&& value) { m_ec2InstanceAggregationHasBeenSet = true; m_ec2InstanceAggregation = std::move(value); }
    inline AggregationRequest& WithEc2InstanceAggregation(const Ec2InstanceAggregation& value) { SetEc2InstanceAggregation(value); return *this;}
    inline AggregationRequest& WithEc2InstanceAggregation(Ec2InstanceAggregation&& value) { SetEc2InstanceAggregation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about an aggregation request based on finding
     * types.</p>
     */
    inline const FindingTypeAggregation& GetFindingTypeAggregation() const{ return m_findingTypeAggregation; }
    inline bool FindingTypeAggregationHasBeenSet() const { return m_findingTypeAggregationHasBeenSet; }
    inline void SetFindingTypeAggregation(const FindingTypeAggregation& value) { m_findingTypeAggregationHasBeenSet = true; m_findingTypeAggregation = value; }
    inline void SetFindingTypeAggregation(FindingTypeAggregation&& value) { m_findingTypeAggregationHasBeenSet = true; m_findingTypeAggregation = std::move(value); }
    inline AggregationRequest& WithFindingTypeAggregation(const FindingTypeAggregation& value) { SetFindingTypeAggregation(value); return *this;}
    inline AggregationRequest& WithFindingTypeAggregation(FindingTypeAggregation&& value) { SetFindingTypeAggregation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about an aggregation request based on
     * container image layers.</p>
     */
    inline const ImageLayerAggregation& GetImageLayerAggregation() const{ return m_imageLayerAggregation; }
    inline bool ImageLayerAggregationHasBeenSet() const { return m_imageLayerAggregationHasBeenSet; }
    inline void SetImageLayerAggregation(const ImageLayerAggregation& value) { m_imageLayerAggregationHasBeenSet = true; m_imageLayerAggregation = value; }
    inline void SetImageLayerAggregation(ImageLayerAggregation&& value) { m_imageLayerAggregationHasBeenSet = true; m_imageLayerAggregation = std::move(value); }
    inline AggregationRequest& WithImageLayerAggregation(const ImageLayerAggregation& value) { SetImageLayerAggregation(value); return *this;}
    inline AggregationRequest& WithImageLayerAggregation(ImageLayerAggregation&& value) { SetImageLayerAggregation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns an object with findings aggregated by Amazon Web Services Lambda
     * function.</p>
     */
    inline const LambdaFunctionAggregation& GetLambdaFunctionAggregation() const{ return m_lambdaFunctionAggregation; }
    inline bool LambdaFunctionAggregationHasBeenSet() const { return m_lambdaFunctionAggregationHasBeenSet; }
    inline void SetLambdaFunctionAggregation(const LambdaFunctionAggregation& value) { m_lambdaFunctionAggregationHasBeenSet = true; m_lambdaFunctionAggregation = value; }
    inline void SetLambdaFunctionAggregation(LambdaFunctionAggregation&& value) { m_lambdaFunctionAggregationHasBeenSet = true; m_lambdaFunctionAggregation = std::move(value); }
    inline AggregationRequest& WithLambdaFunctionAggregation(const LambdaFunctionAggregation& value) { SetLambdaFunctionAggregation(value); return *this;}
    inline AggregationRequest& WithLambdaFunctionAggregation(LambdaFunctionAggregation&& value) { SetLambdaFunctionAggregation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns an object with findings aggregated by Amazon Web Services Lambda
     * layer.</p>
     */
    inline const LambdaLayerAggregation& GetLambdaLayerAggregation() const{ return m_lambdaLayerAggregation; }
    inline bool LambdaLayerAggregationHasBeenSet() const { return m_lambdaLayerAggregationHasBeenSet; }
    inline void SetLambdaLayerAggregation(const LambdaLayerAggregation& value) { m_lambdaLayerAggregationHasBeenSet = true; m_lambdaLayerAggregation = value; }
    inline void SetLambdaLayerAggregation(LambdaLayerAggregation&& value) { m_lambdaLayerAggregationHasBeenSet = true; m_lambdaLayerAggregation = std::move(value); }
    inline AggregationRequest& WithLambdaLayerAggregation(const LambdaLayerAggregation& value) { SetLambdaLayerAggregation(value); return *this;}
    inline AggregationRequest& WithLambdaLayerAggregation(LambdaLayerAggregation&& value) { SetLambdaLayerAggregation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about an aggregation request based on
     * operating system package type.</p>
     */
    inline const PackageAggregation& GetPackageAggregation() const{ return m_packageAggregation; }
    inline bool PackageAggregationHasBeenSet() const { return m_packageAggregationHasBeenSet; }
    inline void SetPackageAggregation(const PackageAggregation& value) { m_packageAggregationHasBeenSet = true; m_packageAggregation = value; }
    inline void SetPackageAggregation(PackageAggregation&& value) { m_packageAggregationHasBeenSet = true; m_packageAggregation = std::move(value); }
    inline AggregationRequest& WithPackageAggregation(const PackageAggregation& value) { SetPackageAggregation(value); return *this;}
    inline AggregationRequest& WithPackageAggregation(PackageAggregation&& value) { SetPackageAggregation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about an aggregation request based on Amazon
     * ECR repositories.</p>
     */
    inline const RepositoryAggregation& GetRepositoryAggregation() const{ return m_repositoryAggregation; }
    inline bool RepositoryAggregationHasBeenSet() const { return m_repositoryAggregationHasBeenSet; }
    inline void SetRepositoryAggregation(const RepositoryAggregation& value) { m_repositoryAggregationHasBeenSet = true; m_repositoryAggregation = value; }
    inline void SetRepositoryAggregation(RepositoryAggregation&& value) { m_repositoryAggregationHasBeenSet = true; m_repositoryAggregation = std::move(value); }
    inline AggregationRequest& WithRepositoryAggregation(const RepositoryAggregation& value) { SetRepositoryAggregation(value); return *this;}
    inline AggregationRequest& WithRepositoryAggregation(RepositoryAggregation&& value) { SetRepositoryAggregation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about an aggregation request based on finding
     * title.</p>
     */
    inline const TitleAggregation& GetTitleAggregation() const{ return m_titleAggregation; }
    inline bool TitleAggregationHasBeenSet() const { return m_titleAggregationHasBeenSet; }
    inline void SetTitleAggregation(const TitleAggregation& value) { m_titleAggregationHasBeenSet = true; m_titleAggregation = value; }
    inline void SetTitleAggregation(TitleAggregation&& value) { m_titleAggregationHasBeenSet = true; m_titleAggregation = std::move(value); }
    inline AggregationRequest& WithTitleAggregation(const TitleAggregation& value) { SetTitleAggregation(value); return *this;}
    inline AggregationRequest& WithTitleAggregation(TitleAggregation&& value) { SetTitleAggregation(std::move(value)); return *this;}
    ///@}
  private:

    AccountAggregation m_accountAggregation;
    bool m_accountAggregationHasBeenSet = false;

    AmiAggregation m_amiAggregation;
    bool m_amiAggregationHasBeenSet = false;

    AwsEcrContainerAggregation m_awsEcrContainerAggregation;
    bool m_awsEcrContainerAggregationHasBeenSet = false;

    Ec2InstanceAggregation m_ec2InstanceAggregation;
    bool m_ec2InstanceAggregationHasBeenSet = false;

    FindingTypeAggregation m_findingTypeAggregation;
    bool m_findingTypeAggregationHasBeenSet = false;

    ImageLayerAggregation m_imageLayerAggregation;
    bool m_imageLayerAggregationHasBeenSet = false;

    LambdaFunctionAggregation m_lambdaFunctionAggregation;
    bool m_lambdaFunctionAggregationHasBeenSet = false;

    LambdaLayerAggregation m_lambdaLayerAggregation;
    bool m_lambdaLayerAggregationHasBeenSet = false;

    PackageAggregation m_packageAggregation;
    bool m_packageAggregationHasBeenSet = false;

    RepositoryAggregation m_repositoryAggregation;
    bool m_repositoryAggregationHasBeenSet = false;

    TitleAggregation m_titleAggregation;
    bool m_titleAggregationHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
