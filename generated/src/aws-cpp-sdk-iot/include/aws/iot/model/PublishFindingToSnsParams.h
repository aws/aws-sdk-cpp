/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Parameters to define a mitigation action that publishes findings to Amazon
   * SNS. You can implement your own custom actions in response to the Amazon SNS
   * messages.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/PublishFindingToSnsParams">AWS
   * API Reference</a></p>
   */
  class PublishFindingToSnsParams
  {
  public:
    AWS_IOT_API PublishFindingToSnsParams() = default;
    AWS_IOT_API PublishFindingToSnsParams(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API PublishFindingToSnsParams& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the topic to which you want to publish the findings.</p>
     */
    inline const Aws::String& GetTopicArn() const { return m_topicArn; }
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }
    template<typename TopicArnT = Aws::String>
    void SetTopicArn(TopicArnT&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::forward<TopicArnT>(value); }
    template<typename TopicArnT = Aws::String>
    PublishFindingToSnsParams& WithTopicArn(TopicArnT&& value) { SetTopicArn(std::forward<TopicArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
