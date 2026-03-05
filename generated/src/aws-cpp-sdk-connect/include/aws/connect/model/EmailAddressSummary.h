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
 * <p>Summary information about an email address associated with a queue. Contains
 * the essential details needed to identify and manage the email address routing
 * configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EmailAddressSummary">AWS
 * API Reference</a></p>
 */
class EmailAddressSummary {
 public:
  AWS_CONNECT_API EmailAddressSummary() = default;
  AWS_CONNECT_API EmailAddressSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EmailAddressSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the email address associated with the queue.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  EmailAddressSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the email address associated with the
   * queue.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  EmailAddressSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether this email address is configured as the default outbound
   * email address for the queue. When set to true, this email address is used as the
   * default sender for outbound email contacts from this queue.</p>
   */
  inline bool GetIsDefaultOutboundEmail() const { return m_isDefaultOutboundEmail; }
  inline bool IsDefaultOutboundEmailHasBeenSet() const { return m_isDefaultOutboundEmailHasBeenSet; }
  inline void SetIsDefaultOutboundEmail(bool value) {
    m_isDefaultOutboundEmailHasBeenSet = true;
    m_isDefaultOutboundEmail = value;
  }
  inline EmailAddressSummary& WithIsDefaultOutboundEmail(bool value) {
    SetIsDefaultOutboundEmail(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_arn;

  bool m_isDefaultOutboundEmail{false};
  bool m_idHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_isDefaultOutboundEmailHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
