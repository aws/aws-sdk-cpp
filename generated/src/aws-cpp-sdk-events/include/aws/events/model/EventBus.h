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


    ///@{
    /**
     * <p>The name of the event bus.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline EventBus& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline EventBus& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline EventBus& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the event bus.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline EventBus& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline EventBus& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline EventBus& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permissions policy of the event bus, describing which other Amazon Web
     * Services accounts can write events to this event bus.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }
    inline EventBus& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}
    inline EventBus& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}
    inline EventBus& WithPolicy(const char* value) { SetPolicy(value); return *this;}
    ///@}
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
