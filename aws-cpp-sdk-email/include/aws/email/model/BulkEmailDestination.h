/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/email/model/Destination.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/MessageTag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SES
{
namespace Model
{

  /**
   * <p>An array that contains one or more Destinations, as well as the tags and
   * replacement data associated with each of those Destinations.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/BulkEmailDestination">AWS
   * API Reference</a></p>
   */
  class BulkEmailDestination
  {
  public:
    AWS_SES_API BulkEmailDestination();
    AWS_SES_API BulkEmailDestination(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API BulkEmailDestination& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    
    inline const Destination& GetDestination() const{ return m_destination; }

    
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    
    inline void SetDestination(const Destination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    
    inline void SetDestination(Destination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    
    inline BulkEmailDestination& WithDestination(const Destination& value) { SetDestination(value); return *this;}

    
    inline BulkEmailDestination& WithDestination(Destination&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using <code>SendBulkTemplatedEmail</code>. Tags correspond to
     * characteristics of the email that you define, so that you can publish email
     * sending events.</p>
     */
    inline const Aws::Vector<MessageTag>& GetReplacementTags() const{ return m_replacementTags; }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using <code>SendBulkTemplatedEmail</code>. Tags correspond to
     * characteristics of the email that you define, so that you can publish email
     * sending events.</p>
     */
    inline bool ReplacementTagsHasBeenSet() const { return m_replacementTagsHasBeenSet; }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using <code>SendBulkTemplatedEmail</code>. Tags correspond to
     * characteristics of the email that you define, so that you can publish email
     * sending events.</p>
     */
    inline void SetReplacementTags(const Aws::Vector<MessageTag>& value) { m_replacementTagsHasBeenSet = true; m_replacementTags = value; }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using <code>SendBulkTemplatedEmail</code>. Tags correspond to
     * characteristics of the email that you define, so that you can publish email
     * sending events.</p>
     */
    inline void SetReplacementTags(Aws::Vector<MessageTag>&& value) { m_replacementTagsHasBeenSet = true; m_replacementTags = std::move(value); }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using <code>SendBulkTemplatedEmail</code>. Tags correspond to
     * characteristics of the email that you define, so that you can publish email
     * sending events.</p>
     */
    inline BulkEmailDestination& WithReplacementTags(const Aws::Vector<MessageTag>& value) { SetReplacementTags(value); return *this;}

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using <code>SendBulkTemplatedEmail</code>. Tags correspond to
     * characteristics of the email that you define, so that you can publish email
     * sending events.</p>
     */
    inline BulkEmailDestination& WithReplacementTags(Aws::Vector<MessageTag>&& value) { SetReplacementTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using <code>SendBulkTemplatedEmail</code>. Tags correspond to
     * characteristics of the email that you define, so that you can publish email
     * sending events.</p>
     */
    inline BulkEmailDestination& AddReplacementTags(const MessageTag& value) { m_replacementTagsHasBeenSet = true; m_replacementTags.push_back(value); return *this; }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using <code>SendBulkTemplatedEmail</code>. Tags correspond to
     * characteristics of the email that you define, so that you can publish email
     * sending events.</p>
     */
    inline BulkEmailDestination& AddReplacementTags(MessageTag&& value) { m_replacementTagsHasBeenSet = true; m_replacementTags.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of replacement values to apply to the template. This parameter is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline const Aws::String& GetReplacementTemplateData() const{ return m_replacementTemplateData; }

    /**
     * <p>A list of replacement values to apply to the template. This parameter is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline bool ReplacementTemplateDataHasBeenSet() const { return m_replacementTemplateDataHasBeenSet; }

    /**
     * <p>A list of replacement values to apply to the template. This parameter is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline void SetReplacementTemplateData(const Aws::String& value) { m_replacementTemplateDataHasBeenSet = true; m_replacementTemplateData = value; }

    /**
     * <p>A list of replacement values to apply to the template. This parameter is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline void SetReplacementTemplateData(Aws::String&& value) { m_replacementTemplateDataHasBeenSet = true; m_replacementTemplateData = std::move(value); }

    /**
     * <p>A list of replacement values to apply to the template. This parameter is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline void SetReplacementTemplateData(const char* value) { m_replacementTemplateDataHasBeenSet = true; m_replacementTemplateData.assign(value); }

    /**
     * <p>A list of replacement values to apply to the template. This parameter is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline BulkEmailDestination& WithReplacementTemplateData(const Aws::String& value) { SetReplacementTemplateData(value); return *this;}

    /**
     * <p>A list of replacement values to apply to the template. This parameter is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline BulkEmailDestination& WithReplacementTemplateData(Aws::String&& value) { SetReplacementTemplateData(std::move(value)); return *this;}

    /**
     * <p>A list of replacement values to apply to the template. This parameter is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline BulkEmailDestination& WithReplacementTemplateData(const char* value) { SetReplacementTemplateData(value); return *this;}

  private:

    Destination m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::Vector<MessageTag> m_replacementTags;
    bool m_replacementTagsHasBeenSet = false;

    Aws::String m_replacementTemplateData;
    bool m_replacementTemplateDataHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
