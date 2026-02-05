/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

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
 * <p>Configuration that defines how to parse JSON responses from REST API calls,
 * including paths to result data and error information.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ResponseConfiguration">AWS
 * API Reference</a></p>
 */
class ResponseConfiguration {
 public:
  AWS_GLUE_API ResponseConfiguration() = default;
  AWS_GLUE_API ResponseConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API ResponseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The JSON path expression that identifies where the actual result data is
   * located within the API response.</p>
   */
  inline const Aws::String& GetResultPath() const { return m_resultPath; }
  inline bool ResultPathHasBeenSet() const { return m_resultPathHasBeenSet; }
  template <typename ResultPathT = Aws::String>
  void SetResultPath(ResultPathT&& value) {
    m_resultPathHasBeenSet = true;
    m_resultPath = std::forward<ResultPathT>(value);
  }
  template <typename ResultPathT = Aws::String>
  ResponseConfiguration& WithResultPath(ResultPathT&& value) {
    SetResultPath(std::forward<ResultPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON path expression that identifies where error information is located
   * within API responses when requests fail.</p>
   */
  inline const Aws::String& GetErrorPath() const { return m_errorPath; }
  inline bool ErrorPathHasBeenSet() const { return m_errorPathHasBeenSet; }
  template <typename ErrorPathT = Aws::String>
  void SetErrorPath(ErrorPathT&& value) {
    m_errorPathHasBeenSet = true;
    m_errorPath = std::forward<ErrorPathT>(value);
  }
  template <typename ErrorPathT = Aws::String>
  ResponseConfiguration& WithErrorPath(ErrorPathT&& value) {
    SetErrorPath(std::forward<ErrorPathT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resultPath;

  Aws::String m_errorPath;
  bool m_resultPathHasBeenSet = false;
  bool m_errorPathHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
