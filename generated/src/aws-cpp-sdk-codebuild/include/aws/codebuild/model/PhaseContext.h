/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CodeBuild {
namespace Model {

/**
 * <p>Additional information about a build phase that has an error. You can use
 * this information for troubleshooting.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/PhaseContext">AWS
 * API Reference</a></p>
 */
class PhaseContext {
 public:
  AWS_CODEBUILD_API PhaseContext() = default;
  AWS_CODEBUILD_API PhaseContext(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEBUILD_API PhaseContext& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEBUILD_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The status code for the context of the build phase.</p>
   */
  inline const Aws::String& GetStatusCode() const { return m_statusCode; }
  inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
  template <typename StatusCodeT = Aws::String>
  void SetStatusCode(StatusCodeT&& value) {
    m_statusCodeHasBeenSet = true;
    m_statusCode = std::forward<StatusCodeT>(value);
  }
  template <typename StatusCodeT = Aws::String>
  PhaseContext& WithStatusCode(StatusCodeT&& value) {
    SetStatusCode(std::forward<StatusCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An explanation of the build phase's context. This might include a command ID
   * and an exit code.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  PhaseContext& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_statusCode;

  Aws::String m_message;
  bool m_statusCodeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace CodeBuild
}  // namespace Aws
