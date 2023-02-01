/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ds/model/TopicStatus.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Information about Amazon SNS topic and Directory Service directory
   * associations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/EventTopic">AWS API
   * Reference</a></p>
   */
  class EventTopic
  {
  public:
    AWS_DIRECTORYSERVICE_API EventTopic();
    AWS_DIRECTORYSERVICE_API EventTopic(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API EventTopic& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Directory ID of an Directory Service directory that will publish status
     * messages to an Amazon SNS topic.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The Directory ID of an Directory Service directory that will publish status
     * messages to an Amazon SNS topic.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The Directory ID of an Directory Service directory that will publish status
     * messages to an Amazon SNS topic.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The Directory ID of an Directory Service directory that will publish status
     * messages to an Amazon SNS topic.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The Directory ID of an Directory Service directory that will publish status
     * messages to an Amazon SNS topic.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The Directory ID of an Directory Service directory that will publish status
     * messages to an Amazon SNS topic.</p>
     */
    inline EventTopic& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The Directory ID of an Directory Service directory that will publish status
     * messages to an Amazon SNS topic.</p>
     */
    inline EventTopic& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The Directory ID of an Directory Service directory that will publish status
     * messages to an Amazon SNS topic.</p>
     */
    inline EventTopic& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The name of an Amazon SNS topic the receives status messages from the
     * directory.</p>
     */
    inline const Aws::String& GetTopicName() const{ return m_topicName; }

    /**
     * <p>The name of an Amazon SNS topic the receives status messages from the
     * directory.</p>
     */
    inline bool TopicNameHasBeenSet() const { return m_topicNameHasBeenSet; }

    /**
     * <p>The name of an Amazon SNS topic the receives status messages from the
     * directory.</p>
     */
    inline void SetTopicName(const Aws::String& value) { m_topicNameHasBeenSet = true; m_topicName = value; }

    /**
     * <p>The name of an Amazon SNS topic the receives status messages from the
     * directory.</p>
     */
    inline void SetTopicName(Aws::String&& value) { m_topicNameHasBeenSet = true; m_topicName = std::move(value); }

    /**
     * <p>The name of an Amazon SNS topic the receives status messages from the
     * directory.</p>
     */
    inline void SetTopicName(const char* value) { m_topicNameHasBeenSet = true; m_topicName.assign(value); }

    /**
     * <p>The name of an Amazon SNS topic the receives status messages from the
     * directory.</p>
     */
    inline EventTopic& WithTopicName(const Aws::String& value) { SetTopicName(value); return *this;}

    /**
     * <p>The name of an Amazon SNS topic the receives status messages from the
     * directory.</p>
     */
    inline EventTopic& WithTopicName(Aws::String&& value) { SetTopicName(std::move(value)); return *this;}

    /**
     * <p>The name of an Amazon SNS topic the receives status messages from the
     * directory.</p>
     */
    inline EventTopic& WithTopicName(const char* value) { SetTopicName(value); return *this;}


    /**
     * <p>The Amazon SNS topic ARN (Amazon Resource Name).</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>The Amazon SNS topic ARN (Amazon Resource Name).</p>
     */
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }

    /**
     * <p>The Amazon SNS topic ARN (Amazon Resource Name).</p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The Amazon SNS topic ARN (Amazon Resource Name).</p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::move(value); }

    /**
     * <p>The Amazon SNS topic ARN (Amazon Resource Name).</p>
     */
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    /**
     * <p>The Amazon SNS topic ARN (Amazon Resource Name).</p>
     */
    inline EventTopic& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The Amazon SNS topic ARN (Amazon Resource Name).</p>
     */
    inline EventTopic& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon SNS topic ARN (Amazon Resource Name).</p>
     */
    inline EventTopic& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}


    /**
     * <p>The date and time of when you associated your directory with the Amazon SNS
     * topic.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDateTime() const{ return m_createdDateTime; }

    /**
     * <p>The date and time of when you associated your directory with the Amazon SNS
     * topic.</p>
     */
    inline bool CreatedDateTimeHasBeenSet() const { return m_createdDateTimeHasBeenSet; }

    /**
     * <p>The date and time of when you associated your directory with the Amazon SNS
     * topic.</p>
     */
    inline void SetCreatedDateTime(const Aws::Utils::DateTime& value) { m_createdDateTimeHasBeenSet = true; m_createdDateTime = value; }

    /**
     * <p>The date and time of when you associated your directory with the Amazon SNS
     * topic.</p>
     */
    inline void SetCreatedDateTime(Aws::Utils::DateTime&& value) { m_createdDateTimeHasBeenSet = true; m_createdDateTime = std::move(value); }

    /**
     * <p>The date and time of when you associated your directory with the Amazon SNS
     * topic.</p>
     */
    inline EventTopic& WithCreatedDateTime(const Aws::Utils::DateTime& value) { SetCreatedDateTime(value); return *this;}

    /**
     * <p>The date and time of when you associated your directory with the Amazon SNS
     * topic.</p>
     */
    inline EventTopic& WithCreatedDateTime(Aws::Utils::DateTime&& value) { SetCreatedDateTime(std::move(value)); return *this;}


    /**
     * <p>The topic registration status.</p>
     */
    inline const TopicStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The topic registration status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The topic registration status.</p>
     */
    inline void SetStatus(const TopicStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The topic registration status.</p>
     */
    inline void SetStatus(TopicStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The topic registration status.</p>
     */
    inline EventTopic& WithStatus(const TopicStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The topic registration status.</p>
     */
    inline EventTopic& WithStatus(TopicStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_topicName;
    bool m_topicNameHasBeenSet = false;

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdDateTime;
    bool m_createdDateTimeHasBeenSet = false;

    TopicStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
