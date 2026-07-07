/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/DateFilter.h>
#include <aws/inspector2/model/MapFilter.h>
#include <aws/inspector2/model/NumberFilter.h>
#include <aws/inspector2/model/PackageFilter.h>
#include <aws/inspector2/model/PortRangeFilter.h>
#include <aws/inspector2/model/StringFilter.h>

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
 * <p>Details on the criteria used to define the filter.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/FilterCriteria">AWS
 * API Reference</a></p>
 */
class FilterCriteria {
 public:
  AWS_INSPECTOR2_API FilterCriteria() = default;
  AWS_INSPECTOR2_API FilterCriteria(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API FilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Details on the finding ARNs used to filter findings.</p>
   */
  inline const Aws::Vector<StringFilter>& GetFindingArn() const { return m_findingArn; }
  inline bool FindingArnHasBeenSet() const { return m_findingArnHasBeenSet; }
  template <typename FindingArnT = Aws::Vector<StringFilter>>
  void SetFindingArn(FindingArnT&& value) {
    m_findingArnHasBeenSet = true;
    m_findingArn = std::forward<FindingArnT>(value);
  }
  template <typename FindingArnT = Aws::Vector<StringFilter>>
  FilterCriteria& WithFindingArn(FindingArnT&& value) {
    SetFindingArn(std::forward<FindingArnT>(value));
    return *this;
  }
  template <typename FindingArnT = StringFilter>
  FilterCriteria& AddFindingArn(FindingArnT&& value) {
    m_findingArnHasBeenSet = true;
    m_findingArn.emplace_back(std::forward<FindingArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details of the Amazon Web Services account IDs used to filter findings.</p>
   */
  inline const Aws::Vector<StringFilter>& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::Vector<StringFilter>>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::Vector<StringFilter>>
  FilterCriteria& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  template <typename AwsAccountIdT = StringFilter>
  FilterCriteria& AddAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId.emplace_back(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details on the finding types used to filter findings.</p>
   */
  inline const Aws::Vector<StringFilter>& GetFindingType() const { return m_findingType; }
  inline bool FindingTypeHasBeenSet() const { return m_findingTypeHasBeenSet; }
  template <typename FindingTypeT = Aws::Vector<StringFilter>>
  void SetFindingType(FindingTypeT&& value) {
    m_findingTypeHasBeenSet = true;
    m_findingType = std::forward<FindingTypeT>(value);
  }
  template <typename FindingTypeT = Aws::Vector<StringFilter>>
  FilterCriteria& WithFindingType(FindingTypeT&& value) {
    SetFindingType(std::forward<FindingTypeT>(value));
    return *this;
  }
  template <typename FindingTypeT = StringFilter>
  FilterCriteria& AddFindingType(FindingTypeT&& value) {
    m_findingTypeHasBeenSet = true;
    m_findingType.emplace_back(std::forward<FindingTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details on the severity used to filter findings.</p>
   */
  inline const Aws::Vector<StringFilter>& GetSeverity() const { return m_severity; }
  inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
  template <typename SeverityT = Aws::Vector<StringFilter>>
  void SetSeverity(SeverityT&& value) {
    m_severityHasBeenSet = true;
    m_severity = std::forward<SeverityT>(value);
  }
  template <typename SeverityT = Aws::Vector<StringFilter>>
  FilterCriteria& WithSeverity(SeverityT&& value) {
    SetSeverity(std::forward<SeverityT>(value));
    return *this;
  }
  template <typename SeverityT = StringFilter>
  FilterCriteria& AddSeverity(SeverityT&& value) {
    m_severityHasBeenSet = true;
    m_severity.emplace_back(std::forward<SeverityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details on the date and time a finding was first seen used to filter
   * findings.</p>
   */
  inline const Aws::Vector<DateFilter>& GetFirstObservedAt() const { return m_firstObservedAt; }
  inline bool FirstObservedAtHasBeenSet() const { return m_firstObservedAtHasBeenSet; }
  template <typename FirstObservedAtT = Aws::Vector<DateFilter>>
  void SetFirstObservedAt(FirstObservedAtT&& value) {
    m_firstObservedAtHasBeenSet = true;
    m_firstObservedAt = std::forward<FirstObservedAtT>(value);
  }
  template <typename FirstObservedAtT = Aws::Vector<DateFilter>>
  FilterCriteria& WithFirstObservedAt(FirstObservedAtT&& value) {
    SetFirstObservedAt(std::forward<FirstObservedAtT>(value));
    return *this;
  }
  template <typename FirstObservedAtT = DateFilter>
  FilterCriteria& AddFirstObservedAt(FirstObservedAtT&& value) {
    m_firstObservedAtHasBeenSet = true;
    m_firstObservedAt.emplace_back(std::forward<FirstObservedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details on the date and time a finding was last seen used to filter
   * findings.</p>
   */
  inline const Aws::Vector<DateFilter>& GetLastObservedAt() const { return m_lastObservedAt; }
  inline bool LastObservedAtHasBeenSet() const { return m_lastObservedAtHasBeenSet; }
  template <typename LastObservedAtT = Aws::Vector<DateFilter>>
  void SetLastObservedAt(LastObservedAtT&& value) {
    m_lastObservedAtHasBeenSet = true;
    m_lastObservedAt = std::forward<LastObservedAtT>(value);
  }
  template <typename LastObservedAtT = Aws::Vector<DateFilter>>
  FilterCriteria& WithLastObservedAt(LastObservedAtT&& value) {
    SetLastObservedAt(std::forward<LastObservedAtT>(value));
    return *this;
  }
  template <typename LastObservedAtT = DateFilter>
  FilterCriteria& AddLastObservedAt(LastObservedAtT&& value) {
    m_lastObservedAtHasBeenSet = true;
    m_lastObservedAt.emplace_back(std::forward<LastObservedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details on the date and time a finding was last updated at used to filter
   * findings.</p>
   */
  inline const Aws::Vector<DateFilter>& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Vector<DateFilter>>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Vector<DateFilter>>
  FilterCriteria& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  template <typename UpdatedAtT = DateFilter>
  FilterCriteria& AddUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt.emplace_back(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details on the finding status types used to filter findings.</p>
   */
  inline const Aws::Vector<StringFilter>& GetFindingStatus() const { return m_findingStatus; }
  inline bool FindingStatusHasBeenSet() const { return m_findingStatusHasBeenSet; }
  template <typename FindingStatusT = Aws::Vector<StringFilter>>
  void SetFindingStatus(FindingStatusT&& value) {
    m_findingStatusHasBeenSet = true;
    m_findingStatus = std::forward<FindingStatusT>(value);
  }
  template <typename FindingStatusT = Aws::Vector<StringFilter>>
  FilterCriteria& WithFindingStatus(FindingStatusT&& value) {
    SetFindingStatus(std::forward<FindingStatusT>(value));
    return *this;
  }
  template <typename FindingStatusT = StringFilter>
  FilterCriteria& AddFindingStatus(FindingStatusT&& value) {
    m_findingStatusHasBeenSet = true;
    m_findingStatus.emplace_back(std::forward<FindingStatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details on the finding title used to filter findings.</p>
   */
  inline const Aws::Vector<StringFilter>& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::Vector<StringFilter>>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::Vector<StringFilter>>
  FilterCriteria& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  template <typename TitleT = StringFilter>
  FilterCriteria& AddTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title.emplace_back(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Inspector score to filter on.</p>
   */
  inline const Aws::Vector<NumberFilter>& GetInspectorScore() const { return m_inspectorScore; }
  inline bool InspectorScoreHasBeenSet() const { return m_inspectorScoreHasBeenSet; }
  template <typename InspectorScoreT = Aws::Vector<NumberFilter>>
  void SetInspectorScore(InspectorScoreT&& value) {
    m_inspectorScoreHasBeenSet = true;
    m_inspectorScore = std::forward<InspectorScoreT>(value);
  }
  template <typename InspectorScoreT = Aws::Vector<NumberFilter>>
  FilterCriteria& WithInspectorScore(InspectorScoreT&& value) {
    SetInspectorScore(std::forward<InspectorScoreT>(value));
    return *this;
  }
  template <typename InspectorScoreT = NumberFilter>
  FilterCriteria& AddInspectorScore(InspectorScoreT&& value) {
    m_inspectorScoreHasBeenSet = true;
    m_inspectorScore.emplace_back(std::forward<InspectorScoreT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details on the resource types used to filter findings.</p>
   */
  inline const Aws::Vector<StringFilter>& GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  template <typename ResourceTypeT = Aws::Vector<StringFilter>>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::Vector<StringFilter>>
  FilterCriteria& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  template <typename ResourceTypeT = StringFilter>
  FilterCriteria& AddResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType.emplace_back(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details on the resource IDs used to filter findings.</p>
   */
  inline const Aws::Vector<StringFilter>& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::Vector<StringFilter>>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::Vector<StringFilter>>
  FilterCriteria& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  template <typename ResourceIdT = StringFilter>
  FilterCriteria& AddResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId.emplace_back(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details on the resource tags used to filter findings.</p>
   */
  inline const Aws::Vector<MapFilter>& GetResourceTags() const { return m_resourceTags; }
  inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
  template <typename ResourceTagsT = Aws::Vector<MapFilter>>
  void SetResourceTags(ResourceTagsT&& value) {
    m_resourceTagsHasBeenSet = true;
    m_resourceTags = std::forward<ResourceTagsT>(value);
  }
  template <typename ResourceTagsT = Aws::Vector<MapFilter>>
  FilterCriteria& WithResourceTags(ResourceTagsT&& value) {
    SetResourceTags(std::forward<ResourceTagsT>(value));
    return *this;
  }
  template <typename ResourceTagsT = MapFilter>
  FilterCriteria& AddResourceTags(ResourceTagsT&& value) {
    m_resourceTagsHasBeenSet = true;
    m_resourceTags.emplace_back(std::forward<ResourceTagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details of the Amazon EC2 instance image IDs used to filter findings.</p>
   */
  inline const Aws::Vector<StringFilter>& GetEc2InstanceImageId() const { return m_ec2InstanceImageId; }
  inline bool Ec2InstanceImageIdHasBeenSet() const { return m_ec2InstanceImageIdHasBeenSet; }
  template <typename Ec2InstanceImageIdT = Aws::Vector<StringFilter>>
  void SetEc2InstanceImageId(Ec2InstanceImageIdT&& value) {
    m_ec2InstanceImageIdHasBeenSet = true;
    m_ec2InstanceImageId = std::forward<Ec2InstanceImageIdT>(value);
  }
  template <typename Ec2InstanceImageIdT = Aws::Vector<StringFilter>>
  FilterCriteria& WithEc2InstanceImageId(Ec2InstanceImageIdT&& value) {
    SetEc2InstanceImageId(std::forward<Ec2InstanceImageIdT>(value));
    return *this;
  }
  template <typename Ec2InstanceImageIdT = StringFilter>
  FilterCriteria& AddEc2InstanceImageId(Ec2InstanceImageIdT&& value) {
    m_ec2InstanceImageIdHasBeenSet = true;
    m_ec2InstanceImageId.emplace_back(std::forward<Ec2InstanceImageIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details of the Amazon EC2 instance VPC IDs used to filter findings.</p>
   */
  inline const Aws::Vector<StringFilter>& GetEc2InstanceVpcId() const { return m_ec2InstanceVpcId; }
  inline bool Ec2InstanceVpcIdHasBeenSet() const { return m_ec2InstanceVpcIdHasBeenSet; }
  template <typename Ec2InstanceVpcIdT = Aws::Vector<StringFilter>>
  void SetEc2InstanceVpcId(Ec2InstanceVpcIdT&& value) {
    m_ec2InstanceVpcIdHasBeenSet = true;
    m_ec2InstanceVpcId = std::forward<Ec2InstanceVpcIdT>(value);
  }
  template <typename Ec2InstanceVpcIdT = Aws::Vector<StringFilter>>
  FilterCriteria& WithEc2InstanceVpcId(Ec2InstanceVpcIdT&& value) {
    SetEc2InstanceVpcId(std::forward<Ec2InstanceVpcIdT>(value));
    return *this;
  }
  template <typename Ec2InstanceVpcIdT = StringFilter>
  FilterCriteria& AddEc2InstanceVpcId(Ec2InstanceVpcIdT&& value) {
    m_ec2InstanceVpcIdHasBeenSet = true;
    m_ec2InstanceVpcId.emplace_back(std::forward<Ec2InstanceVpcIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details of the Amazon EC2 instance subnet IDs used to filter findings.</p>
   */
  inline const Aws::Vector<StringFilter>& GetEc2InstanceSubnetId() const { return m_ec2InstanceSubnetId; }
  inline bool Ec2InstanceSubnetIdHasBeenSet() const { return m_ec2InstanceSubnetIdHasBeenSet; }
  template <typename Ec2InstanceSubnetIdT = Aws::Vector<StringFilter>>
  void SetEc2InstanceSubnetId(Ec2InstanceSubnetIdT&& value) {
    m_ec2InstanceSubnetIdHasBeenSet = true;
    m_ec2InstanceSubnetId = std::forward<Ec2InstanceSubnetIdT>(value);
  }
  template <typename Ec2InstanceSubnetIdT = Aws::Vector<StringFilter>>
  FilterCriteria& WithEc2InstanceSubnetId(Ec2InstanceSubnetIdT&& value) {
    SetEc2InstanceSubnetId(std::forward<Ec2InstanceSubnetIdT>(value));
    return *this;
  }
  template <typename Ec2InstanceSubnetIdT = StringFilter>
  FilterCriteria& AddEc2InstanceSubnetId(Ec2InstanceSubnetIdT&& value) {
    m_ec2InstanceSubnetIdHasBeenSet = true;
    m_ec2InstanceSubnetId.emplace_back(std::forward<Ec2InstanceSubnetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details on the Amazon ECR image push date and time used to filter
   * findings.</p>
   */
  inline const Aws::Vector<DateFilter>& GetEcrImagePushedAt() const { return m_ecrImagePushedAt; }
  inline bool EcrImagePushedAtHasBeenSet() const { return m_ecrImagePushedAtHasBeenSet; }
  template <typename EcrImagePushedAtT = Aws::Vector<DateFilter>>
  void SetEcrImagePushedAt(EcrImagePushedAtT&& value) {
    m_ecrImagePushedAtHasBeenSet = true;
    m_ecrImagePushedAt = std::forward<EcrImagePushedAtT>(value);
  }
  template <typename EcrImagePushedAtT = Aws::Vector<DateFilter>>
  FilterCriteria& WithEcrImagePushedAt(EcrImagePushedAtT&& value) {
    SetEcrImagePushedAt(std::forward<EcrImagePushedAtT>(value));
    return *this;
  }
  template <typename EcrImagePushedAtT = DateFilter>
  FilterCriteria& AddEcrImagePushedAt(EcrImagePushedAtT&& value) {
    m_ecrImagePushedAtHasBeenSet = true;
    m_ecrImagePushedAt.emplace_back(std::forward<EcrImagePushedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details of the Amazon ECR image architecture types used to filter
   * findings.</p>
   */
  inline const Aws::Vector<StringFilter>& GetEcrImageArchitecture() const { return m_ecrImageArchitecture; }
  inline bool EcrImageArchitectureHasBeenSet() const { return m_ecrImageArchitectureHasBeenSet; }
  template <typename EcrImageArchitectureT = Aws::Vector<StringFilter>>
  void SetEcrImageArchitecture(EcrImageArchitectureT&& value) {
    m_ecrImageArchitectureHasBeenSet = true;
    m_ecrImageArchitecture = std::forward<EcrImageArchitectureT>(value);
  }
  template <typename EcrImageArchitectureT = Aws::Vector<StringFilter>>
  FilterCriteria& WithEcrImageArchitecture(EcrImageArchitectureT&& value) {
    SetEcrImageArchitecture(std::forward<EcrImageArchitectureT>(value));
    return *this;
  }
  template <typename EcrImageArchitectureT = StringFilter>
  FilterCriteria& AddEcrImageArchitecture(EcrImageArchitectureT&& value) {
    m_ecrImageArchitectureHasBeenSet = true;
    m_ecrImageArchitecture.emplace_back(std::forward<EcrImageArchitectureT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details on the Amazon ECR registry used to filter findings.</p>
   */
  inline const Aws::Vector<StringFilter>& GetEcrImageRegistry() const { return m_ecrImageRegistry; }
  inline bool EcrImageRegistryHasBeenSet() const { return m_ecrImageRegistryHasBeenSet; }
  template <typename EcrImageRegistryT = Aws::Vector<StringFilter>>
  void SetEcrImageRegistry(EcrImageRegistryT&& value) {
    m_ecrImageRegistryHasBeenSet = true;
    m_ecrImageRegistry = std::forward<EcrImageRegistryT>(value);
  }
  template <typename EcrImageRegistryT = Aws::Vector<StringFilter>>
  FilterCriteria& WithEcrImageRegistry(EcrImageRegistryT&& value) {
    SetEcrImageRegistry(std::forward<EcrImageRegistryT>(value));
    return *this;
  }
  template <typename EcrImageRegistryT = StringFilter>
  FilterCriteria& AddEcrImageRegistry(EcrImageRegistryT&& value) {
    m_ecrImageRegistryHasBeenSet = true;
    m_ecrImageRegistry.emplace_back(std::forward<EcrImageRegistryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details on the name of the Amazon ECR repository used to filter findings.</p>
   */
  inline const Aws::Vector<StringFilter>& GetEcrImageRepositoryName() const { return m_ecrImageRepositoryName; }
  inline bool EcrImageRepositoryNameHasBeenSet() const { return m_ecrImageRepositoryNameHasBeenSet; }
  template <typename EcrImageRepositoryNameT = Aws::Vector<StringFilter>>
  void SetEcrImageRepositoryName(EcrImageRepositoryNameT&& value) {
    m_ecrImageRepositoryNameHasBeenSet = true;
    m_ecrImageRepositoryName = std::forward<EcrImageRepositoryNameT>(value);
  }
  template <typename EcrImageRepositoryNameT = Aws::Vector<StringFilter>>
  FilterCriteria& WithEcrImageRepositoryName(EcrImageRepositoryNameT&& value) {
    SetEcrImageRepositoryName(std::forward<EcrImageRepositoryNameT>(value));
    return *this;
  }
  template <typename EcrImageRepositoryNameT = StringFilter>
  FilterCriteria& AddEcrImageRepositoryName(EcrImageRepositoryNameT&& value) {
    m_ecrImageRepositoryNameHasBeenSet = true;
    m_ecrImageRepositoryName.emplace_back(std::forward<EcrImageRepositoryNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags attached to the Amazon ECR container image.</p>
   */
  inline const Aws::Vector<StringFilter>& GetEcrImageTags() const { return m_ecrImageTags; }
  inline bool EcrImageTagsHasBeenSet() const { return m_ecrImageTagsHasBeenSet; }
  template <typename EcrImageTagsT = Aws::Vector<StringFilter>>
  void SetEcrImageTags(EcrImageTagsT&& value) {
    m_ecrImageTagsHasBeenSet = true;
    m_ecrImageTags = std::forward<EcrImageTagsT>(value);
  }
  template <typename EcrImageTagsT = Aws::Vector<StringFilter>>
  FilterCriteria& WithEcrImageTags(EcrImageTagsT&& value) {
    SetEcrImageTags(std::forward<EcrImageTagsT>(value));
    return *this;
  }
  template <typename EcrImageTagsT = StringFilter>
  FilterCriteria& AddEcrImageTags(EcrImageTagsT&& value) {
    m_ecrImageTagsHasBeenSet = true;
    m_ecrImageTags.emplace_back(std::forward<EcrImageTagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details of the Amazon ECR image hashes used to filter findings.</p>
   */
  inline const Aws::Vector<StringFilter>& GetEcrImageHash() const { return m_ecrImageHash; }
  inline bool EcrImageHashHasBeenSet() const { return m_ecrImageHashHasBeenSet; }
  template <typename EcrImageHashT = Aws::Vector<StringFilter>>
  void SetEcrImageHash(EcrImageHashT&& value) {
    m_ecrImageHashHasBeenSet = true;
    m_ecrImageHash = std::forward<EcrImageHashT>(value);
  }
  template <typename EcrImageHashT = Aws::Vector<StringFilter>>
  FilterCriteria& WithEcrImageHash(EcrImageHashT&& value) {
    SetEcrImageHash(std::forward<EcrImageHashT>(value));
    return *this;
  }
  template <typename EcrImageHashT = StringFilter>
  FilterCriteria& AddEcrImageHash(EcrImageHashT&& value) {
    m_ecrImageHashHasBeenSet = true;
    m_ecrImageHash.emplace_back(std::forward<EcrImageHashT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria indicating when an Amazon ECR image was last used in an
   * Amazon ECS cluster task or Amazon EKS cluster pod.</p>
   */
  inline const Aws::Vector<DateFilter>& GetEcrImageLastInUseAt() const { return m_ecrImageLastInUseAt; }
  inline bool EcrImageLastInUseAtHasBeenSet() const { return m_ecrImageLastInUseAtHasBeenSet; }
  template <typename EcrImageLastInUseAtT = Aws::Vector<DateFilter>>
  void SetEcrImageLastInUseAt(EcrImageLastInUseAtT&& value) {
    m_ecrImageLastInUseAtHasBeenSet = true;
    m_ecrImageLastInUseAt = std::forward<EcrImageLastInUseAtT>(value);
  }
  template <typename EcrImageLastInUseAtT = Aws::Vector<DateFilter>>
  FilterCriteria& WithEcrImageLastInUseAt(EcrImageLastInUseAtT&& value) {
    SetEcrImageLastInUseAt(std::forward<EcrImageLastInUseAtT>(value));
    return *this;
  }
  template <typename EcrImageLastInUseAtT = DateFilter>
  FilterCriteria& AddEcrImageLastInUseAt(EcrImageLastInUseAtT&& value) {
    m_ecrImageLastInUseAtHasBeenSet = true;
    m_ecrImageLastInUseAt.emplace_back(std::forward<EcrImageLastInUseAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria indicating when details for an Amazon ECR image include when
   * an Amazon ECR image is in use.</p>
   */
  inline const Aws::Vector<NumberFilter>& GetEcrImageInUseCount() const { return m_ecrImageInUseCount; }
  inline bool EcrImageInUseCountHasBeenSet() const { return m_ecrImageInUseCountHasBeenSet; }
  template <typename EcrImageInUseCountT = Aws::Vector<NumberFilter>>
  void SetEcrImageInUseCount(EcrImageInUseCountT&& value) {
    m_ecrImageInUseCountHasBeenSet = true;
    m_ecrImageInUseCount = std::forward<EcrImageInUseCountT>(value);
  }
  template <typename EcrImageInUseCountT = Aws::Vector<NumberFilter>>
  FilterCriteria& WithEcrImageInUseCount(EcrImageInUseCountT&& value) {
    SetEcrImageInUseCount(std::forward<EcrImageInUseCountT>(value));
    return *this;
  }
  template <typename EcrImageInUseCountT = NumberFilter>
  FilterCriteria& AddEcrImageInUseCount(EcrImageInUseCountT&& value) {
    m_ecrImageInUseCountHasBeenSet = true;
    m_ecrImageInUseCount.emplace_back(std::forward<EcrImageInUseCountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details on the port ranges used to filter findings.</p>
   */
  inline const Aws::Vector<PortRangeFilter>& GetPortRange() const { return m_portRange; }
  inline bool PortRangeHasBeenSet() const { return m_portRangeHasBeenSet; }
  template <typename PortRangeT = Aws::Vector<PortRangeFilter>>
  void SetPortRange(PortRangeT&& value) {
    m_portRangeHasBeenSet = true;
    m_portRange = std::forward<PortRangeT>(value);
  }
  template <typename PortRangeT = Aws::Vector<PortRangeFilter>>
  FilterCriteria& WithPortRange(PortRangeT&& value) {
    SetPortRange(std::forward<PortRangeT>(value));
    return *this;
  }
  template <typename PortRangeT = PortRangeFilter>
  FilterCriteria& AddPortRange(PortRangeT&& value) {
    m_portRangeHasBeenSet = true;
    m_portRange.emplace_back(std::forward<PortRangeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details on network protocol used to filter findings.</p>
   */
  inline const Aws::Vector<StringFilter>& GetNetworkProtocol() const { return m_networkProtocol; }
  inline bool NetworkProtocolHasBeenSet() const { return m_networkProtocolHasBeenSet; }
  template <typename NetworkProtocolT = Aws::Vector<StringFilter>>
  void SetNetworkProtocol(NetworkProtocolT&& value) {
    m_networkProtocolHasBeenSet = true;
    m_networkProtocol = std::forward<NetworkProtocolT>(value);
  }
  template <typename NetworkProtocolT = Aws::Vector<StringFilter>>
  FilterCriteria& WithNetworkProtocol(NetworkProtocolT&& value) {
    SetNetworkProtocol(std::forward<NetworkProtocolT>(value));
    return *this;
  }
  template <typename NetworkProtocolT = StringFilter>
  FilterCriteria& AddNetworkProtocol(NetworkProtocolT&& value) {
    m_networkProtocolHasBeenSet = true;
    m_networkProtocol.emplace_back(std::forward<NetworkProtocolT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details of the component IDs used to filter findings.</p>
   */
  inline const Aws::Vector<StringFilter>& GetComponentId() const { return m_componentId; }
  inline bool ComponentIdHasBeenSet() const { return m_componentIdHasBeenSet; }
  template <typename ComponentIdT = Aws::Vector<StringFilter>>
  void SetComponentId(ComponentIdT&& value) {
    m_componentIdHasBeenSet = true;
    m_componentId = std::forward<ComponentIdT>(value);
  }
  template <typename ComponentIdT = Aws::Vector<StringFilter>>
  FilterCriteria& WithComponentId(ComponentIdT&& value) {
    SetComponentId(std::forward<ComponentIdT>(value));
    return *this;
  }
  template <typename ComponentIdT = StringFilter>
  FilterCriteria& AddComponentId(ComponentIdT&& value) {
    m_componentIdHasBeenSet = true;
    m_componentId.emplace_back(std::forward<ComponentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details of the component types used to filter findings.</p>
   */
  inline const Aws::Vector<StringFilter>& GetComponentType() const { return m_componentType; }
  inline bool ComponentTypeHasBeenSet() const { return m_componentTypeHasBeenSet; }
  template <typename ComponentTypeT = Aws::Vector<StringFilter>>
  void SetComponentType(ComponentTypeT&& value) {
    m_componentTypeHasBeenSet = true;
    m_componentType = std::forward<ComponentTypeT>(value);
  }
  template <typename ComponentTypeT = Aws::Vector<StringFilter>>
  FilterCriteria& WithComponentType(ComponentTypeT&& value) {
    SetComponentType(std::forward<ComponentTypeT>(value));
    return *this;
  }
  template <typename ComponentTypeT = StringFilter>
  FilterCriteria& AddComponentType(ComponentTypeT&& value) {
    m_componentTypeHasBeenSet = true;
    m_componentType.emplace_back(std::forward<ComponentTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details on the vulnerability ID used to filter findings.</p>
   */
  inline const Aws::Vector<StringFilter>& GetVulnerabilityId() const { return m_vulnerabilityId; }
  inline bool VulnerabilityIdHasBeenSet() const { return m_vulnerabilityIdHasBeenSet; }
  template <typename VulnerabilityIdT = Aws::Vector<StringFilter>>
  void SetVulnerabilityId(VulnerabilityIdT&& value) {
    m_vulnerabilityIdHasBeenSet = true;
    m_vulnerabilityId = std::forward<VulnerabilityIdT>(value);
  }
  template <typename VulnerabilityIdT = Aws::Vector<StringFilter>>
  FilterCriteria& WithVulnerabilityId(VulnerabilityIdT&& value) {
    SetVulnerabilityId(std::forward<VulnerabilityIdT>(value));
    return *this;
  }
  template <typename VulnerabilityIdT = StringFilter>
  FilterCriteria& AddVulnerabilityId(VulnerabilityIdT&& value) {
    m_vulnerabilityIdHasBeenSet = true;
    m_vulnerabilityId.emplace_back(std::forward<VulnerabilityIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details on the vulnerability type used to filter findings.</p>
   */
  inline const Aws::Vector<StringFilter>& GetVulnerabilitySource() const { return m_vulnerabilitySource; }
  inline bool VulnerabilitySourceHasBeenSet() const { return m_vulnerabilitySourceHasBeenSet; }
  template <typename VulnerabilitySourceT = Aws::Vector<StringFilter>>
  void SetVulnerabilitySource(VulnerabilitySourceT&& value) {
    m_vulnerabilitySourceHasBeenSet = true;
    m_vulnerabilitySource = std::forward<VulnerabilitySourceT>(value);
  }
  template <typename VulnerabilitySourceT = Aws::Vector<StringFilter>>
  FilterCriteria& WithVulnerabilitySource(VulnerabilitySourceT&& value) {
    SetVulnerabilitySource(std::forward<VulnerabilitySourceT>(value));
    return *this;
  }
  template <typename VulnerabilitySourceT = StringFilter>
  FilterCriteria& AddVulnerabilitySource(VulnerabilitySourceT&& value) {
    m_vulnerabilitySourceHasBeenSet = true;
    m_vulnerabilitySource.emplace_back(std::forward<VulnerabilitySourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details on the vendor severity used to filter findings.</p>
   */
  inline const Aws::Vector<StringFilter>& GetVendorSeverity() const { return m_vendorSeverity; }
  inline bool VendorSeverityHasBeenSet() const { return m_vendorSeverityHasBeenSet; }
  template <typename VendorSeverityT = Aws::Vector<StringFilter>>
  void SetVendorSeverity(VendorSeverityT&& value) {
    m_vendorSeverityHasBeenSet = true;
    m_vendorSeverity = std::forward<VendorSeverityT>(value);
  }
  template <typename VendorSeverityT = Aws::Vector<StringFilter>>
  FilterCriteria& WithVendorSeverity(VendorSeverityT&& value) {
    SetVendorSeverity(std::forward<VendorSeverityT>(value));
    return *this;
  }
  template <typename VendorSeverityT = StringFilter>
  FilterCriteria& AddVendorSeverity(VendorSeverityT&& value) {
    m_vendorSeverityHasBeenSet = true;
    m_vendorSeverity.emplace_back(std::forward<VendorSeverityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details on the vulnerable packages used to filter findings.</p>
   */
  inline const Aws::Vector<PackageFilter>& GetVulnerablePackages() const { return m_vulnerablePackages; }
  inline bool VulnerablePackagesHasBeenSet() const { return m_vulnerablePackagesHasBeenSet; }
  template <typename VulnerablePackagesT = Aws::Vector<PackageFilter>>
  void SetVulnerablePackages(VulnerablePackagesT&& value) {
    m_vulnerablePackagesHasBeenSet = true;
    m_vulnerablePackages = std::forward<VulnerablePackagesT>(value);
  }
  template <typename VulnerablePackagesT = Aws::Vector<PackageFilter>>
  FilterCriteria& WithVulnerablePackages(VulnerablePackagesT&& value) {
    SetVulnerablePackages(std::forward<VulnerablePackagesT>(value));
    return *this;
  }
  template <typename VulnerablePackagesT = PackageFilter>
  FilterCriteria& AddVulnerablePackages(VulnerablePackagesT&& value) {
    m_vulnerablePackagesHasBeenSet = true;
    m_vulnerablePackages.emplace_back(std::forward<VulnerablePackagesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details on the related vulnerabilities used to filter findings.</p>
   */
  inline const Aws::Vector<StringFilter>& GetRelatedVulnerabilities() const { return m_relatedVulnerabilities; }
  inline bool RelatedVulnerabilitiesHasBeenSet() const { return m_relatedVulnerabilitiesHasBeenSet; }
  template <typename RelatedVulnerabilitiesT = Aws::Vector<StringFilter>>
  void SetRelatedVulnerabilities(RelatedVulnerabilitiesT&& value) {
    m_relatedVulnerabilitiesHasBeenSet = true;
    m_relatedVulnerabilities = std::forward<RelatedVulnerabilitiesT>(value);
  }
  template <typename RelatedVulnerabilitiesT = Aws::Vector<StringFilter>>
  FilterCriteria& WithRelatedVulnerabilities(RelatedVulnerabilitiesT&& value) {
    SetRelatedVulnerabilities(std::forward<RelatedVulnerabilitiesT>(value));
    return *this;
  }
  template <typename RelatedVulnerabilitiesT = StringFilter>
  FilterCriteria& AddRelatedVulnerabilities(RelatedVulnerabilitiesT&& value) {
    m_relatedVulnerabilitiesHasBeenSet = true;
    m_relatedVulnerabilities.emplace_back(std::forward<RelatedVulnerabilitiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details on whether a fix is available through a version update. This value
   * can be <code>YES</code>, <code>NO</code>, or <code>PARTIAL</code>. A
   * <code>PARTIAL</code> fix means that some, but not all, of the packages
   * identified in the finding have fixes available through updated versions.</p>
   */
  inline const Aws::Vector<StringFilter>& GetFixAvailable() const { return m_fixAvailable; }
  inline bool FixAvailableHasBeenSet() const { return m_fixAvailableHasBeenSet; }
  template <typename FixAvailableT = Aws::Vector<StringFilter>>
  void SetFixAvailable(FixAvailableT&& value) {
    m_fixAvailableHasBeenSet = true;
    m_fixAvailable = std::forward<FixAvailableT>(value);
  }
  template <typename FixAvailableT = Aws::Vector<StringFilter>>
  FilterCriteria& WithFixAvailable(FixAvailableT&& value) {
    SetFixAvailable(std::forward<FixAvailableT>(value));
    return *this;
  }
  template <typename FixAvailableT = StringFilter>
  FilterCriteria& AddFixAvailable(FixAvailableT&& value) {
    m_fixAvailableHasBeenSet = true;
    m_fixAvailable.emplace_back(std::forward<FixAvailableT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the list of Amazon Web Services Lambda functions by the name of the
   * function.</p>
   */
  inline const Aws::Vector<StringFilter>& GetLambdaFunctionName() const { return m_lambdaFunctionName; }
  inline bool LambdaFunctionNameHasBeenSet() const { return m_lambdaFunctionNameHasBeenSet; }
  template <typename LambdaFunctionNameT = Aws::Vector<StringFilter>>
  void SetLambdaFunctionName(LambdaFunctionNameT&& value) {
    m_lambdaFunctionNameHasBeenSet = true;
    m_lambdaFunctionName = std::forward<LambdaFunctionNameT>(value);
  }
  template <typename LambdaFunctionNameT = Aws::Vector<StringFilter>>
  FilterCriteria& WithLambdaFunctionName(LambdaFunctionNameT&& value) {
    SetLambdaFunctionName(std::forward<LambdaFunctionNameT>(value));
    return *this;
  }
  template <typename LambdaFunctionNameT = StringFilter>
  FilterCriteria& AddLambdaFunctionName(LambdaFunctionNameT&& value) {
    m_lambdaFunctionNameHasBeenSet = true;
    m_lambdaFunctionName.emplace_back(std::forward<LambdaFunctionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the list of Amazon Web Services Lambda functions by the function's <a
   * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">
   * layers</a>. A Lambda function can have up to five layers.</p>
   */
  inline const Aws::Vector<StringFilter>& GetLambdaFunctionLayers() const { return m_lambdaFunctionLayers; }
  inline bool LambdaFunctionLayersHasBeenSet() const { return m_lambdaFunctionLayersHasBeenSet; }
  template <typename LambdaFunctionLayersT = Aws::Vector<StringFilter>>
  void SetLambdaFunctionLayers(LambdaFunctionLayersT&& value) {
    m_lambdaFunctionLayersHasBeenSet = true;
    m_lambdaFunctionLayers = std::forward<LambdaFunctionLayersT>(value);
  }
  template <typename LambdaFunctionLayersT = Aws::Vector<StringFilter>>
  FilterCriteria& WithLambdaFunctionLayers(LambdaFunctionLayersT&& value) {
    SetLambdaFunctionLayers(std::forward<LambdaFunctionLayersT>(value));
    return *this;
  }
  template <typename LambdaFunctionLayersT = StringFilter>
  FilterCriteria& AddLambdaFunctionLayers(LambdaFunctionLayersT&& value) {
    m_lambdaFunctionLayersHasBeenSet = true;
    m_lambdaFunctionLayers.emplace_back(std::forward<LambdaFunctionLayersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the list of Amazon Web Services Lambda functions by the runtime
   * environment for the Lambda function.</p>
   */
  inline const Aws::Vector<StringFilter>& GetLambdaFunctionRuntime() const { return m_lambdaFunctionRuntime; }
  inline bool LambdaFunctionRuntimeHasBeenSet() const { return m_lambdaFunctionRuntimeHasBeenSet; }
  template <typename LambdaFunctionRuntimeT = Aws::Vector<StringFilter>>
  void SetLambdaFunctionRuntime(LambdaFunctionRuntimeT&& value) {
    m_lambdaFunctionRuntimeHasBeenSet = true;
    m_lambdaFunctionRuntime = std::forward<LambdaFunctionRuntimeT>(value);
  }
  template <typename LambdaFunctionRuntimeT = Aws::Vector<StringFilter>>
  FilterCriteria& WithLambdaFunctionRuntime(LambdaFunctionRuntimeT&& value) {
    SetLambdaFunctionRuntime(std::forward<LambdaFunctionRuntimeT>(value));
    return *this;
  }
  template <typename LambdaFunctionRuntimeT = StringFilter>
  FilterCriteria& AddLambdaFunctionRuntime(LambdaFunctionRuntimeT&& value) {
    m_lambdaFunctionRuntimeHasBeenSet = true;
    m_lambdaFunctionRuntime.emplace_back(std::forward<LambdaFunctionRuntimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the list of Amazon Web Services Lambda functions by the date and time
   * that a user last updated the configuration, in <a
   * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601
   * format</a> </p>
   */
  inline const Aws::Vector<DateFilter>& GetLambdaFunctionLastModifiedAt() const { return m_lambdaFunctionLastModifiedAt; }
  inline bool LambdaFunctionLastModifiedAtHasBeenSet() const { return m_lambdaFunctionLastModifiedAtHasBeenSet; }
  template <typename LambdaFunctionLastModifiedAtT = Aws::Vector<DateFilter>>
  void SetLambdaFunctionLastModifiedAt(LambdaFunctionLastModifiedAtT&& value) {
    m_lambdaFunctionLastModifiedAtHasBeenSet = true;
    m_lambdaFunctionLastModifiedAt = std::forward<LambdaFunctionLastModifiedAtT>(value);
  }
  template <typename LambdaFunctionLastModifiedAtT = Aws::Vector<DateFilter>>
  FilterCriteria& WithLambdaFunctionLastModifiedAt(LambdaFunctionLastModifiedAtT&& value) {
    SetLambdaFunctionLastModifiedAt(std::forward<LambdaFunctionLastModifiedAtT>(value));
    return *this;
  }
  template <typename LambdaFunctionLastModifiedAtT = DateFilter>
  FilterCriteria& AddLambdaFunctionLastModifiedAt(LambdaFunctionLastModifiedAtT&& value) {
    m_lambdaFunctionLastModifiedAtHasBeenSet = true;
    m_lambdaFunctionLastModifiedAt.emplace_back(std::forward<LambdaFunctionLastModifiedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the list of Amazon Web Services Lambda functions by execution
   * role.</p>
   */
  inline const Aws::Vector<StringFilter>& GetLambdaFunctionExecutionRoleArn() const { return m_lambdaFunctionExecutionRoleArn; }
  inline bool LambdaFunctionExecutionRoleArnHasBeenSet() const { return m_lambdaFunctionExecutionRoleArnHasBeenSet; }
  template <typename LambdaFunctionExecutionRoleArnT = Aws::Vector<StringFilter>>
  void SetLambdaFunctionExecutionRoleArn(LambdaFunctionExecutionRoleArnT&& value) {
    m_lambdaFunctionExecutionRoleArnHasBeenSet = true;
    m_lambdaFunctionExecutionRoleArn = std::forward<LambdaFunctionExecutionRoleArnT>(value);
  }
  template <typename LambdaFunctionExecutionRoleArnT = Aws::Vector<StringFilter>>
  FilterCriteria& WithLambdaFunctionExecutionRoleArn(LambdaFunctionExecutionRoleArnT&& value) {
    SetLambdaFunctionExecutionRoleArn(std::forward<LambdaFunctionExecutionRoleArnT>(value));
    return *this;
  }
  template <typename LambdaFunctionExecutionRoleArnT = StringFilter>
  FilterCriteria& AddLambdaFunctionExecutionRoleArn(LambdaFunctionExecutionRoleArnT&& value) {
    m_lambdaFunctionExecutionRoleArnHasBeenSet = true;
    m_lambdaFunctionExecutionRoleArn.emplace_back(std::forward<LambdaFunctionExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the list of Amazon Web Services Lambda findings by the availability
   * of exploits.</p>
   */
  inline const Aws::Vector<StringFilter>& GetExploitAvailable() const { return m_exploitAvailable; }
  inline bool ExploitAvailableHasBeenSet() const { return m_exploitAvailableHasBeenSet; }
  template <typename ExploitAvailableT = Aws::Vector<StringFilter>>
  void SetExploitAvailable(ExploitAvailableT&& value) {
    m_exploitAvailableHasBeenSet = true;
    m_exploitAvailable = std::forward<ExploitAvailableT>(value);
  }
  template <typename ExploitAvailableT = Aws::Vector<StringFilter>>
  FilterCriteria& WithExploitAvailable(ExploitAvailableT&& value) {
    SetExploitAvailable(std::forward<ExploitAvailableT>(value));
    return *this;
  }
  template <typename ExploitAvailableT = StringFilter>
  FilterCriteria& AddExploitAvailable(ExploitAvailableT&& value) {
    m_exploitAvailableHasBeenSet = true;
    m_exploitAvailable.emplace_back(std::forward<ExploitAvailableT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the detector used to identify a code vulnerability in a Lambda
   * function used to filter findings.</p>
   */
  inline const Aws::Vector<StringFilter>& GetCodeVulnerabilityDetectorName() const { return m_codeVulnerabilityDetectorName; }
  inline bool CodeVulnerabilityDetectorNameHasBeenSet() const { return m_codeVulnerabilityDetectorNameHasBeenSet; }
  template <typename CodeVulnerabilityDetectorNameT = Aws::Vector<StringFilter>>
  void SetCodeVulnerabilityDetectorName(CodeVulnerabilityDetectorNameT&& value) {
    m_codeVulnerabilityDetectorNameHasBeenSet = true;
    m_codeVulnerabilityDetectorName = std::forward<CodeVulnerabilityDetectorNameT>(value);
  }
  template <typename CodeVulnerabilityDetectorNameT = Aws::Vector<StringFilter>>
  FilterCriteria& WithCodeVulnerabilityDetectorName(CodeVulnerabilityDetectorNameT&& value) {
    SetCodeVulnerabilityDetectorName(std::forward<CodeVulnerabilityDetectorNameT>(value));
    return *this;
  }
  template <typename CodeVulnerabilityDetectorNameT = StringFilter>
  FilterCriteria& AddCodeVulnerabilityDetectorName(CodeVulnerabilityDetectorNameT&& value) {
    m_codeVulnerabilityDetectorNameHasBeenSet = true;
    m_codeVulnerabilityDetectorName.emplace_back(std::forward<CodeVulnerabilityDetectorNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The detector type tag associated with the vulnerability used to filter
   * findings. Detector tags group related vulnerabilities by common themes or
   * tactics. For a list of available tags by programming language, see <a
   * href="https://docs.aws.amazon.com/codeguru/detector-library/java/tags/">Java
   * tags</a>, or <a
   * href="https://docs.aws.amazon.com/codeguru/detector-library/python/tags/">Python
   * tags</a>. </p>
   */
  inline const Aws::Vector<StringFilter>& GetCodeVulnerabilityDetectorTags() const { return m_codeVulnerabilityDetectorTags; }
  inline bool CodeVulnerabilityDetectorTagsHasBeenSet() const { return m_codeVulnerabilityDetectorTagsHasBeenSet; }
  template <typename CodeVulnerabilityDetectorTagsT = Aws::Vector<StringFilter>>
  void SetCodeVulnerabilityDetectorTags(CodeVulnerabilityDetectorTagsT&& value) {
    m_codeVulnerabilityDetectorTagsHasBeenSet = true;
    m_codeVulnerabilityDetectorTags = std::forward<CodeVulnerabilityDetectorTagsT>(value);
  }
  template <typename CodeVulnerabilityDetectorTagsT = Aws::Vector<StringFilter>>
  FilterCriteria& WithCodeVulnerabilityDetectorTags(CodeVulnerabilityDetectorTagsT&& value) {
    SetCodeVulnerabilityDetectorTags(std::forward<CodeVulnerabilityDetectorTagsT>(value));
    return *this;
  }
  template <typename CodeVulnerabilityDetectorTagsT = StringFilter>
  FilterCriteria& AddCodeVulnerabilityDetectorTags(CodeVulnerabilityDetectorTagsT&& value) {
    m_codeVulnerabilityDetectorTagsHasBeenSet = true;
    m_codeVulnerabilityDetectorTags.emplace_back(std::forward<CodeVulnerabilityDetectorTagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The file path to the file in a Lambda function that contains a code
   * vulnerability used to filter findings.</p>
   */
  inline const Aws::Vector<StringFilter>& GetCodeVulnerabilityFilePath() const { return m_codeVulnerabilityFilePath; }
  inline bool CodeVulnerabilityFilePathHasBeenSet() const { return m_codeVulnerabilityFilePathHasBeenSet; }
  template <typename CodeVulnerabilityFilePathT = Aws::Vector<StringFilter>>
  void SetCodeVulnerabilityFilePath(CodeVulnerabilityFilePathT&& value) {
    m_codeVulnerabilityFilePathHasBeenSet = true;
    m_codeVulnerabilityFilePath = std::forward<CodeVulnerabilityFilePathT>(value);
  }
  template <typename CodeVulnerabilityFilePathT = Aws::Vector<StringFilter>>
  FilterCriteria& WithCodeVulnerabilityFilePath(CodeVulnerabilityFilePathT&& value) {
    SetCodeVulnerabilityFilePath(std::forward<CodeVulnerabilityFilePathT>(value));
    return *this;
  }
  template <typename CodeVulnerabilityFilePathT = StringFilter>
  FilterCriteria& AddCodeVulnerabilityFilePath(CodeVulnerabilityFilePathT&& value) {
    m_codeVulnerabilityFilePathHasBeenSet = true;
    m_codeVulnerabilityFilePath.emplace_back(std::forward<CodeVulnerabilityFilePathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The EPSS score used to filter findings.</p>
   */
  inline const Aws::Vector<NumberFilter>& GetEpssScore() const { return m_epssScore; }
  inline bool EpssScoreHasBeenSet() const { return m_epssScoreHasBeenSet; }
  template <typename EpssScoreT = Aws::Vector<NumberFilter>>
  void SetEpssScore(EpssScoreT&& value) {
    m_epssScoreHasBeenSet = true;
    m_epssScore = std::forward<EpssScoreT>(value);
  }
  template <typename EpssScoreT = Aws::Vector<NumberFilter>>
  FilterCriteria& WithEpssScore(EpssScoreT&& value) {
    SetEpssScore(std::forward<EpssScoreT>(value));
    return *this;
  }
  template <typename EpssScoreT = NumberFilter>
  FilterCriteria& AddEpssScore(EpssScoreT&& value) {
    m_epssScoreHasBeenSet = true;
    m_epssScore.emplace_back(std::forward<EpssScoreT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for findings based on the project name in a code
   * repository.</p>
   */
  inline const Aws::Vector<StringFilter>& GetCodeRepositoryProjectName() const { return m_codeRepositoryProjectName; }
  inline bool CodeRepositoryProjectNameHasBeenSet() const { return m_codeRepositoryProjectNameHasBeenSet; }
  template <typename CodeRepositoryProjectNameT = Aws::Vector<StringFilter>>
  void SetCodeRepositoryProjectName(CodeRepositoryProjectNameT&& value) {
    m_codeRepositoryProjectNameHasBeenSet = true;
    m_codeRepositoryProjectName = std::forward<CodeRepositoryProjectNameT>(value);
  }
  template <typename CodeRepositoryProjectNameT = Aws::Vector<StringFilter>>
  FilterCriteria& WithCodeRepositoryProjectName(CodeRepositoryProjectNameT&& value) {
    SetCodeRepositoryProjectName(std::forward<CodeRepositoryProjectNameT>(value));
    return *this;
  }
  template <typename CodeRepositoryProjectNameT = StringFilter>
  FilterCriteria& AddCodeRepositoryProjectName(CodeRepositoryProjectNameT&& value) {
    m_codeRepositoryProjectNameHasBeenSet = true;
    m_codeRepositoryProjectName.emplace_back(std::forward<CodeRepositoryProjectNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for findings based on the repository provider type (such as
   * GitHub, GitLab, etc.).</p>
   */
  inline const Aws::Vector<StringFilter>& GetCodeRepositoryProviderType() const { return m_codeRepositoryProviderType; }
  inline bool CodeRepositoryProviderTypeHasBeenSet() const { return m_codeRepositoryProviderTypeHasBeenSet; }
  template <typename CodeRepositoryProviderTypeT = Aws::Vector<StringFilter>>
  void SetCodeRepositoryProviderType(CodeRepositoryProviderTypeT&& value) {
    m_codeRepositoryProviderTypeHasBeenSet = true;
    m_codeRepositoryProviderType = std::forward<CodeRepositoryProviderTypeT>(value);
  }
  template <typename CodeRepositoryProviderTypeT = Aws::Vector<StringFilter>>
  FilterCriteria& WithCodeRepositoryProviderType(CodeRepositoryProviderTypeT&& value) {
    SetCodeRepositoryProviderType(std::forward<CodeRepositoryProviderTypeT>(value));
    return *this;
  }
  template <typename CodeRepositoryProviderTypeT = StringFilter>
  FilterCriteria& AddCodeRepositoryProviderType(CodeRepositoryProviderTypeT&& value) {
    m_codeRepositoryProviderTypeHasBeenSet = true;
    m_codeRepositoryProviderType.emplace_back(std::forward<CodeRepositoryProviderTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for the cloud provider.</p>
   */
  inline const Aws::Vector<StringFilter>& GetCloudProvider() const { return m_cloudProvider; }
  inline bool CloudProviderHasBeenSet() const { return m_cloudProviderHasBeenSet; }
  template <typename CloudProviderT = Aws::Vector<StringFilter>>
  void SetCloudProvider(CloudProviderT&& value) {
    m_cloudProviderHasBeenSet = true;
    m_cloudProvider = std::forward<CloudProviderT>(value);
  }
  template <typename CloudProviderT = Aws::Vector<StringFilter>>
  FilterCriteria& WithCloudProvider(CloudProviderT&& value) {
    SetCloudProvider(std::forward<CloudProviderT>(value));
    return *this;
  }
  template <typename CloudProviderT = StringFilter>
  FilterCriteria& AddCloudProvider(CloudProviderT&& value) {
    m_cloudProviderHasBeenSet = true;
    m_cloudProvider.emplace_back(std::forward<CloudProviderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for the cloud provider region.</p>
   */
  inline const Aws::Vector<StringFilter>& GetCloudProviderRegion() const { return m_cloudProviderRegion; }
  inline bool CloudProviderRegionHasBeenSet() const { return m_cloudProviderRegionHasBeenSet; }
  template <typename CloudProviderRegionT = Aws::Vector<StringFilter>>
  void SetCloudProviderRegion(CloudProviderRegionT&& value) {
    m_cloudProviderRegionHasBeenSet = true;
    m_cloudProviderRegion = std::forward<CloudProviderRegionT>(value);
  }
  template <typename CloudProviderRegionT = Aws::Vector<StringFilter>>
  FilterCriteria& WithCloudProviderRegion(CloudProviderRegionT&& value) {
    SetCloudProviderRegion(std::forward<CloudProviderRegionT>(value));
    return *this;
  }
  template <typename CloudProviderRegionT = StringFilter>
  FilterCriteria& AddCloudProviderRegion(CloudProviderRegionT&& value) {
    m_cloudProviderRegionHasBeenSet = true;
    m_cloudProviderRegion.emplace_back(std::forward<CloudProviderRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for the cloud provider account ID.</p>
   */
  inline const Aws::Vector<StringFilter>& GetCloudProviderAccountId() const { return m_cloudProviderAccountId; }
  inline bool CloudProviderAccountIdHasBeenSet() const { return m_cloudProviderAccountIdHasBeenSet; }
  template <typename CloudProviderAccountIdT = Aws::Vector<StringFilter>>
  void SetCloudProviderAccountId(CloudProviderAccountIdT&& value) {
    m_cloudProviderAccountIdHasBeenSet = true;
    m_cloudProviderAccountId = std::forward<CloudProviderAccountIdT>(value);
  }
  template <typename CloudProviderAccountIdT = Aws::Vector<StringFilter>>
  FilterCriteria& WithCloudProviderAccountId(CloudProviderAccountIdT&& value) {
    SetCloudProviderAccountId(std::forward<CloudProviderAccountIdT>(value));
    return *this;
  }
  template <typename CloudProviderAccountIdT = StringFilter>
  FilterCriteria& AddCloudProviderAccountId(CloudProviderAccountIdT&& value) {
    m_cloudProviderAccountIdHasBeenSet = true;
    m_cloudProviderAccountId.emplace_back(std::forward<CloudProviderAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for the cloud provider organization ID.</p>
   */
  inline const Aws::Vector<StringFilter>& GetCloudProviderOrgId() const { return m_cloudProviderOrgId; }
  inline bool CloudProviderOrgIdHasBeenSet() const { return m_cloudProviderOrgIdHasBeenSet; }
  template <typename CloudProviderOrgIdT = Aws::Vector<StringFilter>>
  void SetCloudProviderOrgId(CloudProviderOrgIdT&& value) {
    m_cloudProviderOrgIdHasBeenSet = true;
    m_cloudProviderOrgId = std::forward<CloudProviderOrgIdT>(value);
  }
  template <typename CloudProviderOrgIdT = Aws::Vector<StringFilter>>
  FilterCriteria& WithCloudProviderOrgId(CloudProviderOrgIdT&& value) {
    SetCloudProviderOrgId(std::forward<CloudProviderOrgIdT>(value));
    return *this;
  }
  template <typename CloudProviderOrgIdT = StringFilter>
  FilterCriteria& AddCloudProviderOrgId(CloudProviderOrgIdT&& value) {
    m_cloudProviderOrgIdHasBeenSet = true;
    m_cloudProviderOrgId.emplace_back(std::forward<CloudProviderOrgIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for the image reference of a VM instance.</p>
   */
  inline const Aws::Vector<StringFilter>& GetCloudVmImageReference() const { return m_cloudVmImageReference; }
  inline bool CloudVmImageReferenceHasBeenSet() const { return m_cloudVmImageReferenceHasBeenSet; }
  template <typename CloudVmImageReferenceT = Aws::Vector<StringFilter>>
  void SetCloudVmImageReference(CloudVmImageReferenceT&& value) {
    m_cloudVmImageReferenceHasBeenSet = true;
    m_cloudVmImageReference = std::forward<CloudVmImageReferenceT>(value);
  }
  template <typename CloudVmImageReferenceT = Aws::Vector<StringFilter>>
  FilterCriteria& WithCloudVmImageReference(CloudVmImageReferenceT&& value) {
    SetCloudVmImageReference(std::forward<CloudVmImageReferenceT>(value));
    return *this;
  }
  template <typename CloudVmImageReferenceT = StringFilter>
  FilterCriteria& AddCloudVmImageReference(CloudVmImageReferenceT&& value) {
    m_cloudVmImageReferenceHasBeenSet = true;
    m_cloudVmImageReference.emplace_back(std::forward<CloudVmImageReferenceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for the network ID of a VM instance.</p>
   */
  inline const Aws::Vector<StringFilter>& GetCloudVmNetworkId() const { return m_cloudVmNetworkId; }
  inline bool CloudVmNetworkIdHasBeenSet() const { return m_cloudVmNetworkIdHasBeenSet; }
  template <typename CloudVmNetworkIdT = Aws::Vector<StringFilter>>
  void SetCloudVmNetworkId(CloudVmNetworkIdT&& value) {
    m_cloudVmNetworkIdHasBeenSet = true;
    m_cloudVmNetworkId = std::forward<CloudVmNetworkIdT>(value);
  }
  template <typename CloudVmNetworkIdT = Aws::Vector<StringFilter>>
  FilterCriteria& WithCloudVmNetworkId(CloudVmNetworkIdT&& value) {
    SetCloudVmNetworkId(std::forward<CloudVmNetworkIdT>(value));
    return *this;
  }
  template <typename CloudVmNetworkIdT = StringFilter>
  FilterCriteria& AddCloudVmNetworkId(CloudVmNetworkIdT&& value) {
    m_cloudVmNetworkIdHasBeenSet = true;
    m_cloudVmNetworkId.emplace_back(std::forward<CloudVmNetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for the subnet IDs of a VM instance.</p>
   */
  inline const Aws::Vector<StringFilter>& GetCloudVmSubnetIds() const { return m_cloudVmSubnetIds; }
  inline bool CloudVmSubnetIdsHasBeenSet() const { return m_cloudVmSubnetIdsHasBeenSet; }
  template <typename CloudVmSubnetIdsT = Aws::Vector<StringFilter>>
  void SetCloudVmSubnetIds(CloudVmSubnetIdsT&& value) {
    m_cloudVmSubnetIdsHasBeenSet = true;
    m_cloudVmSubnetIds = std::forward<CloudVmSubnetIdsT>(value);
  }
  template <typename CloudVmSubnetIdsT = Aws::Vector<StringFilter>>
  FilterCriteria& WithCloudVmSubnetIds(CloudVmSubnetIdsT&& value) {
    SetCloudVmSubnetIds(std::forward<CloudVmSubnetIdsT>(value));
    return *this;
  }
  template <typename CloudVmSubnetIdsT = StringFilter>
  FilterCriteria& AddCloudVmSubnetIds(CloudVmSubnetIdsT&& value) {
    m_cloudVmSubnetIdsHasBeenSet = true;
    m_cloudVmSubnetIds.emplace_back(std::forward<CloudVmSubnetIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for the repository name of a container image.</p>
   */
  inline const Aws::Vector<StringFilter>& GetCloudImageRepositoryName() const { return m_cloudImageRepositoryName; }
  inline bool CloudImageRepositoryNameHasBeenSet() const { return m_cloudImageRepositoryNameHasBeenSet; }
  template <typename CloudImageRepositoryNameT = Aws::Vector<StringFilter>>
  void SetCloudImageRepositoryName(CloudImageRepositoryNameT&& value) {
    m_cloudImageRepositoryNameHasBeenSet = true;
    m_cloudImageRepositoryName = std::forward<CloudImageRepositoryNameT>(value);
  }
  template <typename CloudImageRepositoryNameT = Aws::Vector<StringFilter>>
  FilterCriteria& WithCloudImageRepositoryName(CloudImageRepositoryNameT&& value) {
    SetCloudImageRepositoryName(std::forward<CloudImageRepositoryNameT>(value));
    return *this;
  }
  template <typename CloudImageRepositoryNameT = StringFilter>
  FilterCriteria& AddCloudImageRepositoryName(CloudImageRepositoryNameT&& value) {
    m_cloudImageRepositoryNameHasBeenSet = true;
    m_cloudImageRepositoryName.emplace_back(std::forward<CloudImageRepositoryNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for the registry of a container image.</p>
   */
  inline const Aws::Vector<StringFilter>& GetCloudImageRegistry() const { return m_cloudImageRegistry; }
  inline bool CloudImageRegistryHasBeenSet() const { return m_cloudImageRegistryHasBeenSet; }
  template <typename CloudImageRegistryT = Aws::Vector<StringFilter>>
  void SetCloudImageRegistry(CloudImageRegistryT&& value) {
    m_cloudImageRegistryHasBeenSet = true;
    m_cloudImageRegistry = std::forward<CloudImageRegistryT>(value);
  }
  template <typename CloudImageRegistryT = Aws::Vector<StringFilter>>
  FilterCriteria& WithCloudImageRegistry(CloudImageRegistryT&& value) {
    SetCloudImageRegistry(std::forward<CloudImageRegistryT>(value));
    return *this;
  }
  template <typename CloudImageRegistryT = StringFilter>
  FilterCriteria& AddCloudImageRegistry(CloudImageRegistryT&& value) {
    m_cloudImageRegistryHasBeenSet = true;
    m_cloudImageRegistry.emplace_back(std::forward<CloudImageRegistryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for the digest of a container image.</p>
   */
  inline const Aws::Vector<StringFilter>& GetCloudImageDigest() const { return m_cloudImageDigest; }
  inline bool CloudImageDigestHasBeenSet() const { return m_cloudImageDigestHasBeenSet; }
  template <typename CloudImageDigestT = Aws::Vector<StringFilter>>
  void SetCloudImageDigest(CloudImageDigestT&& value) {
    m_cloudImageDigestHasBeenSet = true;
    m_cloudImageDigest = std::forward<CloudImageDigestT>(value);
  }
  template <typename CloudImageDigestT = Aws::Vector<StringFilter>>
  FilterCriteria& WithCloudImageDigest(CloudImageDigestT&& value) {
    SetCloudImageDigest(std::forward<CloudImageDigestT>(value));
    return *this;
  }
  template <typename CloudImageDigestT = StringFilter>
  FilterCriteria& AddCloudImageDigest(CloudImageDigestT&& value) {
    m_cloudImageDigestHasBeenSet = true;
    m_cloudImageDigest.emplace_back(std::forward<CloudImageDigestT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for the tags of a container image.</p>
   */
  inline const Aws::Vector<StringFilter>& GetCloudImageTags() const { return m_cloudImageTags; }
  inline bool CloudImageTagsHasBeenSet() const { return m_cloudImageTagsHasBeenSet; }
  template <typename CloudImageTagsT = Aws::Vector<StringFilter>>
  void SetCloudImageTags(CloudImageTagsT&& value) {
    m_cloudImageTagsHasBeenSet = true;
    m_cloudImageTags = std::forward<CloudImageTagsT>(value);
  }
  template <typename CloudImageTagsT = Aws::Vector<StringFilter>>
  FilterCriteria& WithCloudImageTags(CloudImageTagsT&& value) {
    SetCloudImageTags(std::forward<CloudImageTagsT>(value));
    return *this;
  }
  template <typename CloudImageTagsT = StringFilter>
  FilterCriteria& AddCloudImageTags(CloudImageTagsT&& value) {
    m_cloudImageTagsHasBeenSet = true;
    m_cloudImageTags.emplace_back(std::forward<CloudImageTagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for when a container image was pushed.</p>
   */
  inline const Aws::Vector<DateFilter>& GetCloudImagePushedAt() const { return m_cloudImagePushedAt; }
  inline bool CloudImagePushedAtHasBeenSet() const { return m_cloudImagePushedAtHasBeenSet; }
  template <typename CloudImagePushedAtT = Aws::Vector<DateFilter>>
  void SetCloudImagePushedAt(CloudImagePushedAtT&& value) {
    m_cloudImagePushedAtHasBeenSet = true;
    m_cloudImagePushedAt = std::forward<CloudImagePushedAtT>(value);
  }
  template <typename CloudImagePushedAtT = Aws::Vector<DateFilter>>
  FilterCriteria& WithCloudImagePushedAt(CloudImagePushedAtT&& value) {
    SetCloudImagePushedAt(std::forward<CloudImagePushedAtT>(value));
    return *this;
  }
  template <typename CloudImagePushedAtT = DateFilter>
  FilterCriteria& AddCloudImagePushedAt(CloudImagePushedAtT&& value) {
    m_cloudImagePushedAtHasBeenSet = true;
    m_cloudImagePushedAt.emplace_back(std::forward<CloudImagePushedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for the architecture of a container image.</p>
   */
  inline const Aws::Vector<StringFilter>& GetCloudImageArchitecture() const { return m_cloudImageArchitecture; }
  inline bool CloudImageArchitectureHasBeenSet() const { return m_cloudImageArchitectureHasBeenSet; }
  template <typename CloudImageArchitectureT = Aws::Vector<StringFilter>>
  void SetCloudImageArchitecture(CloudImageArchitectureT&& value) {
    m_cloudImageArchitectureHasBeenSet = true;
    m_cloudImageArchitecture = std::forward<CloudImageArchitectureT>(value);
  }
  template <typename CloudImageArchitectureT = Aws::Vector<StringFilter>>
  FilterCriteria& WithCloudImageArchitecture(CloudImageArchitectureT&& value) {
    SetCloudImageArchitecture(std::forward<CloudImageArchitectureT>(value));
    return *this;
  }
  template <typename CloudImageArchitectureT = StringFilter>
  FilterCriteria& AddCloudImageArchitecture(CloudImageArchitectureT&& value) {
    m_cloudImageArchitectureHasBeenSet = true;
    m_cloudImageArchitecture.emplace_back(std::forward<CloudImageArchitectureT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for the last time a container image was in use.</p>
   */
  inline const Aws::Vector<DateFilter>& GetCloudImageLastInUseAt() const { return m_cloudImageLastInUseAt; }
  inline bool CloudImageLastInUseAtHasBeenSet() const { return m_cloudImageLastInUseAtHasBeenSet; }
  template <typename CloudImageLastInUseAtT = Aws::Vector<DateFilter>>
  void SetCloudImageLastInUseAt(CloudImageLastInUseAtT&& value) {
    m_cloudImageLastInUseAtHasBeenSet = true;
    m_cloudImageLastInUseAt = std::forward<CloudImageLastInUseAtT>(value);
  }
  template <typename CloudImageLastInUseAtT = Aws::Vector<DateFilter>>
  FilterCriteria& WithCloudImageLastInUseAt(CloudImageLastInUseAtT&& value) {
    SetCloudImageLastInUseAt(std::forward<CloudImageLastInUseAtT>(value));
    return *this;
  }
  template <typename CloudImageLastInUseAtT = DateFilter>
  FilterCriteria& AddCloudImageLastInUseAt(CloudImageLastInUseAtT&& value) {
    m_cloudImageLastInUseAtHasBeenSet = true;
    m_cloudImageLastInUseAt.emplace_back(std::forward<CloudImageLastInUseAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for the in-use count of a container image.</p>
   */
  inline const Aws::Vector<NumberFilter>& GetCloudImageInUseCount() const { return m_cloudImageInUseCount; }
  inline bool CloudImageInUseCountHasBeenSet() const { return m_cloudImageInUseCountHasBeenSet; }
  template <typename CloudImageInUseCountT = Aws::Vector<NumberFilter>>
  void SetCloudImageInUseCount(CloudImageInUseCountT&& value) {
    m_cloudImageInUseCountHasBeenSet = true;
    m_cloudImageInUseCount = std::forward<CloudImageInUseCountT>(value);
  }
  template <typename CloudImageInUseCountT = Aws::Vector<NumberFilter>>
  FilterCriteria& WithCloudImageInUseCount(CloudImageInUseCountT&& value) {
    SetCloudImageInUseCount(std::forward<CloudImageInUseCountT>(value));
    return *this;
  }
  template <typename CloudImageInUseCountT = NumberFilter>
  FilterCriteria& AddCloudImageInUseCount(CloudImageInUseCountT&& value) {
    m_cloudImageInUseCountHasBeenSet = true;
    m_cloudImageInUseCount.emplace_back(std::forward<CloudImageInUseCountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for the name of a serverless function.</p>
   */
  inline const Aws::Vector<StringFilter>& GetCloudServerlessFunctionName() const { return m_cloudServerlessFunctionName; }
  inline bool CloudServerlessFunctionNameHasBeenSet() const { return m_cloudServerlessFunctionNameHasBeenSet; }
  template <typename CloudServerlessFunctionNameT = Aws::Vector<StringFilter>>
  void SetCloudServerlessFunctionName(CloudServerlessFunctionNameT&& value) {
    m_cloudServerlessFunctionNameHasBeenSet = true;
    m_cloudServerlessFunctionName = std::forward<CloudServerlessFunctionNameT>(value);
  }
  template <typename CloudServerlessFunctionNameT = Aws::Vector<StringFilter>>
  FilterCriteria& WithCloudServerlessFunctionName(CloudServerlessFunctionNameT&& value) {
    SetCloudServerlessFunctionName(std::forward<CloudServerlessFunctionNameT>(value));
    return *this;
  }
  template <typename CloudServerlessFunctionNameT = StringFilter>
  FilterCriteria& AddCloudServerlessFunctionName(CloudServerlessFunctionNameT&& value) {
    m_cloudServerlessFunctionNameHasBeenSet = true;
    m_cloudServerlessFunctionName.emplace_back(std::forward<CloudServerlessFunctionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for the runtime of a serverless function.</p>
   */
  inline const Aws::Vector<StringFilter>& GetCloudServerlessFunctionRuntime() const { return m_cloudServerlessFunctionRuntime; }
  inline bool CloudServerlessFunctionRuntimeHasBeenSet() const { return m_cloudServerlessFunctionRuntimeHasBeenSet; }
  template <typename CloudServerlessFunctionRuntimeT = Aws::Vector<StringFilter>>
  void SetCloudServerlessFunctionRuntime(CloudServerlessFunctionRuntimeT&& value) {
    m_cloudServerlessFunctionRuntimeHasBeenSet = true;
    m_cloudServerlessFunctionRuntime = std::forward<CloudServerlessFunctionRuntimeT>(value);
  }
  template <typename CloudServerlessFunctionRuntimeT = Aws::Vector<StringFilter>>
  FilterCriteria& WithCloudServerlessFunctionRuntime(CloudServerlessFunctionRuntimeT&& value) {
    SetCloudServerlessFunctionRuntime(std::forward<CloudServerlessFunctionRuntimeT>(value));
    return *this;
  }
  template <typename CloudServerlessFunctionRuntimeT = StringFilter>
  FilterCriteria& AddCloudServerlessFunctionRuntime(CloudServerlessFunctionRuntimeT&& value) {
    m_cloudServerlessFunctionRuntimeHasBeenSet = true;
    m_cloudServerlessFunctionRuntime.emplace_back(std::forward<CloudServerlessFunctionRuntimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for when a serverless function was last modified.</p>
   */
  inline const Aws::Vector<DateFilter>& GetCloudServerlessFunctionLastModifiedAt() const { return m_cloudServerlessFunctionLastModifiedAt; }
  inline bool CloudServerlessFunctionLastModifiedAtHasBeenSet() const { return m_cloudServerlessFunctionLastModifiedAtHasBeenSet; }
  template <typename CloudServerlessFunctionLastModifiedAtT = Aws::Vector<DateFilter>>
  void SetCloudServerlessFunctionLastModifiedAt(CloudServerlessFunctionLastModifiedAtT&& value) {
    m_cloudServerlessFunctionLastModifiedAtHasBeenSet = true;
    m_cloudServerlessFunctionLastModifiedAt = std::forward<CloudServerlessFunctionLastModifiedAtT>(value);
  }
  template <typename CloudServerlessFunctionLastModifiedAtT = Aws::Vector<DateFilter>>
  FilterCriteria& WithCloudServerlessFunctionLastModifiedAt(CloudServerlessFunctionLastModifiedAtT&& value) {
    SetCloudServerlessFunctionLastModifiedAt(std::forward<CloudServerlessFunctionLastModifiedAtT>(value));
    return *this;
  }
  template <typename CloudServerlessFunctionLastModifiedAtT = DateFilter>
  FilterCriteria& AddCloudServerlessFunctionLastModifiedAt(CloudServerlessFunctionLastModifiedAtT&& value) {
    m_cloudServerlessFunctionLastModifiedAtHasBeenSet = true;
    m_cloudServerlessFunctionLastModifiedAt.emplace_back(std::forward<CloudServerlessFunctionLastModifiedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for the execution role of a serverless function.</p>
   */
  inline const Aws::Vector<StringFilter>& GetCloudServerlessFunctionExecutionRole() const { return m_cloudServerlessFunctionExecutionRole; }
  inline bool CloudServerlessFunctionExecutionRoleHasBeenSet() const { return m_cloudServerlessFunctionExecutionRoleHasBeenSet; }
  template <typename CloudServerlessFunctionExecutionRoleT = Aws::Vector<StringFilter>>
  void SetCloudServerlessFunctionExecutionRole(CloudServerlessFunctionExecutionRoleT&& value) {
    m_cloudServerlessFunctionExecutionRoleHasBeenSet = true;
    m_cloudServerlessFunctionExecutionRole = std::forward<CloudServerlessFunctionExecutionRoleT>(value);
  }
  template <typename CloudServerlessFunctionExecutionRoleT = Aws::Vector<StringFilter>>
  FilterCriteria& WithCloudServerlessFunctionExecutionRole(CloudServerlessFunctionExecutionRoleT&& value) {
    SetCloudServerlessFunctionExecutionRole(std::forward<CloudServerlessFunctionExecutionRoleT>(value));
    return *this;
  }
  template <typename CloudServerlessFunctionExecutionRoleT = StringFilter>
  FilterCriteria& AddCloudServerlessFunctionExecutionRole(CloudServerlessFunctionExecutionRoleT&& value) {
    m_cloudServerlessFunctionExecutionRoleHasBeenSet = true;
    m_cloudServerlessFunctionExecutionRole.emplace_back(std::forward<CloudServerlessFunctionExecutionRoleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<StringFilter> m_findingArn;

  Aws::Vector<StringFilter> m_awsAccountId;

  Aws::Vector<StringFilter> m_findingType;

  Aws::Vector<StringFilter> m_severity;

  Aws::Vector<DateFilter> m_firstObservedAt;

  Aws::Vector<DateFilter> m_lastObservedAt;

  Aws::Vector<DateFilter> m_updatedAt;

  Aws::Vector<StringFilter> m_findingStatus;

  Aws::Vector<StringFilter> m_title;

  Aws::Vector<NumberFilter> m_inspectorScore;

  Aws::Vector<StringFilter> m_resourceType;

  Aws::Vector<StringFilter> m_resourceId;

  Aws::Vector<MapFilter> m_resourceTags;

  Aws::Vector<StringFilter> m_ec2InstanceImageId;

  Aws::Vector<StringFilter> m_ec2InstanceVpcId;

  Aws::Vector<StringFilter> m_ec2InstanceSubnetId;

  Aws::Vector<DateFilter> m_ecrImagePushedAt;

  Aws::Vector<StringFilter> m_ecrImageArchitecture;

  Aws::Vector<StringFilter> m_ecrImageRegistry;

  Aws::Vector<StringFilter> m_ecrImageRepositoryName;

  Aws::Vector<StringFilter> m_ecrImageTags;

  Aws::Vector<StringFilter> m_ecrImageHash;

  Aws::Vector<DateFilter> m_ecrImageLastInUseAt;

  Aws::Vector<NumberFilter> m_ecrImageInUseCount;

  Aws::Vector<PortRangeFilter> m_portRange;

  Aws::Vector<StringFilter> m_networkProtocol;

  Aws::Vector<StringFilter> m_componentId;

  Aws::Vector<StringFilter> m_componentType;

  Aws::Vector<StringFilter> m_vulnerabilityId;

  Aws::Vector<StringFilter> m_vulnerabilitySource;

  Aws::Vector<StringFilter> m_vendorSeverity;

  Aws::Vector<PackageFilter> m_vulnerablePackages;

  Aws::Vector<StringFilter> m_relatedVulnerabilities;

  Aws::Vector<StringFilter> m_fixAvailable;

  Aws::Vector<StringFilter> m_lambdaFunctionName;

  Aws::Vector<StringFilter> m_lambdaFunctionLayers;

  Aws::Vector<StringFilter> m_lambdaFunctionRuntime;

  Aws::Vector<DateFilter> m_lambdaFunctionLastModifiedAt;

  Aws::Vector<StringFilter> m_lambdaFunctionExecutionRoleArn;

  Aws::Vector<StringFilter> m_exploitAvailable;

  Aws::Vector<StringFilter> m_codeVulnerabilityDetectorName;

  Aws::Vector<StringFilter> m_codeVulnerabilityDetectorTags;

  Aws::Vector<StringFilter> m_codeVulnerabilityFilePath;

  Aws::Vector<NumberFilter> m_epssScore;

  Aws::Vector<StringFilter> m_codeRepositoryProjectName;

  Aws::Vector<StringFilter> m_codeRepositoryProviderType;

  Aws::Vector<StringFilter> m_cloudProvider;

  Aws::Vector<StringFilter> m_cloudProviderRegion;

  Aws::Vector<StringFilter> m_cloudProviderAccountId;

  Aws::Vector<StringFilter> m_cloudProviderOrgId;

  Aws::Vector<StringFilter> m_cloudVmImageReference;

  Aws::Vector<StringFilter> m_cloudVmNetworkId;

  Aws::Vector<StringFilter> m_cloudVmSubnetIds;

  Aws::Vector<StringFilter> m_cloudImageRepositoryName;

  Aws::Vector<StringFilter> m_cloudImageRegistry;

  Aws::Vector<StringFilter> m_cloudImageDigest;

  Aws::Vector<StringFilter> m_cloudImageTags;

  Aws::Vector<DateFilter> m_cloudImagePushedAt;

  Aws::Vector<StringFilter> m_cloudImageArchitecture;

  Aws::Vector<DateFilter> m_cloudImageLastInUseAt;

  Aws::Vector<NumberFilter> m_cloudImageInUseCount;

  Aws::Vector<StringFilter> m_cloudServerlessFunctionName;

  Aws::Vector<StringFilter> m_cloudServerlessFunctionRuntime;

  Aws::Vector<DateFilter> m_cloudServerlessFunctionLastModifiedAt;

  Aws::Vector<StringFilter> m_cloudServerlessFunctionExecutionRole;
  bool m_findingArnHasBeenSet = false;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_findingTypeHasBeenSet = false;
  bool m_severityHasBeenSet = false;
  bool m_firstObservedAtHasBeenSet = false;
  bool m_lastObservedAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_findingStatusHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_inspectorScoreHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_resourceIdHasBeenSet = false;
  bool m_resourceTagsHasBeenSet = false;
  bool m_ec2InstanceImageIdHasBeenSet = false;
  bool m_ec2InstanceVpcIdHasBeenSet = false;
  bool m_ec2InstanceSubnetIdHasBeenSet = false;
  bool m_ecrImagePushedAtHasBeenSet = false;
  bool m_ecrImageArchitectureHasBeenSet = false;
  bool m_ecrImageRegistryHasBeenSet = false;
  bool m_ecrImageRepositoryNameHasBeenSet = false;
  bool m_ecrImageTagsHasBeenSet = false;
  bool m_ecrImageHashHasBeenSet = false;
  bool m_ecrImageLastInUseAtHasBeenSet = false;
  bool m_ecrImageInUseCountHasBeenSet = false;
  bool m_portRangeHasBeenSet = false;
  bool m_networkProtocolHasBeenSet = false;
  bool m_componentIdHasBeenSet = false;
  bool m_componentTypeHasBeenSet = false;
  bool m_vulnerabilityIdHasBeenSet = false;
  bool m_vulnerabilitySourceHasBeenSet = false;
  bool m_vendorSeverityHasBeenSet = false;
  bool m_vulnerablePackagesHasBeenSet = false;
  bool m_relatedVulnerabilitiesHasBeenSet = false;
  bool m_fixAvailableHasBeenSet = false;
  bool m_lambdaFunctionNameHasBeenSet = false;
  bool m_lambdaFunctionLayersHasBeenSet = false;
  bool m_lambdaFunctionRuntimeHasBeenSet = false;
  bool m_lambdaFunctionLastModifiedAtHasBeenSet = false;
  bool m_lambdaFunctionExecutionRoleArnHasBeenSet = false;
  bool m_exploitAvailableHasBeenSet = false;
  bool m_codeVulnerabilityDetectorNameHasBeenSet = false;
  bool m_codeVulnerabilityDetectorTagsHasBeenSet = false;
  bool m_codeVulnerabilityFilePathHasBeenSet = false;
  bool m_epssScoreHasBeenSet = false;
  bool m_codeRepositoryProjectNameHasBeenSet = false;
  bool m_codeRepositoryProviderTypeHasBeenSet = false;
  bool m_cloudProviderHasBeenSet = false;
  bool m_cloudProviderRegionHasBeenSet = false;
  bool m_cloudProviderAccountIdHasBeenSet = false;
  bool m_cloudProviderOrgIdHasBeenSet = false;
  bool m_cloudVmImageReferenceHasBeenSet = false;
  bool m_cloudVmNetworkIdHasBeenSet = false;
  bool m_cloudVmSubnetIdsHasBeenSet = false;
  bool m_cloudImageRepositoryNameHasBeenSet = false;
  bool m_cloudImageRegistryHasBeenSet = false;
  bool m_cloudImageDigestHasBeenSet = false;
  bool m_cloudImageTagsHasBeenSet = false;
  bool m_cloudImagePushedAtHasBeenSet = false;
  bool m_cloudImageArchitectureHasBeenSet = false;
  bool m_cloudImageLastInUseAtHasBeenSet = false;
  bool m_cloudImageInUseCountHasBeenSet = false;
  bool m_cloudServerlessFunctionNameHasBeenSet = false;
  bool m_cloudServerlessFunctionRuntimeHasBeenSet = false;
  bool m_cloudServerlessFunctionLastModifiedAtHasBeenSet = false;
  bool m_cloudServerlessFunctionExecutionRoleHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
