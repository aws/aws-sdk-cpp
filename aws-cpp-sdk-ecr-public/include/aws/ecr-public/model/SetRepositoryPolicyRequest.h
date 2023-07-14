﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/ecr-public/ECRPublicRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ECRPublic
{
namespace Model
{

  /**
   */
  class AWS_ECRPUBLIC_API SetRepositoryPolicyRequest : public ECRPublicRequest
  {
  public:
    SetRepositoryPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetRepositoryPolicy"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The AWS account ID associated with the registry that contains the repository.
     * If you do not specify a registry, the default public registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository.
     * If you do not specify a registry, the default public registry is assumed.</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository.
     * If you do not specify a registry, the default public registry is assumed.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository.
     * If you do not specify a registry, the default public registry is assumed.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository.
     * If you do not specify a registry, the default public registry is assumed.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository.
     * If you do not specify a registry, the default public registry is assumed.</p>
     */
    inline SetRepositoryPolicyRequest& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The AWS account ID associated with the registry that contains the repository.
     * If you do not specify a registry, the default public registry is assumed.</p>
     */
    inline SetRepositoryPolicyRequest& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID associated with the registry that contains the repository.
     * If you do not specify a registry, the default public registry is assumed.</p>
     */
    inline SetRepositoryPolicyRequest& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}


    /**
     * <p>The name of the repository to receive the policy.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository to receive the policy.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository to receive the policy.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository to receive the policy.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository to receive the policy.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository to receive the policy.</p>
     */
    inline SetRepositoryPolicyRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository to receive the policy.</p>
     */
    inline SetRepositoryPolicyRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository to receive the policy.</p>
     */
    inline SetRepositoryPolicyRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The JSON repository policy text to apply to the repository. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/repository-policy-examples.html">Amazon
     * ECR Repository Policies</a> in the <i>Amazon Elastic Container Registry User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetPolicyText() const{ return m_policyText; }

    /**
     * <p>The JSON repository policy text to apply to the repository. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/repository-policy-examples.html">Amazon
     * ECR Repository Policies</a> in the <i>Amazon Elastic Container Registry User
     * Guide</i>.</p>
     */
    inline bool PolicyTextHasBeenSet() const { return m_policyTextHasBeenSet; }

    /**
     * <p>The JSON repository policy text to apply to the repository. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/repository-policy-examples.html">Amazon
     * ECR Repository Policies</a> in the <i>Amazon Elastic Container Registry User
     * Guide</i>.</p>
     */
    inline void SetPolicyText(const Aws::String& value) { m_policyTextHasBeenSet = true; m_policyText = value; }

    /**
     * <p>The JSON repository policy text to apply to the repository. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/repository-policy-examples.html">Amazon
     * ECR Repository Policies</a> in the <i>Amazon Elastic Container Registry User
     * Guide</i>.</p>
     */
    inline void SetPolicyText(Aws::String&& value) { m_policyTextHasBeenSet = true; m_policyText = std::move(value); }

    /**
     * <p>The JSON repository policy text to apply to the repository. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/repository-policy-examples.html">Amazon
     * ECR Repository Policies</a> in the <i>Amazon Elastic Container Registry User
     * Guide</i>.</p>
     */
    inline void SetPolicyText(const char* value) { m_policyTextHasBeenSet = true; m_policyText.assign(value); }

    /**
     * <p>The JSON repository policy text to apply to the repository. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/repository-policy-examples.html">Amazon
     * ECR Repository Policies</a> in the <i>Amazon Elastic Container Registry User
     * Guide</i>.</p>
     */
    inline SetRepositoryPolicyRequest& WithPolicyText(const Aws::String& value) { SetPolicyText(value); return *this;}

    /**
     * <p>The JSON repository policy text to apply to the repository. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/repository-policy-examples.html">Amazon
     * ECR Repository Policies</a> in the <i>Amazon Elastic Container Registry User
     * Guide</i>.</p>
     */
    inline SetRepositoryPolicyRequest& WithPolicyText(Aws::String&& value) { SetPolicyText(std::move(value)); return *this;}

    /**
     * <p>The JSON repository policy text to apply to the repository. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/repository-policy-examples.html">Amazon
     * ECR Repository Policies</a> in the <i>Amazon Elastic Container Registry User
     * Guide</i>.</p>
     */
    inline SetRepositoryPolicyRequest& WithPolicyText(const char* value) { SetPolicyText(value); return *this;}


    /**
     * <p>If the policy you are attempting to set on a repository policy would prevent
     * you from setting another policy in the future, you must force the
     * <a>SetRepositoryPolicy</a> operation. This is intended to prevent accidental
     * repository lock outs.</p>
     */
    inline bool GetForce() const{ return m_force; }

    /**
     * <p>If the policy you are attempting to set on a repository policy would prevent
     * you from setting another policy in the future, you must force the
     * <a>SetRepositoryPolicy</a> operation. This is intended to prevent accidental
     * repository lock outs.</p>
     */
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }

    /**
     * <p>If the policy you are attempting to set on a repository policy would prevent
     * you from setting another policy in the future, you must force the
     * <a>SetRepositoryPolicy</a> operation. This is intended to prevent accidental
     * repository lock outs.</p>
     */
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }

    /**
     * <p>If the policy you are attempting to set on a repository policy would prevent
     * you from setting another policy in the future, you must force the
     * <a>SetRepositoryPolicy</a> operation. This is intended to prevent accidental
     * repository lock outs.</p>
     */
    inline SetRepositoryPolicyRequest& WithForce(bool value) { SetForce(value); return *this;}

  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::String m_policyText;
    bool m_policyTextHasBeenSet;

    bool m_force;
    bool m_forceHasBeenSet;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
