/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/EmailAddressInfo.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Connect
{
namespace Model
{

  /**
   * <p>The additional recipients information of outbound email.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/OutboundAdditionalRecipients">AWS
   * API Reference</a></p>
   */
  class OutboundAdditionalRecipients
  {
  public:
    AWS_CONNECT_API OutboundAdditionalRecipients();
    AWS_CONNECT_API OutboundAdditionalRecipients(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API OutboundAdditionalRecipients& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The additional CC email address recipients information.</p>
     */
    inline const Aws::Vector<EmailAddressInfo>& GetCcEmailAddresses() const{ return m_ccEmailAddresses; }
    inline bool CcEmailAddressesHasBeenSet() const { return m_ccEmailAddressesHasBeenSet; }
    inline void SetCcEmailAddresses(const Aws::Vector<EmailAddressInfo>& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses = value; }
    inline void SetCcEmailAddresses(Aws::Vector<EmailAddressInfo>&& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses = std::move(value); }
    inline OutboundAdditionalRecipients& WithCcEmailAddresses(const Aws::Vector<EmailAddressInfo>& value) { SetCcEmailAddresses(value); return *this;}
    inline OutboundAdditionalRecipients& WithCcEmailAddresses(Aws::Vector<EmailAddressInfo>&& value) { SetCcEmailAddresses(std::move(value)); return *this;}
    inline OutboundAdditionalRecipients& AddCcEmailAddresses(const EmailAddressInfo& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses.push_back(value); return *this; }
    inline OutboundAdditionalRecipients& AddCcEmailAddresses(EmailAddressInfo&& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<EmailAddressInfo> m_ccEmailAddresses;
    bool m_ccEmailAddressesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
