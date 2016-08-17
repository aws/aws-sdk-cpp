/*
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
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glacier
{
namespace Model
{

  /**
   * <p>Represents a vault's notification configuration.</p>
   */
  class AWS_GLACIER_API VaultNotificationConfig
  {
  public:
    VaultNotificationConfig();
    VaultNotificationConfig(const Aws::Utils::Json::JsonValue& jsonValue);
    VaultNotificationConfig& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) topic Amazon Resource
     * Name (ARN).</p>
     */
    inline const Aws::String& GetSNSTopic() const{ return m_sNSTopic; }

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) topic Amazon Resource
     * Name (ARN).</p>
     */
    inline void SetSNSTopic(const Aws::String& value) { m_sNSTopicHasBeenSet = true; m_sNSTopic = value; }

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) topic Amazon Resource
     * Name (ARN).</p>
     */
    inline void SetSNSTopic(Aws::String&& value) { m_sNSTopicHasBeenSet = true; m_sNSTopic = value; }

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) topic Amazon Resource
     * Name (ARN).</p>
     */
    inline void SetSNSTopic(const char* value) { m_sNSTopicHasBeenSet = true; m_sNSTopic.assign(value); }

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) topic Amazon Resource
     * Name (ARN).</p>
     */
    inline VaultNotificationConfig& WithSNSTopic(const Aws::String& value) { SetSNSTopic(value); return *this;}

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) topic Amazon Resource
     * Name (ARN).</p>
     */
    inline VaultNotificationConfig& WithSNSTopic(Aws::String&& value) { SetSNSTopic(value); return *this;}

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) topic Amazon Resource
     * Name (ARN).</p>
     */
    inline VaultNotificationConfig& WithSNSTopic(const char* value) { SetSNSTopic(value); return *this;}

    /**
     * <p>A list of one or more events for which Amazon Glacier will send a
     * notification to the specified Amazon SNS topic.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEvents() const{ return m_events; }

    /**
     * <p>A list of one or more events for which Amazon Glacier will send a
     * notification to the specified Amazon SNS topic.</p>
     */
    inline void SetEvents(const Aws::Vector<Aws::String>& value) { m_eventsHasBeenSet = true; m_events = value; }

    /**
     * <p>A list of one or more events for which Amazon Glacier will send a
     * notification to the specified Amazon SNS topic.</p>
     */
    inline void SetEvents(Aws::Vector<Aws::String>&& value) { m_eventsHasBeenSet = true; m_events = value; }

    /**
     * <p>A list of one or more events for which Amazon Glacier will send a
     * notification to the specified Amazon SNS topic.</p>
     */
    inline VaultNotificationConfig& WithEvents(const Aws::Vector<Aws::String>& value) { SetEvents(value); return *this;}

    /**
     * <p>A list of one or more events for which Amazon Glacier will send a
     * notification to the specified Amazon SNS topic.</p>
     */
    inline VaultNotificationConfig& WithEvents(Aws::Vector<Aws::String>&& value) { SetEvents(value); return *this;}

    /**
     * <p>A list of one or more events for which Amazon Glacier will send a
     * notification to the specified Amazon SNS topic.</p>
     */
    inline VaultNotificationConfig& AddEvents(const Aws::String& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }

    /**
     * <p>A list of one or more events for which Amazon Glacier will send a
     * notification to the specified Amazon SNS topic.</p>
     */
    inline VaultNotificationConfig& AddEvents(Aws::String&& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }

    /**
     * <p>A list of one or more events for which Amazon Glacier will send a
     * notification to the specified Amazon SNS topic.</p>
     */
    inline VaultNotificationConfig& AddEvents(const char* value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }

  private:
    Aws::String m_sNSTopic;
    bool m_sNSTopicHasBeenSet;
    Aws::Vector<Aws::String> m_events;
    bool m_eventsHasBeenSet;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
