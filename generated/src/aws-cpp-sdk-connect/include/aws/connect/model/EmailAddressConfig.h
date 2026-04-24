/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
 * <p>Configuration object that specifies an email address to be associated with a
 * queue. This configuration contains the identifier of the email address that
 * should be linked to the queue for routing email contacts.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EmailAddressConfig">AWS
 * API Reference</a></p>
 */
class EmailAddressConfig {
 public:
  AWS_CONNECT_API EmailAddressConfig() = default;
  AWS_CONNECT_API EmailAddressConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EmailAddressConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the email address that should be associated with the queue.
   * This email address must already exist in the Amazon Connect instance and will be
   * used to route incoming email contacts to the specified queue.</p>
   */
  inline const Aws::String& GetEmailAddressId() const { return m_emailAddressId; }
  inline bool EmailAddressIdHasBeenSet() const { return m_emailAddressIdHasBeenSet; }
  template <typename EmailAddressIdT = Aws::String>
  void SetEmailAddressId(EmailAddressIdT&& value) {
    m_emailAddressIdHasBeenSet = true;
    m_emailAddressId = std::forward<EmailAddressIdT>(value);
  }
  template <typename EmailAddressIdT = Aws::String>
  EmailAddressConfig& WithEmailAddressId(EmailAddressIdT&& value) {
    SetEmailAddressId(std::forward<EmailAddressIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_emailAddressId;
  bool m_emailAddressIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
