/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/UrlReference.h>
#include <aws/connect/model/AttachmentReference.h>
#include <aws/connect/model/EmailMessageReference.h>
#include <aws/connect/model/StringReference.h>
#include <aws/connect/model/NumberReference.h>
#include <aws/connect/model/DateReference.h>
#include <aws/connect/model/EmailReference.h>
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
   * <p>Contains summary information about a reference. <code>ReferenceSummary</code>
   * contains only one non null field between the URL and attachment based on the
   * reference type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ReferenceSummary">AWS
   * API Reference</a></p>
   */
  class ReferenceSummary
  {
  public:
    AWS_CONNECT_API ReferenceSummary() = default;
    AWS_CONNECT_API ReferenceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ReferenceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the reference when the <code>referenceType</code> is
     * <code>URL</code>. Otherwise, null.</p>
     */
    inline const UrlReference& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = UrlReference>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = UrlReference>
    ReferenceSummary& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the reference when the <code>referenceType</code> is
     * <code>ATTACHMENT</code>. Otherwise, null.</p>
     */
    inline const AttachmentReference& GetAttachment() const { return m_attachment; }
    inline bool AttachmentHasBeenSet() const { return m_attachmentHasBeenSet; }
    template<typename AttachmentT = AttachmentReference>
    void SetAttachment(AttachmentT&& value) { m_attachmentHasBeenSet = true; m_attachment = std::forward<AttachmentT>(value); }
    template<typename AttachmentT = AttachmentReference>
    ReferenceSummary& WithAttachment(AttachmentT&& value) { SetAttachment(std::forward<AttachmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the reference when the referenceType is
     * <code>EMAIL_MESSAGE</code>. Otherwise, null.</p>
     */
    inline const EmailMessageReference& GetEmailMessage() const { return m_emailMessage; }
    inline bool EmailMessageHasBeenSet() const { return m_emailMessageHasBeenSet; }
    template<typename EmailMessageT = EmailMessageReference>
    void SetEmailMessage(EmailMessageT&& value) { m_emailMessageHasBeenSet = true; m_emailMessage = std::forward<EmailMessageT>(value); }
    template<typename EmailMessageT = EmailMessageReference>
    ReferenceSummary& WithEmailMessage(EmailMessageT&& value) { SetEmailMessage(std::forward<EmailMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>STRING</code>. Otherwise, null.</p>
     */
    inline const StringReference& GetString() const { return m_string; }
    inline bool StringHasBeenSet() const { return m_stringHasBeenSet; }
    template<typename StringT = StringReference>
    void SetString(StringT&& value) { m_stringHasBeenSet = true; m_string = std::forward<StringT>(value); }
    template<typename StringT = StringReference>
    ReferenceSummary& WithString(StringT&& value) { SetString(std::forward<StringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>NUMBER</code>. Otherwise, null.</p>
     */
    inline const NumberReference& GetNumber() const { return m_number; }
    inline bool NumberHasBeenSet() const { return m_numberHasBeenSet; }
    template<typename NumberT = NumberReference>
    void SetNumber(NumberT&& value) { m_numberHasBeenSet = true; m_number = std::forward<NumberT>(value); }
    template<typename NumberT = NumberReference>
    ReferenceSummary& WithNumber(NumberT&& value) { SetNumber(std::forward<NumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>DATE</code>. Otherwise, null.</p>
     */
    inline const DateReference& GetDate() const { return m_date; }
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
    template<typename DateT = DateReference>
    void SetDate(DateT&& value) { m_dateHasBeenSet = true; m_date = std::forward<DateT>(value); }
    template<typename DateT = DateReference>
    ReferenceSummary& WithDate(DateT&& value) { SetDate(std::forward<DateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>EMAIL</code>. Otherwise, null.</p>
     */
    inline const EmailReference& GetEmail() const { return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    template<typename EmailT = EmailReference>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = EmailReference>
    ReferenceSummary& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    ///@}
  private:

    UrlReference m_url;
    bool m_urlHasBeenSet = false;

    AttachmentReference m_attachment;
    bool m_attachmentHasBeenSet = false;

    EmailMessageReference m_emailMessage;
    bool m_emailMessageHasBeenSet = false;

    StringReference m_string;
    bool m_stringHasBeenSet = false;

    NumberReference m_number;
    bool m_numberHasBeenSet = false;

    DateReference m_date;
    bool m_dateHasBeenSet = false;

    EmailReference m_email;
    bool m_emailHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
