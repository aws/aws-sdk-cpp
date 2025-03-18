/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/EmailRecipient.h>
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
   * <p>List of additional email addresses for an email contact.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AdditionalEmailRecipients">AWS
   * API Reference</a></p>
   */
  class AdditionalEmailRecipients
  {
  public:
    AWS_CONNECT_API AdditionalEmailRecipients() = default;
    AWS_CONNECT_API AdditionalEmailRecipients(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AdditionalEmailRecipients& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of additional TO email recipients for an email contact.</p>
     */
    inline const Aws::Vector<EmailRecipient>& GetToList() const { return m_toList; }
    inline bool ToListHasBeenSet() const { return m_toListHasBeenSet; }
    template<typename ToListT = Aws::Vector<EmailRecipient>>
    void SetToList(ToListT&& value) { m_toListHasBeenSet = true; m_toList = std::forward<ToListT>(value); }
    template<typename ToListT = Aws::Vector<EmailRecipient>>
    AdditionalEmailRecipients& WithToList(ToListT&& value) { SetToList(std::forward<ToListT>(value)); return *this;}
    template<typename ToListT = EmailRecipient>
    AdditionalEmailRecipients& AddToList(ToListT&& value) { m_toListHasBeenSet = true; m_toList.emplace_back(std::forward<ToListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of additional CC email recipients for an email contact.</p>
     */
    inline const Aws::Vector<EmailRecipient>& GetCcList() const { return m_ccList; }
    inline bool CcListHasBeenSet() const { return m_ccListHasBeenSet; }
    template<typename CcListT = Aws::Vector<EmailRecipient>>
    void SetCcList(CcListT&& value) { m_ccListHasBeenSet = true; m_ccList = std::forward<CcListT>(value); }
    template<typename CcListT = Aws::Vector<EmailRecipient>>
    AdditionalEmailRecipients& WithCcList(CcListT&& value) { SetCcList(std::forward<CcListT>(value)); return *this;}
    template<typename CcListT = EmailRecipient>
    AdditionalEmailRecipients& AddCcList(CcListT&& value) { m_ccListHasBeenSet = true; m_ccList.emplace_back(std::forward<CcListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<EmailRecipient> m_toList;
    bool m_toListHasBeenSet = false;

    Aws::Vector<EmailRecipient> m_ccList;
    bool m_ccListHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
