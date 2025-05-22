/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dsql/DSQL_EXPORTS.h>
#include <aws/dsql/DSQLRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/dsql/model/MultiRegionProperties.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace DSQL
{
namespace Model
{

  /**
   */
  class CreateClusterRequest : public DSQLRequest
  {
  public:
    AWS_DSQL_API CreateClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCluster"; }

    AWS_DSQL_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>If enabled, you can't delete your cluster. You must first disable this
     * property before you can delete your cluster.</p>
     */
    inline bool GetDeletionProtectionEnabled() const { return m_deletionProtectionEnabled; }
    inline bool DeletionProtectionEnabledHasBeenSet() const { return m_deletionProtectionEnabledHasBeenSet; }
    inline void SetDeletionProtectionEnabled(bool value) { m_deletionProtectionEnabledHasBeenSet = true; m_deletionProtectionEnabled = value; }
    inline CreateClusterRequest& WithDeletionProtectionEnabled(bool value) { SetDeletionProtectionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key that encrypts and protects the data on your cluster. You can
     * specify the ARN, ID, or alias of an existing key or have Amazon Web Services
     * create a default key for you.</p>
     */
    inline const Aws::String& GetKmsEncryptionKey() const { return m_kmsEncryptionKey; }
    inline bool KmsEncryptionKeyHasBeenSet() const { return m_kmsEncryptionKeyHasBeenSet; }
    template<typename KmsEncryptionKeyT = Aws::String>
    void SetKmsEncryptionKey(KmsEncryptionKeyT&& value) { m_kmsEncryptionKeyHasBeenSet = true; m_kmsEncryptionKey = std::forward<KmsEncryptionKeyT>(value); }
    template<typename KmsEncryptionKeyT = Aws::String>
    CreateClusterRequest& WithKmsEncryptionKey(KmsEncryptionKeyT&& value) { SetKmsEncryptionKey(std::forward<KmsEncryptionKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of key and value pairs to use to tag your cluster.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateClusterRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateClusterRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, the subsequent retries with the same client token return the
     * result from the original successful request and they have no additional
     * effect.</p> <p>If you don't specify a client token, the Amazon Web Services SDK
     * automatically generates one.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateClusterRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings when creating a multi-Region cluster, including
     * the witness region and linked cluster properties.</p>
     */
    inline const MultiRegionProperties& GetMultiRegionProperties() const { return m_multiRegionProperties; }
    inline bool MultiRegionPropertiesHasBeenSet() const { return m_multiRegionPropertiesHasBeenSet; }
    template<typename MultiRegionPropertiesT = MultiRegionProperties>
    void SetMultiRegionProperties(MultiRegionPropertiesT&& value) { m_multiRegionPropertiesHasBeenSet = true; m_multiRegionProperties = std::forward<MultiRegionPropertiesT>(value); }
    template<typename MultiRegionPropertiesT = MultiRegionProperties>
    CreateClusterRequest& WithMultiRegionProperties(MultiRegionPropertiesT&& value) { SetMultiRegionProperties(std::forward<MultiRegionPropertiesT>(value)); return *this;}
    ///@}
  private:

    bool m_deletionProtectionEnabled{false};
    bool m_deletionProtectionEnabledHasBeenSet = false;

    Aws::String m_kmsEncryptionKey;
    bool m_kmsEncryptionKeyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    MultiRegionProperties m_multiRegionProperties;
    bool m_multiRegionPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace DSQL
} // namespace Aws
