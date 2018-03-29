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
    Subscription(const Aws::Utils::Json::JsonValue& jsonValue);
    Subscription& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The id of the subscription.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The id of the subscription.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The id of the subscription.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The id of the subscription.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The id of the subscription.
     */
    inline Subscription& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The id of the subscription.
     */
    inline Subscription& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The id of the subscription.
     */
    inline Subscription& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The source of the subscription. Can be a thing ARN, a Lambda function ARN,
     * 'cloud' (which represents the IoT cloud), or 'GGShadowService'.
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * The source of the subscription. Can be a thing ARN, a Lambda function ARN,
     * 'cloud' (which represents the IoT cloud), or 'GGShadowService'.
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * The source of the subscription. Can be a thing ARN, a Lambda function ARN,
     * 'cloud' (which represents the IoT cloud), or 'GGShadowService'.
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * The source of the subscription. Can be a thing ARN, a Lambda function ARN,
     * 'cloud' (which represents the IoT cloud), or 'GGShadowService'.
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * The source of the subscription. Can be a thing ARN, a Lambda function ARN,
     * 'cloud' (which represents the IoT cloud), or 'GGShadowService'.
     */
    inline Subscription& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * The source of the subscription. Can be a thing ARN, a Lambda function ARN,
     * 'cloud' (which represents the IoT cloud), or 'GGShadowService'.
     */
    inline Subscription& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * The source of the subscription. Can be a thing ARN, a Lambda function ARN,
     * 'cloud' (which represents the IoT cloud), or 'GGShadowService'.
     */
    inline Subscription& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * The subject of the message.
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }

    /**
     * The subject of the message.
     */
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * The subject of the message.
     */
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }

    /**
     * The subject of the message.
     */
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }

    /**
     * The subject of the message.
     */
    inline Subscription& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}

    /**
     * The subject of the message.
     */
    inline Subscription& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}

    /**
     * The subject of the message.
     */
    inline Subscription& WithSubject(const char* value) { SetSubject(value); return *this;}


    /**
     * Where the message is sent to. Can be a thing ARN, a Lambda function ARN, 'cloud'
     * (which represents the IoT cloud), or 'GGShadowService'.
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * Where the message is sent to. Can be a thing ARN, a Lambda function ARN, 'cloud'
     * (which represents the IoT cloud), or 'GGShadowService'.
     */
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * Where the message is sent to. Can be a thing ARN, a Lambda function ARN, 'cloud'
     * (which represents the IoT cloud), or 'GGShadowService'.
     */
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * Where the message is sent to. Can be a thing ARN, a Lambda function ARN, 'cloud'
     * (which represents the IoT cloud), or 'GGShadowService'.
     */
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

    /**
     * Where the message is sent to. Can be a thing ARN, a Lambda function ARN, 'cloud'
     * (which represents the IoT cloud), or 'GGShadowService'.
     */
    inline Subscription& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * Where the message is sent to. Can be a thing ARN, a Lambda function ARN, 'cloud'
     * (which represents the IoT cloud), or 'GGShadowService'.
     */
    inline Subscription& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * Where the message is sent to. Can be a thing ARN, a Lambda function ARN, 'cloud'
     * (which represents the IoT cloud), or 'GGShadowService'.
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
