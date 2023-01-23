/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
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
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Describes a notification topic and its status. Notification topics are used
   * for publishing ElastiCache events to subscribers using Amazon Simple
   * Notification Service (SNS).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/NotificationConfiguration">AWS
   * API Reference</a></p>
   */
  class NotificationConfiguration
  {
  public:
    AWS_ELASTICACHE_API NotificationConfiguration();
    AWS_ELASTICACHE_API NotificationConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API NotificationConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the topic.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the topic.</p>
     */
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the topic.</p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the topic.</p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the topic.</p>
     */
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the topic.</p>
     */
    inline NotificationConfiguration& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the topic.</p>
     */
    inline NotificationConfiguration& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the topic.</p>
     */
    inline NotificationConfiguration& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}


    /**
     * <p>The current state of the topic.</p>
     */
    inline const Aws::String& GetTopicStatus() const{ return m_topicStatus; }

    /**
     * <p>The current state of the topic.</p>
     */
    inline bool TopicStatusHasBeenSet() const { return m_topicStatusHasBeenSet; }

    /**
     * <p>The current state of the topic.</p>
     */
    inline void SetTopicStatus(const Aws::String& value) { m_topicStatusHasBeenSet = true; m_topicStatus = value; }

    /**
     * <p>The current state of the topic.</p>
     */
    inline void SetTopicStatus(Aws::String&& value) { m_topicStatusHasBeenSet = true; m_topicStatus = std::move(value); }

    /**
     * <p>The current state of the topic.</p>
     */
    inline void SetTopicStatus(const char* value) { m_topicStatusHasBeenSet = true; m_topicStatus.assign(value); }

    /**
     * <p>The current state of the topic.</p>
     */
    inline NotificationConfiguration& WithTopicStatus(const Aws::String& value) { SetTopicStatus(value); return *this;}

    /**
     * <p>The current state of the topic.</p>
     */
    inline NotificationConfiguration& WithTopicStatus(Aws::String&& value) { SetTopicStatus(std::move(value)); return *this;}

    /**
     * <p>The current state of the topic.</p>
     */
    inline NotificationConfiguration& WithTopicStatus(const char* value) { SetTopicStatus(value); return *this;}

  private:

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet = false;

    Aws::String m_topicStatus;
    bool m_topicStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
