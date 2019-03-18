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
#include <aws/greengrass/Greengrass_EXPORTS.h>
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
namespace Greengrass
{
namespace Model
{

  /**
   * Information about a subscription.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/Subscription">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API Subscription
  {
  public:
    Subscription();
    Subscription(Aws::Utils::Json::JsonView jsonValue);
    Subscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A descriptive or arbitrary ID for the subscription. This value must be unique
     * within the subscription definition version. Max length is 128 characters with
     * pattern ''[a-zA-Z0-9:_-]+''.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * A descriptive or arbitrary ID for the subscription. This value must be unique
     * within the subscription definition version. Max length is 128 characters with
     * pattern ''[a-zA-Z0-9:_-]+''.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * A descriptive or arbitrary ID for the subscription. This value must be unique
     * within the subscription definition version. Max length is 128 characters with
     * pattern ''[a-zA-Z0-9:_-]+''.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * A descriptive or arbitrary ID for the subscription. This value must be unique
     * within the subscription definition version. Max length is 128 characters with
     * pattern ''[a-zA-Z0-9:_-]+''.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * A descriptive or arbitrary ID for the subscription. This value must be unique
     * within the subscription definition version. Max length is 128 characters with
     * pattern ''[a-zA-Z0-9:_-]+''.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * A descriptive or arbitrary ID for the subscription. This value must be unique
     * within the subscription definition version. Max length is 128 characters with
     * pattern ''[a-zA-Z0-9:_-]+''.
     */
    inline Subscription& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * A descriptive or arbitrary ID for the subscription. This value must be unique
     * within the subscription definition version. Max length is 128 characters with
     * pattern ''[a-zA-Z0-9:_-]+''.
     */
    inline Subscription& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * A descriptive or arbitrary ID for the subscription. This value must be unique
     * within the subscription definition version. Max length is 128 characters with
     * pattern ''[a-zA-Z0-9:_-]+''.
     */
    inline Subscription& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The source of the subscription. Can be a thing ARN, a Lambda function ARN, a
     * connector ARN, 'cloud' (which represents the AWS IoT cloud), or
     * 'GGShadowService'.
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * The source of the subscription. Can be a thing ARN, a Lambda function ARN, a
     * connector ARN, 'cloud' (which represents the AWS IoT cloud), or
     * 'GGShadowService'.
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * The source of the subscription. Can be a thing ARN, a Lambda function ARN, a
     * connector ARN, 'cloud' (which represents the AWS IoT cloud), or
     * 'GGShadowService'.
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * The source of the subscription. Can be a thing ARN, a Lambda function ARN, a
     * connector ARN, 'cloud' (which represents the AWS IoT cloud), or
     * 'GGShadowService'.
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * The source of the subscription. Can be a thing ARN, a Lambda function ARN, a
     * connector ARN, 'cloud' (which represents the AWS IoT cloud), or
     * 'GGShadowService'.
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * The source of the subscription. Can be a thing ARN, a Lambda function ARN, a
     * connector ARN, 'cloud' (which represents the AWS IoT cloud), or
     * 'GGShadowService'.
     */
    inline Subscription& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * The source of the subscription. Can be a thing ARN, a Lambda function ARN, a
     * connector ARN, 'cloud' (which represents the AWS IoT cloud), or
     * 'GGShadowService'.
     */
    inline Subscription& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * The source of the subscription. Can be a thing ARN, a Lambda function ARN, a
     * connector ARN, 'cloud' (which represents the AWS IoT cloud), or
     * 'GGShadowService'.
     */
    inline Subscription& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * The MQTT topic used to route the message.
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }

    /**
     * The MQTT topic used to route the message.
     */
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }

    /**
     * The MQTT topic used to route the message.
     */
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * The MQTT topic used to route the message.
     */
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }

    /**
     * The MQTT topic used to route the message.
     */
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }

    /**
     * The MQTT topic used to route the message.
     */
    inline Subscription& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}

    /**
     * The MQTT topic used to route the message.
     */
    inline Subscription& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}

    /**
     * The MQTT topic used to route the message.
     */
    inline Subscription& WithSubject(const char* value) { SetSubject(value); return *this;}


    /**
     * Where the message is sent to. Can be a thing ARN, a Lambda function ARN, a
     * connector ARN, 'cloud' (which represents the AWS IoT cloud), or
     * 'GGShadowService'.
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * Where the message is sent to. Can be a thing ARN, a Lambda function ARN, a
     * connector ARN, 'cloud' (which represents the AWS IoT cloud), or
     * 'GGShadowService'.
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * Where the message is sent to. Can be a thing ARN, a Lambda function ARN, a
     * connector ARN, 'cloud' (which represents the AWS IoT cloud), or
     * 'GGShadowService'.
     */
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * Where the message is sent to. Can be a thing ARN, a Lambda function ARN, a
     * connector ARN, 'cloud' (which represents the AWS IoT cloud), or
     * 'GGShadowService'.
     */
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * Where the message is sent to. Can be a thing ARN, a Lambda function ARN, a
     * connector ARN, 'cloud' (which represents the AWS IoT cloud), or
     * 'GGShadowService'.
     */
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

    /**
     * Where the message is sent to. Can be a thing ARN, a Lambda function ARN, a
     * connector ARN, 'cloud' (which represents the AWS IoT cloud), or
     * 'GGShadowService'.
     */
    inline Subscription& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * Where the message is sent to. Can be a thing ARN, a Lambda function ARN, a
     * connector ARN, 'cloud' (which represents the AWS IoT cloud), or
     * 'GGShadowService'.
     */
    inline Subscription& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * Where the message is sent to. Can be a thing ARN, a Lambda function ARN, a
     * connector ARN, 'cloud' (which represents the AWS IoT cloud), or
     * 'GGShadowService'.
     */
    inline Subscription& WithTarget(const char* value) { SetTarget(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_source;
    bool m_sourceHasBeenSet;

    Aws::String m_subject;
    bool m_subjectHasBeenSet;

    Aws::String m_target;
    bool m_targetHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
