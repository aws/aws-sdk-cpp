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
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/health/model/EventTypeCategory.h>
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
namespace Health
{
namespace Model
{

  /**
   * <p>The values to use to filter results from the <a>DescribeEventTypes</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/EventTypeFilter">AWS
   * API Reference</a></p>
   */
  class AWS_HEALTH_API EventTypeFilter
  {
  public:
    EventTypeFilter();
    EventTypeFilter(Aws::Utils::Json::JsonView jsonValue);
    EventTypeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of event type codes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventTypeCodes() const{ return m_eventTypeCodes; }

    /**
     * <p>A list of event type codes.</p>
     */
    inline bool EventTypeCodesHasBeenSet() const { return m_eventTypeCodesHasBeenSet; }

    /**
     * <p>A list of event type codes.</p>
     */
    inline void SetEventTypeCodes(const Aws::Vector<Aws::String>& value) { m_eventTypeCodesHasBeenSet = true; m_eventTypeCodes = value; }

    /**
     * <p>A list of event type codes.</p>
     */
    inline void SetEventTypeCodes(Aws::Vector<Aws::String>&& value) { m_eventTypeCodesHasBeenSet = true; m_eventTypeCodes = std::move(value); }

    /**
     * <p>A list of event type codes.</p>
     */
    inline EventTypeFilter& WithEventTypeCodes(const Aws::Vector<Aws::String>& value) { SetEventTypeCodes(value); return *this;}

    /**
     * <p>A list of event type codes.</p>
     */
    inline EventTypeFilter& WithEventTypeCodes(Aws::Vector<Aws::String>&& value) { SetEventTypeCodes(std::move(value)); return *this;}

    /**
     * <p>A list of event type codes.</p>
     */
    inline EventTypeFilter& AddEventTypeCodes(const Aws::String& value) { m_eventTypeCodesHasBeenSet = true; m_eventTypeCodes.push_back(value); return *this; }

    /**
     * <p>A list of event type codes.</p>
     */
    inline EventTypeFilter& AddEventTypeCodes(Aws::String&& value) { m_eventTypeCodesHasBeenSet = true; m_eventTypeCodes.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of event type codes.</p>
     */
    inline EventTypeFilter& AddEventTypeCodes(const char* value) { m_eventTypeCodesHasBeenSet = true; m_eventTypeCodes.push_back(value); return *this; }


    /**
     * <p>The AWS services associated with the event. For example, <code>EC2</code>,
     * <code>RDS</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServices() const{ return m_services; }

    /**
     * <p>The AWS services associated with the event. For example, <code>EC2</code>,
     * <code>RDS</code>.</p>
     */
    inline bool ServicesHasBeenSet() const { return m_servicesHasBeenSet; }

    /**
     * <p>The AWS services associated with the event. For example, <code>EC2</code>,
     * <code>RDS</code>.</p>
     */
    inline void SetServices(const Aws::Vector<Aws::String>& value) { m_servicesHasBeenSet = true; m_services = value; }

    /**
     * <p>The AWS services associated with the event. For example, <code>EC2</code>,
     * <code>RDS</code>.</p>
     */
    inline void SetServices(Aws::Vector<Aws::String>&& value) { m_servicesHasBeenSet = true; m_services = std::move(value); }

    /**
     * <p>The AWS services associated with the event. For example, <code>EC2</code>,
     * <code>RDS</code>.</p>
     */
    inline EventTypeFilter& WithServices(const Aws::Vector<Aws::String>& value) { SetServices(value); return *this;}

    /**
     * <p>The AWS services associated with the event. For example, <code>EC2</code>,
     * <code>RDS</code>.</p>
     */
    inline EventTypeFilter& WithServices(Aws::Vector<Aws::String>&& value) { SetServices(std::move(value)); return *this;}

    /**
     * <p>The AWS services associated with the event. For example, <code>EC2</code>,
     * <code>RDS</code>.</p>
     */
    inline EventTypeFilter& AddServices(const Aws::String& value) { m_servicesHasBeenSet = true; m_services.push_back(value); return *this; }

    /**
     * <p>The AWS services associated with the event. For example, <code>EC2</code>,
     * <code>RDS</code>.</p>
     */
    inline EventTypeFilter& AddServices(Aws::String&& value) { m_servicesHasBeenSet = true; m_services.push_back(std::move(value)); return *this; }

    /**
     * <p>The AWS services associated with the event. For example, <code>EC2</code>,
     * <code>RDS</code>.</p>
     */
    inline EventTypeFilter& AddServices(const char* value) { m_servicesHasBeenSet = true; m_services.push_back(value); return *this; }


    /**
     * <p>A list of event type category codes (<code>issue</code>,
     * <code>scheduledChange</code>, or <code>accountNotification</code>).</p>
     */
    inline const Aws::Vector<EventTypeCategory>& GetEventTypeCategories() const{ return m_eventTypeCategories; }

    /**
     * <p>A list of event type category codes (<code>issue</code>,
     * <code>scheduledChange</code>, or <code>accountNotification</code>).</p>
     */
    inline bool EventTypeCategoriesHasBeenSet() const { return m_eventTypeCategoriesHasBeenSet; }

    /**
     * <p>A list of event type category codes (<code>issue</code>,
     * <code>scheduledChange</code>, or <code>accountNotification</code>).</p>
     */
    inline void SetEventTypeCategories(const Aws::Vector<EventTypeCategory>& value) { m_eventTypeCategoriesHasBeenSet = true; m_eventTypeCategories = value; }

    /**
     * <p>A list of event type category codes (<code>issue</code>,
     * <code>scheduledChange</code>, or <code>accountNotification</code>).</p>
     */
    inline void SetEventTypeCategories(Aws::Vector<EventTypeCategory>&& value) { m_eventTypeCategoriesHasBeenSet = true; m_eventTypeCategories = std::move(value); }

    /**
     * <p>A list of event type category codes (<code>issue</code>,
     * <code>scheduledChange</code>, or <code>accountNotification</code>).</p>
     */
    inline EventTypeFilter& WithEventTypeCategories(const Aws::Vector<EventTypeCategory>& value) { SetEventTypeCategories(value); return *this;}

    /**
     * <p>A list of event type category codes (<code>issue</code>,
     * <code>scheduledChange</code>, or <code>accountNotification</code>).</p>
     */
    inline EventTypeFilter& WithEventTypeCategories(Aws::Vector<EventTypeCategory>&& value) { SetEventTypeCategories(std::move(value)); return *this;}

    /**
     * <p>A list of event type category codes (<code>issue</code>,
     * <code>scheduledChange</code>, or <code>accountNotification</code>).</p>
     */
    inline EventTypeFilter& AddEventTypeCategories(const EventTypeCategory& value) { m_eventTypeCategoriesHasBeenSet = true; m_eventTypeCategories.push_back(value); return *this; }

    /**
     * <p>A list of event type category codes (<code>issue</code>,
     * <code>scheduledChange</code>, or <code>accountNotification</code>).</p>
     */
    inline EventTypeFilter& AddEventTypeCategories(EventTypeCategory&& value) { m_eventTypeCategoriesHasBeenSet = true; m_eventTypeCategories.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_eventTypeCodes;
    bool m_eventTypeCodesHasBeenSet;

    Aws::Vector<Aws::String> m_services;
    bool m_servicesHasBeenSet;

    Aws::Vector<EventTypeCategory> m_eventTypeCategories;
    bool m_eventTypeCategoriesHasBeenSet;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
