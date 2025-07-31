/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/StringFilter.h>
#include <aws/inspector2/model/DateFilter.h>
#include <aws/inspector2/model/NumberFilter.h>
#include <aws/inspector2/model/MapFilter.h>
#include <aws/inspector2/model/PortRangeFilter.h>
#include <aws/inspector2/model/PackageFilter.h>
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
   * <p>Details on the criteria used to define the filter.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/FilterCriteria">AWS
   * API Reference</a></p>
   */
  class FilterCriteria
  {
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
    template<typename FindingArnT = Aws::Vector<StringFilter>>
    void SetFindingArn(FindingArnT&& value) { m_findingArnHasBeenSet = true; m_findingArn = std::forward<FindingArnT>(value); }
    template<typename FindingArnT = Aws::Vector<StringFilter>>
    FilterCriteria& WithFindingArn(FindingArnT&& value) { SetFindingArn(std::forward<FindingArnT>(value)); return *this;}
    template<typename FindingArnT = StringFilter>
    FilterCriteria& AddFindingArn(FindingArnT&& value) { m_findingArnHasBeenSet = true; m_findingArn.emplace_back(std::forward<FindingArnT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details of the Amazon Web Services account IDs used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::Vector<StringFilter>>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::Vector<StringFilter>>
    FilterCriteria& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    template<typename AwsAccountIdT = StringFilter>
    FilterCriteria& AddAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.emplace_back(std::forward<AwsAccountIdT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details on the finding types used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetFindingType() const { return m_findingType; }
    inline bool FindingTypeHasBeenSet() const { return m_findingTypeHasBeenSet; }
    template<typename FindingTypeT = Aws::Vector<StringFilter>>
    void SetFindingType(FindingTypeT&& value) { m_findingTypeHasBeenSet = true; m_findingType = std::forward<FindingTypeT>(value); }
    template<typename FindingTypeT = Aws::Vector<StringFilter>>
    FilterCriteria& WithFindingType(FindingTypeT&& value) { SetFindingType(std::forward<FindingTypeT>(value)); return *this;}
    template<typename FindingTypeT = StringFilter>
    FilterCriteria& AddFindingType(FindingTypeT&& value) { m_findingTypeHasBeenSet = true; m_findingType.emplace_back(std::forward<FindingTypeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details on the severity used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    template<typename SeverityT = Aws::Vector<StringFilter>>
    void SetSeverity(SeverityT&& value) { m_severityHasBeenSet = true; m_severity = std::forward<SeverityT>(value); }
    template<typename SeverityT = Aws::Vector<StringFilter>>
    FilterCriteria& WithSeverity(SeverityT&& value) { SetSeverity(std::forward<SeverityT>(value)); return *this;}
    template<typename SeverityT = StringFilter>
    FilterCriteria& AddSeverity(SeverityT&& value) { m_severityHasBeenSet = true; m_severity.emplace_back(std::forward<SeverityT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details on the date and time a finding was first seen used to filter
     * findings.</p>
     */
    inline const Aws::Vector<DateFilter>& GetFirstObservedAt() const { return m_firstObservedAt; }
    inline bool FirstObservedAtHasBeenSet() const { return m_firstObservedAtHasBeenSet; }
    template<typename FirstObservedAtT = Aws::Vector<DateFilter>>
    void SetFirstObservedAt(FirstObservedAtT&& value) { m_firstObservedAtHasBeenSet = true; m_firstObservedAt = std::forward<FirstObservedAtT>(value); }
    template<typename FirstObservedAtT = Aws::Vector<DateFilter>>
    FilterCriteria& WithFirstObservedAt(FirstObservedAtT&& value) { SetFirstObservedAt(std::forward<FirstObservedAtT>(value)); return *this;}
    template<typename FirstObservedAtT = DateFilter>
    FilterCriteria& AddFirstObservedAt(FirstObservedAtT&& value) { m_firstObservedAtHasBeenSet = true; m_firstObservedAt.emplace_back(std::forward<FirstObservedAtT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details on the date and time a finding was last seen used to filter
     * findings.</p>
     */
    inline const Aws::Vector<DateFilter>& GetLastObservedAt() const { return m_lastObservedAt; }
    inline bool LastObservedAtHasBeenSet() const { return m_lastObservedAtHasBeenSet; }
    template<typename LastObservedAtT = Aws::Vector<DateFilter>>
    void SetLastObservedAt(LastObservedAtT&& value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt = std::forward<LastObservedAtT>(value); }
    template<typename LastObservedAtT = Aws::Vector<DateFilter>>
    FilterCriteria& WithLastObservedAt(LastObservedAtT&& value) { SetLastObservedAt(std::forward<LastObservedAtT>(value)); return *this;}
    template<typename LastObservedAtT = DateFilter>
    FilterCriteria& AddLastObservedAt(LastObservedAtT&& value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt.emplace_back(std::forward<LastObservedAtT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details on the date and time a finding was last updated at used to filter
     * findings.</p>
     */
    inline const Aws::Vector<DateFilter>& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Vector<DateFilter>>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Vector<DateFilter>>
    FilterCriteria& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    template<typename UpdatedAtT = DateFilter>
    FilterCriteria& AddUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt.emplace_back(std::forward<UpdatedAtT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details on the finding status types used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetFindingStatus() const { return m_findingStatus; }
    inline bool FindingStatusHasBeenSet() const { return m_findingStatusHasBeenSet; }
    template<typename FindingStatusT = Aws::Vector<StringFilter>>
    void SetFindingStatus(FindingStatusT&& value) { m_findingStatusHasBeenSet = true; m_findingStatus = std::forward<FindingStatusT>(value); }
    template<typename FindingStatusT = Aws::Vector<StringFilter>>
    FilterCriteria& WithFindingStatus(FindingStatusT&& value) { SetFindingStatus(std::forward<FindingStatusT>(value)); return *this;}
    template<typename FindingStatusT = StringFilter>
    FilterCriteria& AddFindingStatus(FindingStatusT&& value) { m_findingStatusHasBeenSet = true; m_findingStatus.emplace_back(std::forward<FindingStatusT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details on the finding title used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::Vector<StringFilter>>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::Vector<StringFilter>>
    FilterCriteria& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    template<typename TitleT = StringFilter>
    FilterCriteria& AddTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title.emplace_back(std::forward<TitleT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Inspector score to filter on.</p>
     */
    inline const Aws::Vector<NumberFilter>& GetInspectorScore() const { return m_inspectorScore; }
    inline bool InspectorScoreHasBeenSet() const { return m_inspectorScoreHasBeenSet; }
    template<typename InspectorScoreT = Aws::Vector<NumberFilter>>
    void SetInspectorScore(InspectorScoreT&& value) { m_inspectorScoreHasBeenSet = true; m_inspectorScore = std::forward<InspectorScoreT>(value); }
    template<typename InspectorScoreT = Aws::Vector<NumberFilter>>
    FilterCriteria& WithInspectorScore(InspectorScoreT&& value) { SetInspectorScore(std::forward<InspectorScoreT>(value)); return *this;}
    template<typename InspectorScoreT = NumberFilter>
    FilterCriteria& AddInspectorScore(InspectorScoreT&& value) { m_inspectorScoreHasBeenSet = true; m_inspectorScore.emplace_back(std::forward<InspectorScoreT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details on the resource types used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::Vector<StringFilter>>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::Vector<StringFilter>>
    FilterCriteria& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    template<typename ResourceTypeT = StringFilter>
    FilterCriteria& AddResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType.emplace_back(std::forward<ResourceTypeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details on the resource IDs used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::Vector<StringFilter>>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::Vector<StringFilter>>
    FilterCriteria& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    template<typename ResourceIdT = StringFilter>
    FilterCriteria& AddResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId.emplace_back(std::forward<ResourceIdT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details on the resource tags used to filter findings.</p>
     */
    inline const Aws::Vector<MapFilter>& GetResourceTags() const { return m_resourceTags; }
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
    template<typename ResourceTagsT = Aws::Vector<MapFilter>>
    void SetResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::forward<ResourceTagsT>(value); }
    template<typename ResourceTagsT = Aws::Vector<MapFilter>>
    FilterCriteria& WithResourceTags(ResourceTagsT&& value) { SetResourceTags(std::forward<ResourceTagsT>(value)); return *this;}
    template<typename ResourceTagsT = MapFilter>
    FilterCriteria& AddResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace_back(std::forward<ResourceTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details of the Amazon EC2 instance image IDs used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetEc2InstanceImageId() const { return m_ec2InstanceImageId; }
    inline bool Ec2InstanceImageIdHasBeenSet() const { return m_ec2InstanceImageIdHasBeenSet; }
    template<typename Ec2InstanceImageIdT = Aws::Vector<StringFilter>>
    void SetEc2InstanceImageId(Ec2InstanceImageIdT&& value) { m_ec2InstanceImageIdHasBeenSet = true; m_ec2InstanceImageId = std::forward<Ec2InstanceImageIdT>(value); }
    template<typename Ec2InstanceImageIdT = Aws::Vector<StringFilter>>
    FilterCriteria& WithEc2InstanceImageId(Ec2InstanceImageIdT&& value) { SetEc2InstanceImageId(std::forward<Ec2InstanceImageIdT>(value)); return *this;}
    template<typename Ec2InstanceImageIdT = StringFilter>
    FilterCriteria& AddEc2InstanceImageId(Ec2InstanceImageIdT&& value) { m_ec2InstanceImageIdHasBeenSet = true; m_ec2InstanceImageId.emplace_back(std::forward<Ec2InstanceImageIdT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details of the Amazon EC2 instance VPC IDs used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetEc2InstanceVpcId() const { return m_ec2InstanceVpcId; }
    inline bool Ec2InstanceVpcIdHasBeenSet() const { return m_ec2InstanceVpcIdHasBeenSet; }
    template<typename Ec2InstanceVpcIdT = Aws::Vector<StringFilter>>
    void SetEc2InstanceVpcId(Ec2InstanceVpcIdT&& value) { m_ec2InstanceVpcIdHasBeenSet = true; m_ec2InstanceVpcId = std::forward<Ec2InstanceVpcIdT>(value); }
    template<typename Ec2InstanceVpcIdT = Aws::Vector<StringFilter>>
    FilterCriteria& WithEc2InstanceVpcId(Ec2InstanceVpcIdT&& value) { SetEc2InstanceVpcId(std::forward<Ec2InstanceVpcIdT>(value)); return *this;}
    template<typename Ec2InstanceVpcIdT = StringFilter>
    FilterCriteria& AddEc2InstanceVpcId(Ec2InstanceVpcIdT&& value) { m_ec2InstanceVpcIdHasBeenSet = true; m_ec2InstanceVpcId.emplace_back(std::forward<Ec2InstanceVpcIdT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details of the Amazon EC2 instance subnet IDs used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetEc2InstanceSubnetId() const { return m_ec2InstanceSubnetId; }
    inline bool Ec2InstanceSubnetIdHasBeenSet() const { return m_ec2InstanceSubnetIdHasBeenSet; }
    template<typename Ec2InstanceSubnetIdT = Aws::Vector<StringFilter>>
    void SetEc2InstanceSubnetId(Ec2InstanceSubnetIdT&& value) { m_ec2InstanceSubnetIdHasBeenSet = true; m_ec2InstanceSubnetId = std::forward<Ec2InstanceSubnetIdT>(value); }
    template<typename Ec2InstanceSubnetIdT = Aws::Vector<StringFilter>>
    FilterCriteria& WithEc2InstanceSubnetId(Ec2InstanceSubnetIdT&& value) { SetEc2InstanceSubnetId(std::forward<Ec2InstanceSubnetIdT>(value)); return *this;}
    template<typename Ec2InstanceSubnetIdT = StringFilter>
    FilterCriteria& AddEc2InstanceSubnetId(Ec2InstanceSubnetIdT&& value) { m_ec2InstanceSubnetIdHasBeenSet = true; m_ec2InstanceSubnetId.emplace_back(std::forward<Ec2InstanceSubnetIdT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details on the Amazon ECR image push date and time used to filter
     * findings.</p>
     */
    inline const Aws::Vector<DateFilter>& GetEcrImagePushedAt() const { return m_ecrImagePushedAt; }
    inline bool EcrImagePushedAtHasBeenSet() const { return m_ecrImagePushedAtHasBeenSet; }
    template<typename EcrImagePushedAtT = Aws::Vector<DateFilter>>
    void SetEcrImagePushedAt(EcrImagePushedAtT&& value) { m_ecrImagePushedAtHasBeenSet = true; m_ecrImagePushedAt = std::forward<EcrImagePushedAtT>(value); }
    template<typename EcrImagePushedAtT = Aws::Vector<DateFilter>>
    FilterCriteria& WithEcrImagePushedAt(EcrImagePushedAtT&& value) { SetEcrImagePushedAt(std::forward<EcrImagePushedAtT>(value)); return *this;}
    template<typename EcrImagePushedAtT = DateFilter>
    FilterCriteria& AddEcrImagePushedAt(EcrImagePushedAtT&& value) { m_ecrImagePushedAtHasBeenSet = true; m_ecrImagePushedAt.emplace_back(std::forward<EcrImagePushedAtT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details of the Amazon ECR image architecture types used to filter
     * findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetEcrImageArchitecture() const { return m_ecrImageArchitecture; }
    inline bool EcrImageArchitectureHasBeenSet() const { return m_ecrImageArchitectureHasBeenSet; }
    template<typename EcrImageArchitectureT = Aws::Vector<StringFilter>>
    void SetEcrImageArchitecture(EcrImageArchitectureT&& value) { m_ecrImageArchitectureHasBeenSet = true; m_ecrImageArchitecture = std::forward<EcrImageArchitectureT>(value); }
    template<typename EcrImageArchitectureT = Aws::Vector<StringFilter>>
    FilterCriteria& WithEcrImageArchitecture(EcrImageArchitectureT&& value) { SetEcrImageArchitecture(std::forward<EcrImageArchitectureT>(value)); return *this;}
    template<typename EcrImageArchitectureT = StringFilter>
    FilterCriteria& AddEcrImageArchitecture(EcrImageArchitectureT&& value) { m_ecrImageArchitectureHasBeenSet = true; m_ecrImageArchitecture.emplace_back(std::forward<EcrImageArchitectureT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details on the Amazon ECR registry used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetEcrImageRegistry() const { return m_ecrImageRegistry; }
    inline bool EcrImageRegistryHasBeenSet() const { return m_ecrImageRegistryHasBeenSet; }
    template<typename EcrImageRegistryT = Aws::Vector<StringFilter>>
    void SetEcrImageRegistry(EcrImageRegistryT&& value) { m_ecrImageRegistryHasBeenSet = true; m_ecrImageRegistry = std::forward<EcrImageRegistryT>(value); }
    template<typename EcrImageRegistryT = Aws::Vector<StringFilter>>
    FilterCriteria& WithEcrImageRegistry(EcrImageRegistryT&& value) { SetEcrImageRegistry(std::forward<EcrImageRegistryT>(value)); return *this;}
    template<typename EcrImageRegistryT = StringFilter>
    FilterCriteria& AddEcrImageRegistry(EcrImageRegistryT&& value) { m_ecrImageRegistryHasBeenSet = true; m_ecrImageRegistry.emplace_back(std::forward<EcrImageRegistryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details on the name of the Amazon ECR repository used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetEcrImageRepositoryName() const { return m_ecrImageRepositoryName; }
    inline bool EcrImageRepositoryNameHasBeenSet() const { return m_ecrImageRepositoryNameHasBeenSet; }
    template<typename EcrImageRepositoryNameT = Aws::Vector<StringFilter>>
    void SetEcrImageRepositoryName(EcrImageRepositoryNameT&& value) { m_ecrImageRepositoryNameHasBeenSet = true; m_ecrImageRepositoryName = std::forward<EcrImageRepositoryNameT>(value); }
    template<typename EcrImageRepositoryNameT = Aws::Vector<StringFilter>>
    FilterCriteria& WithEcrImageRepositoryName(EcrImageRepositoryNameT&& value) { SetEcrImageRepositoryName(std::forward<EcrImageRepositoryNameT>(value)); return *this;}
    template<typename EcrImageRepositoryNameT = StringFilter>
    FilterCriteria& AddEcrImageRepositoryName(EcrImageRepositoryNameT&& value) { m_ecrImageRepositoryNameHasBeenSet = true; m_ecrImageRepositoryName.emplace_back(std::forward<EcrImageRepositoryNameT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags attached to the Amazon ECR container image.</p>
     */
    inline const Aws::Vector<StringFilter>& GetEcrImageTags() const { return m_ecrImageTags; }
    inline bool EcrImageTagsHasBeenSet() const { return m_ecrImageTagsHasBeenSet; }
    template<typename EcrImageTagsT = Aws::Vector<StringFilter>>
    void SetEcrImageTags(EcrImageTagsT&& value) { m_ecrImageTagsHasBeenSet = true; m_ecrImageTags = std::forward<EcrImageTagsT>(value); }
    template<typename EcrImageTagsT = Aws::Vector<StringFilter>>
    FilterCriteria& WithEcrImageTags(EcrImageTagsT&& value) { SetEcrImageTags(std::forward<EcrImageTagsT>(value)); return *this;}
    template<typename EcrImageTagsT = StringFilter>
    FilterCriteria& AddEcrImageTags(EcrImageTagsT&& value) { m_ecrImageTagsHasBeenSet = true; m_ecrImageTags.emplace_back(std::forward<EcrImageTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details of the Amazon ECR image hashes used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetEcrImageHash() const { return m_ecrImageHash; }
    inline bool EcrImageHashHasBeenSet() const { return m_ecrImageHashHasBeenSet; }
    template<typename EcrImageHashT = Aws::Vector<StringFilter>>
    void SetEcrImageHash(EcrImageHashT&& value) { m_ecrImageHashHasBeenSet = true; m_ecrImageHash = std::forward<EcrImageHashT>(value); }
    template<typename EcrImageHashT = Aws::Vector<StringFilter>>
    FilterCriteria& WithEcrImageHash(EcrImageHashT&& value) { SetEcrImageHash(std::forward<EcrImageHashT>(value)); return *this;}
    template<typename EcrImageHashT = StringFilter>
    FilterCriteria& AddEcrImageHash(EcrImageHashT&& value) { m_ecrImageHashHasBeenSet = true; m_ecrImageHash.emplace_back(std::forward<EcrImageHashT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filter criteria indicating when an Amazon ECR image was last used in an
     * Amazon ECS cluster task or Amazon EKS cluster pod.</p>
     */
    inline const Aws::Vector<DateFilter>& GetEcrImageLastInUseAt() const { return m_ecrImageLastInUseAt; }
    inline bool EcrImageLastInUseAtHasBeenSet() const { return m_ecrImageLastInUseAtHasBeenSet; }
    template<typename EcrImageLastInUseAtT = Aws::Vector<DateFilter>>
    void SetEcrImageLastInUseAt(EcrImageLastInUseAtT&& value) { m_ecrImageLastInUseAtHasBeenSet = true; m_ecrImageLastInUseAt = std::forward<EcrImageLastInUseAtT>(value); }
    template<typename EcrImageLastInUseAtT = Aws::Vector<DateFilter>>
    FilterCriteria& WithEcrImageLastInUseAt(EcrImageLastInUseAtT&& value) { SetEcrImageLastInUseAt(std::forward<EcrImageLastInUseAtT>(value)); return *this;}
    template<typename EcrImageLastInUseAtT = DateFilter>
    FilterCriteria& AddEcrImageLastInUseAt(EcrImageLastInUseAtT&& value) { m_ecrImageLastInUseAtHasBeenSet = true; m_ecrImageLastInUseAt.emplace_back(std::forward<EcrImageLastInUseAtT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filter criteria indicating when details for an Amazon ECR image include when
     * an Amazon ECR image is in use.</p>
     */
    inline const Aws::Vector<NumberFilter>& GetEcrImageInUseCount() const { return m_ecrImageInUseCount; }
    inline bool EcrImageInUseCountHasBeenSet() const { return m_ecrImageInUseCountHasBeenSet; }
    template<typename EcrImageInUseCountT = Aws::Vector<NumberFilter>>
    void SetEcrImageInUseCount(EcrImageInUseCountT&& value) { m_ecrImageInUseCountHasBeenSet = true; m_ecrImageInUseCount = std::forward<EcrImageInUseCountT>(value); }
    template<typename EcrImageInUseCountT = Aws::Vector<NumberFilter>>
    FilterCriteria& WithEcrImageInUseCount(EcrImageInUseCountT&& value) { SetEcrImageInUseCount(std::forward<EcrImageInUseCountT>(value)); return *this;}
    template<typename EcrImageInUseCountT = NumberFilter>
    FilterCriteria& AddEcrImageInUseCount(EcrImageInUseCountT&& value) { m_ecrImageInUseCountHasBeenSet = true; m_ecrImageInUseCount.emplace_back(std::forward<EcrImageInUseCountT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details on the port ranges used to filter findings.</p>
     */
    inline const Aws::Vector<PortRangeFilter>& GetPortRange() const { return m_portRange; }
    inline bool PortRangeHasBeenSet() const { return m_portRangeHasBeenSet; }
    template<typename PortRangeT = Aws::Vector<PortRangeFilter>>
    void SetPortRange(PortRangeT&& value) { m_portRangeHasBeenSet = true; m_portRange = std::forward<PortRangeT>(value); }
    template<typename PortRangeT = Aws::Vector<PortRangeFilter>>
    FilterCriteria& WithPortRange(PortRangeT&& value) { SetPortRange(std::forward<PortRangeT>(value)); return *this;}
    template<typename PortRangeT = PortRangeFilter>
    FilterCriteria& AddPortRange(PortRangeT&& value) { m_portRangeHasBeenSet = true; m_portRange.emplace_back(std::forward<PortRangeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details on network protocol used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetNetworkProtocol() const { return m_networkProtocol; }
    inline bool NetworkProtocolHasBeenSet() const { return m_networkProtocolHasBeenSet; }
    template<typename NetworkProtocolT = Aws::Vector<StringFilter>>
    void SetNetworkProtocol(NetworkProtocolT&& value) { m_networkProtocolHasBeenSet = true; m_networkProtocol = std::forward<NetworkProtocolT>(value); }
    template<typename NetworkProtocolT = Aws::Vector<StringFilter>>
    FilterCriteria& WithNetworkProtocol(NetworkProtocolT&& value) { SetNetworkProtocol(std::forward<NetworkProtocolT>(value)); return *this;}
    template<typename NetworkProtocolT = StringFilter>
    FilterCriteria& AddNetworkProtocol(NetworkProtocolT&& value) { m_networkProtocolHasBeenSet = true; m_networkProtocol.emplace_back(std::forward<NetworkProtocolT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details of the component IDs used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetComponentId() const { return m_componentId; }
    inline bool ComponentIdHasBeenSet() const { return m_componentIdHasBeenSet; }
    template<typename ComponentIdT = Aws::Vector<StringFilter>>
    void SetComponentId(ComponentIdT&& value) { m_componentIdHasBeenSet = true; m_componentId = std::forward<ComponentIdT>(value); }
    template<typename ComponentIdT = Aws::Vector<StringFilter>>
    FilterCriteria& WithComponentId(ComponentIdT&& value) { SetComponentId(std::forward<ComponentIdT>(value)); return *this;}
    template<typename ComponentIdT = StringFilter>
    FilterCriteria& AddComponentId(ComponentIdT&& value) { m_componentIdHasBeenSet = true; m_componentId.emplace_back(std::forward<ComponentIdT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details of the component types used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetComponentType() const { return m_componentType; }
    inline bool ComponentTypeHasBeenSet() const { return m_componentTypeHasBeenSet; }
    template<typename ComponentTypeT = Aws::Vector<StringFilter>>
    void SetComponentType(ComponentTypeT&& value) { m_componentTypeHasBeenSet = true; m_componentType = std::forward<ComponentTypeT>(value); }
    template<typename ComponentTypeT = Aws::Vector<StringFilter>>
    FilterCriteria& WithComponentType(ComponentTypeT&& value) { SetComponentType(std::forward<ComponentTypeT>(value)); return *this;}
    template<typename ComponentTypeT = StringFilter>
    FilterCriteria& AddComponentType(ComponentTypeT&& value) { m_componentTypeHasBeenSet = true; m_componentType.emplace_back(std::forward<ComponentTypeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details on the vulnerability ID used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetVulnerabilityId() const { return m_vulnerabilityId; }
    inline bool VulnerabilityIdHasBeenSet() const { return m_vulnerabilityIdHasBeenSet; }
    template<typename VulnerabilityIdT = Aws::Vector<StringFilter>>
    void SetVulnerabilityId(VulnerabilityIdT&& value) { m_vulnerabilityIdHasBeenSet = true; m_vulnerabilityId = std::forward<VulnerabilityIdT>(value); }
    template<typename VulnerabilityIdT = Aws::Vector<StringFilter>>
    FilterCriteria& WithVulnerabilityId(VulnerabilityIdT&& value) { SetVulnerabilityId(std::forward<VulnerabilityIdT>(value)); return *this;}
    template<typename VulnerabilityIdT = StringFilter>
    FilterCriteria& AddVulnerabilityId(VulnerabilityIdT&& value) { m_vulnerabilityIdHasBeenSet = true; m_vulnerabilityId.emplace_back(std::forward<VulnerabilityIdT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details on the vulnerability type used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetVulnerabilitySource() const { return m_vulnerabilitySource; }
    inline bool VulnerabilitySourceHasBeenSet() const { return m_vulnerabilitySourceHasBeenSet; }
    template<typename VulnerabilitySourceT = Aws::Vector<StringFilter>>
    void SetVulnerabilitySource(VulnerabilitySourceT&& value) { m_vulnerabilitySourceHasBeenSet = true; m_vulnerabilitySource = std::forward<VulnerabilitySourceT>(value); }
    template<typename VulnerabilitySourceT = Aws::Vector<StringFilter>>
    FilterCriteria& WithVulnerabilitySource(VulnerabilitySourceT&& value) { SetVulnerabilitySource(std::forward<VulnerabilitySourceT>(value)); return *this;}
    template<typename VulnerabilitySourceT = StringFilter>
    FilterCriteria& AddVulnerabilitySource(VulnerabilitySourceT&& value) { m_vulnerabilitySourceHasBeenSet = true; m_vulnerabilitySource.emplace_back(std::forward<VulnerabilitySourceT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details on the vendor severity used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetVendorSeverity() const { return m_vendorSeverity; }
    inline bool VendorSeverityHasBeenSet() const { return m_vendorSeverityHasBeenSet; }
    template<typename VendorSeverityT = Aws::Vector<StringFilter>>
    void SetVendorSeverity(VendorSeverityT&& value) { m_vendorSeverityHasBeenSet = true; m_vendorSeverity = std::forward<VendorSeverityT>(value); }
    template<typename VendorSeverityT = Aws::Vector<StringFilter>>
    FilterCriteria& WithVendorSeverity(VendorSeverityT&& value) { SetVendorSeverity(std::forward<VendorSeverityT>(value)); return *this;}
    template<typename VendorSeverityT = StringFilter>
    FilterCriteria& AddVendorSeverity(VendorSeverityT&& value) { m_vendorSeverityHasBeenSet = true; m_vendorSeverity.emplace_back(std::forward<VendorSeverityT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details on the vulnerable packages used to filter findings.</p>
     */
    inline const Aws::Vector<PackageFilter>& GetVulnerablePackages() const { return m_vulnerablePackages; }
    inline bool VulnerablePackagesHasBeenSet() const { return m_vulnerablePackagesHasBeenSet; }
    template<typename VulnerablePackagesT = Aws::Vector<PackageFilter>>
    void SetVulnerablePackages(VulnerablePackagesT&& value) { m_vulnerablePackagesHasBeenSet = true; m_vulnerablePackages = std::forward<VulnerablePackagesT>(value); }
    template<typename VulnerablePackagesT = Aws::Vector<PackageFilter>>
    FilterCriteria& WithVulnerablePackages(VulnerablePackagesT&& value) { SetVulnerablePackages(std::forward<VulnerablePackagesT>(value)); return *this;}
    template<typename VulnerablePackagesT = PackageFilter>
    FilterCriteria& AddVulnerablePackages(VulnerablePackagesT&& value) { m_vulnerablePackagesHasBeenSet = true; m_vulnerablePackages.emplace_back(std::forward<VulnerablePackagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details on the related vulnerabilities used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetRelatedVulnerabilities() const { return m_relatedVulnerabilities; }
    inline bool RelatedVulnerabilitiesHasBeenSet() const { return m_relatedVulnerabilitiesHasBeenSet; }
    template<typename RelatedVulnerabilitiesT = Aws::Vector<StringFilter>>
    void SetRelatedVulnerabilities(RelatedVulnerabilitiesT&& value) { m_relatedVulnerabilitiesHasBeenSet = true; m_relatedVulnerabilities = std::forward<RelatedVulnerabilitiesT>(value); }
    template<typename RelatedVulnerabilitiesT = Aws::Vector<StringFilter>>
    FilterCriteria& WithRelatedVulnerabilities(RelatedVulnerabilitiesT&& value) { SetRelatedVulnerabilities(std::forward<RelatedVulnerabilitiesT>(value)); return *this;}
    template<typename RelatedVulnerabilitiesT = StringFilter>
    FilterCriteria& AddRelatedVulnerabilities(RelatedVulnerabilitiesT&& value) { m_relatedVulnerabilitiesHasBeenSet = true; m_relatedVulnerabilities.emplace_back(std::forward<RelatedVulnerabilitiesT>(value)); return *this; }
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
    template<typename FixAvailableT = Aws::Vector<StringFilter>>
    void SetFixAvailable(FixAvailableT&& value) { m_fixAvailableHasBeenSet = true; m_fixAvailable = std::forward<FixAvailableT>(value); }
    template<typename FixAvailableT = Aws::Vector<StringFilter>>
    FilterCriteria& WithFixAvailable(FixAvailableT&& value) { SetFixAvailable(std::forward<FixAvailableT>(value)); return *this;}
    template<typename FixAvailableT = StringFilter>
    FilterCriteria& AddFixAvailable(FixAvailableT&& value) { m_fixAvailableHasBeenSet = true; m_fixAvailable.emplace_back(std::forward<FixAvailableT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the list of Amazon Web Services Lambda functions by the name of the
     * function.</p>
     */
    inline const Aws::Vector<StringFilter>& GetLambdaFunctionName() const { return m_lambdaFunctionName; }
    inline bool LambdaFunctionNameHasBeenSet() const { return m_lambdaFunctionNameHasBeenSet; }
    template<typename LambdaFunctionNameT = Aws::Vector<StringFilter>>
    void SetLambdaFunctionName(LambdaFunctionNameT&& value) { m_lambdaFunctionNameHasBeenSet = true; m_lambdaFunctionName = std::forward<LambdaFunctionNameT>(value); }
    template<typename LambdaFunctionNameT = Aws::Vector<StringFilter>>
    FilterCriteria& WithLambdaFunctionName(LambdaFunctionNameT&& value) { SetLambdaFunctionName(std::forward<LambdaFunctionNameT>(value)); return *this;}
    template<typename LambdaFunctionNameT = StringFilter>
    FilterCriteria& AddLambdaFunctionName(LambdaFunctionNameT&& value) { m_lambdaFunctionNameHasBeenSet = true; m_lambdaFunctionName.emplace_back(std::forward<LambdaFunctionNameT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the list of Amazon Web Services Lambda functions by the function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">
     * layers</a>. A Lambda function can have up to five layers.</p>
     */
    inline const Aws::Vector<StringFilter>& GetLambdaFunctionLayers() const { return m_lambdaFunctionLayers; }
    inline bool LambdaFunctionLayersHasBeenSet() const { return m_lambdaFunctionLayersHasBeenSet; }
    template<typename LambdaFunctionLayersT = Aws::Vector<StringFilter>>
    void SetLambdaFunctionLayers(LambdaFunctionLayersT&& value) { m_lambdaFunctionLayersHasBeenSet = true; m_lambdaFunctionLayers = std::forward<LambdaFunctionLayersT>(value); }
    template<typename LambdaFunctionLayersT = Aws::Vector<StringFilter>>
    FilterCriteria& WithLambdaFunctionLayers(LambdaFunctionLayersT&& value) { SetLambdaFunctionLayers(std::forward<LambdaFunctionLayersT>(value)); return *this;}
    template<typename LambdaFunctionLayersT = StringFilter>
    FilterCriteria& AddLambdaFunctionLayers(LambdaFunctionLayersT&& value) { m_lambdaFunctionLayersHasBeenSet = true; m_lambdaFunctionLayers.emplace_back(std::forward<LambdaFunctionLayersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the list of Amazon Web Services Lambda functions by the runtime
     * environment for the Lambda function.</p>
     */
    inline const Aws::Vector<StringFilter>& GetLambdaFunctionRuntime() const { return m_lambdaFunctionRuntime; }
    inline bool LambdaFunctionRuntimeHasBeenSet() const { return m_lambdaFunctionRuntimeHasBeenSet; }
    template<typename LambdaFunctionRuntimeT = Aws::Vector<StringFilter>>
    void SetLambdaFunctionRuntime(LambdaFunctionRuntimeT&& value) { m_lambdaFunctionRuntimeHasBeenSet = true; m_lambdaFunctionRuntime = std::forward<LambdaFunctionRuntimeT>(value); }
    template<typename LambdaFunctionRuntimeT = Aws::Vector<StringFilter>>
    FilterCriteria& WithLambdaFunctionRuntime(LambdaFunctionRuntimeT&& value) { SetLambdaFunctionRuntime(std::forward<LambdaFunctionRuntimeT>(value)); return *this;}
    template<typename LambdaFunctionRuntimeT = StringFilter>
    FilterCriteria& AddLambdaFunctionRuntime(LambdaFunctionRuntimeT&& value) { m_lambdaFunctionRuntimeHasBeenSet = true; m_lambdaFunctionRuntime.emplace_back(std::forward<LambdaFunctionRuntimeT>(value)); return *this; }
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
    template<typename LambdaFunctionLastModifiedAtT = Aws::Vector<DateFilter>>
    void SetLambdaFunctionLastModifiedAt(LambdaFunctionLastModifiedAtT&& value) { m_lambdaFunctionLastModifiedAtHasBeenSet = true; m_lambdaFunctionLastModifiedAt = std::forward<LambdaFunctionLastModifiedAtT>(value); }
    template<typename LambdaFunctionLastModifiedAtT = Aws::Vector<DateFilter>>
    FilterCriteria& WithLambdaFunctionLastModifiedAt(LambdaFunctionLastModifiedAtT&& value) { SetLambdaFunctionLastModifiedAt(std::forward<LambdaFunctionLastModifiedAtT>(value)); return *this;}
    template<typename LambdaFunctionLastModifiedAtT = DateFilter>
    FilterCriteria& AddLambdaFunctionLastModifiedAt(LambdaFunctionLastModifiedAtT&& value) { m_lambdaFunctionLastModifiedAtHasBeenSet = true; m_lambdaFunctionLastModifiedAt.emplace_back(std::forward<LambdaFunctionLastModifiedAtT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the list of Amazon Web Services Lambda functions by execution
     * role.</p>
     */
    inline const Aws::Vector<StringFilter>& GetLambdaFunctionExecutionRoleArn() const { return m_lambdaFunctionExecutionRoleArn; }
    inline bool LambdaFunctionExecutionRoleArnHasBeenSet() const { return m_lambdaFunctionExecutionRoleArnHasBeenSet; }
    template<typename LambdaFunctionExecutionRoleArnT = Aws::Vector<StringFilter>>
    void SetLambdaFunctionExecutionRoleArn(LambdaFunctionExecutionRoleArnT&& value) { m_lambdaFunctionExecutionRoleArnHasBeenSet = true; m_lambdaFunctionExecutionRoleArn = std::forward<LambdaFunctionExecutionRoleArnT>(value); }
    template<typename LambdaFunctionExecutionRoleArnT = Aws::Vector<StringFilter>>
    FilterCriteria& WithLambdaFunctionExecutionRoleArn(LambdaFunctionExecutionRoleArnT&& value) { SetLambdaFunctionExecutionRoleArn(std::forward<LambdaFunctionExecutionRoleArnT>(value)); return *this;}
    template<typename LambdaFunctionExecutionRoleArnT = StringFilter>
    FilterCriteria& AddLambdaFunctionExecutionRoleArn(LambdaFunctionExecutionRoleArnT&& value) { m_lambdaFunctionExecutionRoleArnHasBeenSet = true; m_lambdaFunctionExecutionRoleArn.emplace_back(std::forward<LambdaFunctionExecutionRoleArnT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the list of Amazon Web Services Lambda findings by the availability
     * of exploits.</p>
     */
    inline const Aws::Vector<StringFilter>& GetExploitAvailable() const { return m_exploitAvailable; }
    inline bool ExploitAvailableHasBeenSet() const { return m_exploitAvailableHasBeenSet; }
    template<typename ExploitAvailableT = Aws::Vector<StringFilter>>
    void SetExploitAvailable(ExploitAvailableT&& value) { m_exploitAvailableHasBeenSet = true; m_exploitAvailable = std::forward<ExploitAvailableT>(value); }
    template<typename ExploitAvailableT = Aws::Vector<StringFilter>>
    FilterCriteria& WithExploitAvailable(ExploitAvailableT&& value) { SetExploitAvailable(std::forward<ExploitAvailableT>(value)); return *this;}
    template<typename ExploitAvailableT = StringFilter>
    FilterCriteria& AddExploitAvailable(ExploitAvailableT&& value) { m_exploitAvailableHasBeenSet = true; m_exploitAvailable.emplace_back(std::forward<ExploitAvailableT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the detector used to identify a code vulnerability in a Lambda
     * function used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetCodeVulnerabilityDetectorName() const { return m_codeVulnerabilityDetectorName; }
    inline bool CodeVulnerabilityDetectorNameHasBeenSet() const { return m_codeVulnerabilityDetectorNameHasBeenSet; }
    template<typename CodeVulnerabilityDetectorNameT = Aws::Vector<StringFilter>>
    void SetCodeVulnerabilityDetectorName(CodeVulnerabilityDetectorNameT&& value) { m_codeVulnerabilityDetectorNameHasBeenSet = true; m_codeVulnerabilityDetectorName = std::forward<CodeVulnerabilityDetectorNameT>(value); }
    template<typename CodeVulnerabilityDetectorNameT = Aws::Vector<StringFilter>>
    FilterCriteria& WithCodeVulnerabilityDetectorName(CodeVulnerabilityDetectorNameT&& value) { SetCodeVulnerabilityDetectorName(std::forward<CodeVulnerabilityDetectorNameT>(value)); return *this;}
    template<typename CodeVulnerabilityDetectorNameT = StringFilter>
    FilterCriteria& AddCodeVulnerabilityDetectorName(CodeVulnerabilityDetectorNameT&& value) { m_codeVulnerabilityDetectorNameHasBeenSet = true; m_codeVulnerabilityDetectorName.emplace_back(std::forward<CodeVulnerabilityDetectorNameT>(value)); return *this; }
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
    template<typename CodeVulnerabilityDetectorTagsT = Aws::Vector<StringFilter>>
    void SetCodeVulnerabilityDetectorTags(CodeVulnerabilityDetectorTagsT&& value) { m_codeVulnerabilityDetectorTagsHasBeenSet = true; m_codeVulnerabilityDetectorTags = std::forward<CodeVulnerabilityDetectorTagsT>(value); }
    template<typename CodeVulnerabilityDetectorTagsT = Aws::Vector<StringFilter>>
    FilterCriteria& WithCodeVulnerabilityDetectorTags(CodeVulnerabilityDetectorTagsT&& value) { SetCodeVulnerabilityDetectorTags(std::forward<CodeVulnerabilityDetectorTagsT>(value)); return *this;}
    template<typename CodeVulnerabilityDetectorTagsT = StringFilter>
    FilterCriteria& AddCodeVulnerabilityDetectorTags(CodeVulnerabilityDetectorTagsT&& value) { m_codeVulnerabilityDetectorTagsHasBeenSet = true; m_codeVulnerabilityDetectorTags.emplace_back(std::forward<CodeVulnerabilityDetectorTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The file path to the file in a Lambda function that contains a code
     * vulnerability used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetCodeVulnerabilityFilePath() const { return m_codeVulnerabilityFilePath; }
    inline bool CodeVulnerabilityFilePathHasBeenSet() const { return m_codeVulnerabilityFilePathHasBeenSet; }
    template<typename CodeVulnerabilityFilePathT = Aws::Vector<StringFilter>>
    void SetCodeVulnerabilityFilePath(CodeVulnerabilityFilePathT&& value) { m_codeVulnerabilityFilePathHasBeenSet = true; m_codeVulnerabilityFilePath = std::forward<CodeVulnerabilityFilePathT>(value); }
    template<typename CodeVulnerabilityFilePathT = Aws::Vector<StringFilter>>
    FilterCriteria& WithCodeVulnerabilityFilePath(CodeVulnerabilityFilePathT&& value) { SetCodeVulnerabilityFilePath(std::forward<CodeVulnerabilityFilePathT>(value)); return *this;}
    template<typename CodeVulnerabilityFilePathT = StringFilter>
    FilterCriteria& AddCodeVulnerabilityFilePath(CodeVulnerabilityFilePathT&& value) { m_codeVulnerabilityFilePathHasBeenSet = true; m_codeVulnerabilityFilePath.emplace_back(std::forward<CodeVulnerabilityFilePathT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The EPSS score used to filter findings.</p>
     */
    inline const Aws::Vector<NumberFilter>& GetEpssScore() const { return m_epssScore; }
    inline bool EpssScoreHasBeenSet() const { return m_epssScoreHasBeenSet; }
    template<typename EpssScoreT = Aws::Vector<NumberFilter>>
    void SetEpssScore(EpssScoreT&& value) { m_epssScoreHasBeenSet = true; m_epssScore = std::forward<EpssScoreT>(value); }
    template<typename EpssScoreT = Aws::Vector<NumberFilter>>
    FilterCriteria& WithEpssScore(EpssScoreT&& value) { SetEpssScore(std::forward<EpssScoreT>(value)); return *this;}
    template<typename EpssScoreT = NumberFilter>
    FilterCriteria& AddEpssScore(EpssScoreT&& value) { m_epssScoreHasBeenSet = true; m_epssScore.emplace_back(std::forward<EpssScoreT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filter criteria for findings based on the project name in a code
     * repository.</p>
     */
    inline const Aws::Vector<StringFilter>& GetCodeRepositoryProjectName() const { return m_codeRepositoryProjectName; }
    inline bool CodeRepositoryProjectNameHasBeenSet() const { return m_codeRepositoryProjectNameHasBeenSet; }
    template<typename CodeRepositoryProjectNameT = Aws::Vector<StringFilter>>
    void SetCodeRepositoryProjectName(CodeRepositoryProjectNameT&& value) { m_codeRepositoryProjectNameHasBeenSet = true; m_codeRepositoryProjectName = std::forward<CodeRepositoryProjectNameT>(value); }
    template<typename CodeRepositoryProjectNameT = Aws::Vector<StringFilter>>
    FilterCriteria& WithCodeRepositoryProjectName(CodeRepositoryProjectNameT&& value) { SetCodeRepositoryProjectName(std::forward<CodeRepositoryProjectNameT>(value)); return *this;}
    template<typename CodeRepositoryProjectNameT = StringFilter>
    FilterCriteria& AddCodeRepositoryProjectName(CodeRepositoryProjectNameT&& value) { m_codeRepositoryProjectNameHasBeenSet = true; m_codeRepositoryProjectName.emplace_back(std::forward<CodeRepositoryProjectNameT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filter criteria for findings based on the repository provider type (such as
     * GitHub, GitLab, etc.).</p>
     */
    inline const Aws::Vector<StringFilter>& GetCodeRepositoryProviderType() const { return m_codeRepositoryProviderType; }
    inline bool CodeRepositoryProviderTypeHasBeenSet() const { return m_codeRepositoryProviderTypeHasBeenSet; }
    template<typename CodeRepositoryProviderTypeT = Aws::Vector<StringFilter>>
    void SetCodeRepositoryProviderType(CodeRepositoryProviderTypeT&& value) { m_codeRepositoryProviderTypeHasBeenSet = true; m_codeRepositoryProviderType = std::forward<CodeRepositoryProviderTypeT>(value); }
    template<typename CodeRepositoryProviderTypeT = Aws::Vector<StringFilter>>
    FilterCriteria& WithCodeRepositoryProviderType(CodeRepositoryProviderTypeT&& value) { SetCodeRepositoryProviderType(std::forward<CodeRepositoryProviderTypeT>(value)); return *this;}
    template<typename CodeRepositoryProviderTypeT = StringFilter>
    FilterCriteria& AddCodeRepositoryProviderType(CodeRepositoryProviderTypeT&& value) { m_codeRepositoryProviderTypeHasBeenSet = true; m_codeRepositoryProviderType.emplace_back(std::forward<CodeRepositoryProviderTypeT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<StringFilter> m_findingArn;
    bool m_findingArnHasBeenSet = false;

    Aws::Vector<StringFilter> m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::Vector<StringFilter> m_findingType;
    bool m_findingTypeHasBeenSet = false;

    Aws::Vector<StringFilter> m_severity;
    bool m_severityHasBeenSet = false;

    Aws::Vector<DateFilter> m_firstObservedAt;
    bool m_firstObservedAtHasBeenSet = false;

    Aws::Vector<DateFilter> m_lastObservedAt;
    bool m_lastObservedAtHasBeenSet = false;

    Aws::Vector<DateFilter> m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::Vector<StringFilter> m_findingStatus;
    bool m_findingStatusHasBeenSet = false;

    Aws::Vector<StringFilter> m_title;
    bool m_titleHasBeenSet = false;

    Aws::Vector<NumberFilter> m_inspectorScore;
    bool m_inspectorScoreHasBeenSet = false;

    Aws::Vector<StringFilter> m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<StringFilter> m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Vector<MapFilter> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;

    Aws::Vector<StringFilter> m_ec2InstanceImageId;
    bool m_ec2InstanceImageIdHasBeenSet = false;

    Aws::Vector<StringFilter> m_ec2InstanceVpcId;
    bool m_ec2InstanceVpcIdHasBeenSet = false;

    Aws::Vector<StringFilter> m_ec2InstanceSubnetId;
    bool m_ec2InstanceSubnetIdHasBeenSet = false;

    Aws::Vector<DateFilter> m_ecrImagePushedAt;
    bool m_ecrImagePushedAtHasBeenSet = false;

    Aws::Vector<StringFilter> m_ecrImageArchitecture;
    bool m_ecrImageArchitectureHasBeenSet = false;

    Aws::Vector<StringFilter> m_ecrImageRegistry;
    bool m_ecrImageRegistryHasBeenSet = false;

    Aws::Vector<StringFilter> m_ecrImageRepositoryName;
    bool m_ecrImageRepositoryNameHasBeenSet = false;

    Aws::Vector<StringFilter> m_ecrImageTags;
    bool m_ecrImageTagsHasBeenSet = false;

    Aws::Vector<StringFilter> m_ecrImageHash;
    bool m_ecrImageHashHasBeenSet = false;

    Aws::Vector<DateFilter> m_ecrImageLastInUseAt;
    bool m_ecrImageLastInUseAtHasBeenSet = false;

    Aws::Vector<NumberFilter> m_ecrImageInUseCount;
    bool m_ecrImageInUseCountHasBeenSet = false;

    Aws::Vector<PortRangeFilter> m_portRange;
    bool m_portRangeHasBeenSet = false;

    Aws::Vector<StringFilter> m_networkProtocol;
    bool m_networkProtocolHasBeenSet = false;

    Aws::Vector<StringFilter> m_componentId;
    bool m_componentIdHasBeenSet = false;

    Aws::Vector<StringFilter> m_componentType;
    bool m_componentTypeHasBeenSet = false;

    Aws::Vector<StringFilter> m_vulnerabilityId;
    bool m_vulnerabilityIdHasBeenSet = false;

    Aws::Vector<StringFilter> m_vulnerabilitySource;
    bool m_vulnerabilitySourceHasBeenSet = false;

    Aws::Vector<StringFilter> m_vendorSeverity;
    bool m_vendorSeverityHasBeenSet = false;

    Aws::Vector<PackageFilter> m_vulnerablePackages;
    bool m_vulnerablePackagesHasBeenSet = false;

    Aws::Vector<StringFilter> m_relatedVulnerabilities;
    bool m_relatedVulnerabilitiesHasBeenSet = false;

    Aws::Vector<StringFilter> m_fixAvailable;
    bool m_fixAvailableHasBeenSet = false;

    Aws::Vector<StringFilter> m_lambdaFunctionName;
    bool m_lambdaFunctionNameHasBeenSet = false;

    Aws::Vector<StringFilter> m_lambdaFunctionLayers;
    bool m_lambdaFunctionLayersHasBeenSet = false;

    Aws::Vector<StringFilter> m_lambdaFunctionRuntime;
    bool m_lambdaFunctionRuntimeHasBeenSet = false;

    Aws::Vector<DateFilter> m_lambdaFunctionLastModifiedAt;
    bool m_lambdaFunctionLastModifiedAtHasBeenSet = false;

    Aws::Vector<StringFilter> m_lambdaFunctionExecutionRoleArn;
    bool m_lambdaFunctionExecutionRoleArnHasBeenSet = false;

    Aws::Vector<StringFilter> m_exploitAvailable;
    bool m_exploitAvailableHasBeenSet = false;

    Aws::Vector<StringFilter> m_codeVulnerabilityDetectorName;
    bool m_codeVulnerabilityDetectorNameHasBeenSet = false;

    Aws::Vector<StringFilter> m_codeVulnerabilityDetectorTags;
    bool m_codeVulnerabilityDetectorTagsHasBeenSet = false;

    Aws::Vector<StringFilter> m_codeVulnerabilityFilePath;
    bool m_codeVulnerabilityFilePathHasBeenSet = false;

    Aws::Vector<NumberFilter> m_epssScore;
    bool m_epssScoreHasBeenSet = false;

    Aws::Vector<StringFilter> m_codeRepositoryProjectName;
    bool m_codeRepositoryProjectNameHasBeenSet = false;

    Aws::Vector<StringFilter> m_codeRepositoryProviderType;
    bool m_codeRepositoryProviderTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
