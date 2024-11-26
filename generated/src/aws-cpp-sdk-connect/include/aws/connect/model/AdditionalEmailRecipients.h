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
    AWS_CONNECT_API AdditionalEmailRecipients();
    AWS_CONNECT_API AdditionalEmailRecipients(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AdditionalEmailRecipients& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of additional TO email recipients for an email contact.</p>
     */
    inline const Aws::Vector<EmailRecipient>& GetToList() const{ return m_toList; }
    inline bool ToListHasBeenSet() const { return m_toListHasBeenSet; }
    inline void SetToList(const Aws::Vector<EmailRecipient>& value) { m_toListHasBeenSet = true; m_toList = value; }
    inline void SetToList(Aws::Vector<EmailRecipient>&& value) { m_toListHasBeenSet = true; m_toList = std::move(value); }
    inline AdditionalEmailRecipients& WithToList(const Aws::Vector<EmailRecipient>& value) { SetToList(value); return *this;}
    inline AdditionalEmailRecipients& WithToList(Aws::Vector<EmailRecipient>&& value) { SetToList(std::move(value)); return *this;}
    inline AdditionalEmailRecipients& AddToList(const EmailRecipient& value) { m_toListHasBeenSet = true; m_toList.push_back(value); return *this; }
    inline AdditionalEmailRecipients& AddToList(EmailRecipient&& value) { m_toListHasBeenSet = true; m_toList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of additional CC email recipients for an email contact.</p>
     */
    inline const Aws::Vector<EmailRecipient>& GetCcList() const{ return m_ccList; }
    inline bool CcListHasBeenSet() const { return m_ccListHasBeenSet; }
    inline void SetCcList(const Aws::Vector<EmailRecipient>& value) { m_ccListHasBeenSet = true; m_ccList = value; }
    inline void SetCcList(Aws::Vector<EmailRecipient>&& value) { m_ccListHasBeenSet = true; m_ccList = std::move(value); }
    inline AdditionalEmailRecipients& WithCcList(const Aws::Vector<EmailRecipient>& value) { SetCcList(value); return *this;}
    inline AdditionalEmailRecipients& WithCcList(Aws::Vector<EmailRecipient>&& value) { SetCcList(std::move(value)); return *this;}
    inline AdditionalEmailRecipients& AddCcList(const EmailRecipient& value) { m_ccListHasBeenSet = true; m_ccList.push_back(value); return *this; }
    inline AdditionalEmailRecipients& AddCcList(EmailRecipient&& value) { m_ccListHasBeenSet = true; m_ccList.push_back(std::move(value)); return *this; }
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
