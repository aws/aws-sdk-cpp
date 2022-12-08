/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Indicates that the provided Amazon SNS topic is invalid, or that Amazon SES
   * could not publish to the topic, possibly due to permissions issues. For
   * information about giving permissions, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-permissions.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/InvalidSnsTopicException">AWS
   * API Reference</a></p>
   */
  class InvalidSnsTopicException
  {
  public:
    AWS_SES_API InvalidSnsTopicException();
    AWS_SES_API InvalidSnsTopicException(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API InvalidSnsTopicException& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates that the topic does not exist.</p>
     */
    inline const Aws::String& GetTopic() const{ return m_topic; }

    /**
     * <p>Indicates that the topic does not exist.</p>
     */
    inline bool TopicHasBeenSet() const { return m_topicHasBeenSet; }

    /**
     * <p>Indicates that the topic does not exist.</p>
     */
    inline void SetTopic(const Aws::String& value) { m_topicHasBeenSet = true; m_topic = value; }

    /**
     * <p>Indicates that the topic does not exist.</p>
     */
    inline void SetTopic(Aws::String&& value) { m_topicHasBeenSet = true; m_topic = std::move(value); }

    /**
     * <p>Indicates that the topic does not exist.</p>
     */
    inline void SetTopic(const char* value) { m_topicHasBeenSet = true; m_topic.assign(value); }

    /**
     * <p>Indicates that the topic does not exist.</p>
     */
    inline InvalidSnsTopicException& WithTopic(const Aws::String& value) { SetTopic(value); return *this;}

    /**
     * <p>Indicates that the topic does not exist.</p>
     */
    inline InvalidSnsTopicException& WithTopic(Aws::String&& value) { SetTopic(std::move(value)); return *this;}

    /**
     * <p>Indicates that the topic does not exist.</p>
     */
    inline InvalidSnsTopicException& WithTopic(const char* value) { SetTopic(value); return *this;}

  private:

    Aws::String m_topic;
    bool m_topicHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
