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
    AWS_INSPECTOR2_API ResourceFilterCriteria();
    AWS_INSPECTOR2_API ResourceFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API ResourceFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account IDs used as resource filter criteria.</p>
     */
    inline const Aws::Vector<ResourceStringFilter>& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::Vector<ResourceStringFilter>& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::Vector<ResourceStringFilter>&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline ResourceFilterCriteria& WithAccountId(const Aws::Vector<ResourceStringFilter>& value) { SetAccountId(value); return *this;}
    inline ResourceFilterCriteria& WithAccountId(Aws::Vector<ResourceStringFilter>&& value) { SetAccountId(std::move(value)); return *this;}
    inline ResourceFilterCriteria& AddAccountId(const ResourceStringFilter& value) { m_accountIdHasBeenSet = true; m_accountId.push_back(value); return *this; }
    inline ResourceFilterCriteria& AddAccountId(ResourceStringFilter&& value) { m_accountIdHasBeenSet = true; m_accountId.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The EC2 instance tags used as resource filter criteria.</p>
     */
    inline const Aws::Vector<ResourceMapFilter>& GetEc2InstanceTags() const{ return m_ec2InstanceTags; }
    inline bool Ec2InstanceTagsHasBeenSet() const { return m_ec2InstanceTagsHasBeenSet; }
    inline void SetEc2InstanceTags(const Aws::Vector<ResourceMapFilter>& value) { m_ec2InstanceTagsHasBeenSet = true; m_ec2InstanceTags = value; }
    inline void SetEc2InstanceTags(Aws::Vector<ResourceMapFilter>&& value) { m_ec2InstanceTagsHasBeenSet = true; m_ec2InstanceTags = std::move(value); }
    inline ResourceFilterCriteria& WithEc2InstanceTags(const Aws::Vector<ResourceMapFilter>& value) { SetEc2InstanceTags(value); return *this;}
    inline ResourceFilterCriteria& WithEc2InstanceTags(Aws::Vector<ResourceMapFilter>&& value) { SetEc2InstanceTags(std::move(value)); return *this;}
    inline ResourceFilterCriteria& AddEc2InstanceTags(const ResourceMapFilter& value) { m_ec2InstanceTagsHasBeenSet = true; m_ec2InstanceTags.push_back(value); return *this; }
    inline ResourceFilterCriteria& AddEc2InstanceTags(ResourceMapFilter&& value) { m_ec2InstanceTagsHasBeenSet = true; m_ec2InstanceTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ECR image tags used as resource filter criteria.</p>
     */
    inline const Aws::Vector<ResourceStringFilter>& GetEcrImageTags() const{ return m_ecrImageTags; }
    inline bool EcrImageTagsHasBeenSet() const { return m_ecrImageTagsHasBeenSet; }
    inline void SetEcrImageTags(const Aws::Vector<ResourceStringFilter>& value) { m_ecrImageTagsHasBeenSet = true; m_ecrImageTags = value; }
    inline void SetEcrImageTags(Aws::Vector<ResourceStringFilter>&& value) { m_ecrImageTagsHasBeenSet = true; m_ecrImageTags = std::move(value); }
    inline ResourceFilterCriteria& WithEcrImageTags(const Aws::Vector<ResourceStringFilter>& value) { SetEcrImageTags(value); return *this;}
    inline ResourceFilterCriteria& WithEcrImageTags(Aws::Vector<ResourceStringFilter>&& value) { SetEcrImageTags(std::move(value)); return *this;}
    inline ResourceFilterCriteria& AddEcrImageTags(const ResourceStringFilter& value) { m_ecrImageTagsHasBeenSet = true; m_ecrImageTags.push_back(value); return *this; }
    inline ResourceFilterCriteria& AddEcrImageTags(ResourceStringFilter&& value) { m_ecrImageTagsHasBeenSet = true; m_ecrImageTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ECR repository names used as resource filter criteria.</p>
     */
    inline const Aws::Vector<ResourceStringFilter>& GetEcrRepositoryName() const{ return m_ecrRepositoryName; }
    inline bool EcrRepositoryNameHasBeenSet() const { return m_ecrRepositoryNameHasBeenSet; }
    inline void SetEcrRepositoryName(const Aws::Vector<ResourceStringFilter>& value) { m_ecrRepositoryNameHasBeenSet = true; m_ecrRepositoryName = value; }
    inline void SetEcrRepositoryName(Aws::Vector<ResourceStringFilter>&& value) { m_ecrRepositoryNameHasBeenSet = true; m_ecrRepositoryName = std::move(value); }
    inline ResourceFilterCriteria& WithEcrRepositoryName(const Aws::Vector<ResourceStringFilter>& value) { SetEcrRepositoryName(value); return *this;}
    inline ResourceFilterCriteria& WithEcrRepositoryName(Aws::Vector<ResourceStringFilter>&& value) { SetEcrRepositoryName(std::move(value)); return *this;}
    inline ResourceFilterCriteria& AddEcrRepositoryName(const ResourceStringFilter& value) { m_ecrRepositoryNameHasBeenSet = true; m_ecrRepositoryName.push_back(value); return *this; }
    inline ResourceFilterCriteria& AddEcrRepositoryName(ResourceStringFilter&& value) { m_ecrRepositoryNameHasBeenSet = true; m_ecrRepositoryName.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Lambda function name used as resource filter
     * criteria.</p>
     */
    inline const Aws::Vector<ResourceStringFilter>& GetLambdaFunctionName() const{ return m_lambdaFunctionName; }
    inline bool LambdaFunctionNameHasBeenSet() const { return m_lambdaFunctionNameHasBeenSet; }
    inline void SetLambdaFunctionName(const Aws::Vector<ResourceStringFilter>& value) { m_lambdaFunctionNameHasBeenSet = true; m_lambdaFunctionName = value; }
    inline void SetLambdaFunctionName(Aws::Vector<ResourceStringFilter>&& value) { m_lambdaFunctionNameHasBeenSet = true; m_lambdaFunctionName = std::move(value); }
    inline ResourceFilterCriteria& WithLambdaFunctionName(const Aws::Vector<ResourceStringFilter>& value) { SetLambdaFunctionName(value); return *this;}
    inline ResourceFilterCriteria& WithLambdaFunctionName(Aws::Vector<ResourceStringFilter>&& value) { SetLambdaFunctionName(std::move(value)); return *this;}
    inline ResourceFilterCriteria& AddLambdaFunctionName(const ResourceStringFilter& value) { m_lambdaFunctionNameHasBeenSet = true; m_lambdaFunctionName.push_back(value); return *this; }
    inline ResourceFilterCriteria& AddLambdaFunctionName(ResourceStringFilter&& value) { m_lambdaFunctionNameHasBeenSet = true; m_lambdaFunctionName.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Lambda function tags used as resource filter
     * criteria.</p>
     */
    inline const Aws::Vector<ResourceMapFilter>& GetLambdaFunctionTags() const{ return m_lambdaFunctionTags; }
    inline bool LambdaFunctionTagsHasBeenSet() const { return m_lambdaFunctionTagsHasBeenSet; }
    inline void SetLambdaFunctionTags(const Aws::Vector<ResourceMapFilter>& value) { m_lambdaFunctionTagsHasBeenSet = true; m_lambdaFunctionTags = value; }
    inline void SetLambdaFunctionTags(Aws::Vector<ResourceMapFilter>&& value) { m_lambdaFunctionTagsHasBeenSet = true; m_lambdaFunctionTags = std::move(value); }
    inline ResourceFilterCriteria& WithLambdaFunctionTags(const Aws::Vector<ResourceMapFilter>& value) { SetLambdaFunctionTags(value); return *this;}
    inline ResourceFilterCriteria& WithLambdaFunctionTags(Aws::Vector<ResourceMapFilter>&& value) { SetLambdaFunctionTags(std::move(value)); return *this;}
    inline ResourceFilterCriteria& AddLambdaFunctionTags(const ResourceMapFilter& value) { m_lambdaFunctionTagsHasBeenSet = true; m_lambdaFunctionTags.push_back(value); return *this; }
    inline ResourceFilterCriteria& AddLambdaFunctionTags(ResourceMapFilter&& value) { m_lambdaFunctionTagsHasBeenSet = true; m_lambdaFunctionTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resource IDs used as resource filter criteria.</p>
     */
    inline const Aws::Vector<ResourceStringFilter>& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::Vector<ResourceStringFilter>& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::Vector<ResourceStringFilter>&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline ResourceFilterCriteria& WithResourceId(const Aws::Vector<ResourceStringFilter>& value) { SetResourceId(value); return *this;}
    inline ResourceFilterCriteria& WithResourceId(Aws::Vector<ResourceStringFilter>&& value) { SetResourceId(std::move(value)); return *this;}
    inline ResourceFilterCriteria& AddResourceId(const ResourceStringFilter& value) { m_resourceIdHasBeenSet = true; m_resourceId.push_back(value); return *this; }
    inline ResourceFilterCriteria& AddResourceId(ResourceStringFilter&& value) { m_resourceIdHasBeenSet = true; m_resourceId.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resource types used as resource filter criteria.</p>
     */
    inline const Aws::Vector<ResourceStringFilter>& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::Vector<ResourceStringFilter>& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::Vector<ResourceStringFilter>&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline ResourceFilterCriteria& WithResourceType(const Aws::Vector<ResourceStringFilter>& value) { SetResourceType(value); return *this;}
    inline ResourceFilterCriteria& WithResourceType(Aws::Vector<ResourceStringFilter>&& value) { SetResourceType(std::move(value)); return *this;}
    inline ResourceFilterCriteria& AddResourceType(const ResourceStringFilter& value) { m_resourceTypeHasBeenSet = true; m_resourceType.push_back(value); return *this; }
    inline ResourceFilterCriteria& AddResourceType(ResourceStringFilter&& value) { m_resourceTypeHasBeenSet = true; m_resourceType.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ResourceStringFilter> m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<ResourceMapFilter> m_ec2InstanceTags;
    bool m_ec2InstanceTagsHasBeenSet = false;

    Aws::Vector<ResourceStringFilter> m_ecrImageTags;
    bool m_ecrImageTagsHasBeenSet = false;

    Aws::Vector<ResourceStringFilter> m_ecrRepositoryName;
    bool m_ecrRepositoryNameHasBeenSet = false;

    Aws::Vector<ResourceStringFilter> m_lambdaFunctionName;
    bool m_lambdaFunctionNameHasBeenSet = false;

    Aws::Vector<ResourceMapFilter> m_lambdaFunctionTags;
    bool m_lambdaFunctionTagsHasBeenSet = false;

    Aws::Vector<ResourceStringFilter> m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Vector<ResourceStringFilter> m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
