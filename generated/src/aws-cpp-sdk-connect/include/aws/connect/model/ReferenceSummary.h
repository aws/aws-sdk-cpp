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
    AWS_CONNECT_API ReferenceSummary();
    AWS_CONNECT_API ReferenceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ReferenceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the reference when the <code>referenceType</code> is
     * <code>URL</code>. Otherwise, null.</p>
     */
    inline const UrlReference& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const UrlReference& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(UrlReference&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline ReferenceSummary& WithUrl(const UrlReference& value) { SetUrl(value); return *this;}
    inline ReferenceSummary& WithUrl(UrlReference&& value) { SetUrl(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the reference when the <code>referenceType</code> is
     * <code>ATTACHMENT</code>. Otherwise, null.</p>
     */
    inline const AttachmentReference& GetAttachment() const{ return m_attachment; }
    inline bool AttachmentHasBeenSet() const { return m_attachmentHasBeenSet; }
    inline void SetAttachment(const AttachmentReference& value) { m_attachmentHasBeenSet = true; m_attachment = value; }
    inline void SetAttachment(AttachmentReference&& value) { m_attachmentHasBeenSet = true; m_attachment = std::move(value); }
    inline ReferenceSummary& WithAttachment(const AttachmentReference& value) { SetAttachment(value); return *this;}
    inline ReferenceSummary& WithAttachment(AttachmentReference&& value) { SetAttachment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the reference when the referenceType is
     * <code>EMAIL_MESSAGE</code>. Otherwise, null.</p>
     */
    inline const EmailMessageReference& GetEmailMessage() const{ return m_emailMessage; }
    inline bool EmailMessageHasBeenSet() const { return m_emailMessageHasBeenSet; }
    inline void SetEmailMessage(const EmailMessageReference& value) { m_emailMessageHasBeenSet = true; m_emailMessage = value; }
    inline void SetEmailMessage(EmailMessageReference&& value) { m_emailMessageHasBeenSet = true; m_emailMessage = std::move(value); }
    inline ReferenceSummary& WithEmailMessage(const EmailMessageReference& value) { SetEmailMessage(value); return *this;}
    inline ReferenceSummary& WithEmailMessage(EmailMessageReference&& value) { SetEmailMessage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>STRING</code>. Otherwise, null.</p>
     */
    inline const StringReference& GetString() const{ return m_string; }
    inline bool StringHasBeenSet() const { return m_stringHasBeenSet; }
    inline void SetString(const StringReference& value) { m_stringHasBeenSet = true; m_string = value; }
    inline void SetString(StringReference&& value) { m_stringHasBeenSet = true; m_string = std::move(value); }
    inline ReferenceSummary& WithString(const StringReference& value) { SetString(value); return *this;}
    inline ReferenceSummary& WithString(StringReference&& value) { SetString(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>NUMBER</code>. Otherwise, null.</p>
     */
    inline const NumberReference& GetNumber() const{ return m_number; }
    inline bool NumberHasBeenSet() const { return m_numberHasBeenSet; }
    inline void SetNumber(const NumberReference& value) { m_numberHasBeenSet = true; m_number = value; }
    inline void SetNumber(NumberReference&& value) { m_numberHasBeenSet = true; m_number = std::move(value); }
    inline ReferenceSummary& WithNumber(const NumberReference& value) { SetNumber(value); return *this;}
    inline ReferenceSummary& WithNumber(NumberReference&& value) { SetNumber(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>DATE</code>. Otherwise, null.</p>
     */
    inline const DateReference& GetDate() const{ return m_date; }
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
    inline void SetDate(const DateReference& value) { m_dateHasBeenSet = true; m_date = value; }
    inline void SetDate(DateReference&& value) { m_dateHasBeenSet = true; m_date = std::move(value); }
    inline ReferenceSummary& WithDate(const DateReference& value) { SetDate(value); return *this;}
    inline ReferenceSummary& WithDate(DateReference&& value) { SetDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>EMAIL</code>. Otherwise, null.</p>
     */
    inline const EmailReference& GetEmail() const{ return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    inline void SetEmail(const EmailReference& value) { m_emailHasBeenSet = true; m_email = value; }
    inline void SetEmail(EmailReference&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }
    inline ReferenceSummary& WithEmail(const EmailReference& value) { SetEmail(value); return *this;}
    inline ReferenceSummary& WithEmail(EmailReference&& value) { SetEmail(std::move(value)); return *this;}
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
