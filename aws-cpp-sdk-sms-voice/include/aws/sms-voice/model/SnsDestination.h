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
#include <aws/sms-voice/PinpointSMSVoice_EXPORTS.h>
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
namespace PinpointSMSVoice
{
namespace Model
{

  /**
   * An object that contains information about an event destination that sends data
   * to Amazon SNS.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-2018-09-05/SnsDestination">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTSMSVOICE_API SnsDestination
  {
  public:
    SnsDestination();
    SnsDestination(Aws::Utils::Json::JsonView jsonValue);
    SnsDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The Amazon Resource Name (ARN) of the Amazon SNS topic that you want to publish
     * events to.
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * The Amazon Resource Name (ARN) of the Amazon SNS topic that you want to publish
     * events to.
     */
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) of the Amazon SNS topic that you want to publish
     * events to.
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * The Amazon Resource Name (ARN) of the Amazon SNS topic that you want to publish
     * events to.
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of the Amazon SNS topic that you want to publish
     * events to.
     */
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of the Amazon SNS topic that you want to publish
     * events to.
     */
    inline SnsDestination& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the Amazon SNS topic that you want to publish
     * events to.
     */
    inline SnsDestination& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the Amazon SNS topic that you want to publish
     * events to.
     */
    inline SnsDestination& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}

  private:

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet;
  };

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws
