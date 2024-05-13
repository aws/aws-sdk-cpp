/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>An event bus receives events from a source, uses rules to evaluate them,
   * applies any configured input transformation, and routes them to the appropriate
   * target(s). Your account's default event bus receives events from Amazon Web
   * Services services. A custom event bus can receive events from your custom
   * applications and services. A partner event bus receives events from an event
   * source created by an SaaS partner. These events come from the partners services
   * or applications.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/EventBus">AWS
   * API Reference</a></p>
   */
  class EventBus
  {
  public:
    AWS_EVENTBRIDGE_API EventBus();
    AWS_EVENTBRIDGE_API EventBus(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API EventBus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The event bus description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The event bus description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The event bus description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The event bus description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The event bus description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The event bus description.</p>
     */
    inline EventBus& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The event bus description.</p>
     */
    inline EventBus& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The event bus description.</p>
     */
    inline EventBus& WithDescription(const char* value) { SetDescription(value); return *this;}


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


    /**
     * <p>The time the event bus was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the event bus was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time the event bus was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time the event bus was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time the event bus was created.</p>
     */
    inline EventBus& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the event bus was created.</p>
     */
    inline EventBus& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time the event bus was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The time the event bus was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The time the event bus was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The time the event bus was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The time the event bus was last modified.</p>
     */
    inline EventBus& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The time the event bus was last modified.</p>
     */
    inline EventBus& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
