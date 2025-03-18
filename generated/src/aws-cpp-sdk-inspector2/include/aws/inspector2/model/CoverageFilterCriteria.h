﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/CoverageStringFilter.h>
#include <aws/inspector2/model/CoverageMapFilter.h>
#include <aws/inspector2/model/CoverageDateFilter.h>
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
   * <p>A structure that identifies filter criteria for
   * <code>GetCoverageStatistics</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CoverageFilterCriteria">AWS
   * API Reference</a></p>
   */
  class CoverageFilterCriteria
  {
  public:
    AWS_INSPECTOR2_API CoverageFilterCriteria() = default;
    AWS_INSPECTOR2_API CoverageFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CoverageFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of Amazon Web Services account IDs to return coverage statistics
     * for.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::Vector<CoverageStringFilter>>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::Vector<CoverageStringFilter>>
    CoverageFilterCriteria& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    template<typename AccountIdT = CoverageStringFilter>
    CoverageFilterCriteria& AddAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId.emplace_back(std::forward<AccountIdT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instance tags to filter on.</p>
     */
    inline const Aws::Vector<CoverageMapFilter>& GetEc2InstanceTags() const { return m_ec2InstanceTags; }
    inline bool Ec2InstanceTagsHasBeenSet() const { return m_ec2InstanceTagsHasBeenSet; }
    template<typename Ec2InstanceTagsT = Aws::Vector<CoverageMapFilter>>
    void SetEc2InstanceTags(Ec2InstanceTagsT&& value) { m_ec2InstanceTagsHasBeenSet = true; m_ec2InstanceTags = std::forward<Ec2InstanceTagsT>(value); }
    template<typename Ec2InstanceTagsT = Aws::Vector<CoverageMapFilter>>
    CoverageFilterCriteria& WithEc2InstanceTags(Ec2InstanceTagsT&& value) { SetEc2InstanceTags(std::forward<Ec2InstanceTagsT>(value)); return *this;}
    template<typename Ec2InstanceTagsT = CoverageMapFilter>
    CoverageFilterCriteria& AddEc2InstanceTags(Ec2InstanceTagsT&& value) { m_ec2InstanceTagsHasBeenSet = true; m_ec2InstanceTags.emplace_back(std::forward<Ec2InstanceTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon ECR image tags to filter on.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetEcrImageTags() const { return m_ecrImageTags; }
    inline bool EcrImageTagsHasBeenSet() const { return m_ecrImageTagsHasBeenSet; }
    template<typename EcrImageTagsT = Aws::Vector<CoverageStringFilter>>
    void SetEcrImageTags(EcrImageTagsT&& value) { m_ecrImageTagsHasBeenSet = true; m_ecrImageTags = std::forward<EcrImageTagsT>(value); }
    template<typename EcrImageTagsT = Aws::Vector<CoverageStringFilter>>
    CoverageFilterCriteria& WithEcrImageTags(EcrImageTagsT&& value) { SetEcrImageTags(std::forward<EcrImageTagsT>(value)); return *this;}
    template<typename EcrImageTagsT = CoverageStringFilter>
    CoverageFilterCriteria& AddEcrImageTags(EcrImageTagsT&& value) { m_ecrImageTagsHasBeenSet = true; m_ecrImageTags.emplace_back(std::forward<EcrImageTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon ECR repository name to filter on.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetEcrRepositoryName() const { return m_ecrRepositoryName; }
    inline bool EcrRepositoryNameHasBeenSet() const { return m_ecrRepositoryNameHasBeenSet; }
    template<typename EcrRepositoryNameT = Aws::Vector<CoverageStringFilter>>
    void SetEcrRepositoryName(EcrRepositoryNameT&& value) { m_ecrRepositoryNameHasBeenSet = true; m_ecrRepositoryName = std::forward<EcrRepositoryNameT>(value); }
    template<typename EcrRepositoryNameT = Aws::Vector<CoverageStringFilter>>
    CoverageFilterCriteria& WithEcrRepositoryName(EcrRepositoryNameT&& value) { SetEcrRepositoryName(std::forward<EcrRepositoryNameT>(value)); return *this;}
    template<typename EcrRepositoryNameT = CoverageStringFilter>
    CoverageFilterCriteria& AddEcrRepositoryName(EcrRepositoryNameT&& value) { m_ecrRepositoryNameHasBeenSet = true; m_ecrRepositoryName.emplace_back(std::forward<EcrRepositoryNameT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date an image was last pulled at.</p>
     */
    inline const Aws::Vector<CoverageDateFilter>& GetImagePulledAt() const { return m_imagePulledAt; }
    inline bool ImagePulledAtHasBeenSet() const { return m_imagePulledAtHasBeenSet; }
    template<typename ImagePulledAtT = Aws::Vector<CoverageDateFilter>>
    void SetImagePulledAt(ImagePulledAtT&& value) { m_imagePulledAtHasBeenSet = true; m_imagePulledAt = std::forward<ImagePulledAtT>(value); }
    template<typename ImagePulledAtT = Aws::Vector<CoverageDateFilter>>
    CoverageFilterCriteria& WithImagePulledAt(ImagePulledAtT&& value) { SetImagePulledAt(std::forward<ImagePulledAtT>(value)); return *this;}
    template<typename ImagePulledAtT = CoverageDateFilter>
    CoverageFilterCriteria& AddImagePulledAt(ImagePulledAtT&& value) { m_imagePulledAtHasBeenSet = true; m_imagePulledAt.emplace_back(std::forward<ImagePulledAtT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns coverage statistics for Amazon Web Services Lambda functions filtered
     * by function names.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetLambdaFunctionName() const { return m_lambdaFunctionName; }
    inline bool LambdaFunctionNameHasBeenSet() const { return m_lambdaFunctionNameHasBeenSet; }
    template<typename LambdaFunctionNameT = Aws::Vector<CoverageStringFilter>>
    void SetLambdaFunctionName(LambdaFunctionNameT&& value) { m_lambdaFunctionNameHasBeenSet = true; m_lambdaFunctionName = std::forward<LambdaFunctionNameT>(value); }
    template<typename LambdaFunctionNameT = Aws::Vector<CoverageStringFilter>>
    CoverageFilterCriteria& WithLambdaFunctionName(LambdaFunctionNameT&& value) { SetLambdaFunctionName(std::forward<LambdaFunctionNameT>(value)); return *this;}
    template<typename LambdaFunctionNameT = CoverageStringFilter>
    CoverageFilterCriteria& AddLambdaFunctionName(LambdaFunctionNameT&& value) { m_lambdaFunctionNameHasBeenSet = true; m_lambdaFunctionName.emplace_back(std::forward<LambdaFunctionNameT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns coverage statistics for Amazon Web Services Lambda functions filtered
     * by runtime.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetLambdaFunctionRuntime() const { return m_lambdaFunctionRuntime; }
    inline bool LambdaFunctionRuntimeHasBeenSet() const { return m_lambdaFunctionRuntimeHasBeenSet; }
    template<typename LambdaFunctionRuntimeT = Aws::Vector<CoverageStringFilter>>
    void SetLambdaFunctionRuntime(LambdaFunctionRuntimeT&& value) { m_lambdaFunctionRuntimeHasBeenSet = true; m_lambdaFunctionRuntime = std::forward<LambdaFunctionRuntimeT>(value); }
    template<typename LambdaFunctionRuntimeT = Aws::Vector<CoverageStringFilter>>
    CoverageFilterCriteria& WithLambdaFunctionRuntime(LambdaFunctionRuntimeT&& value) { SetLambdaFunctionRuntime(std::forward<LambdaFunctionRuntimeT>(value)); return *this;}
    template<typename LambdaFunctionRuntimeT = CoverageStringFilter>
    CoverageFilterCriteria& AddLambdaFunctionRuntime(LambdaFunctionRuntimeT&& value) { m_lambdaFunctionRuntimeHasBeenSet = true; m_lambdaFunctionRuntime.emplace_back(std::forward<LambdaFunctionRuntimeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns coverage statistics for Amazon Web Services Lambda functions filtered
     * by tag.</p>
     */
    inline const Aws::Vector<CoverageMapFilter>& GetLambdaFunctionTags() const { return m_lambdaFunctionTags; }
    inline bool LambdaFunctionTagsHasBeenSet() const { return m_lambdaFunctionTagsHasBeenSet; }
    template<typename LambdaFunctionTagsT = Aws::Vector<CoverageMapFilter>>
    void SetLambdaFunctionTags(LambdaFunctionTagsT&& value) { m_lambdaFunctionTagsHasBeenSet = true; m_lambdaFunctionTags = std::forward<LambdaFunctionTagsT>(value); }
    template<typename LambdaFunctionTagsT = Aws::Vector<CoverageMapFilter>>
    CoverageFilterCriteria& WithLambdaFunctionTags(LambdaFunctionTagsT&& value) { SetLambdaFunctionTags(std::forward<LambdaFunctionTagsT>(value)); return *this;}
    template<typename LambdaFunctionTagsT = CoverageMapFilter>
    CoverageFilterCriteria& AddLambdaFunctionTags(LambdaFunctionTagsT&& value) { m_lambdaFunctionTagsHasBeenSet = true; m_lambdaFunctionTags.emplace_back(std::forward<LambdaFunctionTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters Amazon Web Services resources based on whether Amazon Inspector has
     * checked them for vulnerabilities within the specified time range.</p>
     */
    inline const Aws::Vector<CoverageDateFilter>& GetLastScannedAt() const { return m_lastScannedAt; }
    inline bool LastScannedAtHasBeenSet() const { return m_lastScannedAtHasBeenSet; }
    template<typename LastScannedAtT = Aws::Vector<CoverageDateFilter>>
    void SetLastScannedAt(LastScannedAtT&& value) { m_lastScannedAtHasBeenSet = true; m_lastScannedAt = std::forward<LastScannedAtT>(value); }
    template<typename LastScannedAtT = Aws::Vector<CoverageDateFilter>>
    CoverageFilterCriteria& WithLastScannedAt(LastScannedAtT&& value) { SetLastScannedAt(std::forward<LastScannedAtT>(value)); return *this;}
    template<typename LastScannedAtT = CoverageDateFilter>
    CoverageFilterCriteria& AddLastScannedAt(LastScannedAtT&& value) { m_lastScannedAtHasBeenSet = true; m_lastScannedAt.emplace_back(std::forward<LastScannedAtT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of Amazon Web Services resource IDs to return coverage statistics
     * for.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::Vector<CoverageStringFilter>>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::Vector<CoverageStringFilter>>
    CoverageFilterCriteria& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    template<typename ResourceIdT = CoverageStringFilter>
    CoverageFilterCriteria& AddResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId.emplace_back(std::forward<ResourceIdT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of Amazon Web Services resource types to return coverage statistics
     * for. The values can be <code>AWS_EC2_INSTANCE</code>,
     * <code>AWS_LAMBDA_FUNCTION</code>, <code>AWS_ECR_CONTAINER_IMAGE</code>,
     * <code>AWS_ECR_REPOSITORY</code> or <code>AWS_ACCOUNT</code>.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::Vector<CoverageStringFilter>>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::Vector<CoverageStringFilter>>
    CoverageFilterCriteria& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    template<typename ResourceTypeT = CoverageStringFilter>
    CoverageFilterCriteria& AddResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType.emplace_back(std::forward<ResourceTypeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The filter to search for Amazon EC2 instance coverage by scan mode. Valid
     * values are <code>EC2_SSM_AGENT_BASED</code> and <code>EC2_AGENTLESS</code>.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetScanMode() const { return m_scanMode; }
    inline bool ScanModeHasBeenSet() const { return m_scanModeHasBeenSet; }
    template<typename ScanModeT = Aws::Vector<CoverageStringFilter>>
    void SetScanMode(ScanModeT&& value) { m_scanModeHasBeenSet = true; m_scanMode = std::forward<ScanModeT>(value); }
    template<typename ScanModeT = Aws::Vector<CoverageStringFilter>>
    CoverageFilterCriteria& WithScanMode(ScanModeT&& value) { SetScanMode(std::forward<ScanModeT>(value)); return *this;}
    template<typename ScanModeT = CoverageStringFilter>
    CoverageFilterCriteria& AddScanMode(ScanModeT&& value) { m_scanModeHasBeenSet = true; m_scanMode.emplace_back(std::forward<ScanModeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The scan status code to filter on. Valid values are:
     * <code>ValidationException</code>, <code>InternalServerException</code>,
     * <code>ResourceNotFoundException</code>, <code>BadRequestException</code>, and
     * <code>ThrottlingException</code>.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetScanStatusCode() const { return m_scanStatusCode; }
    inline bool ScanStatusCodeHasBeenSet() const { return m_scanStatusCodeHasBeenSet; }
    template<typename ScanStatusCodeT = Aws::Vector<CoverageStringFilter>>
    void SetScanStatusCode(ScanStatusCodeT&& value) { m_scanStatusCodeHasBeenSet = true; m_scanStatusCode = std::forward<ScanStatusCodeT>(value); }
    template<typename ScanStatusCodeT = Aws::Vector<CoverageStringFilter>>
    CoverageFilterCriteria& WithScanStatusCode(ScanStatusCodeT&& value) { SetScanStatusCode(std::forward<ScanStatusCodeT>(value)); return *this;}
    template<typename ScanStatusCodeT = CoverageStringFilter>
    CoverageFilterCriteria& AddScanStatusCode(ScanStatusCodeT&& value) { m_scanStatusCodeHasBeenSet = true; m_scanStatusCode.emplace_back(std::forward<ScanStatusCodeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The scan status reason to filter on.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetScanStatusReason() const { return m_scanStatusReason; }
    inline bool ScanStatusReasonHasBeenSet() const { return m_scanStatusReasonHasBeenSet; }
    template<typename ScanStatusReasonT = Aws::Vector<CoverageStringFilter>>
    void SetScanStatusReason(ScanStatusReasonT&& value) { m_scanStatusReasonHasBeenSet = true; m_scanStatusReason = std::forward<ScanStatusReasonT>(value); }
    template<typename ScanStatusReasonT = Aws::Vector<CoverageStringFilter>>
    CoverageFilterCriteria& WithScanStatusReason(ScanStatusReasonT&& value) { SetScanStatusReason(std::forward<ScanStatusReasonT>(value)); return *this;}
    template<typename ScanStatusReasonT = CoverageStringFilter>
    CoverageFilterCriteria& AddScanStatusReason(ScanStatusReasonT&& value) { m_scanStatusReasonHasBeenSet = true; m_scanStatusReason.emplace_back(std::forward<ScanStatusReasonT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of Amazon Inspector scan types to return coverage statistics
     * for.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetScanType() const { return m_scanType; }
    inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }
    template<typename ScanTypeT = Aws::Vector<CoverageStringFilter>>
    void SetScanType(ScanTypeT&& value) { m_scanTypeHasBeenSet = true; m_scanType = std::forward<ScanTypeT>(value); }
    template<typename ScanTypeT = Aws::Vector<CoverageStringFilter>>
    CoverageFilterCriteria& WithScanType(ScanTypeT&& value) { SetScanType(std::forward<ScanTypeT>(value)); return *this;}
    template<typename ScanTypeT = CoverageStringFilter>
    CoverageFilterCriteria& AddScanType(ScanTypeT&& value) { m_scanTypeHasBeenSet = true; m_scanType.emplace_back(std::forward<ScanTypeT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CoverageStringFilter> m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<CoverageMapFilter> m_ec2InstanceTags;
    bool m_ec2InstanceTagsHasBeenSet = false;

    Aws::Vector<CoverageStringFilter> m_ecrImageTags;
    bool m_ecrImageTagsHasBeenSet = false;

    Aws::Vector<CoverageStringFilter> m_ecrRepositoryName;
    bool m_ecrRepositoryNameHasBeenSet = false;

    Aws::Vector<CoverageDateFilter> m_imagePulledAt;
    bool m_imagePulledAtHasBeenSet = false;

    Aws::Vector<CoverageStringFilter> m_lambdaFunctionName;
    bool m_lambdaFunctionNameHasBeenSet = false;

    Aws::Vector<CoverageStringFilter> m_lambdaFunctionRuntime;
    bool m_lambdaFunctionRuntimeHasBeenSet = false;

    Aws::Vector<CoverageMapFilter> m_lambdaFunctionTags;
    bool m_lambdaFunctionTagsHasBeenSet = false;

    Aws::Vector<CoverageDateFilter> m_lastScannedAt;
    bool m_lastScannedAtHasBeenSet = false;

    Aws::Vector<CoverageStringFilter> m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Vector<CoverageStringFilter> m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<CoverageStringFilter> m_scanMode;
    bool m_scanModeHasBeenSet = false;

    Aws::Vector<CoverageStringFilter> m_scanStatusCode;
    bool m_scanStatusCodeHasBeenSet = false;

    Aws::Vector<CoverageStringFilter> m_scanStatusReason;
    bool m_scanStatusReasonHasBeenSet = false;

    Aws::Vector<CoverageStringFilter> m_scanType;
    bool m_scanTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
