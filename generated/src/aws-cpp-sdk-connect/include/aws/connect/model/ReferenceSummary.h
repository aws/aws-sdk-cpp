/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/UrlReference.h>
#include <aws/connect/model/AttachmentReference.h>
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


    /**
     * <p>Information about the reference when the <code>referenceType</code> is
     * <code>URL</code>. Otherwise, null.</p>
     */
    inline const UrlReference& GetUrl() const{ return m_url; }

    /**
     * <p>Information about the reference when the <code>referenceType</code> is
     * <code>URL</code>. Otherwise, null.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>Information about the reference when the <code>referenceType</code> is
     * <code>URL</code>. Otherwise, null.</p>
     */
    inline void SetUrl(const UrlReference& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>Information about the reference when the <code>referenceType</code> is
     * <code>URL</code>. Otherwise, null.</p>
     */
    inline void SetUrl(UrlReference&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>Information about the reference when the <code>referenceType</code> is
     * <code>URL</code>. Otherwise, null.</p>
     */
    inline ReferenceSummary& WithUrl(const UrlReference& value) { SetUrl(value); return *this;}

    /**
     * <p>Information about the reference when the <code>referenceType</code> is
     * <code>URL</code>. Otherwise, null.</p>
     */
    inline ReferenceSummary& WithUrl(UrlReference&& value) { SetUrl(std::move(value)); return *this;}


    /**
     * <p>Information about the reference when the <code>referenceType</code> is
     * <code>ATTACHMENT</code>. Otherwise, null.</p>
     */
    inline const AttachmentReference& GetAttachment() const{ return m_attachment; }

    /**
     * <p>Information about the reference when the <code>referenceType</code> is
     * <code>ATTACHMENT</code>. Otherwise, null.</p>
     */
    inline bool AttachmentHasBeenSet() const { return m_attachmentHasBeenSet; }

    /**
     * <p>Information about the reference when the <code>referenceType</code> is
     * <code>ATTACHMENT</code>. Otherwise, null.</p>
     */
    inline void SetAttachment(const AttachmentReference& value) { m_attachmentHasBeenSet = true; m_attachment = value; }

    /**
     * <p>Information about the reference when the <code>referenceType</code> is
     * <code>ATTACHMENT</code>. Otherwise, null.</p>
     */
    inline void SetAttachment(AttachmentReference&& value) { m_attachmentHasBeenSet = true; m_attachment = std::move(value); }

    /**
     * <p>Information about the reference when the <code>referenceType</code> is
     * <code>ATTACHMENT</code>. Otherwise, null.</p>
     */
    inline ReferenceSummary& WithAttachment(const AttachmentReference& value) { SetAttachment(value); return *this;}

    /**
     * <p>Information about the reference when the <code>referenceType</code> is
     * <code>ATTACHMENT</code>. Otherwise, null.</p>
     */
    inline ReferenceSummary& WithAttachment(AttachmentReference&& value) { SetAttachment(std::move(value)); return *this;}


    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>STRING</code>. Otherwise, null.</p>
     */
    inline const StringReference& GetString() const{ return m_string; }

    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>STRING</code>. Otherwise, null.</p>
     */
    inline bool StringHasBeenSet() const { return m_stringHasBeenSet; }

    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>STRING</code>. Otherwise, null.</p>
     */
    inline void SetString(const StringReference& value) { m_stringHasBeenSet = true; m_string = value; }

    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>STRING</code>. Otherwise, null.</p>
     */
    inline void SetString(StringReference&& value) { m_stringHasBeenSet = true; m_string = std::move(value); }

    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>STRING</code>. Otherwise, null.</p>
     */
    inline ReferenceSummary& WithString(const StringReference& value) { SetString(value); return *this;}

    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>STRING</code>. Otherwise, null.</p>
     */
    inline ReferenceSummary& WithString(StringReference&& value) { SetString(std::move(value)); return *this;}


    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>NUMBER</code>. Otherwise, null.</p>
     */
    inline const NumberReference& GetNumber() const{ return m_number; }

    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>NUMBER</code>. Otherwise, null.</p>
     */
    inline bool NumberHasBeenSet() const { return m_numberHasBeenSet; }

    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>NUMBER</code>. Otherwise, null.</p>
     */
    inline void SetNumber(const NumberReference& value) { m_numberHasBeenSet = true; m_number = value; }

    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>NUMBER</code>. Otherwise, null.</p>
     */
    inline void SetNumber(NumberReference&& value) { m_numberHasBeenSet = true; m_number = std::move(value); }

    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>NUMBER</code>. Otherwise, null.</p>
     */
    inline ReferenceSummary& WithNumber(const NumberReference& value) { SetNumber(value); return *this;}

    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>NUMBER</code>. Otherwise, null.</p>
     */
    inline ReferenceSummary& WithNumber(NumberReference&& value) { SetNumber(std::move(value)); return *this;}


    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>DATE</code>. Otherwise, null.</p>
     */
    inline const DateReference& GetDate() const{ return m_date; }

    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>DATE</code>. Otherwise, null.</p>
     */
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }

    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>DATE</code>. Otherwise, null.</p>
     */
    inline void SetDate(const DateReference& value) { m_dateHasBeenSet = true; m_date = value; }

    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>DATE</code>. Otherwise, null.</p>
     */
    inline void SetDate(DateReference&& value) { m_dateHasBeenSet = true; m_date = std::move(value); }

    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>DATE</code>. Otherwise, null.</p>
     */
    inline ReferenceSummary& WithDate(const DateReference& value) { SetDate(value); return *this;}

    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>DATE</code>. Otherwise, null.</p>
     */
    inline ReferenceSummary& WithDate(DateReference&& value) { SetDate(std::move(value)); return *this;}


    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>EMAIL</code>. Otherwise, null.</p>
     */
    inline const EmailReference& GetEmail() const{ return m_email; }

    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>EMAIL</code>. Otherwise, null.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>EMAIL</code>. Otherwise, null.</p>
     */
    inline void SetEmail(const EmailReference& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>EMAIL</code>. Otherwise, null.</p>
     */
    inline void SetEmail(EmailReference&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>EMAIL</code>. Otherwise, null.</p>
     */
    inline ReferenceSummary& WithEmail(const EmailReference& value) { SetEmail(value); return *this;}

    /**
     * <p>Information about a reference when the <code>referenceType</code> is
     * <code>EMAIL</code>. Otherwise, null.</p>
     */
    inline ReferenceSummary& WithEmail(EmailReference&& value) { SetEmail(std::move(value)); return *this;}

  private:

    UrlReference m_url;
    bool m_urlHasBeenSet = false;

    AttachmentReference m_attachment;
    bool m_attachmentHasBeenSet = false;

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
