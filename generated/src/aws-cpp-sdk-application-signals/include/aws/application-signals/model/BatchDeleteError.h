/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/BatchDeleteErrorCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApplicationSignals {
namespace Model {

/**
 * <p>Represents an error that occurred when attempting to delete a
 * configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/BatchDeleteError">AWS
 * API Reference</a></p>
 */
class BatchDeleteError {
 public:
  AWS_APPLICATIONSIGNALS_API BatchDeleteError() = default;
  AWS_APPLICATIONSIGNALS_API BatchDeleteError(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API BatchDeleteError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>ARN of the configuration that failed to delete.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  BatchDeleteError& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Error code indicating the type of failure.</p>
   */
  inline BatchDeleteErrorCode GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  inline void SetCode(BatchDeleteErrorCode value) {
    m_codeHasBeenSet = true;
    m_code = value;
  }
  inline BatchDeleteError& WithCode(BatchDeleteErrorCode value) {
    SetCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Descriptive error message.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  BatchDeleteError& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceArn;

  BatchDeleteErrorCode m_code{BatchDeleteErrorCode::NOT_SET};

  Aws::String m_message;
  bool m_resourceArnHasBeenSet = false;
  bool m_codeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
