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
#include <aws/inspector2/model/PackageAggregationResponse.h>
#include <aws/inspector2/model/RepositoryAggregationResponse.h>
#include <aws/inspector2/model/TitleAggregationResponse.h>
#include <aws/inspector2/model/LambdaLayerAggregationResponse.h>
#include <aws/inspector2/model/LambdaFunctionAggregationResponse.h>
#include <aws/inspector2/model/CodeRepositoryAggregationResponse.h>
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
    AWS_INSPECTOR2_API AggregationResponse() = default;
    AWS_INSPECTOR2_API AggregationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API AggregationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * Web Services account IDs.</p>
     */
    inline const AccountAggregationResponse& GetAccountAggregation() const { return m_accountAggregation; }
    inline bool AccountAggregationHasBeenSet() const { return m_accountAggregationHasBeenSet; }
    template<typename AccountAggregationT = AccountAggregationResponse>
    void SetAccountAggregation(AccountAggregationT&& value) { m_accountAggregationHasBeenSet = true; m_accountAggregation = std::forward<AccountAggregationT>(value); }
    template<typename AccountAggregationT = AccountAggregationResponse>
    AggregationResponse& WithAccountAggregation(AccountAggregationT&& value) { SetAccountAggregation(std::forward<AccountAggregationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * Machine Images (AMIs).</p>
     */
    inline const AmiAggregationResponse& GetAmiAggregation() const { return m_amiAggregation; }
    inline bool AmiAggregationHasBeenSet() const { return m_amiAggregationHasBeenSet; }
    template<typename AmiAggregationT = AmiAggregationResponse>
    void SetAmiAggregation(AmiAggregationT&& value) { m_amiAggregationHasBeenSet = true; m_amiAggregation = std::forward<AmiAggregationT>(value); }
    template<typename AmiAggregationT = AmiAggregationResponse>
    AggregationResponse& WithAmiAggregation(AmiAggregationT&& value) { SetAmiAggregation(std::forward<AmiAggregationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * ECR container images.</p>
     */
    inline const AwsEcrContainerAggregationResponse& GetAwsEcrContainerAggregation() const { return m_awsEcrContainerAggregation; }
    inline bool AwsEcrContainerAggregationHasBeenSet() const { return m_awsEcrContainerAggregationHasBeenSet; }
    template<typename AwsEcrContainerAggregationT = AwsEcrContainerAggregationResponse>
    void SetAwsEcrContainerAggregation(AwsEcrContainerAggregationT&& value) { m_awsEcrContainerAggregationHasBeenSet = true; m_awsEcrContainerAggregation = std::forward<AwsEcrContainerAggregationT>(value); }
    template<typename AwsEcrContainerAggregationT = AwsEcrContainerAggregationResponse>
    AggregationResponse& WithAwsEcrContainerAggregation(AwsEcrContainerAggregationT&& value) { SetAwsEcrContainerAggregation(std::forward<AwsEcrContainerAggregationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * EC2 instances.</p>
     */
    inline const Ec2InstanceAggregationResponse& GetEc2InstanceAggregation() const { return m_ec2InstanceAggregation; }
    inline bool Ec2InstanceAggregationHasBeenSet() const { return m_ec2InstanceAggregationHasBeenSet; }
    template<typename Ec2InstanceAggregationT = Ec2InstanceAggregationResponse>
    void SetEc2InstanceAggregation(Ec2InstanceAggregationT&& value) { m_ec2InstanceAggregationHasBeenSet = true; m_ec2InstanceAggregation = std::forward<Ec2InstanceAggregationT>(value); }
    template<typename Ec2InstanceAggregationT = Ec2InstanceAggregationResponse>
    AggregationResponse& WithEc2InstanceAggregation(Ec2InstanceAggregationT&& value) { SetEc2InstanceAggregation(std::forward<Ec2InstanceAggregationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about an aggregation response based on
     * finding types.</p>
     */
    inline const FindingTypeAggregationResponse& GetFindingTypeAggregation() const { return m_findingTypeAggregation; }
    inline bool FindingTypeAggregationHasBeenSet() const { return m_findingTypeAggregationHasBeenSet; }
    template<typename FindingTypeAggregationT = FindingTypeAggregationResponse>
    void SetFindingTypeAggregation(FindingTypeAggregationT&& value) { m_findingTypeAggregationHasBeenSet = true; m_findingTypeAggregation = std::forward<FindingTypeAggregationT>(value); }
    template<typename FindingTypeAggregationT = FindingTypeAggregationResponse>
    AggregationResponse& WithFindingTypeAggregation(FindingTypeAggregationT&& value) { SetFindingTypeAggregation(std::forward<FindingTypeAggregationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about an aggregation response based on
     * container image layers.</p>
     */
    inline const ImageLayerAggregationResponse& GetImageLayerAggregation() const { return m_imageLayerAggregation; }
    inline bool ImageLayerAggregationHasBeenSet() const { return m_imageLayerAggregationHasBeenSet; }
    template<typename ImageLayerAggregationT = ImageLayerAggregationResponse>
    void SetImageLayerAggregation(ImageLayerAggregationT&& value) { m_imageLayerAggregationHasBeenSet = true; m_imageLayerAggregation = std::forward<ImageLayerAggregationT>(value); }
    template<typename ImageLayerAggregationT = ImageLayerAggregationResponse>
    AggregationResponse& WithImageLayerAggregation(ImageLayerAggregationT&& value) { SetImageLayerAggregation(std::forward<ImageLayerAggregationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about an aggregation response based on
     * operating system package type.</p>
     */
    inline const PackageAggregationResponse& GetPackageAggregation() const { return m_packageAggregation; }
    inline bool PackageAggregationHasBeenSet() const { return m_packageAggregationHasBeenSet; }
    template<typename PackageAggregationT = PackageAggregationResponse>
    void SetPackageAggregation(PackageAggregationT&& value) { m_packageAggregationHasBeenSet = true; m_packageAggregation = std::forward<PackageAggregationT>(value); }
    template<typename PackageAggregationT = PackageAggregationResponse>
    AggregationResponse& WithPackageAggregation(PackageAggregationT&& value) { SetPackageAggregation(std::forward<PackageAggregationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about an aggregation response based on Amazon
     * ECR repositories.</p>
     */
    inline const RepositoryAggregationResponse& GetRepositoryAggregation() const { return m_repositoryAggregation; }
    inline bool RepositoryAggregationHasBeenSet() const { return m_repositoryAggregationHasBeenSet; }
    template<typename RepositoryAggregationT = RepositoryAggregationResponse>
    void SetRepositoryAggregation(RepositoryAggregationT&& value) { m_repositoryAggregationHasBeenSet = true; m_repositoryAggregation = std::forward<RepositoryAggregationT>(value); }
    template<typename RepositoryAggregationT = RepositoryAggregationResponse>
    AggregationResponse& WithRepositoryAggregation(RepositoryAggregationT&& value) { SetRepositoryAggregation(std::forward<RepositoryAggregationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about an aggregation response based on
     * finding title.</p>
     */
    inline const TitleAggregationResponse& GetTitleAggregation() const { return m_titleAggregation; }
    inline bool TitleAggregationHasBeenSet() const { return m_titleAggregationHasBeenSet; }
    template<typename TitleAggregationT = TitleAggregationResponse>
    void SetTitleAggregation(TitleAggregationT&& value) { m_titleAggregationHasBeenSet = true; m_titleAggregation = std::forward<TitleAggregationT>(value); }
    template<typename TitleAggregationT = TitleAggregationResponse>
    AggregationResponse& WithTitleAggregation(TitleAggregationT&& value) { SetTitleAggregation(std::forward<TitleAggregationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An aggregation of findings by Amazon Web Services Lambda layer.</p>
     */
    inline const LambdaLayerAggregationResponse& GetLambdaLayerAggregation() const { return m_lambdaLayerAggregation; }
    inline bool LambdaLayerAggregationHasBeenSet() const { return m_lambdaLayerAggregationHasBeenSet; }
    template<typename LambdaLayerAggregationT = LambdaLayerAggregationResponse>
    void SetLambdaLayerAggregation(LambdaLayerAggregationT&& value) { m_lambdaLayerAggregationHasBeenSet = true; m_lambdaLayerAggregation = std::forward<LambdaLayerAggregationT>(value); }
    template<typename LambdaLayerAggregationT = LambdaLayerAggregationResponse>
    AggregationResponse& WithLambdaLayerAggregation(LambdaLayerAggregationT&& value) { SetLambdaLayerAggregation(std::forward<LambdaLayerAggregationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An aggregation of findings by Amazon Web Services Lambda function.</p>
     */
    inline const LambdaFunctionAggregationResponse& GetLambdaFunctionAggregation() const { return m_lambdaFunctionAggregation; }
    inline bool LambdaFunctionAggregationHasBeenSet() const { return m_lambdaFunctionAggregationHasBeenSet; }
    template<typename LambdaFunctionAggregationT = LambdaFunctionAggregationResponse>
    void SetLambdaFunctionAggregation(LambdaFunctionAggregationT&& value) { m_lambdaFunctionAggregationHasBeenSet = true; m_lambdaFunctionAggregation = std::forward<LambdaFunctionAggregationT>(value); }
    template<typename LambdaFunctionAggregationT = LambdaFunctionAggregationResponse>
    AggregationResponse& WithLambdaFunctionAggregation(LambdaFunctionAggregationT&& value) { SetLambdaFunctionAggregation(std::forward<LambdaFunctionAggregationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about an aggregation response based on code
     * repositories.</p>
     */
    inline const CodeRepositoryAggregationResponse& GetCodeRepositoryAggregation() const { return m_codeRepositoryAggregation; }
    inline bool CodeRepositoryAggregationHasBeenSet() const { return m_codeRepositoryAggregationHasBeenSet; }
    template<typename CodeRepositoryAggregationT = CodeRepositoryAggregationResponse>
    void SetCodeRepositoryAggregation(CodeRepositoryAggregationT&& value) { m_codeRepositoryAggregationHasBeenSet = true; m_codeRepositoryAggregation = std::forward<CodeRepositoryAggregationT>(value); }
    template<typename CodeRepositoryAggregationT = CodeRepositoryAggregationResponse>
    AggregationResponse& WithCodeRepositoryAggregation(CodeRepositoryAggregationT&& value) { SetCodeRepositoryAggregation(std::forward<CodeRepositoryAggregationT>(value)); return *this;}
    ///@}
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

    PackageAggregationResponse m_packageAggregation;
    bool m_packageAggregationHasBeenSet = false;

    RepositoryAggregationResponse m_repositoryAggregation;
    bool m_repositoryAggregationHasBeenSet = false;

    TitleAggregationResponse m_titleAggregation;
    bool m_titleAggregationHasBeenSet = false;

    LambdaLayerAggregationResponse m_lambdaLayerAggregation;
    bool m_lambdaLayerAggregationHasBeenSet = false;

    LambdaFunctionAggregationResponse m_lambdaFunctionAggregation;
    bool m_lambdaFunctionAggregationHasBeenSet = false;

    CodeRepositoryAggregationResponse m_codeRepositoryAggregation;
    bool m_codeRepositoryAggregationHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
