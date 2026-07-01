/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/FileUseCaseType.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace Connect {
namespace Model {

/**
 */
class CreateAttachedFileRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API CreateAttachedFileRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAttachedFile"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

  AWS_CONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. If not provided, the Amazon Web Services SDK
   * populates this field. For more information about idempotency, see <a
   * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
   * retries safe with idempotent APIs</a>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateAttachedFileRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the Connect Customer instance. You can <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
   * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  CreateAttachedFileRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The use case for the file.</p>  <p>Only
   * <code>VOICE_RECORDING</code> is supported.</p>
   */
  inline FileUseCaseType GetFileUseCaseType() const { return m_fileUseCaseType; }
  inline bool FileUseCaseTypeHasBeenSet() const { return m_fileUseCaseTypeHasBeenSet; }
  inline void SetFileUseCaseType(FileUseCaseType value) {
    m_fileUseCaseTypeHasBeenSet = true;
    m_fileUseCaseType = value;
  }
  inline CreateAttachedFileRequest& WithFileUseCaseType(FileUseCaseType value) {
    SetFileUseCaseType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The S3 URI of the file to be attached. Only S3 source URIs are supported.</p>
   */
  inline const Aws::String& GetFileSourceUri() const { return m_fileSourceUri; }
  inline bool FileSourceUriHasBeenSet() const { return m_fileSourceUriHasBeenSet; }
  template <typename FileSourceUriT = Aws::String>
  void SetFileSourceUri(FileSourceUriT&& value) {
    m_fileSourceUriHasBeenSet = true;
    m_fileSourceUri = std::forward<FileSourceUriT>(value);
  }
  template <typename FileSourceUriT = Aws::String>
  CreateAttachedFileRequest& WithFileSourceUri(FileSourceUriT&& value) {
    SetFileSourceUri(std::forward<FileSourceUriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the completed voice contact to attach the file to. Only voice
   * contacts with Telephony subtype are supported.</p>  <p>This value must be
   * a valid ARN.</p>
   */
  inline const Aws::String& GetAssociatedResourceArn() const { return m_associatedResourceArn; }
  inline bool AssociatedResourceArnHasBeenSet() const { return m_associatedResourceArnHasBeenSet; }
  template <typename AssociatedResourceArnT = Aws::String>
  void SetAssociatedResourceArn(AssociatedResourceArnT&& value) {
    m_associatedResourceArnHasBeenSet = true;
    m_associatedResourceArn = std::forward<AssociatedResourceArnT>(value);
  }
  template <typename AssociatedResourceArnT = Aws::String>
  CreateAttachedFileRequest& WithAssociatedResourceArn(AssociatedResourceArnT&& value) {
    SetAssociatedResourceArn(std::forward<AssociatedResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags used to organize, track, or control access for this resource. For
   * example, <code>{ "Tags": {"key1":"value1", "key2":"value2"} }</code>.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateAttachedFileRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateAttachedFileRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_instanceId;

  FileUseCaseType m_fileUseCaseType{FileUseCaseType::NOT_SET};

  Aws::String m_fileSourceUri;

  Aws::String m_associatedResourceArn;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_clientTokenHasBeenSet = true;
  bool m_instanceIdHasBeenSet = false;
  bool m_fileUseCaseTypeHasBeenSet = false;
  bool m_fileSourceUriHasBeenSet = false;
  bool m_associatedResourceArnHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
