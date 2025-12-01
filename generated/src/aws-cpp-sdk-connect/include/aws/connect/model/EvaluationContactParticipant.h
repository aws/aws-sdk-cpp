/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ContactParticipantRole.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Information about a contact participant in the evaluation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationContactParticipant">AWS
 * API Reference</a></p>
 */
class EvaluationContactParticipant {
 public:
  AWS_CONNECT_API EvaluationContactParticipant() = default;
  AWS_CONNECT_API EvaluationContactParticipant(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationContactParticipant& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The role of the contact participant.</p>
   */
  inline ContactParticipantRole GetContactParticipantRole() const { return m_contactParticipantRole; }
  inline bool ContactParticipantRoleHasBeenSet() const { return m_contactParticipantRoleHasBeenSet; }
  inline void SetContactParticipantRole(ContactParticipantRole value) {
    m_contactParticipantRoleHasBeenSet = true;
    m_contactParticipantRole = value;
  }
  inline EvaluationContactParticipant& WithContactParticipantRole(ContactParticipantRole value) {
    SetContactParticipantRole(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier for the contact participant.</p>
   */
  inline const Aws::String& GetContactParticipantId() const { return m_contactParticipantId; }
  inline bool ContactParticipantIdHasBeenSet() const { return m_contactParticipantIdHasBeenSet; }
  template <typename ContactParticipantIdT = Aws::String>
  void SetContactParticipantId(ContactParticipantIdT&& value) {
    m_contactParticipantIdHasBeenSet = true;
    m_contactParticipantId = std::forward<ContactParticipantIdT>(value);
  }
  template <typename ContactParticipantIdT = Aws::String>
  EvaluationContactParticipant& WithContactParticipantId(ContactParticipantIdT&& value) {
    SetContactParticipantId(std::forward<ContactParticipantIdT>(value));
    return *this;
  }
  ///@}
 private:
  ContactParticipantRole m_contactParticipantRole{ContactParticipantRole::NOT_SET};
  bool m_contactParticipantRoleHasBeenSet = false;

  Aws::String m_contactParticipantId;
  bool m_contactParticipantIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
