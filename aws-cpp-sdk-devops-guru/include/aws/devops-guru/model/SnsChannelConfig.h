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
   * must attach a policy to it that grants DevOps Guru permission to it
   * notifications. DevOps Guru adds the required policy on your behalf to send
   * notifications using Amazon SNS in your account. DevOps Guru only supports
   * standard SNS topics. For more information, see <a
   * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-required-permissions.html">Permissions
   * for cross account Amazon SNS topics</a>.</p> <p>If you use an Amazon SNS topic
   * in another account, you must attach a policy to it that grants DevOps Guru
   * permission to it notifications. DevOps Guru adds the required policy on your
   * behalf to send notifications using Amazon SNS in your account. For more
   * information, see Permissions for cross account Amazon SNS topics.</p> <p>If you
   * use an Amazon SNS topic that is encrypted by an Amazon Web Services Key
   * Management Service customer-managed key (CMK), then you must add permissions to
   * the CMK. For more information, see <a
   * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-kms-permissions.html">Permissions
   * for Amazon Web Services KMS–encrypted Amazon SNS topics</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/SnsChannelConfig">AWS
   * API Reference</a></p>
   */
  class SnsChannelConfig
  {
  public:
    AWS_DEVOPSGURU_API SnsChannelConfig();
    AWS_DEVOPSGURU_API SnsChannelConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API SnsChannelConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) of an Amazon Simple Notification Service
     * topic. </p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of an Amazon Simple Notification Service
     * topic. </p>
     */
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of an Amazon Simple Notification Service
     * topic. </p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of an Amazon Simple Notification Service
     * topic. </p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of an Amazon Simple Notification Service
     * topic. </p>
     */
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of an Amazon Simple Notification Service
     * topic. </p>
     */
    inline SnsChannelConfig& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of an Amazon Simple Notification Service
     * topic. </p>
     */
    inline SnsChannelConfig& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of an Amazon Simple Notification Service
     * topic. </p>
     */
    inline SnsChannelConfig& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}

  private:

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
