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
  class SetRepositoryPolicyRequest : public ECRRequest
  {
  public:
    AWS_ECR_API SetRepositoryPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetRepositoryPolicy"; }

    AWS_ECR_API Aws::String SerializePayload() const override;

    AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the repository. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }
    inline SetRepositoryPolicyRequest& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}
    inline SetRepositoryPolicyRequest& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}
    inline SetRepositoryPolicyRequest& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}
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
    inline SetRepositoryPolicyRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline SetRepositoryPolicyRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline SetRepositoryPolicyRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON repository policy text to apply to the repository. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/repository-policy-examples.html">Amazon
     * ECR repository policies</a> in the <i>Amazon Elastic Container Registry User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetPolicyText() const{ return m_policyText; }
    inline bool PolicyTextHasBeenSet() const { return m_policyTextHasBeenSet; }
    inline void SetPolicyText(const Aws::String& value) { m_policyTextHasBeenSet = true; m_policyText = value; }
    inline void SetPolicyText(Aws::String&& value) { m_policyTextHasBeenSet = true; m_policyText = std::move(value); }
    inline void SetPolicyText(const char* value) { m_policyTextHasBeenSet = true; m_policyText.assign(value); }
    inline SetRepositoryPolicyRequest& WithPolicyText(const Aws::String& value) { SetPolicyText(value); return *this;}
    inline SetRepositoryPolicyRequest& WithPolicyText(Aws::String&& value) { SetPolicyText(std::move(value)); return *this;}
    inline SetRepositoryPolicyRequest& WithPolicyText(const char* value) { SetPolicyText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the policy you are attempting to set on a repository policy would prevent
     * you from setting another policy in the future, you must force the
     * <a>SetRepositoryPolicy</a> operation. This is intended to prevent accidental
     * repository lock outs.</p>
     */
    inline bool GetForce() const{ return m_force; }
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }
    inline SetRepositoryPolicyRequest& WithForce(bool value) { SetForce(value); return *this;}
    ///@}
  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_policyText;
    bool m_policyTextHasBeenSet = false;

    bool m_force;
    bool m_forceHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
