/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/AdvancedEventSelector.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   */
  class AWS_CLOUDTRAIL_API UpdateEventDataStoreRequest : public CloudTrailRequest
  {
  public:
    UpdateEventDataStoreRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEventDataStore"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN (or the ID suffix of the ARN) of the event data store that you want
     * to update.</p>
     */
    inline const Aws::String& GetEventDataStore() const{ return m_eventDataStore; }

    /**
     * <p>The ARN (or the ID suffix of the ARN) of the event data store that you want
     * to update.</p>
     */
    inline bool EventDataStoreHasBeenSet() const { return m_eventDataStoreHasBeenSet; }

    /**
     * <p>The ARN (or the ID suffix of the ARN) of the event data store that you want
     * to update.</p>
     */
    inline void SetEventDataStore(const Aws::String& value) { m_eventDataStoreHasBeenSet = true; m_eventDataStore = value; }

    /**
     * <p>The ARN (or the ID suffix of the ARN) of the event data store that you want
     * to update.</p>
     */
    inline void SetEventDataStore(Aws::String&& value) { m_eventDataStoreHasBeenSet = true; m_eventDataStore = std::move(value); }

    /**
     * <p>The ARN (or the ID suffix of the ARN) of the event data store that you want
     * to update.</p>
     */
    inline void SetEventDataStore(const char* value) { m_eventDataStoreHasBeenSet = true; m_eventDataStore.assign(value); }

    /**
     * <p>The ARN (or the ID suffix of the ARN) of the event data store that you want
     * to update.</p>
     */
    inline UpdateEventDataStoreRequest& WithEventDataStore(const Aws::String& value) { SetEventDataStore(value); return *this;}

    /**
     * <p>The ARN (or the ID suffix of the ARN) of the event data store that you want
     * to update.</p>
     */
    inline UpdateEventDataStoreRequest& WithEventDataStore(Aws::String&& value) { SetEventDataStore(std::move(value)); return *this;}

    /**
     * <p>The ARN (or the ID suffix of the ARN) of the event data store that you want
     * to update.</p>
     */
    inline UpdateEventDataStoreRequest& WithEventDataStore(const char* value) { SetEventDataStore(value); return *this;}


    /**
     * <p>The event data store name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The event data store name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The event data store name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The event data store name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The event data store name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The event data store name.</p>
     */
    inline UpdateEventDataStoreRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The event data store name.</p>
     */
    inline UpdateEventDataStoreRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The event data store name.</p>
     */
    inline UpdateEventDataStoreRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The advanced event selectors used to select events for the event data store.
     * You can configure up to five advanced event selectors for each event data
     * store.</p>
     */
    inline const Aws::Vector<AdvancedEventSelector>& GetAdvancedEventSelectors() const{ return m_advancedEventSelectors; }

    /**
     * <p>The advanced event selectors used to select events for the event data store.
     * You can configure up to five advanced event selectors for each event data
     * store.</p>
     */
    inline bool AdvancedEventSelectorsHasBeenSet() const { return m_advancedEventSelectorsHasBeenSet; }

    /**
     * <p>The advanced event selectors used to select events for the event data store.
     * You can configure up to five advanced event selectors for each event data
     * store.</p>
     */
    inline void SetAdvancedEventSelectors(const Aws::Vector<AdvancedEventSelector>& value) { m_advancedEventSelectorsHasBeenSet = true; m_advancedEventSelectors = value; }

    /**
     * <p>The advanced event selectors used to select events for the event data store.
     * You can configure up to five advanced event selectors for each event data
     * store.</p>
     */
    inline void SetAdvancedEventSelectors(Aws::Vector<AdvancedEventSelector>&& value) { m_advancedEventSelectorsHasBeenSet = true; m_advancedEventSelectors = std::move(value); }

    /**
     * <p>The advanced event selectors used to select events for the event data store.
     * You can configure up to five advanced event selectors for each event data
     * store.</p>
     */
    inline UpdateEventDataStoreRequest& WithAdvancedEventSelectors(const Aws::Vector<AdvancedEventSelector>& value) { SetAdvancedEventSelectors(value); return *this;}

    /**
     * <p>The advanced event selectors used to select events for the event data store.
     * You can configure up to five advanced event selectors for each event data
     * store.</p>
     */
    inline UpdateEventDataStoreRequest& WithAdvancedEventSelectors(Aws::Vector<AdvancedEventSelector>&& value) { SetAdvancedEventSelectors(std::move(value)); return *this;}

    /**
     * <p>The advanced event selectors used to select events for the event data store.
     * You can configure up to five advanced event selectors for each event data
     * store.</p>
     */
    inline UpdateEventDataStoreRequest& AddAdvancedEventSelectors(const AdvancedEventSelector& value) { m_advancedEventSelectorsHasBeenSet = true; m_advancedEventSelectors.push_back(value); return *this; }

    /**
     * <p>The advanced event selectors used to select events for the event data store.
     * You can configure up to five advanced event selectors for each event data
     * store.</p>
     */
    inline UpdateEventDataStoreRequest& AddAdvancedEventSelectors(AdvancedEventSelector&& value) { m_advancedEventSelectorsHasBeenSet = true; m_advancedEventSelectors.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies whether an event data store collects events from all regions, or
     * only from the region in which it was created.</p>
     */
    inline bool GetMultiRegionEnabled() const{ return m_multiRegionEnabled; }

    /**
     * <p>Specifies whether an event data store collects events from all regions, or
     * only from the region in which it was created.</p>
     */
    inline bool MultiRegionEnabledHasBeenSet() const { return m_multiRegionEnabledHasBeenSet; }

    /**
     * <p>Specifies whether an event data store collects events from all regions, or
     * only from the region in which it was created.</p>
     */
    inline void SetMultiRegionEnabled(bool value) { m_multiRegionEnabledHasBeenSet = true; m_multiRegionEnabled = value; }

    /**
     * <p>Specifies whether an event data store collects events from all regions, or
     * only from the region in which it was created.</p>
     */
    inline UpdateEventDataStoreRequest& WithMultiRegionEnabled(bool value) { SetMultiRegionEnabled(value); return *this;}


    /**
     * <p>Specifies whether an event data store collects events logged for an
     * organization in Organizations.</p>
     */
    inline bool GetOrganizationEnabled() const{ return m_organizationEnabled; }

    /**
     * <p>Specifies whether an event data store collects events logged for an
     * organization in Organizations.</p>
     */
    inline bool OrganizationEnabledHasBeenSet() const { return m_organizationEnabledHasBeenSet; }

    /**
     * <p>Specifies whether an event data store collects events logged for an
     * organization in Organizations.</p>
     */
    inline void SetOrganizationEnabled(bool value) { m_organizationEnabledHasBeenSet = true; m_organizationEnabled = value; }

    /**
     * <p>Specifies whether an event data store collects events logged for an
     * organization in Organizations.</p>
     */
    inline UpdateEventDataStoreRequest& WithOrganizationEnabled(bool value) { SetOrganizationEnabled(value); return *this;}


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
    inline UpdateEventDataStoreRequest& WithRetentionPeriod(int value) { SetRetentionPeriod(value); return *this;}


    /**
     * <p>Indicates that termination protection is enabled and the event data store
     * cannot be automatically deleted.</p>
     */
    inline bool GetTerminationProtectionEnabled() const{ return m_terminationProtectionEnabled; }

    /**
     * <p>Indicates that termination protection is enabled and the event data store
     * cannot be automatically deleted.</p>
     */
    inline bool TerminationProtectionEnabledHasBeenSet() const { return m_terminationProtectionEnabledHasBeenSet; }

    /**
     * <p>Indicates that termination protection is enabled and the event data store
     * cannot be automatically deleted.</p>
     */
    inline void SetTerminationProtectionEnabled(bool value) { m_terminationProtectionEnabledHasBeenSet = true; m_terminationProtectionEnabled = value; }

    /**
     * <p>Indicates that termination protection is enabled and the event data store
     * cannot be automatically deleted.</p>
     */
    inline UpdateEventDataStoreRequest& WithTerminationProtectionEnabled(bool value) { SetTerminationProtectionEnabled(value); return *this;}

  private:

    Aws::String m_eventDataStore;
    bool m_eventDataStoreHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<AdvancedEventSelector> m_advancedEventSelectors;
    bool m_advancedEventSelectorsHasBeenSet = false;

    bool m_multiRegionEnabled;
    bool m_multiRegionEnabledHasBeenSet = false;

    bool m_organizationEnabled;
    bool m_organizationEnabledHasBeenSet = false;

    int m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet = false;

    bool m_terminationProtectionEnabled;
    bool m_terminationProtectionEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
