/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/ResourceMapFilter.h>
#include <aws/inspector2/model/ResourceStringFilter.h>

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
 * <p>The resource filter criteria for a Software bill of materials (SBOM)
 * report.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ResourceFilterCriteria">AWS
 * API Reference</a></p>
 */
class ResourceFilterCriteria {
 public:
  AWS_INSPECTOR2_API ResourceFilterCriteria() = default;
  AWS_INSPECTOR2_API ResourceFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API ResourceFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The account IDs used as resource filter criteria.</p>
   */
  inline const Aws::Vector<ResourceStringFilter>& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::Vector<ResourceStringFilter>>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::Vector<ResourceStringFilter>>
  ResourceFilterCriteria& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  template <typename AccountIdT = ResourceStringFilter>
  ResourceFilterCriteria& AddAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId.emplace_back(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource IDs used as resource filter criteria.</p>
   */
  inline const Aws::Vector<ResourceStringFilter>& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::Vector<ResourceStringFilter>>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::Vector<ResourceStringFilter>>
  ResourceFilterCriteria& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  template <typename ResourceIdT = ResourceStringFilter>
  ResourceFilterCriteria& AddResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId.emplace_back(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource types used as resource filter criteria.</p>
   */
  inline const Aws::Vector<ResourceStringFilter>& GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  template <typename ResourceTypeT = Aws::Vector<ResourceStringFilter>>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::Vector<ResourceStringFilter>>
  ResourceFilterCriteria& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  template <typename ResourceTypeT = ResourceStringFilter>
  ResourceFilterCriteria& AddResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType.emplace_back(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ECR repository names used as resource filter criteria.</p>
   */
  inline const Aws::Vector<ResourceStringFilter>& GetEcrRepositoryName() const { return m_ecrRepositoryName; }
  inline bool EcrRepositoryNameHasBeenSet() const { return m_ecrRepositoryNameHasBeenSet; }
  template <typename EcrRepositoryNameT = Aws::Vector<ResourceStringFilter>>
  void SetEcrRepositoryName(EcrRepositoryNameT&& value) {
    m_ecrRepositoryNameHasBeenSet = true;
    m_ecrRepositoryName = std::forward<EcrRepositoryNameT>(value);
  }
  template <typename EcrRepositoryNameT = Aws::Vector<ResourceStringFilter>>
  ResourceFilterCriteria& WithEcrRepositoryName(EcrRepositoryNameT&& value) {
    SetEcrRepositoryName(std::forward<EcrRepositoryNameT>(value));
    return *this;
  }
  template <typename EcrRepositoryNameT = ResourceStringFilter>
  ResourceFilterCriteria& AddEcrRepositoryName(EcrRepositoryNameT&& value) {
    m_ecrRepositoryNameHasBeenSet = true;
    m_ecrRepositoryName.emplace_back(std::forward<EcrRepositoryNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Lambda function name used as resource filter
   * criteria.</p>
   */
  inline const Aws::Vector<ResourceStringFilter>& GetLambdaFunctionName() const { return m_lambdaFunctionName; }
  inline bool LambdaFunctionNameHasBeenSet() const { return m_lambdaFunctionNameHasBeenSet; }
  template <typename LambdaFunctionNameT = Aws::Vector<ResourceStringFilter>>
  void SetLambdaFunctionName(LambdaFunctionNameT&& value) {
    m_lambdaFunctionNameHasBeenSet = true;
    m_lambdaFunctionName = std::forward<LambdaFunctionNameT>(value);
  }
  template <typename LambdaFunctionNameT = Aws::Vector<ResourceStringFilter>>
  ResourceFilterCriteria& WithLambdaFunctionName(LambdaFunctionNameT&& value) {
    SetLambdaFunctionName(std::forward<LambdaFunctionNameT>(value));
    return *this;
  }
  template <typename LambdaFunctionNameT = ResourceStringFilter>
  ResourceFilterCriteria& AddLambdaFunctionName(LambdaFunctionNameT&& value) {
    m_lambdaFunctionNameHasBeenSet = true;
    m_lambdaFunctionName.emplace_back(std::forward<LambdaFunctionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ECR image tags used as resource filter criteria.</p>
   */
  inline const Aws::Vector<ResourceStringFilter>& GetEcrImageTags() const { return m_ecrImageTags; }
  inline bool EcrImageTagsHasBeenSet() const { return m_ecrImageTagsHasBeenSet; }
  template <typename EcrImageTagsT = Aws::Vector<ResourceStringFilter>>
  void SetEcrImageTags(EcrImageTagsT&& value) {
    m_ecrImageTagsHasBeenSet = true;
    m_ecrImageTags = std::forward<EcrImageTagsT>(value);
  }
  template <typename EcrImageTagsT = Aws::Vector<ResourceStringFilter>>
  ResourceFilterCriteria& WithEcrImageTags(EcrImageTagsT&& value) {
    SetEcrImageTags(std::forward<EcrImageTagsT>(value));
    return *this;
  }
  template <typename EcrImageTagsT = ResourceStringFilter>
  ResourceFilterCriteria& AddEcrImageTags(EcrImageTagsT&& value) {
    m_ecrImageTagsHasBeenSet = true;
    m_ecrImageTags.emplace_back(std::forward<EcrImageTagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The EC2 instance tags used as resource filter criteria.</p>
   */
  inline const Aws::Vector<ResourceMapFilter>& GetEc2InstanceTags() const { return m_ec2InstanceTags; }
  inline bool Ec2InstanceTagsHasBeenSet() const { return m_ec2InstanceTagsHasBeenSet; }
  template <typename Ec2InstanceTagsT = Aws::Vector<ResourceMapFilter>>
  void SetEc2InstanceTags(Ec2InstanceTagsT&& value) {
    m_ec2InstanceTagsHasBeenSet = true;
    m_ec2InstanceTags = std::forward<Ec2InstanceTagsT>(value);
  }
  template <typename Ec2InstanceTagsT = Aws::Vector<ResourceMapFilter>>
  ResourceFilterCriteria& WithEc2InstanceTags(Ec2InstanceTagsT&& value) {
    SetEc2InstanceTags(std::forward<Ec2InstanceTagsT>(value));
    return *this;
  }
  template <typename Ec2InstanceTagsT = ResourceMapFilter>
  ResourceFilterCriteria& AddEc2InstanceTags(Ec2InstanceTagsT&& value) {
    m_ec2InstanceTagsHasBeenSet = true;
    m_ec2InstanceTags.emplace_back(std::forward<Ec2InstanceTagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Lambda function tags used as resource filter
   * criteria.</p>
   */
  inline const Aws::Vector<ResourceMapFilter>& GetLambdaFunctionTags() const { return m_lambdaFunctionTags; }
  inline bool LambdaFunctionTagsHasBeenSet() const { return m_lambdaFunctionTagsHasBeenSet; }
  template <typename LambdaFunctionTagsT = Aws::Vector<ResourceMapFilter>>
  void SetLambdaFunctionTags(LambdaFunctionTagsT&& value) {
    m_lambdaFunctionTagsHasBeenSet = true;
    m_lambdaFunctionTags = std::forward<LambdaFunctionTagsT>(value);
  }
  template <typename LambdaFunctionTagsT = Aws::Vector<ResourceMapFilter>>
  ResourceFilterCriteria& WithLambdaFunctionTags(LambdaFunctionTagsT&& value) {
    SetLambdaFunctionTags(std::forward<LambdaFunctionTagsT>(value));
    return *this;
  }
  template <typename LambdaFunctionTagsT = ResourceMapFilter>
  ResourceFilterCriteria& AddLambdaFunctionTags(LambdaFunctionTagsT&& value) {
    m_lambdaFunctionTagsHasBeenSet = true;
    m_lambdaFunctionTags.emplace_back(std::forward<LambdaFunctionTagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud providers used as resource filter criteria.</p>
   */
  inline const Aws::Vector<ResourceStringFilter>& GetCloudProvider() const { return m_cloudProvider; }
  inline bool CloudProviderHasBeenSet() const { return m_cloudProviderHasBeenSet; }
  template <typename CloudProviderT = Aws::Vector<ResourceStringFilter>>
  void SetCloudProvider(CloudProviderT&& value) {
    m_cloudProviderHasBeenSet = true;
    m_cloudProvider = std::forward<CloudProviderT>(value);
  }
  template <typename CloudProviderT = Aws::Vector<ResourceStringFilter>>
  ResourceFilterCriteria& WithCloudProvider(CloudProviderT&& value) {
    SetCloudProvider(std::forward<CloudProviderT>(value));
    return *this;
  }
  template <typename CloudProviderT = ResourceStringFilter>
  ResourceFilterCriteria& AddCloudProvider(CloudProviderT&& value) {
    m_cloudProviderHasBeenSet = true;
    m_cloudProvider.emplace_back(std::forward<CloudProviderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud provider account IDs used as resource filter criteria.</p>
   */
  inline const Aws::Vector<ResourceStringFilter>& GetCloudProviderAccountId() const { return m_cloudProviderAccountId; }
  inline bool CloudProviderAccountIdHasBeenSet() const { return m_cloudProviderAccountIdHasBeenSet; }
  template <typename CloudProviderAccountIdT = Aws::Vector<ResourceStringFilter>>
  void SetCloudProviderAccountId(CloudProviderAccountIdT&& value) {
    m_cloudProviderAccountIdHasBeenSet = true;
    m_cloudProviderAccountId = std::forward<CloudProviderAccountIdT>(value);
  }
  template <typename CloudProviderAccountIdT = Aws::Vector<ResourceStringFilter>>
  ResourceFilterCriteria& WithCloudProviderAccountId(CloudProviderAccountIdT&& value) {
    SetCloudProviderAccountId(std::forward<CloudProviderAccountIdT>(value));
    return *this;
  }
  template <typename CloudProviderAccountIdT = ResourceStringFilter>
  ResourceFilterCriteria& AddCloudProviderAccountId(CloudProviderAccountIdT&& value) {
    m_cloudProviderAccountIdHasBeenSet = true;
    m_cloudProviderAccountId.emplace_back(std::forward<CloudProviderAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud provider organization IDs used as resource filter criteria.</p>
   */
  inline const Aws::Vector<ResourceStringFilter>& GetCloudProviderOrgId() const { return m_cloudProviderOrgId; }
  inline bool CloudProviderOrgIdHasBeenSet() const { return m_cloudProviderOrgIdHasBeenSet; }
  template <typename CloudProviderOrgIdT = Aws::Vector<ResourceStringFilter>>
  void SetCloudProviderOrgId(CloudProviderOrgIdT&& value) {
    m_cloudProviderOrgIdHasBeenSet = true;
    m_cloudProviderOrgId = std::forward<CloudProviderOrgIdT>(value);
  }
  template <typename CloudProviderOrgIdT = Aws::Vector<ResourceStringFilter>>
  ResourceFilterCriteria& WithCloudProviderOrgId(CloudProviderOrgIdT&& value) {
    SetCloudProviderOrgId(std::forward<CloudProviderOrgIdT>(value));
    return *this;
  }
  template <typename CloudProviderOrgIdT = ResourceStringFilter>
  ResourceFilterCriteria& AddCloudProviderOrgId(CloudProviderOrgIdT&& value) {
    m_cloudProviderOrgIdHasBeenSet = true;
    m_cloudProviderOrgId.emplace_back(std::forward<CloudProviderOrgIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud provider regions used as resource filter criteria.</p>
   */
  inline const Aws::Vector<ResourceStringFilter>& GetCloudProviderRegion() const { return m_cloudProviderRegion; }
  inline bool CloudProviderRegionHasBeenSet() const { return m_cloudProviderRegionHasBeenSet; }
  template <typename CloudProviderRegionT = Aws::Vector<ResourceStringFilter>>
  void SetCloudProviderRegion(CloudProviderRegionT&& value) {
    m_cloudProviderRegionHasBeenSet = true;
    m_cloudProviderRegion = std::forward<CloudProviderRegionT>(value);
  }
  template <typename CloudProviderRegionT = Aws::Vector<ResourceStringFilter>>
  ResourceFilterCriteria& WithCloudProviderRegion(CloudProviderRegionT&& value) {
    SetCloudProviderRegion(std::forward<CloudProviderRegionT>(value));
    return *this;
  }
  template <typename CloudProviderRegionT = ResourceStringFilter>
  ResourceFilterCriteria& AddCloudProviderRegion(CloudProviderRegionT&& value) {
    m_cloudProviderRegionHasBeenSet = true;
    m_cloudProviderRegion.emplace_back(std::forward<CloudProviderRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud VM instance tags used as resource filter criteria.</p>
   */
  inline const Aws::Vector<ResourceMapFilter>& GetCloudVmInstanceTags() const { return m_cloudVmInstanceTags; }
  inline bool CloudVmInstanceTagsHasBeenSet() const { return m_cloudVmInstanceTagsHasBeenSet; }
  template <typename CloudVmInstanceTagsT = Aws::Vector<ResourceMapFilter>>
  void SetCloudVmInstanceTags(CloudVmInstanceTagsT&& value) {
    m_cloudVmInstanceTagsHasBeenSet = true;
    m_cloudVmInstanceTags = std::forward<CloudVmInstanceTagsT>(value);
  }
  template <typename CloudVmInstanceTagsT = Aws::Vector<ResourceMapFilter>>
  ResourceFilterCriteria& WithCloudVmInstanceTags(CloudVmInstanceTagsT&& value) {
    SetCloudVmInstanceTags(std::forward<CloudVmInstanceTagsT>(value));
    return *this;
  }
  template <typename CloudVmInstanceTagsT = ResourceMapFilter>
  ResourceFilterCriteria& AddCloudVmInstanceTags(CloudVmInstanceTagsT&& value) {
    m_cloudVmInstanceTagsHasBeenSet = true;
    m_cloudVmInstanceTags.emplace_back(std::forward<CloudVmInstanceTagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud container image tags used as resource filter criteria.</p>
   */
  inline const Aws::Vector<ResourceStringFilter>& GetCloudContainerImageTags() const { return m_cloudContainerImageTags; }
  inline bool CloudContainerImageTagsHasBeenSet() const { return m_cloudContainerImageTagsHasBeenSet; }
  template <typename CloudContainerImageTagsT = Aws::Vector<ResourceStringFilter>>
  void SetCloudContainerImageTags(CloudContainerImageTagsT&& value) {
    m_cloudContainerImageTagsHasBeenSet = true;
    m_cloudContainerImageTags = std::forward<CloudContainerImageTagsT>(value);
  }
  template <typename CloudContainerImageTagsT = Aws::Vector<ResourceStringFilter>>
  ResourceFilterCriteria& WithCloudContainerImageTags(CloudContainerImageTagsT&& value) {
    SetCloudContainerImageTags(std::forward<CloudContainerImageTagsT>(value));
    return *this;
  }
  template <typename CloudContainerImageTagsT = ResourceStringFilter>
  ResourceFilterCriteria& AddCloudContainerImageTags(CloudContainerImageTagsT&& value) {
    m_cloudContainerImageTagsHasBeenSet = true;
    m_cloudContainerImageTags.emplace_back(std::forward<CloudContainerImageTagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud container repository names used as resource filter criteria.</p>
   */
  inline const Aws::Vector<ResourceStringFilter>& GetCloudContainerRepositoryName() const { return m_cloudContainerRepositoryName; }
  inline bool CloudContainerRepositoryNameHasBeenSet() const { return m_cloudContainerRepositoryNameHasBeenSet; }
  template <typename CloudContainerRepositoryNameT = Aws::Vector<ResourceStringFilter>>
  void SetCloudContainerRepositoryName(CloudContainerRepositoryNameT&& value) {
    m_cloudContainerRepositoryNameHasBeenSet = true;
    m_cloudContainerRepositoryName = std::forward<CloudContainerRepositoryNameT>(value);
  }
  template <typename CloudContainerRepositoryNameT = Aws::Vector<ResourceStringFilter>>
  ResourceFilterCriteria& WithCloudContainerRepositoryName(CloudContainerRepositoryNameT&& value) {
    SetCloudContainerRepositoryName(std::forward<CloudContainerRepositoryNameT>(value));
    return *this;
  }
  template <typename CloudContainerRepositoryNameT = ResourceStringFilter>
  ResourceFilterCriteria& AddCloudContainerRepositoryName(CloudContainerRepositoryNameT&& value) {
    m_cloudContainerRepositoryNameHasBeenSet = true;
    m_cloudContainerRepositoryName.emplace_back(std::forward<CloudContainerRepositoryNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud container registry names used as resource filter criteria.</p>
   */
  inline const Aws::Vector<ResourceStringFilter>& GetCloudContainerRegistryName() const { return m_cloudContainerRegistryName; }
  inline bool CloudContainerRegistryNameHasBeenSet() const { return m_cloudContainerRegistryNameHasBeenSet; }
  template <typename CloudContainerRegistryNameT = Aws::Vector<ResourceStringFilter>>
  void SetCloudContainerRegistryName(CloudContainerRegistryNameT&& value) {
    m_cloudContainerRegistryNameHasBeenSet = true;
    m_cloudContainerRegistryName = std::forward<CloudContainerRegistryNameT>(value);
  }
  template <typename CloudContainerRegistryNameT = Aws::Vector<ResourceStringFilter>>
  ResourceFilterCriteria& WithCloudContainerRegistryName(CloudContainerRegistryNameT&& value) {
    SetCloudContainerRegistryName(std::forward<CloudContainerRegistryNameT>(value));
    return *this;
  }
  template <typename CloudContainerRegistryNameT = ResourceStringFilter>
  ResourceFilterCriteria& AddCloudContainerRegistryName(CloudContainerRegistryNameT&& value) {
    m_cloudContainerRegistryNameHasBeenSet = true;
    m_cloudContainerRegistryName.emplace_back(std::forward<CloudContainerRegistryNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud serverless function names used as resource filter criteria.</p>
   */
  inline const Aws::Vector<ResourceStringFilter>& GetCloudServerlessFunctionName() const { return m_cloudServerlessFunctionName; }
  inline bool CloudServerlessFunctionNameHasBeenSet() const { return m_cloudServerlessFunctionNameHasBeenSet; }
  template <typename CloudServerlessFunctionNameT = Aws::Vector<ResourceStringFilter>>
  void SetCloudServerlessFunctionName(CloudServerlessFunctionNameT&& value) {
    m_cloudServerlessFunctionNameHasBeenSet = true;
    m_cloudServerlessFunctionName = std::forward<CloudServerlessFunctionNameT>(value);
  }
  template <typename CloudServerlessFunctionNameT = Aws::Vector<ResourceStringFilter>>
  ResourceFilterCriteria& WithCloudServerlessFunctionName(CloudServerlessFunctionNameT&& value) {
    SetCloudServerlessFunctionName(std::forward<CloudServerlessFunctionNameT>(value));
    return *this;
  }
  template <typename CloudServerlessFunctionNameT = ResourceStringFilter>
  ResourceFilterCriteria& AddCloudServerlessFunctionName(CloudServerlessFunctionNameT&& value) {
    m_cloudServerlessFunctionNameHasBeenSet = true;
    m_cloudServerlessFunctionName.emplace_back(std::forward<CloudServerlessFunctionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud serverless function runtimes used as resource filter criteria.</p>
   */
  inline const Aws::Vector<ResourceStringFilter>& GetCloudServerlessFunctionRuntime() const { return m_cloudServerlessFunctionRuntime; }
  inline bool CloudServerlessFunctionRuntimeHasBeenSet() const { return m_cloudServerlessFunctionRuntimeHasBeenSet; }
  template <typename CloudServerlessFunctionRuntimeT = Aws::Vector<ResourceStringFilter>>
  void SetCloudServerlessFunctionRuntime(CloudServerlessFunctionRuntimeT&& value) {
    m_cloudServerlessFunctionRuntimeHasBeenSet = true;
    m_cloudServerlessFunctionRuntime = std::forward<CloudServerlessFunctionRuntimeT>(value);
  }
  template <typename CloudServerlessFunctionRuntimeT = Aws::Vector<ResourceStringFilter>>
  ResourceFilterCriteria& WithCloudServerlessFunctionRuntime(CloudServerlessFunctionRuntimeT&& value) {
    SetCloudServerlessFunctionRuntime(std::forward<CloudServerlessFunctionRuntimeT>(value));
    return *this;
  }
  template <typename CloudServerlessFunctionRuntimeT = ResourceStringFilter>
  ResourceFilterCriteria& AddCloudServerlessFunctionRuntime(CloudServerlessFunctionRuntimeT&& value) {
    m_cloudServerlessFunctionRuntimeHasBeenSet = true;
    m_cloudServerlessFunctionRuntime.emplace_back(std::forward<CloudServerlessFunctionRuntimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud serverless function tags used as resource filter criteria.</p>
   */
  inline const Aws::Vector<ResourceMapFilter>& GetCloudServerlessFunctionTags() const { return m_cloudServerlessFunctionTags; }
  inline bool CloudServerlessFunctionTagsHasBeenSet() const { return m_cloudServerlessFunctionTagsHasBeenSet; }
  template <typename CloudServerlessFunctionTagsT = Aws::Vector<ResourceMapFilter>>
  void SetCloudServerlessFunctionTags(CloudServerlessFunctionTagsT&& value) {
    m_cloudServerlessFunctionTagsHasBeenSet = true;
    m_cloudServerlessFunctionTags = std::forward<CloudServerlessFunctionTagsT>(value);
  }
  template <typename CloudServerlessFunctionTagsT = Aws::Vector<ResourceMapFilter>>
  ResourceFilterCriteria& WithCloudServerlessFunctionTags(CloudServerlessFunctionTagsT&& value) {
    SetCloudServerlessFunctionTags(std::forward<CloudServerlessFunctionTagsT>(value));
    return *this;
  }
  template <typename CloudServerlessFunctionTagsT = ResourceMapFilter>
  ResourceFilterCriteria& AddCloudServerlessFunctionTags(CloudServerlessFunctionTagsT&& value) {
    m_cloudServerlessFunctionTagsHasBeenSet = true;
    m_cloudServerlessFunctionTags.emplace_back(std::forward<CloudServerlessFunctionTagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ResourceStringFilter> m_accountId;

  Aws::Vector<ResourceStringFilter> m_resourceId;

  Aws::Vector<ResourceStringFilter> m_resourceType;

  Aws::Vector<ResourceStringFilter> m_ecrRepositoryName;

  Aws::Vector<ResourceStringFilter> m_lambdaFunctionName;

  Aws::Vector<ResourceStringFilter> m_ecrImageTags;

  Aws::Vector<ResourceMapFilter> m_ec2InstanceTags;

  Aws::Vector<ResourceMapFilter> m_lambdaFunctionTags;

  Aws::Vector<ResourceStringFilter> m_cloudProvider;

  Aws::Vector<ResourceStringFilter> m_cloudProviderAccountId;

  Aws::Vector<ResourceStringFilter> m_cloudProviderOrgId;

  Aws::Vector<ResourceStringFilter> m_cloudProviderRegion;

  Aws::Vector<ResourceMapFilter> m_cloudVmInstanceTags;

  Aws::Vector<ResourceStringFilter> m_cloudContainerImageTags;

  Aws::Vector<ResourceStringFilter> m_cloudContainerRepositoryName;

  Aws::Vector<ResourceStringFilter> m_cloudContainerRegistryName;

  Aws::Vector<ResourceStringFilter> m_cloudServerlessFunctionName;

  Aws::Vector<ResourceStringFilter> m_cloudServerlessFunctionRuntime;

  Aws::Vector<ResourceMapFilter> m_cloudServerlessFunctionTags;
  bool m_accountIdHasBeenSet = false;
  bool m_resourceIdHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_ecrRepositoryNameHasBeenSet = false;
  bool m_lambdaFunctionNameHasBeenSet = false;
  bool m_ecrImageTagsHasBeenSet = false;
  bool m_ec2InstanceTagsHasBeenSet = false;
  bool m_lambdaFunctionTagsHasBeenSet = false;
  bool m_cloudProviderHasBeenSet = false;
  bool m_cloudProviderAccountIdHasBeenSet = false;
  bool m_cloudProviderOrgIdHasBeenSet = false;
  bool m_cloudProviderRegionHasBeenSet = false;
  bool m_cloudVmInstanceTagsHasBeenSet = false;
  bool m_cloudContainerImageTagsHasBeenSet = false;
  bool m_cloudContainerRepositoryNameHasBeenSet = false;
  bool m_cloudContainerRegistryNameHasBeenSet = false;
  bool m_cloudServerlessFunctionNameHasBeenSet = false;
  bool m_cloudServerlessFunctionRuntimeHasBeenSet = false;
  bool m_cloudServerlessFunctionTagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
