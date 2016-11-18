﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes an action to republish to another topic.</p>
   */
  class AWS_IOT_API RepublishAction
  {
  public:
    RepublishAction();
    RepublishAction(const Aws::Utils::Json::JsonValue& jsonValue);
    RepublishAction& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline RepublishAction& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline RepublishAction& WithRoleArn(Aws::String&& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline RepublishAction& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

    /**
     * <p>The name of the MQTT topic.</p>
     */
    inline const Aws::String& GetTopic() const{ return m_topic; }

    /**
     * <p>The name of the MQTT topic.</p>
     */
    inline void SetTopic(const Aws::String& value) { m_topicHasBeenSet = true; m_topic = value; }

    /**
     * <p>The name of the MQTT topic.</p>
     */
    inline void SetTopic(Aws::String&& value) { m_topicHasBeenSet = true; m_topic = value; }

    /**
     * <p>The name of the MQTT topic.</p>
     */
    inline void SetTopic(const char* value) { m_topicHasBeenSet = true; m_topic.assign(value); }

    /**
     * <p>The name of the MQTT topic.</p>
     */
    inline RepublishAction& WithTopic(const Aws::String& value) { SetTopic(value); return *this;}

    /**
     * <p>The name of the MQTT topic.</p>
     */
    inline RepublishAction& WithTopic(Aws::String&& value) { SetTopic(value); return *this;}

    /**
     * <p>The name of the MQTT topic.</p>
     */
    inline RepublishAction& WithTopic(const char* value) { SetTopic(value); return *this;}

  private:
    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
    Aws::String m_topic;
    bool m_topicHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
