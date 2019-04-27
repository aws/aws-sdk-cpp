/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>An object that defines an Amazon SNS destination for email events. You can
   * use Amazon SNS to send notification when certain email events
   * occur.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/SnsDestination">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API SnsDestination
  {
  public:
    SnsDestination();
    SnsDestination(Aws::Utils::Json::JsonView jsonValue);
    SnsDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic that you want to
     * publish email events to. For more information about Amazon SNS topics, see the
     * <a href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic that you want to
     * publish email events to. For more information about Amazon SNS topics, see the
     * <a href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic that you want to
     * publish email events to. For more information about Amazon SNS topics, see the
     * <a href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic that you want to
     * publish email events to. For more information about Amazon SNS topics, see the
     * <a href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic that you want to
     * publish email events to. For more information about Amazon SNS topics, see the
     * <a href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic that you want to
     * publish email events to. For more information about Amazon SNS topics, see the
     * <a href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline SnsDestination& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic that you want to
     * publish email events to. For more information about Amazon SNS topics, see the
     * <a href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline SnsDestination& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic that you want to
     * publish email events to. For more information about Amazon SNS topics, see the
     * <a href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline SnsDestination& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}

  private:

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
