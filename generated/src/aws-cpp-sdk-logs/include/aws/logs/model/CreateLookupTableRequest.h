/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>

#include <utility>

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

/**
 */
class CreateLookupTableRequest : public CloudWatchLogsRequest {
 public:
  AWS_CLOUDWATCHLOGS_API CreateLookupTableRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateLookupTable"; }

  AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the lookup table. The name must be unique within your account and
   * Region. The name can contain only alphanumeric characters and underscores, and
   * can be up to 256 characters long.</p>
   */
  inline const Aws::String& GetLookupTableName() const { return m_lookupTableName; }
  inline bool LookupTableNameHasBeenSet() const { return m_lookupTableNameHasBeenSet; }
  template <typename LookupTableNameT = Aws::String>
  void SetLookupTableName(LookupTableNameT&& value) {
    m_lookupTableNameHasBeenSet = true;
    m_lookupTableName = std::forward<LookupTableNameT>(value);
  }
  template <typename LookupTableNameT = Aws::String>
  CreateLookupTableRequest& WithLookupTableName(LookupTableNameT&& value) {
    SetLookupTableName(std::forward<LookupTableNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the lookup table. The description can be up to 1024
   * characters long.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateLookupTableRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CSV content of the lookup table. The first row must be a header row with
   * column names. The content must use UTF-8 encoding and not exceed 10 MB.</p>
   */
  inline const Aws::String& GetTableBody() const { return m_tableBody; }
  inline bool TableBodyHasBeenSet() const { return m_tableBodyHasBeenSet; }
  template <typename TableBodyT = Aws::String>
  void SetTableBody(TableBodyT&& value) {
    m_tableBodyHasBeenSet = true;
    m_tableBody = std::forward<TableBodyT>(value);
  }
  template <typename TableBodyT = Aws::String>
  CreateLookupTableRequest& WithTableBody(TableBodyT&& value) {
    SetTableBody(std::forward<TableBodyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the KMS key to use to encrypt the lookup table data. If you don't
   * specify a key, the data is encrypted with an Amazon Web Services-owned key.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  CreateLookupTableRequest& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of key-value pairs to associate with the lookup table. You can
   * associate as many as 50 tags with a lookup table. Tags can help you organize and
   * categorize your resources.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateLookupTableRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateLookupTableRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_lookupTableName;

  Aws::String m_description;

  Aws::String m_tableBody;

  Aws::String m_kmsKeyId;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_lookupTableNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_tableBodyHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
