/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTWireless {
namespace Model {

/**
 * <p>The default session parameters for the multicast group.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DefaultSessionParametersMulticast">AWS
 * API Reference</a></p>
 */
class DefaultSessionParametersMulticast {
 public:
  AWS_IOTWIRELESS_API DefaultSessionParametersMulticast() = default;
  AWS_IOTWIRELESS_API DefaultSessionParametersMulticast(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTWIRELESS_API DefaultSessionParametersMulticast& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline int GetDlDr() const { return m_dlDr; }
  inline bool DlDrHasBeenSet() const { return m_dlDrHasBeenSet; }
  inline void SetDlDr(int value) {
    m_dlDrHasBeenSet = true;
    m_dlDr = value;
  }
  inline DefaultSessionParametersMulticast& WithDlDr(int value) {
    SetDlDr(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetDlFreq() const { return m_dlFreq; }
  inline bool DlFreqHasBeenSet() const { return m_dlFreqHasBeenSet; }
  inline void SetDlFreq(int value) {
    m_dlFreqHasBeenSet = true;
    m_dlFreq = value;
  }
  inline DefaultSessionParametersMulticast& WithDlFreq(int value) {
    SetDlFreq(value);
    return *this;
  }
  ///@}
 private:
  int m_dlDr{0};

  int m_dlFreq{0};
  bool m_dlDrHasBeenSet = false;
  bool m_dlFreqHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTWireless
}  // namespace Aws
