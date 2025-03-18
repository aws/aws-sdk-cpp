﻿/**
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
    AWS_CONNECT_API OutboundAdditionalRecipients() = default;
    AWS_CONNECT_API OutboundAdditionalRecipients(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API OutboundAdditionalRecipients& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The additional CC email address recipients information.</p>
     */
    inline const Aws::Vector<EmailAddressInfo>& GetCcEmailAddresses() const { return m_ccEmailAddresses; }
    inline bool CcEmailAddressesHasBeenSet() const { return m_ccEmailAddressesHasBeenSet; }
    template<typename CcEmailAddressesT = Aws::Vector<EmailAddressInfo>>
    void SetCcEmailAddresses(CcEmailAddressesT&& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses = std::forward<CcEmailAddressesT>(value); }
    template<typename CcEmailAddressesT = Aws::Vector<EmailAddressInfo>>
    OutboundAdditionalRecipients& WithCcEmailAddresses(CcEmailAddressesT&& value) { SetCcEmailAddresses(std::forward<CcEmailAddressesT>(value)); return *this;}
    template<typename CcEmailAddressesT = EmailAddressInfo>
    OutboundAdditionalRecipients& AddCcEmailAddresses(CcEmailAddressesT&& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses.emplace_back(std::forward<CcEmailAddressesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<EmailAddressInfo> m_ccEmailAddresses;
    bool m_ccEmailAddressesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
