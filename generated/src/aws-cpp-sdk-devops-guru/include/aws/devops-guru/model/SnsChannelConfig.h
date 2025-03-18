/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> Contains the Amazon Resource Name (ARN) of an Amazon Simple Notification
   * Service topic. </p> <p>If you use an Amazon SNS topic in another account, you
   * must attach a policy to it that grants DevOps Guru permission to send it
   * notifications. DevOps Guru adds the required policy on your behalf to send
   * notifications using Amazon SNS in your account. DevOps Guru only supports
   * standard SNS topics. For more information, see <a
   * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-required-permissions.html">Permissions
   * for Amazon SNS topics</a>.</p> <p>If you use an Amazon SNS topic that is
   * encrypted by an Amazon Web Services Key Management Service customer-managed key
   * (CMK), then you must add permissions to the CMK. For more information, see <a
   * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-kms-permissions.html">Permissions
   * for Amazon Web Services KMS–encrypted Amazon SNS topics</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/SnsChannelConfig">AWS
   * API Reference</a></p>
   */
  class SnsChannelConfig
  {
  public:
    AWS_DEVOPSGURU_API SnsChannelConfig() = default;
    AWS_DEVOPSGURU_API SnsChannelConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API SnsChannelConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of an Amazon Simple Notification Service
     * topic. </p>
     */
    inline const Aws::String& GetTopicArn() const { return m_topicArn; }
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }
    template<typename TopicArnT = Aws::String>
    void SetTopicArn(TopicArnT&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::forward<TopicArnT>(value); }
    template<typename TopicArnT = Aws::String>
    SnsChannelConfig& WithTopicArn(TopicArnT&& value) { SetTopicArn(std::forward<TopicArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
