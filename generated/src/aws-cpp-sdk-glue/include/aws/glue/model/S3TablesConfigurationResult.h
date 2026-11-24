/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ExportEncryptionConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>The S3 Tables configuration for a data catalog export, including the table
 * bucket that holds the exported catalog metadata.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/S3TablesConfigurationResult">AWS
 * API Reference</a></p>
 */
class S3TablesConfigurationResult {
 public:
  AWS_GLUE_API S3TablesConfigurationResult() = default;
  AWS_GLUE_API S3TablesConfigurationResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API S3TablesConfigurationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the S3 table bucket that holds the exported catalog metadata.</p>
   */
  inline const Aws::String& GetTableBucketArn() const { return m_tableBucketArn; }
  inline bool TableBucketArnHasBeenSet() const { return m_tableBucketArnHasBeenSet; }
  template <typename TableBucketArnT = Aws::String>
  void SetTableBucketArn(TableBucketArnT&& value) {
    m_tableBucketArnHasBeenSet = true;
    m_tableBucketArn = std::forward<TableBucketArnT>(value);
  }
  template <typename TableBucketArnT = Aws::String>
  S3TablesConfigurationResult& WithTableBucketArn(TableBucketArnT&& value) {
    SetTableBucketArn(std::forward<TableBucketArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The encryption configuration for the table bucket that holds the exported
   * catalog metadata.</p>
   */
  inline const ExportEncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
  template <typename EncryptionConfigurationT = ExportEncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = ExportEncryptionConfiguration>
  S3TablesConfigurationResult& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tableBucketArn;

  ExportEncryptionConfiguration m_encryptionConfiguration;
  bool m_tableBucketArnHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
