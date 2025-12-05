/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GroundStation {
namespace Model {

/**
 * <p>Request would cause a service quota to be exceeded.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ServiceQuotaExceededException">AWS
 * API Reference</a></p>
 */
class ServiceQuotaExceededException {
 public:
  AWS_GROUNDSTATION_API ServiceQuotaExceededException() = default;
  AWS_GROUNDSTATION_API ServiceQuotaExceededException(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API ServiceQuotaExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ServiceQuotaExceededException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Parameter name that caused the exception</p>
   */
  inline const Aws::String& GetParameterName() const { return m_parameterName; }
  inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }
  template <typename ParameterNameT = Aws::String>
  void SetParameterName(ParameterNameT&& value) {
    m_parameterNameHasBeenSet = true;
    m_parameterName = std::forward<ParameterNameT>(value);
  }
  template <typename ParameterNameT = Aws::String>
  ServiceQuotaExceededException& WithParameterName(ParameterNameT&& value) {
    SetParameterName(std::forward<ParameterNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  Aws::String m_parameterName;
  bool m_messageHasBeenSet = false;
  bool m_parameterNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
