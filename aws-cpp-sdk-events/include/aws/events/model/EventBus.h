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
#include <aws/events/CloudWatchEvents_EXPORTS.h>
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
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>An event bus receives events from a source and routes them to rules
   * associated with that event bus. Your account's default event bus receives rules
   * from AWS services. A custom event bus can receive rules from AWS services as
   * well as your custom applications and services. A partner event bus receives
   * events from an event source created by an SaaS partner. These events come from
   * the partners services or applications.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/EventBus">AWS API
   * Reference</a></p>
   */
  class AWS_CLOUDWATCHEVENTS_API EventBus
  {
  public:
    EventBus();
    EventBus(Aws::Utils::Json::JsonView jsonValue);
    EventBus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the event bus.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the event bus.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the event bus.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the event bus.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the event bus.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the event bus.</p>
     */
    inline EventBus& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the event bus.</p>
     */
    inline EventBus& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the event bus.</p>
     */
    inline EventBus& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the event bus.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the event bus.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the event bus.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the event bus.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the event bus.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the event bus.</p>
     */
    inline EventBus& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the event bus.</p>
     */
    inline EventBus& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the event bus.</p>
     */
    inline EventBus& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The permissions policy of the event bus, describing which other AWS accounts
     * can write events to this event bus.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The permissions policy of the event bus, describing which other AWS accounts
     * can write events to this event bus.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>The permissions policy of the event bus, describing which other AWS accounts
     * can write events to this event bus.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The permissions policy of the event bus, describing which other AWS accounts
     * can write events to this event bus.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>The permissions policy of the event bus, describing which other AWS accounts
     * can write events to this event bus.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>The permissions policy of the event bus, describing which other AWS accounts
     * can write events to this event bus.</p>
     */
    inline EventBus& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The permissions policy of the event bus, describing which other AWS accounts
     * can write events to this event bus.</p>
     */
    inline EventBus& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The permissions policy of the event bus, describing which other AWS accounts
     * can write events to this event bus.</p>
     */
    inline EventBus& WithPolicy(const char* value) { SetPolicy(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_policy;
    bool m_policyHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
