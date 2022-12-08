/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * associated with that event bus. Your account's default event bus receives events
   * from Amazon Web Services services. A custom event bus can receive events from
   * your custom applications and services. A partner event bus receives events from
   * an event source created by an SaaS partner. These events come from the partners
   * services or applications.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/EventBus">AWS API
   * Reference</a></p>
   */
  class EventBus
  {
  public:
    AWS_CLOUDWATCHEVENTS_API EventBus();
    AWS_CLOUDWATCHEVENTS_API EventBus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API EventBus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The permissions policy of the event bus, describing which other Amazon Web
     * Services accounts can write events to this event bus.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The permissions policy of the event bus, describing which other Amazon Web
     * Services accounts can write events to this event bus.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>The permissions policy of the event bus, describing which other Amazon Web
     * Services accounts can write events to this event bus.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The permissions policy of the event bus, describing which other Amazon Web
     * Services accounts can write events to this event bus.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>The permissions policy of the event bus, describing which other Amazon Web
     * Services accounts can write events to this event bus.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>The permissions policy of the event bus, describing which other Amazon Web
     * Services accounts can write events to this event bus.</p>
     */
    inline EventBus& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The permissions policy of the event bus, describing which other Amazon Web
     * Services accounts can write events to this event bus.</p>
     */
    inline EventBus& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The permissions policy of the event bus, describing which other Amazon Web
     * Services accounts can write events to this event bus.</p>
     */
    inline EventBus& WithPolicy(const char* value) { SetPolicy(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
