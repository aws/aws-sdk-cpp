/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/JobErrorCode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LocationService {
namespace Model {

/**
 * <p>Error information for failed jobs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/JobError">AWS
 * API Reference</a></p>
 */
class JobError {
 public:
  AWS_LOCATIONSERVICE_API JobError() = default;
  AWS_LOCATIONSERVICE_API JobError(Aws::Utils::Json::JsonView jsonValue);
  AWS_LOCATIONSERVICE_API JobError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Error code indicating the type of error that occurred.</p>
   */
  inline JobErrorCode GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  inline void SetCode(JobErrorCode value) {
    m_codeHasBeenSet = true;
    m_code = value;
  }
  inline JobError& WithCode(JobErrorCode value) {
    SetCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Error messages providing details about the failure.</p>
   */
  inline const Aws::Vector<Aws::String>& GetMessages() const { return m_messages; }
  inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }
  template <typename MessagesT = Aws::Vector<Aws::String>>
  void SetMessages(MessagesT&& value) {
    m_messagesHasBeenSet = true;
    m_messages = std::forward<MessagesT>(value);
  }
  template <typename MessagesT = Aws::Vector<Aws::String>>
  JobError& WithMessages(MessagesT&& value) {
    SetMessages(std::forward<MessagesT>(value));
    return *this;
  }
  template <typename MessagesT = Aws::String>
  JobError& AddMessages(MessagesT&& value) {
    m_messagesHasBeenSet = true;
    m_messages.emplace_back(std::forward<MessagesT>(value));
    return *this;
  }
  ///@}
 private:
  JobErrorCode m_code{JobErrorCode::NOT_SET};

  Aws::Vector<Aws::String> m_messages;
  bool m_codeHasBeenSet = false;
  bool m_messagesHasBeenSet = false;
};

}  // namespace Model
}  // namespace LocationService
}  // namespace Aws
