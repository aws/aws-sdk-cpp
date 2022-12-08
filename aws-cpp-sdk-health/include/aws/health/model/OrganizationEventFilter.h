/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/health/model/DateTimeRange.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/health/model/EventTypeCategory.h>
#include <aws/health/model/EventStatusCode.h>
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
   * <p>The values to filter results from the <a
   * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeEventsForOrganization.html">DescribeEventsForOrganization</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/OrganizationEventFilter">AWS
   * API Reference</a></p>
   */
  class OrganizationEventFilter
  {
  public:
    AWS_HEALTH_API OrganizationEventFilter();
    AWS_HEALTH_API OrganizationEventFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API OrganizationEventFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of unique identifiers for event types. For example,
     * <code>"AWS_EC2_SYSTEM_MAINTENANCE_EVENT","AWS_RDS_MAINTENANCE_SCHEDULED".</code>
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetEventTypeCodes() const{ return m_eventTypeCodes; }

    /**
     * <p>A list of unique identifiers for event types. For example,
     * <code>"AWS_EC2_SYSTEM_MAINTENANCE_EVENT","AWS_RDS_MAINTENANCE_SCHEDULED".</code>
     * </p>
     */
    inline bool EventTypeCodesHasBeenSet() const { return m_eventTypeCodesHasBeenSet; }

    /**
     * <p>A list of unique identifiers for event types. For example,
     * <code>"AWS_EC2_SYSTEM_MAINTENANCE_EVENT","AWS_RDS_MAINTENANCE_SCHEDULED".</code>
     * </p>
     */
    inline void SetEventTypeCodes(const Aws::Vector<Aws::String>& value) { m_eventTypeCodesHasBeenSet = true; m_eventTypeCodes = value; }

    /**
     * <p>A list of unique identifiers for event types. For example,
     * <code>"AWS_EC2_SYSTEM_MAINTENANCE_EVENT","AWS_RDS_MAINTENANCE_SCHEDULED".</code>
     * </p>
     */
    inline void SetEventTypeCodes(Aws::Vector<Aws::String>&& value) { m_eventTypeCodesHasBeenSet = true; m_eventTypeCodes = std::move(value); }

    /**
     * <p>A list of unique identifiers for event types. For example,
     * <code>"AWS_EC2_SYSTEM_MAINTENANCE_EVENT","AWS_RDS_MAINTENANCE_SCHEDULED".</code>
     * </p>
     */
    inline OrganizationEventFilter& WithEventTypeCodes(const Aws::Vector<Aws::String>& value) { SetEventTypeCodes(value); return *this;}

    /**
     * <p>A list of unique identifiers for event types. For example,
     * <code>"AWS_EC2_SYSTEM_MAINTENANCE_EVENT","AWS_RDS_MAINTENANCE_SCHEDULED".</code>
     * </p>
     */
    inline OrganizationEventFilter& WithEventTypeCodes(Aws::Vector<Aws::String>&& value) { SetEventTypeCodes(std::move(value)); return *this;}

    /**
     * <p>A list of unique identifiers for event types. For example,
     * <code>"AWS_EC2_SYSTEM_MAINTENANCE_EVENT","AWS_RDS_MAINTENANCE_SCHEDULED".</code>
     * </p>
     */
    inline OrganizationEventFilter& AddEventTypeCodes(const Aws::String& value) { m_eventTypeCodesHasBeenSet = true; m_eventTypeCodes.push_back(value); return *this; }

    /**
     * <p>A list of unique identifiers for event types. For example,
     * <code>"AWS_EC2_SYSTEM_MAINTENANCE_EVENT","AWS_RDS_MAINTENANCE_SCHEDULED".</code>
     * </p>
     */
    inline OrganizationEventFilter& AddEventTypeCodes(Aws::String&& value) { m_eventTypeCodesHasBeenSet = true; m_eventTypeCodes.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of unique identifiers for event types. For example,
     * <code>"AWS_EC2_SYSTEM_MAINTENANCE_EVENT","AWS_RDS_MAINTENANCE_SCHEDULED".</code>
     * </p>
     */
    inline OrganizationEventFilter& AddEventTypeCodes(const char* value) { m_eventTypeCodesHasBeenSet = true; m_eventTypeCodes.push_back(value); return *this; }


    /**
     * <p>A list of 12-digit Amazon Web Services account numbers that contains the
     * affected entities.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAwsAccountIds() const{ return m_awsAccountIds; }

    /**
     * <p>A list of 12-digit Amazon Web Services account numbers that contains the
     * affected entities.</p>
     */
    inline bool AwsAccountIdsHasBeenSet() const { return m_awsAccountIdsHasBeenSet; }

    /**
     * <p>A list of 12-digit Amazon Web Services account numbers that contains the
     * affected entities.</p>
     */
    inline void SetAwsAccountIds(const Aws::Vector<Aws::String>& value) { m_awsAccountIdsHasBeenSet = true; m_awsAccountIds = value; }

    /**
     * <p>A list of 12-digit Amazon Web Services account numbers that contains the
     * affected entities.</p>
     */
    inline void SetAwsAccountIds(Aws::Vector<Aws::String>&& value) { m_awsAccountIdsHasBeenSet = true; m_awsAccountIds = std::move(value); }

    /**
     * <p>A list of 12-digit Amazon Web Services account numbers that contains the
     * affected entities.</p>
     */
    inline OrganizationEventFilter& WithAwsAccountIds(const Aws::Vector<Aws::String>& value) { SetAwsAccountIds(value); return *this;}

    /**
     * <p>A list of 12-digit Amazon Web Services account numbers that contains the
     * affected entities.</p>
     */
    inline OrganizationEventFilter& WithAwsAccountIds(Aws::Vector<Aws::String>&& value) { SetAwsAccountIds(std::move(value)); return *this;}

    /**
     * <p>A list of 12-digit Amazon Web Services account numbers that contains the
     * affected entities.</p>
     */
    inline OrganizationEventFilter& AddAwsAccountIds(const Aws::String& value) { m_awsAccountIdsHasBeenSet = true; m_awsAccountIds.push_back(value); return *this; }

    /**
     * <p>A list of 12-digit Amazon Web Services account numbers that contains the
     * affected entities.</p>
     */
    inline OrganizationEventFilter& AddAwsAccountIds(Aws::String&& value) { m_awsAccountIdsHasBeenSet = true; m_awsAccountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of 12-digit Amazon Web Services account numbers that contains the
     * affected entities.</p>
     */
    inline OrganizationEventFilter& AddAwsAccountIds(const char* value) { m_awsAccountIdsHasBeenSet = true; m_awsAccountIds.push_back(value); return *this; }


    /**
     * <p>The Amazon Web Services services associated with the event. For example,
     * <code>EC2</code>, <code>RDS</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServices() const{ return m_services; }

    /**
     * <p>The Amazon Web Services services associated with the event. For example,
     * <code>EC2</code>, <code>RDS</code>.</p>
     */
    inline bool ServicesHasBeenSet() const { return m_servicesHasBeenSet; }

    /**
     * <p>The Amazon Web Services services associated with the event. For example,
     * <code>EC2</code>, <code>RDS</code>.</p>
     */
    inline void SetServices(const Aws::Vector<Aws::String>& value) { m_servicesHasBeenSet = true; m_services = value; }

    /**
     * <p>The Amazon Web Services services associated with the event. For example,
     * <code>EC2</code>, <code>RDS</code>.</p>
     */
    inline void SetServices(Aws::Vector<Aws::String>&& value) { m_servicesHasBeenSet = true; m_services = std::move(value); }

    /**
     * <p>The Amazon Web Services services associated with the event. For example,
     * <code>EC2</code>, <code>RDS</code>.</p>
     */
    inline OrganizationEventFilter& WithServices(const Aws::Vector<Aws::String>& value) { SetServices(value); return *this;}

    /**
     * <p>The Amazon Web Services services associated with the event. For example,
     * <code>EC2</code>, <code>RDS</code>.</p>
     */
    inline OrganizationEventFilter& WithServices(Aws::Vector<Aws::String>&& value) { SetServices(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services services associated with the event. For example,
     * <code>EC2</code>, <code>RDS</code>.</p>
     */
    inline OrganizationEventFilter& AddServices(const Aws::String& value) { m_servicesHasBeenSet = true; m_services.push_back(value); return *this; }

    /**
     * <p>The Amazon Web Services services associated with the event. For example,
     * <code>EC2</code>, <code>RDS</code>.</p>
     */
    inline OrganizationEventFilter& AddServices(Aws::String&& value) { m_servicesHasBeenSet = true; m_services.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Web Services services associated with the event. For example,
     * <code>EC2</code>, <code>RDS</code>.</p>
     */
    inline OrganizationEventFilter& AddServices(const char* value) { m_servicesHasBeenSet = true; m_services.push_back(value); return *this; }


    /**
     * <p>A list of Amazon Web Services Regions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const{ return m_regions; }

    /**
     * <p>A list of Amazon Web Services Regions.</p>
     */
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }

    /**
     * <p>A list of Amazon Web Services Regions.</p>
     */
    inline void SetRegions(const Aws::Vector<Aws::String>& value) { m_regionsHasBeenSet = true; m_regions = value; }

    /**
     * <p>A list of Amazon Web Services Regions.</p>
     */
    inline void SetRegions(Aws::Vector<Aws::String>&& value) { m_regionsHasBeenSet = true; m_regions = std::move(value); }

    /**
     * <p>A list of Amazon Web Services Regions.</p>
     */
    inline OrganizationEventFilter& WithRegions(const Aws::Vector<Aws::String>& value) { SetRegions(value); return *this;}

    /**
     * <p>A list of Amazon Web Services Regions.</p>
     */
    inline OrganizationEventFilter& WithRegions(Aws::Vector<Aws::String>&& value) { SetRegions(std::move(value)); return *this;}

    /**
     * <p>A list of Amazon Web Services Regions.</p>
     */
    inline OrganizationEventFilter& AddRegions(const Aws::String& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

    /**
     * <p>A list of Amazon Web Services Regions.</p>
     */
    inline OrganizationEventFilter& AddRegions(Aws::String&& value) { m_regionsHasBeenSet = true; m_regions.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of Amazon Web Services Regions.</p>
     */
    inline OrganizationEventFilter& AddRegions(const char* value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }


    
    inline const DateTimeRange& GetStartTime() const{ return m_startTime; }

    
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    
    inline void SetStartTime(const DateTimeRange& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    
    inline void SetStartTime(DateTimeRange&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    
    inline OrganizationEventFilter& WithStartTime(const DateTimeRange& value) { SetStartTime(value); return *this;}

    
    inline OrganizationEventFilter& WithStartTime(DateTimeRange&& value) { SetStartTime(std::move(value)); return *this;}


    
    inline const DateTimeRange& GetEndTime() const{ return m_endTime; }

    
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    
    inline void SetEndTime(const DateTimeRange& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    
    inline void SetEndTime(DateTimeRange&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    
    inline OrganizationEventFilter& WithEndTime(const DateTimeRange& value) { SetEndTime(value); return *this;}

    
    inline OrganizationEventFilter& WithEndTime(DateTimeRange&& value) { SetEndTime(std::move(value)); return *this;}


    
    inline const DateTimeRange& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    
    inline void SetLastUpdatedTime(const DateTimeRange& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    
    inline void SetLastUpdatedTime(DateTimeRange&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    
    inline OrganizationEventFilter& WithLastUpdatedTime(const DateTimeRange& value) { SetLastUpdatedTime(value); return *this;}

    
    inline OrganizationEventFilter& WithLastUpdatedTime(DateTimeRange&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>A list of entity ARNs (unique identifiers).</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntityArns() const{ return m_entityArns; }

    /**
     * <p>A list of entity ARNs (unique identifiers).</p>
     */
    inline bool EntityArnsHasBeenSet() const { return m_entityArnsHasBeenSet; }

    /**
     * <p>A list of entity ARNs (unique identifiers).</p>
     */
    inline void SetEntityArns(const Aws::Vector<Aws::String>& value) { m_entityArnsHasBeenSet = true; m_entityArns = value; }

    /**
     * <p>A list of entity ARNs (unique identifiers).</p>
     */
    inline void SetEntityArns(Aws::Vector<Aws::String>&& value) { m_entityArnsHasBeenSet = true; m_entityArns = std::move(value); }

    /**
     * <p>A list of entity ARNs (unique identifiers).</p>
     */
    inline OrganizationEventFilter& WithEntityArns(const Aws::Vector<Aws::String>& value) { SetEntityArns(value); return *this;}

    /**
     * <p>A list of entity ARNs (unique identifiers).</p>
     */
    inline OrganizationEventFilter& WithEntityArns(Aws::Vector<Aws::String>&& value) { SetEntityArns(std::move(value)); return *this;}

    /**
     * <p>A list of entity ARNs (unique identifiers).</p>
     */
    inline OrganizationEventFilter& AddEntityArns(const Aws::String& value) { m_entityArnsHasBeenSet = true; m_entityArns.push_back(value); return *this; }

    /**
     * <p>A list of entity ARNs (unique identifiers).</p>
     */
    inline OrganizationEventFilter& AddEntityArns(Aws::String&& value) { m_entityArnsHasBeenSet = true; m_entityArns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of entity ARNs (unique identifiers).</p>
     */
    inline OrganizationEventFilter& AddEntityArns(const char* value) { m_entityArnsHasBeenSet = true; m_entityArns.push_back(value); return *this; }


    /**
     * <p>A list of entity identifiers, such as EC2 instance IDs (i-34ab692e) or EBS
     * volumes (vol-426ab23e).</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntityValues() const{ return m_entityValues; }

    /**
     * <p>A list of entity identifiers, such as EC2 instance IDs (i-34ab692e) or EBS
     * volumes (vol-426ab23e).</p>
     */
    inline bool EntityValuesHasBeenSet() const { return m_entityValuesHasBeenSet; }

    /**
     * <p>A list of entity identifiers, such as EC2 instance IDs (i-34ab692e) or EBS
     * volumes (vol-426ab23e).</p>
     */
    inline void SetEntityValues(const Aws::Vector<Aws::String>& value) { m_entityValuesHasBeenSet = true; m_entityValues = value; }

    /**
     * <p>A list of entity identifiers, such as EC2 instance IDs (i-34ab692e) or EBS
     * volumes (vol-426ab23e).</p>
     */
    inline void SetEntityValues(Aws::Vector<Aws::String>&& value) { m_entityValuesHasBeenSet = true; m_entityValues = std::move(value); }

    /**
     * <p>A list of entity identifiers, such as EC2 instance IDs (i-34ab692e) or EBS
     * volumes (vol-426ab23e).</p>
     */
    inline OrganizationEventFilter& WithEntityValues(const Aws::Vector<Aws::String>& value) { SetEntityValues(value); return *this;}

    /**
     * <p>A list of entity identifiers, such as EC2 instance IDs (i-34ab692e) or EBS
     * volumes (vol-426ab23e).</p>
     */
    inline OrganizationEventFilter& WithEntityValues(Aws::Vector<Aws::String>&& value) { SetEntityValues(std::move(value)); return *this;}

    /**
     * <p>A list of entity identifiers, such as EC2 instance IDs (i-34ab692e) or EBS
     * volumes (vol-426ab23e).</p>
     */
    inline OrganizationEventFilter& AddEntityValues(const Aws::String& value) { m_entityValuesHasBeenSet = true; m_entityValues.push_back(value); return *this; }

    /**
     * <p>A list of entity identifiers, such as EC2 instance IDs (i-34ab692e) or EBS
     * volumes (vol-426ab23e).</p>
     */
    inline OrganizationEventFilter& AddEntityValues(Aws::String&& value) { m_entityValuesHasBeenSet = true; m_entityValues.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of entity identifiers, such as EC2 instance IDs (i-34ab692e) or EBS
     * volumes (vol-426ab23e).</p>
     */
    inline OrganizationEventFilter& AddEntityValues(const char* value) { m_entityValuesHasBeenSet = true; m_entityValues.push_back(value); return *this; }


    /**
     * <p>A list of event type category codes. Possible values are <code>issue</code>,
     * <code>accountNotification</code>, or <code>scheduledChange</code>. Currently,
     * the <code>investigation</code> value isn't supported at this time.</p>
     */
    inline const Aws::Vector<EventTypeCategory>& GetEventTypeCategories() const{ return m_eventTypeCategories; }

    /**
     * <p>A list of event type category codes. Possible values are <code>issue</code>,
     * <code>accountNotification</code>, or <code>scheduledChange</code>. Currently,
     * the <code>investigation</code> value isn't supported at this time.</p>
     */
    inline bool EventTypeCategoriesHasBeenSet() const { return m_eventTypeCategoriesHasBeenSet; }

    /**
     * <p>A list of event type category codes. Possible values are <code>issue</code>,
     * <code>accountNotification</code>, or <code>scheduledChange</code>. Currently,
     * the <code>investigation</code> value isn't supported at this time.</p>
     */
    inline void SetEventTypeCategories(const Aws::Vector<EventTypeCategory>& value) { m_eventTypeCategoriesHasBeenSet = true; m_eventTypeCategories = value; }

    /**
     * <p>A list of event type category codes. Possible values are <code>issue</code>,
     * <code>accountNotification</code>, or <code>scheduledChange</code>. Currently,
     * the <code>investigation</code> value isn't supported at this time.</p>
     */
    inline void SetEventTypeCategories(Aws::Vector<EventTypeCategory>&& value) { m_eventTypeCategoriesHasBeenSet = true; m_eventTypeCategories = std::move(value); }

    /**
     * <p>A list of event type category codes. Possible values are <code>issue</code>,
     * <code>accountNotification</code>, or <code>scheduledChange</code>. Currently,
     * the <code>investigation</code> value isn't supported at this time.</p>
     */
    inline OrganizationEventFilter& WithEventTypeCategories(const Aws::Vector<EventTypeCategory>& value) { SetEventTypeCategories(value); return *this;}

    /**
     * <p>A list of event type category codes. Possible values are <code>issue</code>,
     * <code>accountNotification</code>, or <code>scheduledChange</code>. Currently,
     * the <code>investigation</code> value isn't supported at this time.</p>
     */
    inline OrganizationEventFilter& WithEventTypeCategories(Aws::Vector<EventTypeCategory>&& value) { SetEventTypeCategories(std::move(value)); return *this;}

    /**
     * <p>A list of event type category codes. Possible values are <code>issue</code>,
     * <code>accountNotification</code>, or <code>scheduledChange</code>. Currently,
     * the <code>investigation</code> value isn't supported at this time.</p>
     */
    inline OrganizationEventFilter& AddEventTypeCategories(const EventTypeCategory& value) { m_eventTypeCategoriesHasBeenSet = true; m_eventTypeCategories.push_back(value); return *this; }

    /**
     * <p>A list of event type category codes. Possible values are <code>issue</code>,
     * <code>accountNotification</code>, or <code>scheduledChange</code>. Currently,
     * the <code>investigation</code> value isn't supported at this time.</p>
     */
    inline OrganizationEventFilter& AddEventTypeCategories(EventTypeCategory&& value) { m_eventTypeCategoriesHasBeenSet = true; m_eventTypeCategories.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of event status codes.</p>
     */
    inline const Aws::Vector<EventStatusCode>& GetEventStatusCodes() const{ return m_eventStatusCodes; }

    /**
     * <p>A list of event status codes.</p>
     */
    inline bool EventStatusCodesHasBeenSet() const { return m_eventStatusCodesHasBeenSet; }

    /**
     * <p>A list of event status codes.</p>
     */
    inline void SetEventStatusCodes(const Aws::Vector<EventStatusCode>& value) { m_eventStatusCodesHasBeenSet = true; m_eventStatusCodes = value; }

    /**
     * <p>A list of event status codes.</p>
     */
    inline void SetEventStatusCodes(Aws::Vector<EventStatusCode>&& value) { m_eventStatusCodesHasBeenSet = true; m_eventStatusCodes = std::move(value); }

    /**
     * <p>A list of event status codes.</p>
     */
    inline OrganizationEventFilter& WithEventStatusCodes(const Aws::Vector<EventStatusCode>& value) { SetEventStatusCodes(value); return *this;}

    /**
     * <p>A list of event status codes.</p>
     */
    inline OrganizationEventFilter& WithEventStatusCodes(Aws::Vector<EventStatusCode>&& value) { SetEventStatusCodes(std::move(value)); return *this;}

    /**
     * <p>A list of event status codes.</p>
     */
    inline OrganizationEventFilter& AddEventStatusCodes(const EventStatusCode& value) { m_eventStatusCodesHasBeenSet = true; m_eventStatusCodes.push_back(value); return *this; }

    /**
     * <p>A list of event status codes.</p>
     */
    inline OrganizationEventFilter& AddEventStatusCodes(EventStatusCode&& value) { m_eventStatusCodesHasBeenSet = true; m_eventStatusCodes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_eventTypeCodes;
    bool m_eventTypeCodesHasBeenSet = false;

    Aws::Vector<Aws::String> m_awsAccountIds;
    bool m_awsAccountIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_services;
    bool m_servicesHasBeenSet = false;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;

    DateTimeRange m_startTime;
    bool m_startTimeHasBeenSet = false;

    DateTimeRange m_endTime;
    bool m_endTimeHasBeenSet = false;

    DateTimeRange m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_entityArns;
    bool m_entityArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_entityValues;
    bool m_entityValuesHasBeenSet = false;

    Aws::Vector<EventTypeCategory> m_eventTypeCategories;
    bool m_eventTypeCategoriesHasBeenSet = false;

    Aws::Vector<EventStatusCode> m_eventStatusCodes;
    bool m_eventStatusCodesHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
