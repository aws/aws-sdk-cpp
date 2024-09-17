/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class PutLifecyclePolicyRequest : public ECRRequest
  {
  public:
    AWS_ECR_API PutLifecyclePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutLifecyclePolicy"; }

    AWS_ECR_API Aws::String SerializePayload() const override;

    AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the repository. If you do&#x2028; not specify a registry, the default registry
     * is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }
    inline PutLifecyclePolicyRequest& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}
    inline PutLifecyclePolicyRequest& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}
    inline PutLifecyclePolicyRequest& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository to receive the policy.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline PutLifecyclePolicyRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline PutLifecyclePolicyRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline PutLifecyclePolicyRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON repository policy text to apply to the repository.</p>
     */
    inline const Aws::String& GetLifecyclePolicyText() const{ return m_lifecyclePolicyText; }
    inline bool LifecyclePolicyTextHasBeenSet() const { return m_lifecyclePolicyTextHasBeenSet; }
    inline void SetLifecyclePolicyText(const Aws::String& value) { m_lifecyclePolicyTextHasBeenSet = true; m_lifecyclePolicyText = value; }
    inline void SetLifecyclePolicyText(Aws::String&& value) { m_lifecyclePolicyTextHasBeenSet = true; m_lifecyclePolicyText = std::move(value); }
    inline void SetLifecyclePolicyText(const char* value) { m_lifecyclePolicyTextHasBeenSet = true; m_lifecyclePolicyText.assign(value); }
    inline PutLifecyclePolicyRequest& WithLifecyclePolicyText(const Aws::String& value) { SetLifecyclePolicyText(value); return *this;}
    inline PutLifecyclePolicyRequest& WithLifecyclePolicyText(Aws::String&& value) { SetLifecyclePolicyText(std::move(value)); return *this;}
    inline PutLifecyclePolicyRequest& WithLifecyclePolicyText(const char* value) { SetLifecyclePolicyText(value); return *this;}
    ///@}
  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_lifecyclePolicyText;
    bool m_lifecyclePolicyTextHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
