/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/AwsJsonSubstitutionCommandPreprocessorConfig.h>

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
 * <p>Configuration that determines how the <code>payloadTemplate</code> is
 * processed by the service to generate the final payload sent to devices at
 * <code>StartCommandExecution</code> API invocation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CommandPreprocessor">AWS
 * API Reference</a></p>
 */
class CommandPreprocessor {
 public:
  AWS_IOT_API CommandPreprocessor() = default;
  AWS_IOT_API CommandPreprocessor(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOT_API CommandPreprocessor& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for the JSON substitution preprocessor.</p>
   */
  inline const AwsJsonSubstitutionCommandPreprocessorConfig& GetAwsJsonSubstitution() const { return m_awsJsonSubstitution; }
  inline bool AwsJsonSubstitutionHasBeenSet() const { return m_awsJsonSubstitutionHasBeenSet; }
  template <typename AwsJsonSubstitutionT = AwsJsonSubstitutionCommandPreprocessorConfig>
  void SetAwsJsonSubstitution(AwsJsonSubstitutionT&& value) {
    m_awsJsonSubstitutionHasBeenSet = true;
    m_awsJsonSubstitution = std::forward<AwsJsonSubstitutionT>(value);
  }
  template <typename AwsJsonSubstitutionT = AwsJsonSubstitutionCommandPreprocessorConfig>
  CommandPreprocessor& WithAwsJsonSubstitution(AwsJsonSubstitutionT&& value) {
    SetAwsJsonSubstitution(std::forward<AwsJsonSubstitutionT>(value));
    return *this;
  }
  ///@}
 private:
  AwsJsonSubstitutionCommandPreprocessorConfig m_awsJsonSubstitution;
  bool m_awsJsonSubstitutionHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoT
}  // namespace Aws
