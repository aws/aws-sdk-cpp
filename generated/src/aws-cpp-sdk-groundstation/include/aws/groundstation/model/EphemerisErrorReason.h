/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/EphemerisErrorCode.h>

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
 * <p>Detailed error information for ephemeris validation failures.</p> <p>Provides
 * an error code and descriptive message to help diagnose and resolve validation
 * issues.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/EphemerisErrorReason">AWS
 * API Reference</a></p>
 */
class EphemerisErrorReason {
 public:
  AWS_GROUNDSTATION_API EphemerisErrorReason() = default;
  AWS_GROUNDSTATION_API EphemerisErrorReason(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API EphemerisErrorReason& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The error code identifying the type of validation failure.</p> <p>See the <a
   * href="https://docs.aws.amazon.com/ground-station/latest/ug/troubleshooting-invalid-ephemerides.html">Troubleshooting
   * Invalid Ephemerides guide</a> for error code details.</p>
   */
  inline EphemerisErrorCode GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  inline void SetErrorCode(EphemerisErrorCode value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = value;
  }
  inline EphemerisErrorReason& WithErrorCode(EphemerisErrorCode value) {
    SetErrorCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable message describing the validation failure.</p> <p>Provides
   * specific details about what failed and may include suggestions for
   * remediation.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  EphemerisErrorReason& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}
 private:
  EphemerisErrorCode m_errorCode{EphemerisErrorCode::NOT_SET};

  Aws::String m_errorMessage;
  bool m_errorCodeHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
