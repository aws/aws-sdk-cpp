﻿/**
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
  class UpdatePullThroughCacheRuleRequest : public ECRRequest
  {
  public:
    AWS_ECR_API UpdatePullThroughCacheRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePullThroughCacheRule"; }

    AWS_ECR_API Aws::String SerializePayload() const override;

    AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the registry associated
     * with the pull through cache rule. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }
    inline UpdatePullThroughCacheRuleRequest& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}
    inline UpdatePullThroughCacheRuleRequest& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}
    inline UpdatePullThroughCacheRuleRequest& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository name prefix to use when caching images from the source
     * registry.</p>
     */
    inline const Aws::String& GetEcrRepositoryPrefix() const{ return m_ecrRepositoryPrefix; }
    inline bool EcrRepositoryPrefixHasBeenSet() const { return m_ecrRepositoryPrefixHasBeenSet; }
    inline void SetEcrRepositoryPrefix(const Aws::String& value) { m_ecrRepositoryPrefixHasBeenSet = true; m_ecrRepositoryPrefix = value; }
    inline void SetEcrRepositoryPrefix(Aws::String&& value) { m_ecrRepositoryPrefixHasBeenSet = true; m_ecrRepositoryPrefix = std::move(value); }
    inline void SetEcrRepositoryPrefix(const char* value) { m_ecrRepositoryPrefixHasBeenSet = true; m_ecrRepositoryPrefix.assign(value); }
    inline UpdatePullThroughCacheRuleRequest& WithEcrRepositoryPrefix(const Aws::String& value) { SetEcrRepositoryPrefix(value); return *this;}
    inline UpdatePullThroughCacheRuleRequest& WithEcrRepositoryPrefix(Aws::String&& value) { SetEcrRepositoryPrefix(std::move(value)); return *this;}
    inline UpdatePullThroughCacheRuleRequest& WithEcrRepositoryPrefix(const char* value) { SetEcrRepositoryPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Secrets Manager
     * secret that identifies the credentials to authenticate to the upstream
     * registry.</p>
     */
    inline const Aws::String& GetCredentialArn() const{ return m_credentialArn; }
    inline bool CredentialArnHasBeenSet() const { return m_credentialArnHasBeenSet; }
    inline void SetCredentialArn(const Aws::String& value) { m_credentialArnHasBeenSet = true; m_credentialArn = value; }
    inline void SetCredentialArn(Aws::String&& value) { m_credentialArnHasBeenSet = true; m_credentialArn = std::move(value); }
    inline void SetCredentialArn(const char* value) { m_credentialArnHasBeenSet = true; m_credentialArn.assign(value); }
    inline UpdatePullThroughCacheRuleRequest& WithCredentialArn(const Aws::String& value) { SetCredentialArn(value); return *this;}
    inline UpdatePullThroughCacheRuleRequest& WithCredentialArn(Aws::String&& value) { SetCredentialArn(std::move(value)); return *this;}
    inline UpdatePullThroughCacheRuleRequest& WithCredentialArn(const char* value) { SetCredentialArn(value); return *this;}
    ///@}
  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_ecrRepositoryPrefix;
    bool m_ecrRepositoryPrefixHasBeenSet = false;

    Aws::String m_credentialArn;
    bool m_credentialArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
