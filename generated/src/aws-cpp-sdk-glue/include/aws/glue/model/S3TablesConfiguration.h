/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>The S3 Tables configuration for a data catalog export.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/S3TablesConfiguration">AWS
 * API Reference</a></p>
 */
class S3TablesConfiguration {
 public:
  AWS_GLUE_API S3TablesConfiguration() = default;
  AWS_GLUE_API S3TablesConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API S3TablesConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The encryption configuration for the table bucket that holds the exported
   * catalog metadata. It applies only when Glue creates the table bucket.</p>
   */
  inline const ExportEncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
  template <typename EncryptionConfigurationT = ExportEncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = ExportEncryptionConfiguration>
  S3TablesConfiguration& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  ExportEncryptionConfiguration m_encryptionConfiguration;
  bool m_encryptionConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
