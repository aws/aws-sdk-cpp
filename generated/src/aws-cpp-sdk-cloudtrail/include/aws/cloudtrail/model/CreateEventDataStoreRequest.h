/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/BillingMode.h>
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
  class CreateEventDataStoreRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API CreateEventDataStoreRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEventDataStore"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the event data store.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateEventDataStoreRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The advanced event selectors to use to select the events for the data store.
     * You can configure up to five advanced event selectors for each event data
     * store.</p> <p> For more information about how to use advanced event selectors to
     * log CloudTrail events, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-data-events-with-cloudtrail.html#creating-data-event-selectors-advanced">Log
     * events by using advanced event selectors</a> in the CloudTrail User Guide.</p>
     * <p>For more information about how to use advanced event selectors to include
     * Config configuration items in your event data store, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/lake-eds-cli.html#lake-cli-create-eds-config">Create
     * an event data store for Config configuration items</a> in the CloudTrail User
     * Guide.</p> <p>For more information about how to use advanced event selectors to
     * include events outside of Amazon Web Services events in your event data store,
     * see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/lake-integrations-cli.html#lake-cli-create-integration">Create
     * an integration to log events from outside Amazon Web Services</a> in the
     * CloudTrail User Guide.</p>
     */
    inline const Aws::Vector<AdvancedEventSelector>& GetAdvancedEventSelectors() const { return m_advancedEventSelectors; }
    inline bool AdvancedEventSelectorsHasBeenSet() const { return m_advancedEventSelectorsHasBeenSet; }
    template<typename AdvancedEventSelectorsT = Aws::Vector<AdvancedEventSelector>>
    void SetAdvancedEventSelectors(AdvancedEventSelectorsT&& value) { m_advancedEventSelectorsHasBeenSet = true; m_advancedEventSelectors = std::forward<AdvancedEventSelectorsT>(value); }
    template<typename AdvancedEventSelectorsT = Aws::Vector<AdvancedEventSelector>>
    CreateEventDataStoreRequest& WithAdvancedEventSelectors(AdvancedEventSelectorsT&& value) { SetAdvancedEventSelectors(std::forward<AdvancedEventSelectorsT>(value)); return *this;}
    template<typename AdvancedEventSelectorsT = AdvancedEventSelector>
    CreateEventDataStoreRequest& AddAdvancedEventSelectors(AdvancedEventSelectorsT&& value) { m_advancedEventSelectorsHasBeenSet = true; m_advancedEventSelectors.emplace_back(std::forward<AdvancedEventSelectorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the event data store includes events from all Regions, or
     * only from the Region in which the event data store is created.</p>
     */
    inline bool GetMultiRegionEnabled() const { return m_multiRegionEnabled; }
    inline bool MultiRegionEnabledHasBeenSet() const { return m_multiRegionEnabledHasBeenSet; }
    inline void SetMultiRegionEnabled(bool value) { m_multiRegionEnabledHasBeenSet = true; m_multiRegionEnabled = value; }
    inline CreateEventDataStoreRequest& WithMultiRegionEnabled(bool value) { SetMultiRegionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether an event data store collects events logged for an
     * organization in Organizations.</p>
     */
    inline bool GetOrganizationEnabled() const { return m_organizationEnabled; }
    inline bool OrganizationEnabledHasBeenSet() const { return m_organizationEnabledHasBeenSet; }
    inline void SetOrganizationEnabled(bool value) { m_organizationEnabledHasBeenSet = true; m_organizationEnabled = value; }
    inline CreateEventDataStoreRequest& WithOrganizationEnabled(bool value) { SetOrganizationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention period of the event data store, in days. If
     * <code>BillingMode</code> is set to <code>EXTENDABLE_RETENTION_PRICING</code>,
     * you can set a retention period of up to 3653 days, the equivalent of 10 years.
     * If <code>BillingMode</code> is set to <code>FIXED_RETENTION_PRICING</code>, you
     * can set a retention period of up to 2557 days, the equivalent of seven
     * years.</p> <p>CloudTrail Lake determines whether to retain an event by checking
     * if the <code>eventTime</code> of the event is within the specified retention
     * period. For example, if you set a retention period of 90 days, CloudTrail will
     * remove events when the <code>eventTime</code> is older than 90 days.</p> 
     * <p>If you plan to copy trail events to this event data store, we recommend that
     * you consider both the age of the events that you want to copy as well as how
     * long you want to keep the copied events in your event data store. For example,
     * if you copy trail events that are 5 years old and specify a retention period of
     * 7 years, the event data store will retain those events for two years.</p>
     * 
     */
    inline int GetRetentionPeriod() const { return m_retentionPeriod; }
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }
    inline void SetRetentionPeriod(int value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }
    inline CreateEventDataStoreRequest& WithRetentionPeriod(int value) { SetRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether termination protection is enabled for the event data store.
     * If termination protection is enabled, you cannot delete the event data store
     * until termination protection is disabled.</p>
     */
    inline bool GetTerminationProtectionEnabled() const { return m_terminationProtectionEnabled; }
    inline bool TerminationProtectionEnabledHasBeenSet() const { return m_terminationProtectionEnabledHasBeenSet; }
    inline void SetTerminationProtectionEnabled(bool value) { m_terminationProtectionEnabledHasBeenSet = true; m_terminationProtectionEnabled = value; }
    inline CreateEventDataStoreRequest& WithTerminationProtectionEnabled(bool value) { SetTerminationProtectionEnabled(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTagsList() const { return m_tagsList; }
    inline bool TagsListHasBeenSet() const { return m_tagsListHasBeenSet; }
    template<typename TagsListT = Aws::Vector<Tag>>
    void SetTagsList(TagsListT&& value) { m_tagsListHasBeenSet = true; m_tagsList = std::forward<TagsListT>(value); }
    template<typename TagsListT = Aws::Vector<Tag>>
    CreateEventDataStoreRequest& WithTagsList(TagsListT&& value) { SetTagsList(std::forward<TagsListT>(value)); return *this;}
    template<typename TagsListT = Tag>
    CreateEventDataStoreRequest& AddTagsList(TagsListT&& value) { m_tagsListHasBeenSet = true; m_tagsList.emplace_back(std::forward<TagsListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the KMS key ID to use to encrypt the events delivered by
     * CloudTrail. The value can be an alias name prefixed by <code>alias/</code>, a
     * fully specified ARN to an alias, a fully specified ARN to a key, or a globally
     * unique identifier.</p>  <p>Disabling or deleting the KMS key, or
     * removing CloudTrail permissions on the key, prevents CloudTrail from logging
     * events to the event data store, and prevents users from querying the data in the
     * event data store that was encrypted with the key. After you associate an event
     * data store with a KMS key, the KMS key cannot be removed or changed. Before you
     * disable or delete a KMS key that you are using with an event data store, delete
     * or back up your event data store.</p>  <p>CloudTrail also supports
     * KMS multi-Region keys. For more information about multi-Region keys, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-overview.html">Using
     * multi-Region keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
     * <p>Examples:</p> <ul> <li> <p> <code>alias/MyAliasName</code> </p> </li> <li>
     * <p> <code>arn:aws:kms:us-east-2:123456789012:alias/MyAliasName</code> </p> </li>
     * <li> <p>
     * <code>arn:aws:kms:us-east-2:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p> </li> <li> <p> <code>12345678-1234-1234-1234-123456789012</code> </p> </li>
     * </ul>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CreateEventDataStoreRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the event data store should start ingesting live events.
     * The default is true.</p>
     */
    inline bool GetStartIngestion() const { return m_startIngestion; }
    inline bool StartIngestionHasBeenSet() const { return m_startIngestionHasBeenSet; }
    inline void SetStartIngestion(bool value) { m_startIngestionHasBeenSet = true; m_startIngestion = value; }
    inline CreateEventDataStoreRequest& WithStartIngestion(bool value) { SetStartIngestion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The billing mode for the event data store determines the cost for ingesting
     * events and the default and maximum retention period for the event data
     * store.</p> <p>The following are the possible values:</p> <ul> <li> <p>
     * <code>EXTENDABLE_RETENTION_PRICING</code> - This billing mode is generally
     * recommended if you want a flexible retention period of up to 3653 days (about 10
     * years). The default retention period for this billing mode is 366 days.</p>
     * </li> <li> <p> <code>FIXED_RETENTION_PRICING</code> - This billing mode is
     * recommended if you expect to ingest more than 25 TB of event data per month and
     * need a retention period of up to 2557 days (about 7 years). The default
     * retention period for this billing mode is 2557 days.</p> </li> </ul> <p>The
     * default value is <code>EXTENDABLE_RETENTION_PRICING</code>.</p> <p>For more
     * information about CloudTrail pricing, see <a
     * href="http://aws.amazon.com/cloudtrail/pricing/">CloudTrail Pricing</a> and <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-lake-manage-costs.html">Managing
     * CloudTrail Lake costs</a>.</p>
     */
    inline BillingMode GetBillingMode() const { return m_billingMode; }
    inline bool BillingModeHasBeenSet() const { return m_billingModeHasBeenSet; }
    inline void SetBillingMode(BillingMode value) { m_billingModeHasBeenSet = true; m_billingMode = value; }
    inline CreateEventDataStoreRequest& WithBillingMode(BillingMode value) { SetBillingMode(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<AdvancedEventSelector> m_advancedEventSelectors;
    bool m_advancedEventSelectorsHasBeenSet = false;

    bool m_multiRegionEnabled{false};
    bool m_multiRegionEnabledHasBeenSet = false;

    bool m_organizationEnabled{false};
    bool m_organizationEnabledHasBeenSet = false;

    int m_retentionPeriod{0};
    bool m_retentionPeriodHasBeenSet = false;

    bool m_terminationProtectionEnabled{false};
    bool m_terminationProtectionEnabledHasBeenSet = false;

    Aws::Vector<Tag> m_tagsList;
    bool m_tagsListHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_startIngestion{false};
    bool m_startIngestionHasBeenSet = false;

    BillingMode m_billingMode{BillingMode::NOT_SET};
    bool m_billingModeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
