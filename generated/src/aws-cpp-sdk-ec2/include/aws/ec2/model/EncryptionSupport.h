/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/EncryptionStateValue.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Describes the encryption support status for a transit gateway.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EncryptionSupport">AWS
 * API Reference</a></p>
 */
class EncryptionSupport {
 public:
  AWS_EC2_API EncryptionSupport() = default;
  AWS_EC2_API EncryptionSupport(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API EncryptionSupport& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The current encryption state of the resource.</p>
   */
  inline EncryptionStateValue GetEncryptionState() const { return m_encryptionState; }
  inline bool EncryptionStateHasBeenSet() const { return m_encryptionStateHasBeenSet; }
  inline void SetEncryptionState(EncryptionStateValue value) {
    m_encryptionStateHasBeenSet = true;
    m_encryptionState = value;
  }
  inline EncryptionSupport& WithEncryptionState(EncryptionStateValue value) {
    SetEncryptionState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message describing the encryption state.</p>
   */
  inline const Aws::String& GetStateMessage() const { return m_stateMessage; }
  inline bool StateMessageHasBeenSet() const { return m_stateMessageHasBeenSet; }
  template <typename StateMessageT = Aws::String>
  void SetStateMessage(StateMessageT&& value) {
    m_stateMessageHasBeenSet = true;
    m_stateMessage = std::forward<StateMessageT>(value);
  }
  template <typename StateMessageT = Aws::String>
  EncryptionSupport& WithStateMessage(StateMessageT&& value) {
    SetStateMessage(std::forward<StateMessageT>(value));
    return *this;
  }
  ///@}
 private:
  EncryptionStateValue m_encryptionState{EncryptionStateValue::NOT_SET};
  bool m_encryptionStateHasBeenSet = false;

  Aws::String m_stateMessage;
  bool m_stateMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
