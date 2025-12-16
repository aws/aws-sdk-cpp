/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/OutputFormat.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoT {
namespace Model {

/**
 * <p>Configures the command to treat the <code>payloadTemplate</code> as a JSON
 * document for preprocessing. This preprocessor substitutes placeholders with
 * parameter values to generate the command execution request payload.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AwsJsonSubstitutionCommandPreprocessorConfig">AWS
 * API Reference</a></p>
 */
class AwsJsonSubstitutionCommandPreprocessorConfig {
 public:
  AWS_IOT_API AwsJsonSubstitutionCommandPreprocessorConfig() = default;
  AWS_IOT_API AwsJsonSubstitutionCommandPreprocessorConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOT_API AwsJsonSubstitutionCommandPreprocessorConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Converts the command preprocessor result to the format defined by this
   * parameter, before sending it to the device.</p>
   */
  inline OutputFormat GetOutputFormat() const { return m_outputFormat; }
  inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }
  inline void SetOutputFormat(OutputFormat value) {
    m_outputFormatHasBeenSet = true;
    m_outputFormat = value;
  }
  inline AwsJsonSubstitutionCommandPreprocessorConfig& WithOutputFormat(OutputFormat value) {
    SetOutputFormat(value);
    return *this;
  }
  ///@}
 private:
  OutputFormat m_outputFormat{OutputFormat::NOT_SET};
  bool m_outputFormatHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoT
}  // namespace Aws
