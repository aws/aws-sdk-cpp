/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/EventDataStoreStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudtrail/model/AdvancedEventSelector.h>
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
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>A storage lake of event data against which you can run complex SQL-based
   * queries. An event data store can include events that you have logged on your
   * account from the last 90 to 2555 days (about three months to up to seven years).
   * To select events for an event data store, use <a
   * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-data-events-with-cloudtrail.html#creating-data-event-selectors-advanced">advanced
   * event selectors</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/EventDataStore">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDTRAIL_API EventDataStore
  {
  public:
    EventDataStore();
    EventDataStore(Aws::Utils::Json::JsonView jsonValue);
    EventDataStore& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the event data store.</p>
     */
    inline const Aws::String& GetEventDataStoreArn() const{ return m_eventDataStoreArn; }

    /**
     * <p>The ARN of the event data store.</p>
     */
    inline bool EventDataStoreArnHasBeenSet() const { return m_eventDataStoreArnHasBeenSet; }

    /**
     * <p>The ARN of the event data store.</p>
     */
    inline void SetEventDataStoreArn(const Aws::String& value) { m_eventDataStoreArnHasBeenSet = true; m_eventDataStoreArn = value; }

    /**
     * <p>The ARN of the event data store.</p>
     */
    inline void SetEventDataStoreArn(Aws::String&& value) { m_eventDataStoreArnHasBeenSet = true; m_eventDataStoreArn = std::move(value); }

    /**
     * <p>The ARN of the event data store.</p>
     */
    inline void SetEventDataStoreArn(const char* value) { m_eventDataStoreArnHasBeenSet = true; m_eventDataStoreArn.assign(value); }

    /**
     * <p>The ARN of the event data store.</p>
     */
    inline EventDataStore& WithEventDataStoreArn(const Aws::String& value) { SetEventDataStoreArn(value); return *this;}

    /**
     * <p>The ARN of the event data store.</p>
     */
    inline EventDataStore& WithEventDataStoreArn(Aws::String&& value) { SetEventDataStoreArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the event data store.</p>
     */
    inline EventDataStore& WithEventDataStoreArn(const char* value) { SetEventDataStoreArn(value); return *this;}


    /**
     * <p>The name of the event data store.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the event data store.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the event data store.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the event data store.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the event data store.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the event data store.</p>
     */
    inline EventDataStore& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the event data store.</p>
     */
    inline EventDataStore& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the event data store.</p>
     */
    inline EventDataStore& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Indicates whether the event data store is protected from termination.</p>
     */
    inline bool GetTerminationProtectionEnabled() const{ return m_terminationProtectionEnabled; }

    /**
     * <p>Indicates whether the event data store is protected from termination.</p>
     */
    inline bool TerminationProtectionEnabledHasBeenSet() const { return m_terminationProtectionEnabledHasBeenSet; }

    /**
     * <p>Indicates whether the event data store is protected from termination.</p>
     */
    inline void SetTerminationProtectionEnabled(bool value) { m_terminationProtectionEnabledHasBeenSet = true; m_terminationProtectionEnabled = value; }

    /**
     * <p>Indicates whether the event data store is protected from termination.</p>
     */
    inline EventDataStore& WithTerminationProtectionEnabled(bool value) { SetTerminationProtectionEnabled(value); return *this;}


    /**
     * <p>The status of an event data store. Values are <code>ENABLED</code> and
     * <code>PENDING_DELETION</code>.</p>
     */
    inline const EventDataStoreStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of an event data store. Values are <code>ENABLED</code> and
     * <code>PENDING_DELETION</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of an event data store. Values are <code>ENABLED</code> and
     * <code>PENDING_DELETION</code>.</p>
     */
    inline void SetStatus(const EventDataStoreStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of an event data store. Values are <code>ENABLED</code> and
     * <code>PENDING_DELETION</code>.</p>
     */
    inline void SetStatus(EventDataStoreStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of an event data store. Values are <code>ENABLED</code> and
     * <code>PENDING_DELETION</code>.</p>
     */
    inline EventDataStore& WithStatus(const EventDataStoreStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of an event data store. Values are <code>ENABLED</code> and
     * <code>PENDING_DELETION</code>.</p>
     */
    inline EventDataStore& WithStatus(EventDataStoreStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The advanced event selectors that were used to select events for the data
     * store.</p>
     */
    inline const Aws::Vector<AdvancedEventSelector>& GetAdvancedEventSelectors() const{ return m_advancedEventSelectors; }

    /**
     * <p>The advanced event selectors that were used to select events for the data
     * store.</p>
     */
    inline bool AdvancedEventSelectorsHasBeenSet() const { return m_advancedEventSelectorsHasBeenSet; }

    /**
     * <p>The advanced event selectors that were used to select events for the data
     * store.</p>
     */
    inline void SetAdvancedEventSelectors(const Aws::Vector<AdvancedEventSelector>& value) { m_advancedEventSelectorsHasBeenSet = true; m_advancedEventSelectors = value; }

    /**
     * <p>The advanced event selectors that were used to select events for the data
     * store.</p>
     */
    inline void SetAdvancedEventSelectors(Aws::Vector<AdvancedEventSelector>&& value) { m_advancedEventSelectorsHasBeenSet = true; m_advancedEventSelectors = std::move(value); }

    /**
     * <p>The advanced event selectors that were used to select events for the data
     * store.</p>
     */
    inline EventDataStore& WithAdvancedEventSelectors(const Aws::Vector<AdvancedEventSelector>& value) { SetAdvancedEventSelectors(value); return *this;}

    /**
     * <p>The advanced event selectors that were used to select events for the data
     * store.</p>
     */
    inline EventDataStore& WithAdvancedEventSelectors(Aws::Vector<AdvancedEventSelector>&& value) { SetAdvancedEventSelectors(std::move(value)); return *this;}

    /**
     * <p>The advanced event selectors that were used to select events for the data
     * store.</p>
     */
    inline EventDataStore& AddAdvancedEventSelectors(const AdvancedEventSelector& value) { m_advancedEventSelectorsHasBeenSet = true; m_advancedEventSelectors.push_back(value); return *this; }

    /**
     * <p>The advanced event selectors that were used to select events for the data
     * store.</p>
     */
    inline EventDataStore& AddAdvancedEventSelectors(AdvancedEventSelector&& value) { m_advancedEventSelectorsHasBeenSet = true; m_advancedEventSelectors.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether the event data store includes events from all regions, or
     * only from the region in which it was created.</p>
     */
    inline bool GetMultiRegionEnabled() const{ return m_multiRegionEnabled; }

    /**
     * <p>Indicates whether the event data store includes events from all regions, or
     * only from the region in which it was created.</p>
     */
    inline bool MultiRegionEnabledHasBeenSet() const { return m_multiRegionEnabledHasBeenSet; }

    /**
     * <p>Indicates whether the event data store includes events from all regions, or
     * only from the region in which it was created.</p>
     */
    inline void SetMultiRegionEnabled(bool value) { m_multiRegionEnabledHasBeenSet = true; m_multiRegionEnabled = value; }

    /**
     * <p>Indicates whether the event data store includes events from all regions, or
     * only from the region in which it was created.</p>
     */
    inline EventDataStore& WithMultiRegionEnabled(bool value) { SetMultiRegionEnabled(value); return *this;}


    /**
     * <p>Indicates that an event data store is collecting logged events for an
     * organization.</p>
     */
    inline bool GetOrganizationEnabled() const{ return m_organizationEnabled; }

    /**
     * <p>Indicates that an event data store is collecting logged events for an
     * organization.</p>
     */
    inline bool OrganizationEnabledHasBeenSet() const { return m_organizationEnabledHasBeenSet; }

    /**
     * <p>Indicates that an event data store is collecting logged events for an
     * organization.</p>
     */
    inline void SetOrganizationEnabled(bool value) { m_organizationEnabledHasBeenSet = true; m_organizationEnabled = value; }

    /**
     * <p>Indicates that an event data store is collecting logged events for an
     * organization.</p>
     */
    inline EventDataStore& WithOrganizationEnabled(bool value) { SetOrganizationEnabled(value); return *this;}


    /**
     * <p>The retention period, in days.</p>
     */
    inline int GetRetentionPeriod() const{ return m_retentionPeriod; }

    /**
     * <p>The retention period, in days.</p>
     */
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }

    /**
     * <p>The retention period, in days.</p>
     */
    inline void SetRetentionPeriod(int value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }

    /**
     * <p>The retention period, in days.</p>
     */
    inline EventDataStore& WithRetentionPeriod(int value) { SetRetentionPeriod(value); return *this;}


    /**
     * <p>The timestamp of the event data store's creation.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The timestamp of the event data store's creation.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The timestamp of the event data store's creation.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The timestamp of the event data store's creation.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The timestamp of the event data store's creation.</p>
     */
    inline EventDataStore& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The timestamp of the event data store's creation.</p>
     */
    inline EventDataStore& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The timestamp showing when an event data store was updated, if applicable.
     * <code>UpdatedTimestamp</code> is always either the same or newer than the time
     * shown in <code>CreatedTimestamp</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }

    /**
     * <p>The timestamp showing when an event data store was updated, if applicable.
     * <code>UpdatedTimestamp</code> is always either the same or newer than the time
     * shown in <code>CreatedTimestamp</code>.</p>
     */
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }

    /**
     * <p>The timestamp showing when an event data store was updated, if applicable.
     * <code>UpdatedTimestamp</code> is always either the same or newer than the time
     * shown in <code>CreatedTimestamp</code>.</p>
     */
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }

    /**
     * <p>The timestamp showing when an event data store was updated, if applicable.
     * <code>UpdatedTimestamp</code> is always either the same or newer than the time
     * shown in <code>CreatedTimestamp</code>.</p>
     */
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }

    /**
     * <p>The timestamp showing when an event data store was updated, if applicable.
     * <code>UpdatedTimestamp</code> is always either the same or newer than the time
     * shown in <code>CreatedTimestamp</code>.</p>
     */
    inline EventDataStore& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}

    /**
     * <p>The timestamp showing when an event data store was updated, if applicable.
     * <code>UpdatedTimestamp</code> is always either the same or newer than the time
     * shown in <code>CreatedTimestamp</code>.</p>
     */
    inline EventDataStore& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_eventDataStoreArn;
    bool m_eventDataStoreArnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    bool m_terminationProtectionEnabled;
    bool m_terminationProtectionEnabledHasBeenSet;

    EventDataStoreStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Vector<AdvancedEventSelector> m_advancedEventSelectors;
    bool m_advancedEventSelectorsHasBeenSet;

    bool m_multiRegionEnabled;
    bool m_multiRegionEnabledHasBeenSet;

    bool m_organizationEnabled;
    bool m_organizationEnabledHasBeenSet;

    int m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet;

    Aws::Utils::DateTime m_updatedTimestamp;
    bool m_updatedTimestampHasBeenSet;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
