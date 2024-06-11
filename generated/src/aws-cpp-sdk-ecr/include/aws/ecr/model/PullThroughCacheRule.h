/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ecr/model/UpstreamRegistry.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>The details of a pull through cache rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/PullThroughCacheRule">AWS
   * API Reference</a></p>
   */
  class PullThroughCacheRule
  {
  public:
    AWS_ECR_API PullThroughCacheRule();
    AWS_ECR_API PullThroughCacheRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API PullThroughCacheRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon ECR repository prefix associated with the pull through cache
     * rule.</p>
     */
    inline const Aws::String& GetEcrRepositoryPrefix() const{ return m_ecrRepositoryPrefix; }
    inline bool EcrRepositoryPrefixHasBeenSet() const { return m_ecrRepositoryPrefixHasBeenSet; }
    inline void SetEcrRepositoryPrefix(const Aws::String& value) { m_ecrRepositoryPrefixHasBeenSet = true; m_ecrRepositoryPrefix = value; }
    inline void SetEcrRepositoryPrefix(Aws::String&& value) { m_ecrRepositoryPrefixHasBeenSet = true; m_ecrRepositoryPrefix = std::move(value); }
    inline void SetEcrRepositoryPrefix(const char* value) { m_ecrRepositoryPrefixHasBeenSet = true; m_ecrRepositoryPrefix.assign(value); }
    inline PullThroughCacheRule& WithEcrRepositoryPrefix(const Aws::String& value) { SetEcrRepositoryPrefix(value); return *this;}
    inline PullThroughCacheRule& WithEcrRepositoryPrefix(Aws::String&& value) { SetEcrRepositoryPrefix(std::move(value)); return *this;}
    inline PullThroughCacheRule& WithEcrRepositoryPrefix(const char* value) { SetEcrRepositoryPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upstream registry URL associated with the pull through cache rule.</p>
     */
    inline const Aws::String& GetUpstreamRegistryUrl() const{ return m_upstreamRegistryUrl; }
    inline bool UpstreamRegistryUrlHasBeenSet() const { return m_upstreamRegistryUrlHasBeenSet; }
    inline void SetUpstreamRegistryUrl(const Aws::String& value) { m_upstreamRegistryUrlHasBeenSet = true; m_upstreamRegistryUrl = value; }
    inline void SetUpstreamRegistryUrl(Aws::String&& value) { m_upstreamRegistryUrlHasBeenSet = true; m_upstreamRegistryUrl = std::move(value); }
    inline void SetUpstreamRegistryUrl(const char* value) { m_upstreamRegistryUrlHasBeenSet = true; m_upstreamRegistryUrl.assign(value); }
    inline PullThroughCacheRule& WithUpstreamRegistryUrl(const Aws::String& value) { SetUpstreamRegistryUrl(value); return *this;}
    inline PullThroughCacheRule& WithUpstreamRegistryUrl(Aws::String&& value) { SetUpstreamRegistryUrl(std::move(value)); return *this;}
    inline PullThroughCacheRule& WithUpstreamRegistryUrl(const char* value) { SetUpstreamRegistryUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the pull through cache was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline PullThroughCacheRule& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline PullThroughCacheRule& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the registry the pull
     * through cache rule is associated with.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }
    inline PullThroughCacheRule& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}
    inline PullThroughCacheRule& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}
    inline PullThroughCacheRule& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Secrets Manager secret associated with the pull through cache
     * rule.</p>
     */
    inline const Aws::String& GetCredentialArn() const{ return m_credentialArn; }
    inline bool CredentialArnHasBeenSet() const { return m_credentialArnHasBeenSet; }
    inline void SetCredentialArn(const Aws::String& value) { m_credentialArnHasBeenSet = true; m_credentialArn = value; }
    inline void SetCredentialArn(Aws::String&& value) { m_credentialArnHasBeenSet = true; m_credentialArn = std::move(value); }
    inline void SetCredentialArn(const char* value) { m_credentialArnHasBeenSet = true; m_credentialArn.assign(value); }
    inline PullThroughCacheRule& WithCredentialArn(const Aws::String& value) { SetCredentialArn(value); return *this;}
    inline PullThroughCacheRule& WithCredentialArn(Aws::String&& value) { SetCredentialArn(std::move(value)); return *this;}
    inline PullThroughCacheRule& WithCredentialArn(const char* value) { SetCredentialArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the upstream source registry associated with the pull through
     * cache rule.</p>
     */
    inline const UpstreamRegistry& GetUpstreamRegistry() const{ return m_upstreamRegistry; }
    inline bool UpstreamRegistryHasBeenSet() const { return m_upstreamRegistryHasBeenSet; }
    inline void SetUpstreamRegistry(const UpstreamRegistry& value) { m_upstreamRegistryHasBeenSet = true; m_upstreamRegistry = value; }
    inline void SetUpstreamRegistry(UpstreamRegistry&& value) { m_upstreamRegistryHasBeenSet = true; m_upstreamRegistry = std::move(value); }
    inline PullThroughCacheRule& WithUpstreamRegistry(const UpstreamRegistry& value) { SetUpstreamRegistry(value); return *this;}
    inline PullThroughCacheRule& WithUpstreamRegistry(UpstreamRegistry&& value) { SetUpstreamRegistry(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in JavaScript date format, when the pull through cache
     * rule was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline PullThroughCacheRule& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline PullThroughCacheRule& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_ecrRepositoryPrefix;
    bool m_ecrRepositoryPrefixHasBeenSet = false;

    Aws::String m_upstreamRegistryUrl;
    bool m_upstreamRegistryUrlHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_credentialArn;
    bool m_credentialArnHasBeenSet = false;

    UpstreamRegistry m_upstreamRegistry;
    bool m_upstreamRegistryHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
