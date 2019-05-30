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
#include <aws/iotevents/IoTEvents_EXPORTS.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Information required to publish the Amazon SNS message.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/SNSTopicPublishAction">AWS
   * API Reference</a></p>
   */
  class AWS_IOTEVENTS_API SNSTopicPublishAction
  {
  public:
    SNSTopicPublishAction();
    SNSTopicPublishAction(Aws::Utils::Json::JsonView jsonValue);
    SNSTopicPublishAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the Amazon SNS target to which the message is sent.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p>The ARN of the Amazon SNS target to which the message is sent.</p>
     */
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }

    /**
     * <p>The ARN of the Amazon SNS target to which the message is sent.</p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p>The ARN of the Amazon SNS target to which the message is sent.</p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }

    /**
     * <p>The ARN of the Amazon SNS target to which the message is sent.</p>
     */
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }

    /**
     * <p>The ARN of the Amazon SNS target to which the message is sent.</p>
     */
    inline SNSTopicPublishAction& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p>The ARN of the Amazon SNS target to which the message is sent.</p>
     */
    inline SNSTopicPublishAction& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon SNS target to which the message is sent.</p>
     */
    inline SNSTopicPublishAction& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}

  private:

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
