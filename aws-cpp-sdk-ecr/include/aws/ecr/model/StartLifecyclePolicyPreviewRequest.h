/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ECR
{
namespace Model
{

  /**
   */
  class AWS_ECR_API StartLifecyclePolicyPreviewRequest : public ECRRequest
  {
  public:
    StartLifecyclePolicyPreviewRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartLifecyclePolicyPreview"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The AWS account ID associated with the registry that contains the repository.
     * If you do not specify a registry, the default registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository.
     * If you do not specify a registry, the default registry is assumed.</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository.
     * If you do not specify a registry, the default registry is assumed.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository.
     * If you do not specify a registry, the default registry is assumed.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository.
     * If you do not specify a registry, the default registry is assumed.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository.
     * If you do not specify a registry, the default registry is assumed.</p>
     */
    inline StartLifecyclePolicyPreviewRequest& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The AWS account ID associated with the registry that contains the repository.
     * If you do not specify a registry, the default registry is assumed.</p>
     */
    inline StartLifecyclePolicyPreviewRequest& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID associated with the registry that contains the repository.
     * If you do not specify a registry, the default registry is assumed.</p>
     */
    inline StartLifecyclePolicyPreviewRequest& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}


    /**
     * <p>The name of the repository to be evaluated.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository to be evaluated.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository to be evaluated.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository to be evaluated.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository to be evaluated.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository to be evaluated.</p>
     */
    inline StartLifecyclePolicyPreviewRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository to be evaluated.</p>
     */
    inline StartLifecyclePolicyPreviewRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository to be evaluated.</p>
     */
    inline StartLifecyclePolicyPreviewRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The policy to be evaluated against. If you do not specify a policy, the
     * current policy for the repository is used.</p>
     */
    inline const Aws::String& GetLifecyclePolicyText() const{ return m_lifecyclePolicyText; }

    /**
     * <p>The policy to be evaluated against. If you do not specify a policy, the
     * current policy for the repository is used.</p>
     */
    inline bool LifecyclePolicyTextHasBeenSet() const { return m_lifecyclePolicyTextHasBeenSet; }

    /**
     * <p>The policy to be evaluated against. If you do not specify a policy, the
     * current policy for the repository is used.</p>
     */
    inline void SetLifecyclePolicyText(const Aws::String& value) { m_lifecyclePolicyTextHasBeenSet = true; m_lifecyclePolicyText = value; }

    /**
     * <p>The policy to be evaluated against. If you do not specify a policy, the
     * current policy for the repository is used.</p>
     */
    inline void SetLifecyclePolicyText(Aws::String&& value) { m_lifecyclePolicyTextHasBeenSet = true; m_lifecyclePolicyText = std::move(value); }

    /**
     * <p>The policy to be evaluated against. If you do not specify a policy, the
     * current policy for the repository is used.</p>
     */
    inline void SetLifecyclePolicyText(const char* value) { m_lifecyclePolicyTextHasBeenSet = true; m_lifecyclePolicyText.assign(value); }

    /**
     * <p>The policy to be evaluated against. If you do not specify a policy, the
     * current policy for the repository is used.</p>
     */
    inline StartLifecyclePolicyPreviewRequest& WithLifecyclePolicyText(const Aws::String& value) { SetLifecyclePolicyText(value); return *this;}

    /**
     * <p>The policy to be evaluated against. If you do not specify a policy, the
     * current policy for the repository is used.</p>
     */
    inline StartLifecyclePolicyPreviewRequest& WithLifecyclePolicyText(Aws::String&& value) { SetLifecyclePolicyText(std::move(value)); return *this;}

    /**
     * <p>The policy to be evaluated against. If you do not specify a policy, the
     * current policy for the repository is used.</p>
     */
    inline StartLifecyclePolicyPreviewRequest& WithLifecyclePolicyText(const char* value) { SetLifecyclePolicyText(value); return *this;}

  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::String m_lifecyclePolicyText;
    bool m_lifecyclePolicyTextHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
