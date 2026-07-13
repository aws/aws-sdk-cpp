/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/CoverageDateFilter.h>
#include <aws/inspector2/model/CoverageMapFilter.h>
#include <aws/inspector2/model/CoverageNumberFilter.h>
#include <aws/inspector2/model/CoverageStringFilter.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Inspector2 {
namespace Model {

/**
 * <p>A structure that identifies filter criteria for
 * <code>GetCoverageStatistics</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CoverageFilterCriteria">AWS
 * API Reference</a></p>
 */
class CoverageFilterCriteria {
 public:
  AWS_INSPECTOR2_API CoverageFilterCriteria() = default;
  AWS_INSPECTOR2_API CoverageFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API CoverageFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The scan status code to filter on. Valid values are:
   * <code>ValidationException</code>, <code>InternalServerException</code>,
   * <code>ResourceNotFoundException</code>, <code>BadRequestException</code>, and
   * <code>ThrottlingException</code>.</p>
   */
  inline const Aws::Vector<CoverageStringFilter>& GetScanStatusCode() const { return m_scanStatusCode; }
  inline bool ScanStatusCodeHasBeenSet() const { return m_scanStatusCodeHasBeenSet; }
  template <typename ScanStatusCodeT = Aws::Vector<CoverageStringFilter>>
  void SetScanStatusCode(ScanStatusCodeT&& value) {
    m_scanStatusCodeHasBeenSet = true;
    m_scanStatusCode = std::forward<ScanStatusCodeT>(value);
  }
  template <typename ScanStatusCodeT = Aws::Vector<CoverageStringFilter>>
  CoverageFilterCriteria& WithScanStatusCode(ScanStatusCodeT&& value) {
    SetScanStatusCode(std::forward<ScanStatusCodeT>(value));
    return *this;
  }
  template <typename ScanStatusCodeT = CoverageStringFilter>
  CoverageFilterCriteria& AddScanStatusCode(ScanStatusCodeT&& value) {
    m_scanStatusCodeHasBeenSet = true;
    m_scanStatusCode.emplace_back(std::forward<ScanStatusCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scan status reason to filter on.</p>
   */
  inline const Aws::Vector<CoverageStringFilter>& GetScanStatusReason() const { return m_scanStatusReason; }
  inline bool ScanStatusReasonHasBeenSet() const { return m_scanStatusReasonHasBeenSet; }
  template <typename ScanStatusReasonT = Aws::Vector<CoverageStringFilter>>
  void SetScanStatusReason(ScanStatusReasonT&& value) {
    m_scanStatusReasonHasBeenSet = true;
    m_scanStatusReason = std::forward<ScanStatusReasonT>(value);
  }
  template <typename ScanStatusReasonT = Aws::Vector<CoverageStringFilter>>
  CoverageFilterCriteria& WithScanStatusReason(ScanStatusReasonT&& value) {
    SetScanStatusReason(std::forward<ScanStatusReasonT>(value));
    return *this;
  }
  template <typename ScanStatusReasonT = CoverageStringFilter>
  CoverageFilterCriteria& AddScanStatusReason(ScanStatusReasonT&& value) {
    m_scanStatusReasonHasBeenSet = true;
    m_scanStatusReason.emplace_back(std::forward<ScanStatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of Amazon Web Services account IDs to return coverage statistics
   * for.</p>
   */
  inline const Aws::Vector<CoverageStringFilter>& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::Vector<CoverageStringFilter>>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::Vector<CoverageStringFilter>>
  CoverageFilterCriteria& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  template <typename AccountIdT = CoverageStringFilter>
  CoverageFilterCriteria& AddAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId.emplace_back(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of Amazon Web Services resource IDs to return coverage statistics
   * for.</p>
   */
  inline const Aws::Vector<CoverageStringFilter>& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::Vector<CoverageStringFilter>>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::Vector<CoverageStringFilter>>
  CoverageFilterCriteria& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  template <typename ResourceIdT = CoverageStringFilter>
  CoverageFilterCriteria& AddResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId.emplace_back(std::forward<ResourceIdT>(value));
    return *this;
  }
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
  template <typename ResourceTypeT = Aws::Vector<CoverageStringFilter>>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::Vector<CoverageStringFilter>>
  CoverageFilterCriteria& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  template <typename ResourceTypeT = CoverageStringFilter>
  CoverageFilterCriteria& AddResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType.emplace_back(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of Amazon Inspector scan types to return coverage statistics
   * for.</p>
   */
  inline const Aws::Vector<CoverageStringFilter>& GetScanType() const { return m_scanType; }
  inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }
  template <typename ScanTypeT = Aws::Vector<CoverageStringFilter>>
  void SetScanType(ScanTypeT&& value) {
    m_scanTypeHasBeenSet = true;
    m_scanType = std::forward<ScanTypeT>(value);
  }
  template <typename ScanTypeT = Aws::Vector<CoverageStringFilter>>
  CoverageFilterCriteria& WithScanType(ScanTypeT&& value) {
    SetScanType(std::forward<ScanTypeT>(value));
    return *this;
  }
  template <typename ScanTypeT = CoverageStringFilter>
  CoverageFilterCriteria& AddScanType(ScanTypeT&& value) {
    m_scanTypeHasBeenSet = true;
    m_scanType.emplace_back(std::forward<ScanTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon ECR repository name to filter on.</p>
   */
  inline const Aws::Vector<CoverageStringFilter>& GetEcrRepositoryName() const { return m_ecrRepositoryName; }
  inline bool EcrRepositoryNameHasBeenSet() const { return m_ecrRepositoryNameHasBeenSet; }
  template <typename EcrRepositoryNameT = Aws::Vector<CoverageStringFilter>>
  void SetEcrRepositoryName(EcrRepositoryNameT&& value) {
    m_ecrRepositoryNameHasBeenSet = true;
    m_ecrRepositoryName = std::forward<EcrRepositoryNameT>(value);
  }
  template <typename EcrRepositoryNameT = Aws::Vector<CoverageStringFilter>>
  CoverageFilterCriteria& WithEcrRepositoryName(EcrRepositoryNameT&& value) {
    SetEcrRepositoryName(std::forward<EcrRepositoryNameT>(value));
    return *this;
  }
  template <typename EcrRepositoryNameT = CoverageStringFilter>
  CoverageFilterCriteria& AddEcrRepositoryName(EcrRepositoryNameT&& value) {
    m_ecrRepositoryNameHasBeenSet = true;
    m_ecrRepositoryName.emplace_back(std::forward<EcrRepositoryNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon ECR image tags to filter on.</p>
   */
  inline const Aws::Vector<CoverageStringFilter>& GetEcrImageTags() const { return m_ecrImageTags; }
  inline bool EcrImageTagsHasBeenSet() const { return m_ecrImageTagsHasBeenSet; }
  template <typename EcrImageTagsT = Aws::Vector<CoverageStringFilter>>
  void SetEcrImageTags(EcrImageTagsT&& value) {
    m_ecrImageTagsHasBeenSet = true;
    m_ecrImageTags = std::forward<EcrImageTagsT>(value);
  }
  template <typename EcrImageTagsT = Aws::Vector<CoverageStringFilter>>
  CoverageFilterCriteria& WithEcrImageTags(EcrImageTagsT&& value) {
    SetEcrImageTags(std::forward<EcrImageTagsT>(value));
    return *this;
  }
  template <typename EcrImageTagsT = CoverageStringFilter>
  CoverageFilterCriteria& AddEcrImageTags(EcrImageTagsT&& value) {
    m_ecrImageTagsHasBeenSet = true;
    m_ecrImageTags.emplace_back(std::forward<EcrImageTagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon EC2 instance tags to filter on.</p>
   */
  inline const Aws::Vector<CoverageMapFilter>& GetEc2InstanceTags() const { return m_ec2InstanceTags; }
  inline bool Ec2InstanceTagsHasBeenSet() const { return m_ec2InstanceTagsHasBeenSet; }
  template <typename Ec2InstanceTagsT = Aws::Vector<CoverageMapFilter>>
  void SetEc2InstanceTags(Ec2InstanceTagsT&& value) {
    m_ec2InstanceTagsHasBeenSet = true;
    m_ec2InstanceTags = std::forward<Ec2InstanceTagsT>(value);
  }
  template <typename Ec2InstanceTagsT = Aws::Vector<CoverageMapFilter>>
  CoverageFilterCriteria& WithEc2InstanceTags(Ec2InstanceTagsT&& value) {
    SetEc2InstanceTags(std::forward<Ec2InstanceTagsT>(value));
    return *this;
  }
  template <typename Ec2InstanceTagsT = CoverageMapFilter>
  CoverageFilterCriteria& AddEc2InstanceTags(Ec2InstanceTagsT&& value) {
    m_ec2InstanceTagsHasBeenSet = true;
    m_ec2InstanceTags.emplace_back(std::forward<Ec2InstanceTagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns coverage statistics for Amazon Web Services Lambda functions filtered
   * by function names.</p>
   */
  inline const Aws::Vector<CoverageStringFilter>& GetLambdaFunctionName() const { return m_lambdaFunctionName; }
  inline bool LambdaFunctionNameHasBeenSet() const { return m_lambdaFunctionNameHasBeenSet; }
  template <typename LambdaFunctionNameT = Aws::Vector<CoverageStringFilter>>
  void SetLambdaFunctionName(LambdaFunctionNameT&& value) {
    m_lambdaFunctionNameHasBeenSet = true;
    m_lambdaFunctionName = std::forward<LambdaFunctionNameT>(value);
  }
  template <typename LambdaFunctionNameT = Aws::Vector<CoverageStringFilter>>
  CoverageFilterCriteria& WithLambdaFunctionName(LambdaFunctionNameT&& value) {
    SetLambdaFunctionName(std::forward<LambdaFunctionNameT>(value));
    return *this;
  }
  template <typename LambdaFunctionNameT = CoverageStringFilter>
  CoverageFilterCriteria& AddLambdaFunctionName(LambdaFunctionNameT&& value) {
    m_lambdaFunctionNameHasBeenSet = true;
    m_lambdaFunctionName.emplace_back(std::forward<LambdaFunctionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns coverage statistics for Amazon Web Services Lambda functions filtered
   * by tag.</p>
   */
  inline const Aws::Vector<CoverageMapFilter>& GetLambdaFunctionTags() const { return m_lambdaFunctionTags; }
  inline bool LambdaFunctionTagsHasBeenSet() const { return m_lambdaFunctionTagsHasBeenSet; }
  template <typename LambdaFunctionTagsT = Aws::Vector<CoverageMapFilter>>
  void SetLambdaFunctionTags(LambdaFunctionTagsT&& value) {
    m_lambdaFunctionTagsHasBeenSet = true;
    m_lambdaFunctionTags = std::forward<LambdaFunctionTagsT>(value);
  }
  template <typename LambdaFunctionTagsT = Aws::Vector<CoverageMapFilter>>
  CoverageFilterCriteria& WithLambdaFunctionTags(LambdaFunctionTagsT&& value) {
    SetLambdaFunctionTags(std::forward<LambdaFunctionTagsT>(value));
    return *this;
  }
  template <typename LambdaFunctionTagsT = CoverageMapFilter>
  CoverageFilterCriteria& AddLambdaFunctionTags(LambdaFunctionTagsT&& value) {
    m_lambdaFunctionTagsHasBeenSet = true;
    m_lambdaFunctionTags.emplace_back(std::forward<LambdaFunctionTagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns coverage statistics for Amazon Web Services Lambda functions filtered
   * by runtime.</p>
   */
  inline const Aws::Vector<CoverageStringFilter>& GetLambdaFunctionRuntime() const { return m_lambdaFunctionRuntime; }
  inline bool LambdaFunctionRuntimeHasBeenSet() const { return m_lambdaFunctionRuntimeHasBeenSet; }
  template <typename LambdaFunctionRuntimeT = Aws::Vector<CoverageStringFilter>>
  void SetLambdaFunctionRuntime(LambdaFunctionRuntimeT&& value) {
    m_lambdaFunctionRuntimeHasBeenSet = true;
    m_lambdaFunctionRuntime = std::forward<LambdaFunctionRuntimeT>(value);
  }
  template <typename LambdaFunctionRuntimeT = Aws::Vector<CoverageStringFilter>>
  CoverageFilterCriteria& WithLambdaFunctionRuntime(LambdaFunctionRuntimeT&& value) {
    SetLambdaFunctionRuntime(std::forward<LambdaFunctionRuntimeT>(value));
    return *this;
  }
  template <typename LambdaFunctionRuntimeT = CoverageStringFilter>
  CoverageFilterCriteria& AddLambdaFunctionRuntime(LambdaFunctionRuntimeT&& value) {
    m_lambdaFunctionRuntimeHasBeenSet = true;
    m_lambdaFunctionRuntime.emplace_back(std::forward<LambdaFunctionRuntimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters Amazon Web Services resources based on whether Amazon Inspector has
   * checked them for vulnerabilities within the specified time range.</p>
   */
  inline const Aws::Vector<CoverageDateFilter>& GetLastScannedAt() const { return m_lastScannedAt; }
  inline bool LastScannedAtHasBeenSet() const { return m_lastScannedAtHasBeenSet; }
  template <typename LastScannedAtT = Aws::Vector<CoverageDateFilter>>
  void SetLastScannedAt(LastScannedAtT&& value) {
    m_lastScannedAtHasBeenSet = true;
    m_lastScannedAt = std::forward<LastScannedAtT>(value);
  }
  template <typename LastScannedAtT = Aws::Vector<CoverageDateFilter>>
  CoverageFilterCriteria& WithLastScannedAt(LastScannedAtT&& value) {
    SetLastScannedAt(std::forward<LastScannedAtT>(value));
    return *this;
  }
  template <typename LastScannedAtT = CoverageDateFilter>
  CoverageFilterCriteria& AddLastScannedAt(LastScannedAtT&& value) {
    m_lastScannedAtHasBeenSet = true;
    m_lastScannedAt.emplace_back(std::forward<LastScannedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filter to search for Amazon EC2 instance coverage by scan mode. Valid
   * values are <code>EC2_SSM_AGENT_BASED</code>, <code>EC2_AGENTLESS</code>, and
   * <code>EC2_INSPECTOR_AGENT_BASED</code>.</p>
   */
  inline const Aws::Vector<CoverageStringFilter>& GetScanMode() const { return m_scanMode; }
  inline bool ScanModeHasBeenSet() const { return m_scanModeHasBeenSet; }
  template <typename ScanModeT = Aws::Vector<CoverageStringFilter>>
  void SetScanMode(ScanModeT&& value) {
    m_scanModeHasBeenSet = true;
    m_scanMode = std::forward<ScanModeT>(value);
  }
  template <typename ScanModeT = Aws::Vector<CoverageStringFilter>>
  CoverageFilterCriteria& WithScanMode(ScanModeT&& value) {
    SetScanMode(std::forward<ScanModeT>(value));
    return *this;
  }
  template <typename ScanModeT = CoverageStringFilter>
  CoverageFilterCriteria& AddScanMode(ScanModeT&& value) {
    m_scanModeHasBeenSet = true;
    m_scanMode.emplace_back(std::forward<ScanModeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date an image was last pulled at.</p>
   */
  inline const Aws::Vector<CoverageDateFilter>& GetImagePulledAt() const { return m_imagePulledAt; }
  inline bool ImagePulledAtHasBeenSet() const { return m_imagePulledAtHasBeenSet; }
  template <typename ImagePulledAtT = Aws::Vector<CoverageDateFilter>>
  void SetImagePulledAt(ImagePulledAtT&& value) {
    m_imagePulledAtHasBeenSet = true;
    m_imagePulledAt = std::forward<ImagePulledAtT>(value);
  }
  template <typename ImagePulledAtT = Aws::Vector<CoverageDateFilter>>
  CoverageFilterCriteria& WithImagePulledAt(ImagePulledAtT&& value) {
    SetImagePulledAt(std::forward<ImagePulledAtT>(value));
    return *this;
  }
  template <typename ImagePulledAtT = CoverageDateFilter>
  CoverageFilterCriteria& AddImagePulledAt(ImagePulledAtT&& value) {
    m_imagePulledAtHasBeenSet = true;
    m_imagePulledAt.emplace_back(std::forward<ImagePulledAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon ECR image that was last in use.</p>
   */
  inline const Aws::Vector<CoverageDateFilter>& GetEcrImageLastInUseAt() const { return m_ecrImageLastInUseAt; }
  inline bool EcrImageLastInUseAtHasBeenSet() const { return m_ecrImageLastInUseAtHasBeenSet; }
  template <typename EcrImageLastInUseAtT = Aws::Vector<CoverageDateFilter>>
  void SetEcrImageLastInUseAt(EcrImageLastInUseAtT&& value) {
    m_ecrImageLastInUseAtHasBeenSet = true;
    m_ecrImageLastInUseAt = std::forward<EcrImageLastInUseAtT>(value);
  }
  template <typename EcrImageLastInUseAtT = Aws::Vector<CoverageDateFilter>>
  CoverageFilterCriteria& WithEcrImageLastInUseAt(EcrImageLastInUseAtT&& value) {
    SetEcrImageLastInUseAt(std::forward<EcrImageLastInUseAtT>(value));
    return *this;
  }
  template <typename EcrImageLastInUseAtT = CoverageDateFilter>
  CoverageFilterCriteria& AddEcrImageLastInUseAt(EcrImageLastInUseAtT&& value) {
    m_ecrImageLastInUseAtHasBeenSet = true;
    m_ecrImageLastInUseAt.emplace_back(std::forward<EcrImageLastInUseAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of Amazon ECR images in use.</p>
   */
  inline const Aws::Vector<CoverageNumberFilter>& GetEcrImageInUseCount() const { return m_ecrImageInUseCount; }
  inline bool EcrImageInUseCountHasBeenSet() const { return m_ecrImageInUseCountHasBeenSet; }
  template <typename EcrImageInUseCountT = Aws::Vector<CoverageNumberFilter>>
  void SetEcrImageInUseCount(EcrImageInUseCountT&& value) {
    m_ecrImageInUseCountHasBeenSet = true;
    m_ecrImageInUseCount = std::forward<EcrImageInUseCountT>(value);
  }
  template <typename EcrImageInUseCountT = Aws::Vector<CoverageNumberFilter>>
  CoverageFilterCriteria& WithEcrImageInUseCount(EcrImageInUseCountT&& value) {
    SetEcrImageInUseCount(std::forward<EcrImageInUseCountT>(value));
    return *this;
  }
  template <typename EcrImageInUseCountT = CoverageNumberFilter>
  CoverageFilterCriteria& AddEcrImageInUseCount(EcrImageInUseCountT&& value) {
    m_ecrImageInUseCountHasBeenSet = true;
    m_ecrImageInUseCount.emplace_back(std::forward<EcrImageInUseCountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for code repositories based on project name.</p>
   */
  inline const Aws::Vector<CoverageStringFilter>& GetCodeRepositoryProjectName() const { return m_codeRepositoryProjectName; }
  inline bool CodeRepositoryProjectNameHasBeenSet() const { return m_codeRepositoryProjectNameHasBeenSet; }
  template <typename CodeRepositoryProjectNameT = Aws::Vector<CoverageStringFilter>>
  void SetCodeRepositoryProjectName(CodeRepositoryProjectNameT&& value) {
    m_codeRepositoryProjectNameHasBeenSet = true;
    m_codeRepositoryProjectName = std::forward<CodeRepositoryProjectNameT>(value);
  }
  template <typename CodeRepositoryProjectNameT = Aws::Vector<CoverageStringFilter>>
  CoverageFilterCriteria& WithCodeRepositoryProjectName(CodeRepositoryProjectNameT&& value) {
    SetCodeRepositoryProjectName(std::forward<CodeRepositoryProjectNameT>(value));
    return *this;
  }
  template <typename CodeRepositoryProjectNameT = CoverageStringFilter>
  CoverageFilterCriteria& AddCodeRepositoryProjectName(CodeRepositoryProjectNameT&& value) {
    m_codeRepositoryProjectNameHasBeenSet = true;
    m_codeRepositoryProjectName.emplace_back(std::forward<CodeRepositoryProjectNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for code repositories based on provider type (such as GitHub,
   * GitLab, etc.).</p>
   */
  inline const Aws::Vector<CoverageStringFilter>& GetCodeRepositoryProviderType() const { return m_codeRepositoryProviderType; }
  inline bool CodeRepositoryProviderTypeHasBeenSet() const { return m_codeRepositoryProviderTypeHasBeenSet; }
  template <typename CodeRepositoryProviderTypeT = Aws::Vector<CoverageStringFilter>>
  void SetCodeRepositoryProviderType(CodeRepositoryProviderTypeT&& value) {
    m_codeRepositoryProviderTypeHasBeenSet = true;
    m_codeRepositoryProviderType = std::forward<CodeRepositoryProviderTypeT>(value);
  }
  template <typename CodeRepositoryProviderTypeT = Aws::Vector<CoverageStringFilter>>
  CoverageFilterCriteria& WithCodeRepositoryProviderType(CodeRepositoryProviderTypeT&& value) {
    SetCodeRepositoryProviderType(std::forward<CodeRepositoryProviderTypeT>(value));
    return *this;
  }
  template <typename CodeRepositoryProviderTypeT = CoverageStringFilter>
  CoverageFilterCriteria& AddCodeRepositoryProviderType(CodeRepositoryProviderTypeT&& value) {
    m_codeRepositoryProviderTypeHasBeenSet = true;
    m_codeRepositoryProviderType.emplace_back(std::forward<CodeRepositoryProviderTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for code repositories based on visibility setting (public or
   * private).</p>
   */
  inline const Aws::Vector<CoverageStringFilter>& GetCodeRepositoryProviderTypeVisibility() const {
    return m_codeRepositoryProviderTypeVisibility;
  }
  inline bool CodeRepositoryProviderTypeVisibilityHasBeenSet() const { return m_codeRepositoryProviderTypeVisibilityHasBeenSet; }
  template <typename CodeRepositoryProviderTypeVisibilityT = Aws::Vector<CoverageStringFilter>>
  void SetCodeRepositoryProviderTypeVisibility(CodeRepositoryProviderTypeVisibilityT&& value) {
    m_codeRepositoryProviderTypeVisibilityHasBeenSet = true;
    m_codeRepositoryProviderTypeVisibility = std::forward<CodeRepositoryProviderTypeVisibilityT>(value);
  }
  template <typename CodeRepositoryProviderTypeVisibilityT = Aws::Vector<CoverageStringFilter>>
  CoverageFilterCriteria& WithCodeRepositoryProviderTypeVisibility(CodeRepositoryProviderTypeVisibilityT&& value) {
    SetCodeRepositoryProviderTypeVisibility(std::forward<CodeRepositoryProviderTypeVisibilityT>(value));
    return *this;
  }
  template <typename CodeRepositoryProviderTypeVisibilityT = CoverageStringFilter>
  CoverageFilterCriteria& AddCodeRepositoryProviderTypeVisibility(CodeRepositoryProviderTypeVisibilityT&& value) {
    m_codeRepositoryProviderTypeVisibilityHasBeenSet = true;
    m_codeRepositoryProviderTypeVisibility.emplace_back(std::forward<CodeRepositoryProviderTypeVisibilityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for code repositories based on the ID of the last scanned
   * commit.</p>
   */
  inline const Aws::Vector<CoverageStringFilter>& GetLastScannedCommitId() const { return m_lastScannedCommitId; }
  inline bool LastScannedCommitIdHasBeenSet() const { return m_lastScannedCommitIdHasBeenSet; }
  template <typename LastScannedCommitIdT = Aws::Vector<CoverageStringFilter>>
  void SetLastScannedCommitId(LastScannedCommitIdT&& value) {
    m_lastScannedCommitIdHasBeenSet = true;
    m_lastScannedCommitId = std::forward<LastScannedCommitIdT>(value);
  }
  template <typename LastScannedCommitIdT = Aws::Vector<CoverageStringFilter>>
  CoverageFilterCriteria& WithLastScannedCommitId(LastScannedCommitIdT&& value) {
    SetLastScannedCommitId(std::forward<LastScannedCommitIdT>(value));
    return *this;
  }
  template <typename LastScannedCommitIdT = CoverageStringFilter>
  CoverageFilterCriteria& AddLastScannedCommitId(LastScannedCommitIdT&& value) {
    m_lastScannedCommitIdHasBeenSet = true;
    m_lastScannedCommitId.emplace_back(std::forward<LastScannedCommitIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud provider to filter coverage results by.</p>
   */
  inline const Aws::Vector<CoverageStringFilter>& GetCloudProvider() const { return m_cloudProvider; }
  inline bool CloudProviderHasBeenSet() const { return m_cloudProviderHasBeenSet; }
  template <typename CloudProviderT = Aws::Vector<CoverageStringFilter>>
  void SetCloudProvider(CloudProviderT&& value) {
    m_cloudProviderHasBeenSet = true;
    m_cloudProvider = std::forward<CloudProviderT>(value);
  }
  template <typename CloudProviderT = Aws::Vector<CoverageStringFilter>>
  CoverageFilterCriteria& WithCloudProvider(CloudProviderT&& value) {
    SetCloudProvider(std::forward<CloudProviderT>(value));
    return *this;
  }
  template <typename CloudProviderT = CoverageStringFilter>
  CoverageFilterCriteria& AddCloudProvider(CloudProviderT&& value) {
    m_cloudProviderHasBeenSet = true;
    m_cloudProvider.emplace_back(std::forward<CloudProviderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud provider account ID to filter coverage results by.</p>
   */
  inline const Aws::Vector<CoverageStringFilter>& GetCloudProviderAccountId() const { return m_cloudProviderAccountId; }
  inline bool CloudProviderAccountIdHasBeenSet() const { return m_cloudProviderAccountIdHasBeenSet; }
  template <typename CloudProviderAccountIdT = Aws::Vector<CoverageStringFilter>>
  void SetCloudProviderAccountId(CloudProviderAccountIdT&& value) {
    m_cloudProviderAccountIdHasBeenSet = true;
    m_cloudProviderAccountId = std::forward<CloudProviderAccountIdT>(value);
  }
  template <typename CloudProviderAccountIdT = Aws::Vector<CoverageStringFilter>>
  CoverageFilterCriteria& WithCloudProviderAccountId(CloudProviderAccountIdT&& value) {
    SetCloudProviderAccountId(std::forward<CloudProviderAccountIdT>(value));
    return *this;
  }
  template <typename CloudProviderAccountIdT = CoverageStringFilter>
  CoverageFilterCriteria& AddCloudProviderAccountId(CloudProviderAccountIdT&& value) {
    m_cloudProviderAccountIdHasBeenSet = true;
    m_cloudProviderAccountId.emplace_back(std::forward<CloudProviderAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud provider region to filter coverage results by.</p>
   */
  inline const Aws::Vector<CoverageStringFilter>& GetCloudProviderRegion() const { return m_cloudProviderRegion; }
  inline bool CloudProviderRegionHasBeenSet() const { return m_cloudProviderRegionHasBeenSet; }
  template <typename CloudProviderRegionT = Aws::Vector<CoverageStringFilter>>
  void SetCloudProviderRegion(CloudProviderRegionT&& value) {
    m_cloudProviderRegionHasBeenSet = true;
    m_cloudProviderRegion = std::forward<CloudProviderRegionT>(value);
  }
  template <typename CloudProviderRegionT = Aws::Vector<CoverageStringFilter>>
  CoverageFilterCriteria& WithCloudProviderRegion(CloudProviderRegionT&& value) {
    SetCloudProviderRegion(std::forward<CloudProviderRegionT>(value));
    return *this;
  }
  template <typename CloudProviderRegionT = CoverageStringFilter>
  CoverageFilterCriteria& AddCloudProviderRegion(CloudProviderRegionT&& value) {
    m_cloudProviderRegionHasBeenSet = true;
    m_cloudProviderRegion.emplace_back(std::forward<CloudProviderRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud VM instance tags to filter coverage results by.</p>
   */
  inline const Aws::Vector<CoverageMapFilter>& GetCloudVmInstanceTags() const { return m_cloudVmInstanceTags; }
  inline bool CloudVmInstanceTagsHasBeenSet() const { return m_cloudVmInstanceTagsHasBeenSet; }
  template <typename CloudVmInstanceTagsT = Aws::Vector<CoverageMapFilter>>
  void SetCloudVmInstanceTags(CloudVmInstanceTagsT&& value) {
    m_cloudVmInstanceTagsHasBeenSet = true;
    m_cloudVmInstanceTags = std::forward<CloudVmInstanceTagsT>(value);
  }
  template <typename CloudVmInstanceTagsT = Aws::Vector<CoverageMapFilter>>
  CoverageFilterCriteria& WithCloudVmInstanceTags(CloudVmInstanceTagsT&& value) {
    SetCloudVmInstanceTags(std::forward<CloudVmInstanceTagsT>(value));
    return *this;
  }
  template <typename CloudVmInstanceTagsT = CoverageMapFilter>
  CoverageFilterCriteria& AddCloudVmInstanceTags(CloudVmInstanceTagsT&& value) {
    m_cloudVmInstanceTagsHasBeenSet = true;
    m_cloudVmInstanceTags.emplace_back(std::forward<CloudVmInstanceTagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud container image tags to filter coverage results by.</p>
   */
  inline const Aws::Vector<CoverageStringFilter>& GetCloudContainerImageTags() const { return m_cloudContainerImageTags; }
  inline bool CloudContainerImageTagsHasBeenSet() const { return m_cloudContainerImageTagsHasBeenSet; }
  template <typename CloudContainerImageTagsT = Aws::Vector<CoverageStringFilter>>
  void SetCloudContainerImageTags(CloudContainerImageTagsT&& value) {
    m_cloudContainerImageTagsHasBeenSet = true;
    m_cloudContainerImageTags = std::forward<CloudContainerImageTagsT>(value);
  }
  template <typename CloudContainerImageTagsT = Aws::Vector<CoverageStringFilter>>
  CoverageFilterCriteria& WithCloudContainerImageTags(CloudContainerImageTagsT&& value) {
    SetCloudContainerImageTags(std::forward<CloudContainerImageTagsT>(value));
    return *this;
  }
  template <typename CloudContainerImageTagsT = CoverageStringFilter>
  CoverageFilterCriteria& AddCloudContainerImageTags(CloudContainerImageTagsT&& value) {
    m_cloudContainerImageTagsHasBeenSet = true;
    m_cloudContainerImageTags.emplace_back(std::forward<CloudContainerImageTagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud container repository name to filter coverage results by.</p>
   */
  inline const Aws::Vector<CoverageStringFilter>& GetCloudContainerRepositoryName() const { return m_cloudContainerRepositoryName; }
  inline bool CloudContainerRepositoryNameHasBeenSet() const { return m_cloudContainerRepositoryNameHasBeenSet; }
  template <typename CloudContainerRepositoryNameT = Aws::Vector<CoverageStringFilter>>
  void SetCloudContainerRepositoryName(CloudContainerRepositoryNameT&& value) {
    m_cloudContainerRepositoryNameHasBeenSet = true;
    m_cloudContainerRepositoryName = std::forward<CloudContainerRepositoryNameT>(value);
  }
  template <typename CloudContainerRepositoryNameT = Aws::Vector<CoverageStringFilter>>
  CoverageFilterCriteria& WithCloudContainerRepositoryName(CloudContainerRepositoryNameT&& value) {
    SetCloudContainerRepositoryName(std::forward<CloudContainerRepositoryNameT>(value));
    return *this;
  }
  template <typename CloudContainerRepositoryNameT = CoverageStringFilter>
  CoverageFilterCriteria& AddCloudContainerRepositoryName(CloudContainerRepositoryNameT&& value) {
    m_cloudContainerRepositoryNameHasBeenSet = true;
    m_cloudContainerRepositoryName.emplace_back(std::forward<CloudContainerRepositoryNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud container registry name to filter coverage results by.</p>
   */
  inline const Aws::Vector<CoverageStringFilter>& GetCloudContainerRegistryName() const { return m_cloudContainerRegistryName; }
  inline bool CloudContainerRegistryNameHasBeenSet() const { return m_cloudContainerRegistryNameHasBeenSet; }
  template <typename CloudContainerRegistryNameT = Aws::Vector<CoverageStringFilter>>
  void SetCloudContainerRegistryName(CloudContainerRegistryNameT&& value) {
    m_cloudContainerRegistryNameHasBeenSet = true;
    m_cloudContainerRegistryName = std::forward<CloudContainerRegistryNameT>(value);
  }
  template <typename CloudContainerRegistryNameT = Aws::Vector<CoverageStringFilter>>
  CoverageFilterCriteria& WithCloudContainerRegistryName(CloudContainerRegistryNameT&& value) {
    SetCloudContainerRegistryName(std::forward<CloudContainerRegistryNameT>(value));
    return *this;
  }
  template <typename CloudContainerRegistryNameT = CoverageStringFilter>
  CoverageFilterCriteria& AddCloudContainerRegistryName(CloudContainerRegistryNameT&& value) {
    m_cloudContainerRegistryNameHasBeenSet = true;
    m_cloudContainerRegistryName.emplace_back(std::forward<CloudContainerRegistryNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud serverless function name to filter coverage results by.</p>
   */
  inline const Aws::Vector<CoverageStringFilter>& GetCloudServerlessFunctionName() const { return m_cloudServerlessFunctionName; }
  inline bool CloudServerlessFunctionNameHasBeenSet() const { return m_cloudServerlessFunctionNameHasBeenSet; }
  template <typename CloudServerlessFunctionNameT = Aws::Vector<CoverageStringFilter>>
  void SetCloudServerlessFunctionName(CloudServerlessFunctionNameT&& value) {
    m_cloudServerlessFunctionNameHasBeenSet = true;
    m_cloudServerlessFunctionName = std::forward<CloudServerlessFunctionNameT>(value);
  }
  template <typename CloudServerlessFunctionNameT = Aws::Vector<CoverageStringFilter>>
  CoverageFilterCriteria& WithCloudServerlessFunctionName(CloudServerlessFunctionNameT&& value) {
    SetCloudServerlessFunctionName(std::forward<CloudServerlessFunctionNameT>(value));
    return *this;
  }
  template <typename CloudServerlessFunctionNameT = CoverageStringFilter>
  CoverageFilterCriteria& AddCloudServerlessFunctionName(CloudServerlessFunctionNameT&& value) {
    m_cloudServerlessFunctionNameHasBeenSet = true;
    m_cloudServerlessFunctionName.emplace_back(std::forward<CloudServerlessFunctionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud serverless function runtime to filter coverage results by.</p>
   */
  inline const Aws::Vector<CoverageStringFilter>& GetCloudServerlessFunctionRuntime() const { return m_cloudServerlessFunctionRuntime; }
  inline bool CloudServerlessFunctionRuntimeHasBeenSet() const { return m_cloudServerlessFunctionRuntimeHasBeenSet; }
  template <typename CloudServerlessFunctionRuntimeT = Aws::Vector<CoverageStringFilter>>
  void SetCloudServerlessFunctionRuntime(CloudServerlessFunctionRuntimeT&& value) {
    m_cloudServerlessFunctionRuntimeHasBeenSet = true;
    m_cloudServerlessFunctionRuntime = std::forward<CloudServerlessFunctionRuntimeT>(value);
  }
  template <typename CloudServerlessFunctionRuntimeT = Aws::Vector<CoverageStringFilter>>
  CoverageFilterCriteria& WithCloudServerlessFunctionRuntime(CloudServerlessFunctionRuntimeT&& value) {
    SetCloudServerlessFunctionRuntime(std::forward<CloudServerlessFunctionRuntimeT>(value));
    return *this;
  }
  template <typename CloudServerlessFunctionRuntimeT = CoverageStringFilter>
  CoverageFilterCriteria& AddCloudServerlessFunctionRuntime(CloudServerlessFunctionRuntimeT&& value) {
    m_cloudServerlessFunctionRuntimeHasBeenSet = true;
    m_cloudServerlessFunctionRuntime.emplace_back(std::forward<CloudServerlessFunctionRuntimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud serverless function tags to filter coverage results by.</p>
   */
  inline const Aws::Vector<CoverageMapFilter>& GetCloudServerlessFunctionTags() const { return m_cloudServerlessFunctionTags; }
  inline bool CloudServerlessFunctionTagsHasBeenSet() const { return m_cloudServerlessFunctionTagsHasBeenSet; }
  template <typename CloudServerlessFunctionTagsT = Aws::Vector<CoverageMapFilter>>
  void SetCloudServerlessFunctionTags(CloudServerlessFunctionTagsT&& value) {
    m_cloudServerlessFunctionTagsHasBeenSet = true;
    m_cloudServerlessFunctionTags = std::forward<CloudServerlessFunctionTagsT>(value);
  }
  template <typename CloudServerlessFunctionTagsT = Aws::Vector<CoverageMapFilter>>
  CoverageFilterCriteria& WithCloudServerlessFunctionTags(CloudServerlessFunctionTagsT&& value) {
    SetCloudServerlessFunctionTags(std::forward<CloudServerlessFunctionTagsT>(value));
    return *this;
  }
  template <typename CloudServerlessFunctionTagsT = CoverageMapFilter>
  CoverageFilterCriteria& AddCloudServerlessFunctionTags(CloudServerlessFunctionTagsT&& value) {
    m_cloudServerlessFunctionTagsHasBeenSet = true;
    m_cloudServerlessFunctionTags.emplace_back(std::forward<CloudServerlessFunctionTagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud provider organization ID to filter coverage results by.</p>
   */
  inline const Aws::Vector<CoverageStringFilter>& GetCloudProviderOrgId() const { return m_cloudProviderOrgId; }
  inline bool CloudProviderOrgIdHasBeenSet() const { return m_cloudProviderOrgIdHasBeenSet; }
  template <typename CloudProviderOrgIdT = Aws::Vector<CoverageStringFilter>>
  void SetCloudProviderOrgId(CloudProviderOrgIdT&& value) {
    m_cloudProviderOrgIdHasBeenSet = true;
    m_cloudProviderOrgId = std::forward<CloudProviderOrgIdT>(value);
  }
  template <typename CloudProviderOrgIdT = Aws::Vector<CoverageStringFilter>>
  CoverageFilterCriteria& WithCloudProviderOrgId(CloudProviderOrgIdT&& value) {
    SetCloudProviderOrgId(std::forward<CloudProviderOrgIdT>(value));
    return *this;
  }
  template <typename CloudProviderOrgIdT = CoverageStringFilter>
  CoverageFilterCriteria& AddCloudProviderOrgId(CloudProviderOrgIdT&& value) {
    m_cloudProviderOrgIdHasBeenSet = true;
    m_cloudProviderOrgId.emplace_back(std::forward<CloudProviderOrgIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<CoverageStringFilter> m_scanStatusCode;

  Aws::Vector<CoverageStringFilter> m_scanStatusReason;

  Aws::Vector<CoverageStringFilter> m_accountId;

  Aws::Vector<CoverageStringFilter> m_resourceId;

  Aws::Vector<CoverageStringFilter> m_resourceType;

  Aws::Vector<CoverageStringFilter> m_scanType;

  Aws::Vector<CoverageStringFilter> m_ecrRepositoryName;

  Aws::Vector<CoverageStringFilter> m_ecrImageTags;

  Aws::Vector<CoverageMapFilter> m_ec2InstanceTags;

  Aws::Vector<CoverageStringFilter> m_lambdaFunctionName;

  Aws::Vector<CoverageMapFilter> m_lambdaFunctionTags;

  Aws::Vector<CoverageStringFilter> m_lambdaFunctionRuntime;

  Aws::Vector<CoverageDateFilter> m_lastScannedAt;

  Aws::Vector<CoverageStringFilter> m_scanMode;

  Aws::Vector<CoverageDateFilter> m_imagePulledAt;

  Aws::Vector<CoverageDateFilter> m_ecrImageLastInUseAt;

  Aws::Vector<CoverageNumberFilter> m_ecrImageInUseCount;

  Aws::Vector<CoverageStringFilter> m_codeRepositoryProjectName;

  Aws::Vector<CoverageStringFilter> m_codeRepositoryProviderType;

  Aws::Vector<CoverageStringFilter> m_codeRepositoryProviderTypeVisibility;

  Aws::Vector<CoverageStringFilter> m_lastScannedCommitId;

  Aws::Vector<CoverageStringFilter> m_cloudProvider;

  Aws::Vector<CoverageStringFilter> m_cloudProviderAccountId;

  Aws::Vector<CoverageStringFilter> m_cloudProviderRegion;

  Aws::Vector<CoverageMapFilter> m_cloudVmInstanceTags;

  Aws::Vector<CoverageStringFilter> m_cloudContainerImageTags;

  Aws::Vector<CoverageStringFilter> m_cloudContainerRepositoryName;

  Aws::Vector<CoverageStringFilter> m_cloudContainerRegistryName;

  Aws::Vector<CoverageStringFilter> m_cloudServerlessFunctionName;

  Aws::Vector<CoverageStringFilter> m_cloudServerlessFunctionRuntime;

  Aws::Vector<CoverageMapFilter> m_cloudServerlessFunctionTags;

  Aws::Vector<CoverageStringFilter> m_cloudProviderOrgId;
  bool m_scanStatusCodeHasBeenSet = false;
  bool m_scanStatusReasonHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_resourceIdHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_scanTypeHasBeenSet = false;
  bool m_ecrRepositoryNameHasBeenSet = false;
  bool m_ecrImageTagsHasBeenSet = false;
  bool m_ec2InstanceTagsHasBeenSet = false;
  bool m_lambdaFunctionNameHasBeenSet = false;
  bool m_lambdaFunctionTagsHasBeenSet = false;
  bool m_lambdaFunctionRuntimeHasBeenSet = false;
  bool m_lastScannedAtHasBeenSet = false;
  bool m_scanModeHasBeenSet = false;
  bool m_imagePulledAtHasBeenSet = false;
  bool m_ecrImageLastInUseAtHasBeenSet = false;
  bool m_ecrImageInUseCountHasBeenSet = false;
  bool m_codeRepositoryProjectNameHasBeenSet = false;
  bool m_codeRepositoryProviderTypeHasBeenSet = false;
  bool m_codeRepositoryProviderTypeVisibilityHasBeenSet = false;
  bool m_lastScannedCommitIdHasBeenSet = false;
  bool m_cloudProviderHasBeenSet = false;
  bool m_cloudProviderAccountIdHasBeenSet = false;
  bool m_cloudProviderRegionHasBeenSet = false;
  bool m_cloudVmInstanceTagsHasBeenSet = false;
  bool m_cloudContainerImageTagsHasBeenSet = false;
  bool m_cloudContainerRepositoryNameHasBeenSet = false;
  bool m_cloudContainerRegistryNameHasBeenSet = false;
  bool m_cloudServerlessFunctionNameHasBeenSet = false;
  bool m_cloudServerlessFunctionRuntimeHasBeenSet = false;
  bool m_cloudServerlessFunctionTagsHasBeenSet = false;
  bool m_cloudProviderOrgIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
