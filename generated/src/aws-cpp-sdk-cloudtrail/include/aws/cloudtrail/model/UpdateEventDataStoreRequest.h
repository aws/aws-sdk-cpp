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
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   */
  class UpdateEventDataStoreRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API UpdateEventDataStoreRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEventDataStore"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN (or the ID suffix of the ARN) of the event data store that you want
     * to update.</p>
     */
    inline const Aws::String& GetEventDataStore() const { return m_eventDataStore; }
    inline bool EventDataStoreHasBeenSet() const { return m_eventDataStoreHasBeenSet; }
    template<typename EventDataStoreT = Aws::String>
    void SetEventDataStore(EventDataStoreT&& value) { m_eventDataStoreHasBeenSet = true; m_eventDataStore = std::forward<EventDataStoreT>(value); }
    template<typename EventDataStoreT = Aws::String>
    UpdateEventDataStoreRequest& WithEventDataStore(EventDataStoreT&& value) { SetEventDataStore(std::forward<EventDataStoreT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event data store name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateEventDataStoreRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The advanced event selectors used to select events for the event data store.
     * You can configure up to five advanced event selectors for each event data
     * store.</p>
     */
    inline const Aws::Vector<AdvancedEventSelector>& GetAdvancedEventSelectors() const { return m_advancedEventSelectors; }
    inline bool AdvancedEventSelectorsHasBeenSet() const { return m_advancedEventSelectorsHasBeenSet; }
    template<typename AdvancedEventSelectorsT = Aws::Vector<AdvancedEventSelector>>
    void SetAdvancedEventSelectors(AdvancedEventSelectorsT&& value) { m_advancedEventSelectorsHasBeenSet = true; m_advancedEventSelectors = std::forward<AdvancedEventSelectorsT>(value); }
    template<typename AdvancedEventSelectorsT = Aws::Vector<AdvancedEventSelector>>
    UpdateEventDataStoreRequest& WithAdvancedEventSelectors(AdvancedEventSelectorsT&& value) { SetAdvancedEventSelectors(std::forward<AdvancedEventSelectorsT>(value)); return *this;}
    template<typename AdvancedEventSelectorsT = AdvancedEventSelector>
    UpdateEventDataStoreRequest& AddAdvancedEventSelectors(AdvancedEventSelectorsT&& value) { m_advancedEventSelectorsHasBeenSet = true; m_advancedEventSelectors.emplace_back(std::forward<AdvancedEventSelectorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether an event data store collects events from all Regions, or
     * only from the Region in which it was created.</p>
     */
    inline bool GetMultiRegionEnabled() const { return m_multiRegionEnabled; }
    inline bool MultiRegionEnabledHasBeenSet() const { return m_multiRegionEnabledHasBeenSet; }
    inline void SetMultiRegionEnabled(bool value) { m_multiRegionEnabledHasBeenSet = true; m_multiRegionEnabled = value; }
    inline UpdateEventDataStoreRequest& WithMultiRegionEnabled(bool value) { SetMultiRegionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether an event data store collects events logged for an
     * organization in Organizations.</p>  <p>Only the management account for the
     * organization can convert an organization event data store to a non-organization
     * event data store, or convert a non-organization event data store to an
     * organization event data store.</p> 
     */
    inline bool GetOrganizationEnabled() const { return m_organizationEnabled; }
    inline bool OrganizationEnabledHasBeenSet() const { return m_organizationEnabledHasBeenSet; }
    inline void SetOrganizationEnabled(bool value) { m_organizationEnabledHasBeenSet = true; m_organizationEnabled = value; }
    inline UpdateEventDataStoreRequest& WithOrganizationEnabled(bool value) { SetOrganizationEnabled(value); return *this;}
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
     * <p>If you decrease the retention period of an event data store, CloudTrail will
     * remove any events with an <code>eventTime</code> older than the new retention
     * period. For example, if the previous retention period was 365 days and you
     * decrease it to 100 days, CloudTrail will remove events with an
     * <code>eventTime</code> older than 100 days.</p> 
     */
    inline int GetRetentionPeriod() const { return m_retentionPeriod; }
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }
    inline void SetRetentionPeriod(int value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }
    inline UpdateEventDataStoreRequest& WithRetentionPeriod(int value) { SetRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that termination protection is enabled and the event data store
     * cannot be automatically deleted.</p>
     */
    inline bool GetTerminationProtectionEnabled() const { return m_terminationProtectionEnabled; }
    inline bool TerminationProtectionEnabledHasBeenSet() const { return m_terminationProtectionEnabledHasBeenSet; }
    inline void SetTerminationProtectionEnabled(bool value) { m_terminationProtectionEnabledHasBeenSet = true; m_terminationProtectionEnabled = value; }
    inline UpdateEventDataStoreRequest& WithTerminationProtectionEnabled(bool value) { SetTerminationProtectionEnabled(value); return *this;}
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
    UpdateEventDataStoreRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     *  <p>You can't change the billing mode from
     * <code>EXTENDABLE_RETENTION_PRICING</code> to
     * <code>FIXED_RETENTION_PRICING</code>. If <code>BillingMode</code> is set to
     * <code>EXTENDABLE_RETENTION_PRICING</code> and you want to use
     * <code>FIXED_RETENTION_PRICING</code> instead, you'll need to stop ingestion on
     * the event data store and create a new event data store that uses
     * <code>FIXED_RETENTION_PRICING</code>.</p>  <p>The billing mode for the
     * event data store determines the cost for ingesting events and the default and
     * maximum retention period for the event data store.</p> <p>The following are the
     * possible values:</p> <ul> <li> <p> <code>EXTENDABLE_RETENTION_PRICING</code> -
     * This billing mode is generally recommended if you want a flexible retention
     * period of up to 3653 days (about 10 years). The default retention period for
     * this billing mode is 366 days.</p> </li> <li> <p>
     * <code>FIXED_RETENTION_PRICING</code> - This billing mode is recommended if you
     * expect to ingest more than 25 TB of event data per month and need a retention
     * period of up to 2557 days (about 7 years). The default retention period for this
     * billing mode is 2557 days.</p> </li> </ul> <p>For more information about
     * CloudTrail pricing, see <a
     * href="http://aws.amazon.com/cloudtrail/pricing/">CloudTrail Pricing</a> and <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-lake-manage-costs.html">Managing
     * CloudTrail Lake costs</a>.</p>
     */
    inline BillingMode GetBillingMode() const { return m_billingMode; }
    inline bool BillingModeHasBeenSet() const { return m_billingModeHasBeenSet; }
    inline void SetBillingMode(BillingMode value) { m_billingModeHasBeenSet = true; m_billingMode = value; }
    inline UpdateEventDataStoreRequest& WithBillingMode(BillingMode value) { SetBillingMode(value); return *this;}
    ///@}
  private:

    Aws::String m_eventDataStore;
    bool m_eventDataStoreHasBeenSet = false;

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

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    BillingMode m_billingMode{BillingMode::NOT_SET};
    bool m_billingModeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
