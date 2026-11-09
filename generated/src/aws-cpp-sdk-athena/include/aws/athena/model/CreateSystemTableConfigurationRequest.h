/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/AthenaRequest.h>
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/SystemTableName.h>
#include <aws/athena/model/Tag.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Athena {
namespace Model {

/**
 */
class CreateSystemTableConfigurationRequest : public AthenaRequest {
 public:
  AWS_ATHENA_API CreateSystemTableConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateSystemTableConfiguration"; }

  AWS_ATHENA_API Aws::String SerializePayload() const override;

  AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A unique case-sensitive string used to ensure the request to create the
   * system table configuration is idempotent (executes only once). If another
   * <code>CreateSystemTableConfiguration</code> request is received with the same
   * client token but different parameters, the request fails with an
   * <code>InvalidRequestException</code>.</p>
   */
  inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
  inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
  template <typename ClientRequestTokenT = Aws::String>
  void SetClientRequestToken(ClientRequestTokenT&& value) {
    m_clientRequestTokenHasBeenSet = true;
    m_clientRequestToken = std::forward<ClientRequestTokenT>(value);
  }
  template <typename ClientRequestTokenT = Aws::String>
  CreateSystemTableConfigurationRequest& WithClientRequestToken(ClientRequestTokenT&& value) {
    SetClientRequestToken(std::forward<ClientRequestTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The system table configuration to create. The only accepted value is
   * <code>ALL</code>, the reserved keyword that enables all system tables for the
   * account.</p>
   */
  inline SystemTableName GetTableName() const { return m_tableName; }
  inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
  inline void SetTableName(SystemTableName value) {
    m_tableNameHasBeenSet = true;
    m_tableName = value;
  }
  inline CreateSystemTableConfigurationRequest& WithTableName(SystemTableName value) {
    SetTableName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (AWS KMS)
   * key to use for encrypting the system table data.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  CreateSystemTableConfigurationRequest& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to add to the system table configuration.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateSystemTableConfigurationRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateSystemTableConfigurationRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};

  SystemTableName m_tableName{SystemTableName::NOT_SET};

  Aws::String m_kmsKeyArn;

  Aws::Vector<Tag> m_tags;
  bool m_clientRequestTokenHasBeenSet = true;
  bool m_tableNameHasBeenSet = false;
  bool m_kmsKeyArnHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Athena
}  // namespace Aws
