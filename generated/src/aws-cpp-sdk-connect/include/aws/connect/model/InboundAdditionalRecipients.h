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
   * <p>The additional TO CC recipients information of inbound email.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/InboundAdditionalRecipients">AWS
   * API Reference</a></p>
   */
  class InboundAdditionalRecipients
  {
  public:
    AWS_CONNECT_API InboundAdditionalRecipients();
    AWS_CONNECT_API InboundAdditionalRecipients(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API InboundAdditionalRecipients& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The additional recipients information present in to list.</p>
     */
    inline const Aws::Vector<EmailAddressInfo>& GetToAddresses() const{ return m_toAddresses; }
    inline bool ToAddressesHasBeenSet() const { return m_toAddressesHasBeenSet; }
    inline void SetToAddresses(const Aws::Vector<EmailAddressInfo>& value) { m_toAddressesHasBeenSet = true; m_toAddresses = value; }
    inline void SetToAddresses(Aws::Vector<EmailAddressInfo>&& value) { m_toAddressesHasBeenSet = true; m_toAddresses = std::move(value); }
    inline InboundAdditionalRecipients& WithToAddresses(const Aws::Vector<EmailAddressInfo>& value) { SetToAddresses(value); return *this;}
    inline InboundAdditionalRecipients& WithToAddresses(Aws::Vector<EmailAddressInfo>&& value) { SetToAddresses(std::move(value)); return *this;}
    inline InboundAdditionalRecipients& AddToAddresses(const EmailAddressInfo& value) { m_toAddressesHasBeenSet = true; m_toAddresses.push_back(value); return *this; }
    inline InboundAdditionalRecipients& AddToAddresses(EmailAddressInfo&& value) { m_toAddressesHasBeenSet = true; m_toAddresses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The additional recipients information present in cc list.</p>
     */
    inline const Aws::Vector<EmailAddressInfo>& GetCcAddresses() const{ return m_ccAddresses; }
    inline bool CcAddressesHasBeenSet() const { return m_ccAddressesHasBeenSet; }
    inline void SetCcAddresses(const Aws::Vector<EmailAddressInfo>& value) { m_ccAddressesHasBeenSet = true; m_ccAddresses = value; }
    inline void SetCcAddresses(Aws::Vector<EmailAddressInfo>&& value) { m_ccAddressesHasBeenSet = true; m_ccAddresses = std::move(value); }
    inline InboundAdditionalRecipients& WithCcAddresses(const Aws::Vector<EmailAddressInfo>& value) { SetCcAddresses(value); return *this;}
    inline InboundAdditionalRecipients& WithCcAddresses(Aws::Vector<EmailAddressInfo>&& value) { SetCcAddresses(std::move(value)); return *this;}
    inline InboundAdditionalRecipients& AddCcAddresses(const EmailAddressInfo& value) { m_ccAddressesHasBeenSet = true; m_ccAddresses.push_back(value); return *this; }
    inline InboundAdditionalRecipients& AddCcAddresses(EmailAddressInfo&& value) { m_ccAddressesHasBeenSet = true; m_ccAddresses.push_back(std::move(value)); return *this; }
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
