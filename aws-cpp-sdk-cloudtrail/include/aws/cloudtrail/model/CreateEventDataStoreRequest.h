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
#include <aws/cloudtrail/model/Tag.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   */
  class AWS_CLOUDTRAIL_API CreateEventDataStoreRequest : public CloudTrailRequest
  {
  public:
    CreateEventDataStoreRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEventDataStore"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline CreateEventDataStoreRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the event data store.</p>
     */
    inline CreateEventDataStoreRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the event data store.</p>
     */
    inline CreateEventDataStoreRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The advanced event selectors to use to select the events for the data store.
     * For more information about how to use advanced event selectors, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-data-events-with-cloudtrail.html#creating-data-event-selectors-advanced">Log
     * events by using advanced event selectors</a> in the CloudTrail User Guide.</p>
     */
    inline const Aws::Vector<AdvancedEventSelector>& GetAdvancedEventSelectors() const{ return m_advancedEventSelectors; }

    /**
     * <p>The advanced event selectors to use to select the events for the data store.
     * For more information about how to use advanced event selectors, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-data-events-with-cloudtrail.html#creating-data-event-selectors-advanced">Log
     * events by using advanced event selectors</a> in the CloudTrail User Guide.</p>
     */
    inline bool AdvancedEventSelectorsHasBeenSet() const { return m_advancedEventSelectorsHasBeenSet; }

    /**
     * <p>The advanced event selectors to use to select the events for the data store.
     * For more information about how to use advanced event selectors, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-data-events-with-cloudtrail.html#creating-data-event-selectors-advanced">Log
     * events by using advanced event selectors</a> in the CloudTrail User Guide.</p>
     */
    inline void SetAdvancedEventSelectors(const Aws::Vector<AdvancedEventSelector>& value) { m_advancedEventSelectorsHasBeenSet = true; m_advancedEventSelectors = value; }

    /**
     * <p>The advanced event selectors to use to select the events for the data store.
     * For more information about how to use advanced event selectors, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-data-events-with-cloudtrail.html#creating-data-event-selectors-advanced">Log
     * events by using advanced event selectors</a> in the CloudTrail User Guide.</p>
     */
    inline void SetAdvancedEventSelectors(Aws::Vector<AdvancedEventSelector>&& value) { m_advancedEventSelectorsHasBeenSet = true; m_advancedEventSelectors = std::move(value); }

    /**
     * <p>The advanced event selectors to use to select the events for the data store.
     * For more information about how to use advanced event selectors, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-data-events-with-cloudtrail.html#creating-data-event-selectors-advanced">Log
     * events by using advanced event selectors</a> in the CloudTrail User Guide.</p>
     */
    inline CreateEventDataStoreRequest& WithAdvancedEventSelectors(const Aws::Vector<AdvancedEventSelector>& value) { SetAdvancedEventSelectors(value); return *this;}

    /**
     * <p>The advanced event selectors to use to select the events for the data store.
     * For more information about how to use advanced event selectors, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-data-events-with-cloudtrail.html#creating-data-event-selectors-advanced">Log
     * events by using advanced event selectors</a> in the CloudTrail User Guide.</p>
     */
    inline CreateEventDataStoreRequest& WithAdvancedEventSelectors(Aws::Vector<AdvancedEventSelector>&& value) { SetAdvancedEventSelectors(std::move(value)); return *this;}

    /**
     * <p>The advanced event selectors to use to select the events for the data store.
     * For more information about how to use advanced event selectors, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-data-events-with-cloudtrail.html#creating-data-event-selectors-advanced">Log
     * events by using advanced event selectors</a> in the CloudTrail User Guide.</p>
     */
    inline CreateEventDataStoreRequest& AddAdvancedEventSelectors(const AdvancedEventSelector& value) { m_advancedEventSelectorsHasBeenSet = true; m_advancedEventSelectors.push_back(value); return *this; }

    /**
     * <p>The advanced event selectors to use to select the events for the data store.
     * For more information about how to use advanced event selectors, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-data-events-with-cloudtrail.html#creating-data-event-selectors-advanced">Log
     * events by using advanced event selectors</a> in the CloudTrail User Guide.</p>
     */
    inline CreateEventDataStoreRequest& AddAdvancedEventSelectors(AdvancedEventSelector&& value) { m_advancedEventSelectorsHasBeenSet = true; m_advancedEventSelectors.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies whether the event data store includes events from all regions, or
     * only from the region in which the event data store is created.</p>
     */
    inline bool GetMultiRegionEnabled() const{ return m_multiRegionEnabled; }

    /**
     * <p>Specifies whether the event data store includes events from all regions, or
     * only from the region in which the event data store is created.</p>
     */
    inline bool MultiRegionEnabledHasBeenSet() const { return m_multiRegionEnabledHasBeenSet; }

    /**
     * <p>Specifies whether the event data store includes events from all regions, or
     * only from the region in which the event data store is created.</p>
     */
    inline void SetMultiRegionEnabled(bool value) { m_multiRegionEnabledHasBeenSet = true; m_multiRegionEnabled = value; }

    /**
     * <p>Specifies whether the event data store includes events from all regions, or
     * only from the region in which the event data store is created.</p>
     */
    inline CreateEventDataStoreRequest& WithMultiRegionEnabled(bool value) { SetMultiRegionEnabled(value); return *this;}


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
    inline CreateEventDataStoreRequest& WithOrganizationEnabled(bool value) { SetOrganizationEnabled(value); return *this;}


    /**
     * <p>The retention period of the event data store, in days. You can set a
     * retention period of up to 2557 days, the equivalent of seven years.</p>
     */
    inline int GetRetentionPeriod() const{ return m_retentionPeriod; }

    /**
     * <p>The retention period of the event data store, in days. You can set a
     * retention period of up to 2557 days, the equivalent of seven years.</p>
     */
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }

    /**
     * <p>The retention period of the event data store, in days. You can set a
     * retention period of up to 2557 days, the equivalent of seven years.</p>
     */
    inline void SetRetentionPeriod(int value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }

    /**
     * <p>The retention period of the event data store, in days. You can set a
     * retention period of up to 2557 days, the equivalent of seven years.</p>
     */
    inline CreateEventDataStoreRequest& WithRetentionPeriod(int value) { SetRetentionPeriod(value); return *this;}


    /**
     * <p>Specifies whether termination protection is enabled for the event data store.
     * If termination protection is enabled, you cannot delete the event data store
     * until termination protection is disabled.</p>
     */
    inline bool GetTerminationProtectionEnabled() const{ return m_terminationProtectionEnabled; }

    /**
     * <p>Specifies whether termination protection is enabled for the event data store.
     * If termination protection is enabled, you cannot delete the event data store
     * until termination protection is disabled.</p>
     */
    inline bool TerminationProtectionEnabledHasBeenSet() const { return m_terminationProtectionEnabledHasBeenSet; }

    /**
     * <p>Specifies whether termination protection is enabled for the event data store.
     * If termination protection is enabled, you cannot delete the event data store
     * until termination protection is disabled.</p>
     */
    inline void SetTerminationProtectionEnabled(bool value) { m_terminationProtectionEnabledHasBeenSet = true; m_terminationProtectionEnabled = value; }

    /**
     * <p>Specifies whether termination protection is enabled for the event data store.
     * If termination protection is enabled, you cannot delete the event data store
     * until termination protection is disabled.</p>
     */
    inline CreateEventDataStoreRequest& WithTerminationProtectionEnabled(bool value) { SetTerminationProtectionEnabled(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetTagsList() const{ return m_tagsList; }

    
    inline bool TagsListHasBeenSet() const { return m_tagsListHasBeenSet; }

    
    inline void SetTagsList(const Aws::Vector<Tag>& value) { m_tagsListHasBeenSet = true; m_tagsList = value; }

    
    inline void SetTagsList(Aws::Vector<Tag>&& value) { m_tagsListHasBeenSet = true; m_tagsList = std::move(value); }

    
    inline CreateEventDataStoreRequest& WithTagsList(const Aws::Vector<Tag>& value) { SetTagsList(value); return *this;}

    
    inline CreateEventDataStoreRequest& WithTagsList(Aws::Vector<Tag>&& value) { SetTagsList(std::move(value)); return *this;}

    
    inline CreateEventDataStoreRequest& AddTagsList(const Tag& value) { m_tagsListHasBeenSet = true; m_tagsList.push_back(value); return *this; }

    
    inline CreateEventDataStoreRequest& AddTagsList(Tag&& value) { m_tagsListHasBeenSet = true; m_tagsList.push_back(std::move(value)); return *this; }

  private:

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

    Aws::Vector<Tag> m_tagsList;
    bool m_tagsListHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
