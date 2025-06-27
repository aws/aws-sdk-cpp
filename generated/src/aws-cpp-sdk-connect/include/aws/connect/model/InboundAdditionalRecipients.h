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
   * <p>Information about the additional TO and CC recipients of an inbound email
   * contact.</p>  <p>You can include up to 50 email addresses in total,
   * distributed across <a
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_StartEmailContact.html#API_StartEmailContact_RequestBody">DestinationEmailAddress</a>,
   * <code>ToAddresses</code>, and <code>CcAddresses</code>. This total must include
   * one required <code>DestinationEmailAddress</code>. You can then specify up to 49
   * addresses allocated across <code>ToAddresses</code> and <code>CcAddresses</code>
   * as needed.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/InboundAdditionalRecipients">AWS
   * API Reference</a></p>
   */
  class InboundAdditionalRecipients
  {
  public:
    AWS_CONNECT_API InboundAdditionalRecipients() = default;
    AWS_CONNECT_API InboundAdditionalRecipients(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API InboundAdditionalRecipients& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <b>additional</b> recipients information present in to list. You must
     * have 1 required recipient (<code>DestinationEmailAddress</code>). You can then
     * specify up to 49 additional recipients (across <code>ToAddresses</code> and
     * <code>CcAddresses</code>), for a total of 50 recipients.</p>
     */
    inline const Aws::Vector<EmailAddressInfo>& GetToAddresses() const { return m_toAddresses; }
    inline bool ToAddressesHasBeenSet() const { return m_toAddressesHasBeenSet; }
    template<typename ToAddressesT = Aws::Vector<EmailAddressInfo>>
    void SetToAddresses(ToAddressesT&& value) { m_toAddressesHasBeenSet = true; m_toAddresses = std::forward<ToAddressesT>(value); }
    template<typename ToAddressesT = Aws::Vector<EmailAddressInfo>>
    InboundAdditionalRecipients& WithToAddresses(ToAddressesT&& value) { SetToAddresses(std::forward<ToAddressesT>(value)); return *this;}
    template<typename ToAddressesT = EmailAddressInfo>
    InboundAdditionalRecipients& AddToAddresses(ToAddressesT&& value) { m_toAddressesHasBeenSet = true; m_toAddresses.emplace_back(std::forward<ToAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <b>additional</b> recipients information present in cc list. You must
     * have 1 required recipient (<code>DestinationEmailAddress</code>). You can then
     * specify up to 49 additional recipients (across <code>ToAddresses</code> and
     * <code>CcAddresses</code>), for a total of 50 recipients.</p>
     */
    inline const Aws::Vector<EmailAddressInfo>& GetCcAddresses() const { return m_ccAddresses; }
    inline bool CcAddressesHasBeenSet() const { return m_ccAddressesHasBeenSet; }
    template<typename CcAddressesT = Aws::Vector<EmailAddressInfo>>
    void SetCcAddresses(CcAddressesT&& value) { m_ccAddressesHasBeenSet = true; m_ccAddresses = std::forward<CcAddressesT>(value); }
    template<typename CcAddressesT = Aws::Vector<EmailAddressInfo>>
    InboundAdditionalRecipients& WithCcAddresses(CcAddressesT&& value) { SetCcAddresses(std::forward<CcAddressesT>(value)); return *this;}
    template<typename CcAddressesT = EmailAddressInfo>
    InboundAdditionalRecipients& AddCcAddresses(CcAddressesT&& value) { m_ccAddressesHasBeenSet = true; m_ccAddresses.emplace_back(std::forward<CcAddressesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<EmailAddressInfo> m_toAddresses;
    bool m_toAddressesHasBeenSet = false;

    Aws::Vector<EmailAddressInfo> m_ccAddresses;
    bool m_ccAddressesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
