/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/QueueAttributes.h>
#include <aws/kinesis/model/QueueStreamConfiguration.h>

#include <utility>

namespace Aws {
namespace Kinesis {
namespace Model {

/**
 */
class CreateQueueRequest : public KinesisRequest {
 public:
  AWS_KINESIS_API CreateQueueRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateQueue"; }

  AWS_KINESIS_API Aws::String SerializePayload() const override;

  AWS_KINESIS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_KINESIS_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>A name for the queue. The name is scoped to the Amazon Web Services account
   * and Region used by the request, so two queues in different accounts, or in the
   * same account and different Regions, can have the same name.</p>
   */
  inline const Aws::String& GetQueueName() const { return m_queueName; }
  inline bool QueueNameHasBeenSet() const { return m_queueNameHasBeenSet; }
  template <typename QueueNameT = Aws::String>
  void SetQueueName(QueueNameT&& value) {
    m_queueNameHasBeenSet = true;
    m_queueName = std::forward<QueueNameT>(value);
  }
  template <typename QueueNameT = Aws::String>
  CreateQueueRequest& WithQueueName(QueueNameT&& value) {
    SetQueueName(std::forward<QueueNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data stream the queue delivers records from, and the position in that
   * stream where delivery begins. The list must contain exactly one entry, because a
   * queue delivers records from a single data stream.</p>
   */
  inline const Aws::Vector<QueueStreamConfiguration>& GetStreamConfigurationList() const { return m_streamConfigurationList; }
  inline bool StreamConfigurationListHasBeenSet() const { return m_streamConfigurationListHasBeenSet; }
  template <typename StreamConfigurationListT = Aws::Vector<QueueStreamConfiguration>>
  void SetStreamConfigurationList(StreamConfigurationListT&& value) {
    m_streamConfigurationListHasBeenSet = true;
    m_streamConfigurationList = std::forward<StreamConfigurationListT>(value);
  }
  template <typename StreamConfigurationListT = Aws::Vector<QueueStreamConfiguration>>
  CreateQueueRequest& WithStreamConfigurationList(StreamConfigurationListT&& value) {
    SetStreamConfigurationList(std::forward<StreamConfigurationListT>(value));
    return *this;
  }
  template <typename StreamConfigurationListT = QueueStreamConfiguration>
  CreateQueueRequest& AddStreamConfigurationList(StreamConfigurationListT&& value) {
    m_streamConfigurationListHasBeenSet = true;
    m_streamConfigurationList.emplace_back(std::forward<StreamConfigurationListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration attributes for the queue, including its visibility timeout
   * and its dead-letter handling configuration.</p>
   */
  inline const QueueAttributes& GetQueueAttributes() const { return m_queueAttributes; }
  inline bool QueueAttributesHasBeenSet() const { return m_queueAttributesHasBeenSet; }
  template <typename QueueAttributesT = QueueAttributes>
  void SetQueueAttributes(QueueAttributesT&& value) {
    m_queueAttributesHasBeenSet = true;
    m_queueAttributes = std::forward<QueueAttributesT>(value);
  }
  template <typename QueueAttributesT = QueueAttributes>
  CreateQueueRequest& WithQueueAttributes(QueueAttributesT&& value) {
    SetQueueAttributes(std::forward<QueueAttributesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A set of up to 50 key-value pairs to apply to the queue. You can also add,
   * change, and remove tags after the queue is created with <a>TagResource</a> and
   * <a>UntagResource</a>.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateQueueRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateQueueRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_queueName;

  Aws::Vector<QueueStreamConfiguration> m_streamConfigurationList;

  QueueAttributes m_queueAttributes;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_queueNameHasBeenSet = false;
  bool m_streamConfigurationListHasBeenSet = false;
  bool m_queueAttributesHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
