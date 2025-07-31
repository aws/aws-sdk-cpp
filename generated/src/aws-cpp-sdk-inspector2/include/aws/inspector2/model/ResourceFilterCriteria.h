/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/ResourceStringFilter.h>
#include <aws/inspector2/model/ResourceMapFilter.h>
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
   * <p>The resource filter criteria for a Software bill of materials (SBOM)
   * report.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ResourceFilterCriteria">AWS
   * API Reference</a></p>
   */
  class ResourceFilterCriteria
  {
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
    template<typename AccountIdT = Aws::Vector<ResourceStringFilter>>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::Vector<ResourceStringFilter>>
    ResourceFilterCriteria& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    template<typename AccountIdT = ResourceStringFilter>
    ResourceFilterCriteria& AddAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId.emplace_back(std::forward<AccountIdT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resource IDs used as resource filter criteria.</p>
     */
    inline const Aws::Vector<ResourceStringFilter>& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::Vector<ResourceStringFilter>>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::Vector<ResourceStringFilter>>
    ResourceFilterCriteria& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    template<typename ResourceIdT = ResourceStringFilter>
    ResourceFilterCriteria& AddResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId.emplace_back(std::forward<ResourceIdT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resource types used as resource filter criteria.</p>
     */
    inline const Aws::Vector<ResourceStringFilter>& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::Vector<ResourceStringFilter>>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::Vector<ResourceStringFilter>>
    ResourceFilterCriteria& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    template<typename ResourceTypeT = ResourceStringFilter>
    ResourceFilterCriteria& AddResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType.emplace_back(std::forward<ResourceTypeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ECR repository names used as resource filter criteria.</p>
     */
    inline const Aws::Vector<ResourceStringFilter>& GetEcrRepositoryName() const { return m_ecrRepositoryName; }
    inline bool EcrRepositoryNameHasBeenSet() const { return m_ecrRepositoryNameHasBeenSet; }
    template<typename EcrRepositoryNameT = Aws::Vector<ResourceStringFilter>>
    void SetEcrRepositoryName(EcrRepositoryNameT&& value) { m_ecrRepositoryNameHasBeenSet = true; m_ecrRepositoryName = std::forward<EcrRepositoryNameT>(value); }
    template<typename EcrRepositoryNameT = Aws::Vector<ResourceStringFilter>>
    ResourceFilterCriteria& WithEcrRepositoryName(EcrRepositoryNameT&& value) { SetEcrRepositoryName(std::forward<EcrRepositoryNameT>(value)); return *this;}
    template<typename EcrRepositoryNameT = ResourceStringFilter>
    ResourceFilterCriteria& AddEcrRepositoryName(EcrRepositoryNameT&& value) { m_ecrRepositoryNameHasBeenSet = true; m_ecrRepositoryName.emplace_back(std::forward<EcrRepositoryNameT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Lambda function name used as resource filter
     * criteria.</p>
     */
    inline const Aws::Vector<ResourceStringFilter>& GetLambdaFunctionName() const { return m_lambdaFunctionName; }
    inline bool LambdaFunctionNameHasBeenSet() const { return m_lambdaFunctionNameHasBeenSet; }
    template<typename LambdaFunctionNameT = Aws::Vector<ResourceStringFilter>>
    void SetLambdaFunctionName(LambdaFunctionNameT&& value) { m_lambdaFunctionNameHasBeenSet = true; m_lambdaFunctionName = std::forward<LambdaFunctionNameT>(value); }
    template<typename LambdaFunctionNameT = Aws::Vector<ResourceStringFilter>>
    ResourceFilterCriteria& WithLambdaFunctionName(LambdaFunctionNameT&& value) { SetLambdaFunctionName(std::forward<LambdaFunctionNameT>(value)); return *this;}
    template<typename LambdaFunctionNameT = ResourceStringFilter>
    ResourceFilterCriteria& AddLambdaFunctionName(LambdaFunctionNameT&& value) { m_lambdaFunctionNameHasBeenSet = true; m_lambdaFunctionName.emplace_back(std::forward<LambdaFunctionNameT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ECR image tags used as resource filter criteria.</p>
     */
    inline const Aws::Vector<ResourceStringFilter>& GetEcrImageTags() const { return m_ecrImageTags; }
    inline bool EcrImageTagsHasBeenSet() const { return m_ecrImageTagsHasBeenSet; }
    template<typename EcrImageTagsT = Aws::Vector<ResourceStringFilter>>
    void SetEcrImageTags(EcrImageTagsT&& value) { m_ecrImageTagsHasBeenSet = true; m_ecrImageTags = std::forward<EcrImageTagsT>(value); }
    template<typename EcrImageTagsT = Aws::Vector<ResourceStringFilter>>
    ResourceFilterCriteria& WithEcrImageTags(EcrImageTagsT&& value) { SetEcrImageTags(std::forward<EcrImageTagsT>(value)); return *this;}
    template<typename EcrImageTagsT = ResourceStringFilter>
    ResourceFilterCriteria& AddEcrImageTags(EcrImageTagsT&& value) { m_ecrImageTagsHasBeenSet = true; m_ecrImageTags.emplace_back(std::forward<EcrImageTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The EC2 instance tags used as resource filter criteria.</p>
     */
    inline const Aws::Vector<ResourceMapFilter>& GetEc2InstanceTags() const { return m_ec2InstanceTags; }
    inline bool Ec2InstanceTagsHasBeenSet() const { return m_ec2InstanceTagsHasBeenSet; }
    template<typename Ec2InstanceTagsT = Aws::Vector<ResourceMapFilter>>
    void SetEc2InstanceTags(Ec2InstanceTagsT&& value) { m_ec2InstanceTagsHasBeenSet = true; m_ec2InstanceTags = std::forward<Ec2InstanceTagsT>(value); }
    template<typename Ec2InstanceTagsT = Aws::Vector<ResourceMapFilter>>
    ResourceFilterCriteria& WithEc2InstanceTags(Ec2InstanceTagsT&& value) { SetEc2InstanceTags(std::forward<Ec2InstanceTagsT>(value)); return *this;}
    template<typename Ec2InstanceTagsT = ResourceMapFilter>
    ResourceFilterCriteria& AddEc2InstanceTags(Ec2InstanceTagsT&& value) { m_ec2InstanceTagsHasBeenSet = true; m_ec2InstanceTags.emplace_back(std::forward<Ec2InstanceTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Lambda function tags used as resource filter
     * criteria.</p>
     */
    inline const Aws::Vector<ResourceMapFilter>& GetLambdaFunctionTags() const { return m_lambdaFunctionTags; }
    inline bool LambdaFunctionTagsHasBeenSet() const { return m_lambdaFunctionTagsHasBeenSet; }
    template<typename LambdaFunctionTagsT = Aws::Vector<ResourceMapFilter>>
    void SetLambdaFunctionTags(LambdaFunctionTagsT&& value) { m_lambdaFunctionTagsHasBeenSet = true; m_lambdaFunctionTags = std::forward<LambdaFunctionTagsT>(value); }
    template<typename LambdaFunctionTagsT = Aws::Vector<ResourceMapFilter>>
    ResourceFilterCriteria& WithLambdaFunctionTags(LambdaFunctionTagsT&& value) { SetLambdaFunctionTags(std::forward<LambdaFunctionTagsT>(value)); return *this;}
    template<typename LambdaFunctionTagsT = ResourceMapFilter>
    ResourceFilterCriteria& AddLambdaFunctionTags(LambdaFunctionTagsT&& value) { m_lambdaFunctionTagsHasBeenSet = true; m_lambdaFunctionTags.emplace_back(std::forward<LambdaFunctionTagsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ResourceStringFilter> m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<ResourceStringFilter> m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Vector<ResourceStringFilter> m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<ResourceStringFilter> m_ecrRepositoryName;
    bool m_ecrRepositoryNameHasBeenSet = false;

    Aws::Vector<ResourceStringFilter> m_lambdaFunctionName;
    bool m_lambdaFunctionNameHasBeenSet = false;

    Aws::Vector<ResourceStringFilter> m_ecrImageTags;
    bool m_ecrImageTagsHasBeenSet = false;

    Aws::Vector<ResourceMapFilter> m_ec2InstanceTags;
    bool m_ec2InstanceTagsHasBeenSet = false;

    Aws::Vector<ResourceMapFilter> m_lambdaFunctionTags;
    bool m_lambdaFunctionTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
