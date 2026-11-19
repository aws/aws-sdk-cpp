/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>

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
 * <p>Information about the voicemails recorded for a voice contact.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/VoicemailInfo">AWS
 * API Reference</a></p>
 */
class VoicemailInfo {
 public:
  AWS_CONNECT_API VoicemailInfo() = default;
  AWS_CONNECT_API VoicemailInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API VoicemailInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of voicemails recorded for the contact. Valid range is 1-3.</p>
   */
  inline int GetNumberOfVoicemails() const { return m_numberOfVoicemails; }
  inline bool NumberOfVoicemailsHasBeenSet() const { return m_numberOfVoicemailsHasBeenSet; }
  inline void SetNumberOfVoicemails(int value) {
    m_numberOfVoicemailsHasBeenSet = true;
    m_numberOfVoicemails = value;
  }
  inline VoicemailInfo& WithNumberOfVoicemails(int value) {
    SetNumberOfVoicemails(value);
    return *this;
  }
  ///@}
 private:
  int m_numberOfVoicemails{0};
  bool m_numberOfVoicemailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
