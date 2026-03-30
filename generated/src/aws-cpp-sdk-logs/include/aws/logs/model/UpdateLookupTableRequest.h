/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>

#include <utility>

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

/**
 */
class UpdateLookupTableRequest : public CloudWatchLogsRequest {
 public:
  AWS_CLOUDWATCHLOGS_API UpdateLookupTableRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateLookupTable"; }

  AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ARN of the lookup table to update.</p>
   */
  inline const Aws::String& GetLookupTableArn() const { return m_lookupTableArn; }
  inline bool LookupTableArnHasBeenSet() const { return m_lookupTableArnHasBeenSet; }
  template <typename LookupTableArnT = Aws::String>
  void SetLookupTableArn(LookupTableArnT&& value) {
    m_lookupTableArnHasBeenSet = true;
    m_lookupTableArn = std::forward<LookupTableArnT>(value);
  }
  template <typename LookupTableArnT = Aws::String>
  UpdateLookupTableRequest& WithLookupTableArn(LookupTableArnT&& value) {
    SetLookupTableArn(std::forward<LookupTableArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An updated description of the lookup table.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateLookupTableRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new CSV content to replace the existing data. The first row must be a
   * header row with column names. The content must use UTF-8 encoding and not exceed
   * 10 MB.</p>
   */
  inline const Aws::String& GetTableBody() const { return m_tableBody; }
  inline bool TableBodyHasBeenSet() const { return m_tableBodyHasBeenSet; }
  template <typename TableBodyT = Aws::String>
  void SetTableBody(TableBodyT&& value) {
    m_tableBodyHasBeenSet = true;
    m_tableBody = std::forward<TableBodyT>(value);
  }
  template <typename TableBodyT = Aws::String>
  UpdateLookupTableRequest& WithTableBody(TableBodyT&& value) {
    SetTableBody(std::forward<TableBodyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the KMS key to use to encrypt the lookup table data. You can use
   * this parameter to add, update, or remove the KMS key. To remove the KMS key and
   * use an Amazon Web Services-owned key instead, specify an empty string.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  UpdateLookupTableRequest& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_lookupTableArn;

  Aws::String m_description;

  Aws::String m_tableBody;

  Aws::String m_kmsKeyId;
  bool m_lookupTableArnHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_tableBodyHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
