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
#include <aws/inspector2/model/PackageAggregation.h>
#include <aws/inspector2/model/RepositoryAggregation.h>
#include <aws/inspector2/model/TitleAggregation.h>
#include <aws/inspector2/model/LambdaLayerAggregation.h>
#include <aws/inspector2/model/LambdaFunctionAggregation.h>
#include <aws/inspector2/model/CodeRepositoryAggregation.h>
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
    AWS_INSPECTOR2_API AggregationRequest() = default;
    AWS_INSPECTOR2_API AggregationRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API AggregationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that contains details about an aggregation request based on Amazon
     * Web Services account IDs.</p>
     */
    inline const AccountAggregation& GetAccountAggregation() const { return m_accountAggregation; }
    inline bool AccountAggregationHasBeenSet() const { return m_accountAggregationHasBeenSet; }
    template<typename AccountAggregationT = AccountAggregation>
    void SetAccountAggregation(AccountAggregationT&& value) { m_accountAggregationHasBeenSet = true; m_accountAggregation = std::forward<AccountAggregationT>(value); }
    template<typename AccountAggregationT = AccountAggregation>
    AggregationRequest& WithAccountAggregation(AccountAggregationT&& value) { SetAccountAggregation(std::forward<AccountAggregationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about an aggregation request based on Amazon
     * Machine Images (AMIs).</p>
     */
    inline const AmiAggregation& GetAmiAggregation() const { return m_amiAggregation; }
    inline bool AmiAggregationHasBeenSet() const { return m_amiAggregationHasBeenSet; }
    template<typename AmiAggregationT = AmiAggregation>
    void SetAmiAggregation(AmiAggregationT&& value) { m_amiAggregationHasBeenSet = true; m_amiAggregation = std::forward<AmiAggregationT>(value); }
    template<typename AmiAggregationT = AmiAggregation>
    AggregationRequest& WithAmiAggregation(AmiAggregationT&& value) { SetAmiAggregation(std::forward<AmiAggregationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about an aggregation request based on Amazon
     * ECR container images.</p>
     */
    inline const AwsEcrContainerAggregation& GetAwsEcrContainerAggregation() const { return m_awsEcrContainerAggregation; }
    inline bool AwsEcrContainerAggregationHasBeenSet() const { return m_awsEcrContainerAggregationHasBeenSet; }
    template<typename AwsEcrContainerAggregationT = AwsEcrContainerAggregation>
    void SetAwsEcrContainerAggregation(AwsEcrContainerAggregationT&& value) { m_awsEcrContainerAggregationHasBeenSet = true; m_awsEcrContainerAggregation = std::forward<AwsEcrContainerAggregationT>(value); }
    template<typename AwsEcrContainerAggregationT = AwsEcrContainerAggregation>
    AggregationRequest& WithAwsEcrContainerAggregation(AwsEcrContainerAggregationT&& value) { SetAwsEcrContainerAggregation(std::forward<AwsEcrContainerAggregationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about an aggregation request based on Amazon
     * EC2 instances.</p>
     */
    inline const Ec2InstanceAggregation& GetEc2InstanceAggregation() const { return m_ec2InstanceAggregation; }
    inline bool Ec2InstanceAggregationHasBeenSet() const { return m_ec2InstanceAggregationHasBeenSet; }
    template<typename Ec2InstanceAggregationT = Ec2InstanceAggregation>
    void SetEc2InstanceAggregation(Ec2InstanceAggregationT&& value) { m_ec2InstanceAggregationHasBeenSet = true; m_ec2InstanceAggregation = std::forward<Ec2InstanceAggregationT>(value); }
    template<typename Ec2InstanceAggregationT = Ec2InstanceAggregation>
    AggregationRequest& WithEc2InstanceAggregation(Ec2InstanceAggregationT&& value) { SetEc2InstanceAggregation(std::forward<Ec2InstanceAggregationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about an aggregation request based on finding
     * types.</p>
     */
    inline const FindingTypeAggregation& GetFindingTypeAggregation() const { return m_findingTypeAggregation; }
    inline bool FindingTypeAggregationHasBeenSet() const { return m_findingTypeAggregationHasBeenSet; }
    template<typename FindingTypeAggregationT = FindingTypeAggregation>
    void SetFindingTypeAggregation(FindingTypeAggregationT&& value) { m_findingTypeAggregationHasBeenSet = true; m_findingTypeAggregation = std::forward<FindingTypeAggregationT>(value); }
    template<typename FindingTypeAggregationT = FindingTypeAggregation>
    AggregationRequest& WithFindingTypeAggregation(FindingTypeAggregationT&& value) { SetFindingTypeAggregation(std::forward<FindingTypeAggregationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about an aggregation request based on
     * container image layers.</p>
     */
    inline const ImageLayerAggregation& GetImageLayerAggregation() const { return m_imageLayerAggregation; }
    inline bool ImageLayerAggregationHasBeenSet() const { return m_imageLayerAggregationHasBeenSet; }
    template<typename ImageLayerAggregationT = ImageLayerAggregation>
    void SetImageLayerAggregation(ImageLayerAggregationT&& value) { m_imageLayerAggregationHasBeenSet = true; m_imageLayerAggregation = std::forward<ImageLayerAggregationT>(value); }
    template<typename ImageLayerAggregationT = ImageLayerAggregation>
    AggregationRequest& WithImageLayerAggregation(ImageLayerAggregationT&& value) { SetImageLayerAggregation(std::forward<ImageLayerAggregationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about an aggregation request based on
     * operating system package type.</p>
     */
    inline const PackageAggregation& GetPackageAggregation() const { return m_packageAggregation; }
    inline bool PackageAggregationHasBeenSet() const { return m_packageAggregationHasBeenSet; }
    template<typename PackageAggregationT = PackageAggregation>
    void SetPackageAggregation(PackageAggregationT&& value) { m_packageAggregationHasBeenSet = true; m_packageAggregation = std::forward<PackageAggregationT>(value); }
    template<typename PackageAggregationT = PackageAggregation>
    AggregationRequest& WithPackageAggregation(PackageAggregationT&& value) { SetPackageAggregation(std::forward<PackageAggregationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about an aggregation request based on Amazon
     * ECR repositories.</p>
     */
    inline const RepositoryAggregation& GetRepositoryAggregation() const { return m_repositoryAggregation; }
    inline bool RepositoryAggregationHasBeenSet() const { return m_repositoryAggregationHasBeenSet; }
    template<typename RepositoryAggregationT = RepositoryAggregation>
    void SetRepositoryAggregation(RepositoryAggregationT&& value) { m_repositoryAggregationHasBeenSet = true; m_repositoryAggregation = std::forward<RepositoryAggregationT>(value); }
    template<typename RepositoryAggregationT = RepositoryAggregation>
    AggregationRequest& WithRepositoryAggregation(RepositoryAggregationT&& value) { SetRepositoryAggregation(std::forward<RepositoryAggregationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about an aggregation request based on finding
     * title.</p>
     */
    inline const TitleAggregation& GetTitleAggregation() const { return m_titleAggregation; }
    inline bool TitleAggregationHasBeenSet() const { return m_titleAggregationHasBeenSet; }
    template<typename TitleAggregationT = TitleAggregation>
    void SetTitleAggregation(TitleAggregationT&& value) { m_titleAggregationHasBeenSet = true; m_titleAggregation = std::forward<TitleAggregationT>(value); }
    template<typename TitleAggregationT = TitleAggregation>
    AggregationRequest& WithTitleAggregation(TitleAggregationT&& value) { SetTitleAggregation(std::forward<TitleAggregationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns an object with findings aggregated by Amazon Web Services Lambda
     * layer.</p>
     */
    inline const LambdaLayerAggregation& GetLambdaLayerAggregation() const { return m_lambdaLayerAggregation; }
    inline bool LambdaLayerAggregationHasBeenSet() const { return m_lambdaLayerAggregationHasBeenSet; }
    template<typename LambdaLayerAggregationT = LambdaLayerAggregation>
    void SetLambdaLayerAggregation(LambdaLayerAggregationT&& value) { m_lambdaLayerAggregationHasBeenSet = true; m_lambdaLayerAggregation = std::forward<LambdaLayerAggregationT>(value); }
    template<typename LambdaLayerAggregationT = LambdaLayerAggregation>
    AggregationRequest& WithLambdaLayerAggregation(LambdaLayerAggregationT&& value) { SetLambdaLayerAggregation(std::forward<LambdaLayerAggregationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns an object with findings aggregated by Amazon Web Services Lambda
     * function.</p>
     */
    inline const LambdaFunctionAggregation& GetLambdaFunctionAggregation() const { return m_lambdaFunctionAggregation; }
    inline bool LambdaFunctionAggregationHasBeenSet() const { return m_lambdaFunctionAggregationHasBeenSet; }
    template<typename LambdaFunctionAggregationT = LambdaFunctionAggregation>
    void SetLambdaFunctionAggregation(LambdaFunctionAggregationT&& value) { m_lambdaFunctionAggregationHasBeenSet = true; m_lambdaFunctionAggregation = std::forward<LambdaFunctionAggregationT>(value); }
    template<typename LambdaFunctionAggregationT = LambdaFunctionAggregation>
    AggregationRequest& WithLambdaFunctionAggregation(LambdaFunctionAggregationT&& value) { SetLambdaFunctionAggregation(std::forward<LambdaFunctionAggregationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about an aggregation request based on code
     * repositories.</p>
     */
    inline const CodeRepositoryAggregation& GetCodeRepositoryAggregation() const { return m_codeRepositoryAggregation; }
    inline bool CodeRepositoryAggregationHasBeenSet() const { return m_codeRepositoryAggregationHasBeenSet; }
    template<typename CodeRepositoryAggregationT = CodeRepositoryAggregation>
    void SetCodeRepositoryAggregation(CodeRepositoryAggregationT&& value) { m_codeRepositoryAggregationHasBeenSet = true; m_codeRepositoryAggregation = std::forward<CodeRepositoryAggregationT>(value); }
    template<typename CodeRepositoryAggregationT = CodeRepositoryAggregation>
    AggregationRequest& WithCodeRepositoryAggregation(CodeRepositoryAggregationT&& value) { SetCodeRepositoryAggregation(std::forward<CodeRepositoryAggregationT>(value)); return *this;}
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

    PackageAggregation m_packageAggregation;
    bool m_packageAggregationHasBeenSet = false;

    RepositoryAggregation m_repositoryAggregation;
    bool m_repositoryAggregationHasBeenSet = false;

    TitleAggregation m_titleAggregation;
    bool m_titleAggregationHasBeenSet = false;

    LambdaLayerAggregation m_lambdaLayerAggregation;
    bool m_lambdaLayerAggregationHasBeenSet = false;

    LambdaFunctionAggregation m_lambdaFunctionAggregation;
    bool m_lambdaFunctionAggregationHasBeenSet = false;

    CodeRepositoryAggregation m_codeRepositoryAggregation;
    bool m_codeRepositoryAggregationHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
