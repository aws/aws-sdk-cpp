/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ResponseMode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p> The configuration of the participant. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ParticipantConfiguration">AWS
 * API Reference</a></p>
 */
class ParticipantConfiguration {
 public:
  AWS_CONNECT_API ParticipantConfiguration() = default;
  AWS_CONNECT_API ParticipantConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ParticipantConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The mode in which responses should be sent to the participant. </p>
   */
  inline ResponseMode GetResponseMode() const { return m_responseMode; }
  inline bool ResponseModeHasBeenSet() const { return m_responseModeHasBeenSet; }
  inline void SetResponseMode(ResponseMode value) {
    m_responseModeHasBeenSet = true;
    m_responseMode = value;
  }
  inline ParticipantConfiguration& WithResponseMode(ResponseMode value) {
    SetResponseMode(value);
    return *this;
  }
  ///@}
 private:
  ResponseMode m_responseMode{ResponseMode::NOT_SET};
  bool m_responseModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
