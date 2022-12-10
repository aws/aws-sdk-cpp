/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DAX
{
namespace Model
{

  /**
   * <p>Describes a notification topic and its status. Notification topics are used
   * for publishing DAX events to subscribers using Amazon Simple Notification
   * Service (SNS).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/NotificationConfiguration">AWS
   * API Reference</a></p>
   */
  class NotificationConfiguration
  {
  public:
    AWS_DAX_API NotificationConfiguration();
    AWS_DAX_API NotificationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DAX_API NotificationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DAX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the topic. </p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the topic. </p>
     */
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the topic. </p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the topic. </p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the topic. </p>
     */
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the topic. </p>
     */
    inline NotificationConfiguration& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the topic. </p>
     */
    inline NotificationConfiguration& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the topic. </p>
     */
    inline NotificationConfiguration& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}


    /**
     * <p>The current state of the topic. A value of “active” means that notifications
     * will be sent to the topic. A value of “inactive” means that notifications will
     * not be sent to the topic.</p>
     */
    inline const Aws::String& GetTopicStatus() const{ return m_topicStatus; }

    /**
     * <p>The current state of the topic. A value of “active” means that notifications
     * will be sent to the topic. A value of “inactive” means that notifications will
     * not be sent to the topic.</p>
     */
    inline bool TopicStatusHasBeenSet() const { return m_topicStatusHasBeenSet; }

    /**
     * <p>The current state of the topic. A value of “active” means that notifications
     * will be sent to the topic. A value of “inactive” means that notifications will
     * not be sent to the topic.</p>
     */
    inline void SetTopicStatus(const Aws::String& value) { m_topicStatusHasBeenSet = true; m_topicStatus = value; }

    /**
     * <p>The current state of the topic. A value of “active” means that notifications
     * will be sent to the topic. A value of “inactive” means that notifications will
     * not be sent to the topic.</p>
     */
    inline void SetTopicStatus(Aws::String&& value) { m_topicStatusHasBeenSet = true; m_topicStatus = std::move(value); }

    /**
     * <p>The current state of the topic. A value of “active” means that notifications
     * will be sent to the topic. A value of “inactive” means that notifications will
     * not be sent to the topic.</p>
     */
    inline void SetTopicStatus(const char* value) { m_topicStatusHasBeenSet = true; m_topicStatus.assign(value); }

    /**
     * <p>The current state of the topic. A value of “active” means that notifications
     * will be sent to the topic. A value of “inactive” means that notifications will
     * not be sent to the topic.</p>
     */
    inline NotificationConfiguration& WithTopicStatus(const Aws::String& value) { SetTopicStatus(value); return *this;}

    /**
     * <p>The current state of the topic. A value of “active” means that notifications
     * will be sent to the topic. A value of “inactive” means that notifications will
     * not be sent to the topic.</p>
     */
    inline NotificationConfiguration& WithTopicStatus(Aws::String&& value) { SetTopicStatus(std::move(value)); return *this;}

    /**
     * <p>The current state of the topic. A value of “active” means that notifications
     * will be sent to the topic. A value of “inactive” means that notifications will
     * not be sent to the topic.</p>
     */
    inline NotificationConfiguration& WithTopicStatus(const char* value) { SetTopicStatus(value); return *this;}

  private:

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet = false;

    Aws::String m_topicStatus;
    bool m_topicStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
