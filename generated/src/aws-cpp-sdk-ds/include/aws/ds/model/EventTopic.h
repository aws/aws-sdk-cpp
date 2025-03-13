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
    AWS_DIRECTORYSERVICE_API EventTopic() = default;
    AWS_DIRECTORYSERVICE_API EventTopic(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API EventTopic& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Directory ID of an Directory Service directory that will publish status
     * messages to an Amazon SNS topic.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    EventTopic& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an Amazon SNS topic the receives status messages from the
     * directory.</p>
     */
    inline const Aws::String& GetTopicName() const { return m_topicName; }
    inline bool TopicNameHasBeenSet() const { return m_topicNameHasBeenSet; }
    template<typename TopicNameT = Aws::String>
    void SetTopicName(TopicNameT&& value) { m_topicNameHasBeenSet = true; m_topicName = std::forward<TopicNameT>(value); }
    template<typename TopicNameT = Aws::String>
    EventTopic& WithTopicName(TopicNameT&& value) { SetTopicName(std::forward<TopicNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon SNS topic ARN (Amazon Resource Name).</p>
     */
    inline const Aws::String& GetTopicArn() const { return m_topicArn; }
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }
    template<typename TopicArnT = Aws::String>
    void SetTopicArn(TopicArnT&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::forward<TopicArnT>(value); }
    template<typename TopicArnT = Aws::String>
    EventTopic& WithTopicArn(TopicArnT&& value) { SetTopicArn(std::forward<TopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of when you associated your directory with the Amazon SNS
     * topic.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDateTime() const { return m_createdDateTime; }
    inline bool CreatedDateTimeHasBeenSet() const { return m_createdDateTimeHasBeenSet; }
    template<typename CreatedDateTimeT = Aws::Utils::DateTime>
    void SetCreatedDateTime(CreatedDateTimeT&& value) { m_createdDateTimeHasBeenSet = true; m_createdDateTime = std::forward<CreatedDateTimeT>(value); }
    template<typename CreatedDateTimeT = Aws::Utils::DateTime>
    EventTopic& WithCreatedDateTime(CreatedDateTimeT&& value) { SetCreatedDateTime(std::forward<CreatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The topic registration status.</p>
     */
    inline TopicStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TopicStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline EventTopic& WithStatus(TopicStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_topicName;
    bool m_topicNameHasBeenSet = false;

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdDateTime{};
    bool m_createdDateTimeHasBeenSet = false;

    TopicStatus m_status{TopicStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
