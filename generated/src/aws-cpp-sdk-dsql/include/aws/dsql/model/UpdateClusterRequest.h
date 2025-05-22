/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dsql/DSQL_EXPORTS.h>
#include <aws/dsql/DSQLRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateClusterRequest : public DSQLRequest
  {
  public:
    AWS_DSQL_API UpdateClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCluster"; }

    AWS_DSQL_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the cluster you want to update.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    UpdateClusterRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable deletion protection in your cluster.</p>
     */
    inline bool GetDeletionProtectionEnabled() const { return m_deletionProtectionEnabled; }
    inline bool DeletionProtectionEnabledHasBeenSet() const { return m_deletionProtectionEnabledHasBeenSet; }
    inline void SetDeletionProtectionEnabled(bool value) { m_deletionProtectionEnabledHasBeenSet = true; m_deletionProtectionEnabled = value; }
    inline UpdateClusterRequest& WithDeletionProtectionEnabled(bool value) { SetDeletionProtectionEnabled(value); return *this;}
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
    UpdateClusterRequest& WithKmsEncryptionKey(KmsEncryptionKeyT&& value) { SetKmsEncryptionKey(std::forward<KmsEncryptionKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully. The subsequent retries with the same client token return the
     * result from the original successful request and they have no additional
     * effect.</p> <p>If you don't specify a client token, the Amazon Web Services SDK
     * automatically generates one.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateClusterRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new multi-Region cluster configuration settings to be applied during an
     * update operation.</p>
     */
    inline const MultiRegionProperties& GetMultiRegionProperties() const { return m_multiRegionProperties; }
    inline bool MultiRegionPropertiesHasBeenSet() const { return m_multiRegionPropertiesHasBeenSet; }
    template<typename MultiRegionPropertiesT = MultiRegionProperties>
    void SetMultiRegionProperties(MultiRegionPropertiesT&& value) { m_multiRegionPropertiesHasBeenSet = true; m_multiRegionProperties = std::forward<MultiRegionPropertiesT>(value); }
    template<typename MultiRegionPropertiesT = MultiRegionProperties>
    UpdateClusterRequest& WithMultiRegionProperties(MultiRegionPropertiesT&& value) { SetMultiRegionProperties(std::forward<MultiRegionPropertiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    bool m_deletionProtectionEnabled{false};
    bool m_deletionProtectionEnabledHasBeenSet = false;

    Aws::String m_kmsEncryptionKey;
    bool m_kmsEncryptionKeyHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    MultiRegionProperties m_multiRegionProperties;
    bool m_multiRegionPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace DSQL
} // namespace Aws
