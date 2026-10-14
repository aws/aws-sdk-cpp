/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/TransferRequest.h>
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/HostKeyStorageType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Transfer {
namespace Model {

/**
 */
class UpdateHostKeyRequest : public TransferRequest {
 public:
  AWS_TRANSFER_API UpdateHostKeyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateHostKey"; }

  AWS_TRANSFER_API Aws::String SerializePayload() const override;

  AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The identifier of the server that contains the host key that you are
   * updating.</p>
   */
  inline const Aws::String& GetServerId() const { return m_serverId; }
  inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }
  template <typename ServerIdT = Aws::String>
  void SetServerId(ServerIdT&& value) {
    m_serverIdHasBeenSet = true;
    m_serverId = std::forward<ServerIdT>(value);
  }
  template <typename ServerIdT = Aws::String>
  UpdateHostKeyRequest& WithServerId(ServerIdT&& value) {
    SetServerId(std::forward<ServerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the host key that you are updating.</p>
   */
  inline const Aws::String& GetHostKeyId() const { return m_hostKeyId; }
  inline bool HostKeyIdHasBeenSet() const { return m_hostKeyIdHasBeenSet; }
  template <typename HostKeyIdT = Aws::String>
  void SetHostKeyId(HostKeyIdT&& value) {
    m_hostKeyIdHasBeenSet = true;
    m_hostKeyId = std::forward<HostKeyIdT>(value);
  }
  template <typename HostKeyIdT = Aws::String>
  UpdateHostKeyRequest& WithHostKeyId(HostKeyIdT&& value) {
    SetHostKeyId(std::forward<HostKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An updated description for the host key.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateHostKeyRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the host key is stored by Transfer Family
   * (<code>SERVICE_MANAGED</code>) or in Secrets Manager
   * (<code>SECRETS_MANAGER</code>). When you specify <code>SECRETS_MANAGER</code>,
   * Transfer Family stores the private host key material in an Secrets Manager
   * secret.</p>
   */
  inline HostKeyStorageType GetStorageType() const { return m_storageType; }
  inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
  inline void SetStorageType(HostKeyStorageType value) {
    m_storageTypeHasBeenSet = true;
    m_storageType = value;
  }
  inline UpdateHostKeyRequest& WithStorageType(HostKeyStorageType value) {
    SetStorageType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt the Secrets
   * Manager secret that stores the host key. If you specify a customer managed key,
   * its key policy must allow the <code>AWSServiceRoleForTransfer</code>
   * service-linked role to decrypt the secret. If you don't specify a value,
   * Transfer Family uses the Amazon Web Services managed key for Secrets
   * Manager.</p>
   */
  inline const Aws::String& GetKmsKey() const { return m_kmsKey; }
  inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }
  template <typename KmsKeyT = Aws::String>
  void SetKmsKey(KmsKeyT&& value) {
    m_kmsKeyHasBeenSet = true;
    m_kmsKey = std::forward<KmsKeyT>(value);
  }
  template <typename KmsKeyT = Aws::String>
  UpdateHostKeyRequest& WithKmsKey(KmsKeyT&& value) {
    SetKmsKey(std::forward<KmsKeyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serverId;

  Aws::String m_hostKeyId;

  Aws::String m_description;

  HostKeyStorageType m_storageType{HostKeyStorageType::NOT_SET};

  Aws::String m_kmsKey;
  bool m_serverIdHasBeenSet = false;
  bool m_hostKeyIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_storageTypeHasBeenSet = false;
  bool m_kmsKeyHasBeenSet = false;
};

}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
