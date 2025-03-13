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
#include <aws/cloudtrail/model/BillingMode.h>
#include <aws/cloudtrail/model/FederationStatus.h>
#include <aws/cloudtrail/model/AdvancedEventSelector.h>
#include <aws/cloudtrail/model/PartitionKey.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudTrail
{
namespace Model
{
  class GetEventDataStoreResult
  {
  public:
    AWS_CLOUDTRAIL_API GetEventDataStoreResult() = default;
    AWS_CLOUDTRAIL_API GetEventDataStoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API GetEventDataStoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The event data store Amazon Resource Number (ARN).</p>
     */
    inline const Aws::String& GetEventDataStoreArn() const { return m_eventDataStoreArn; }
    template<typename EventDataStoreArnT = Aws::String>
    void SetEventDataStoreArn(EventDataStoreArnT&& value) { m_eventDataStoreArnHasBeenSet = true; m_eventDataStoreArn = std::forward<EventDataStoreArnT>(value); }
    template<typename EventDataStoreArnT = Aws::String>
    GetEventDataStoreResult& WithEventDataStoreArn(EventDataStoreArnT&& value) { SetEventDataStoreArn(std::forward<EventDataStoreArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the event data store.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetEventDataStoreResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of an event data store.</p>
     */
    inline EventDataStoreStatus GetStatus() const { return m_status; }
    inline void SetStatus(EventDataStoreStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetEventDataStoreResult& WithStatus(EventDataStoreStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The advanced event selectors used to select events for the data store.</p>
     */
    inline const Aws::Vector<AdvancedEventSelector>& GetAdvancedEventSelectors() const { return m_advancedEventSelectors; }
    template<typename AdvancedEventSelectorsT = Aws::Vector<AdvancedEventSelector>>
    void SetAdvancedEventSelectors(AdvancedEventSelectorsT&& value) { m_advancedEventSelectorsHasBeenSet = true; m_advancedEventSelectors = std::forward<AdvancedEventSelectorsT>(value); }
    template<typename AdvancedEventSelectorsT = Aws::Vector<AdvancedEventSelector>>
    GetEventDataStoreResult& WithAdvancedEventSelectors(AdvancedEventSelectorsT&& value) { SetAdvancedEventSelectors(std::forward<AdvancedEventSelectorsT>(value)); return *this;}
    template<typename AdvancedEventSelectorsT = AdvancedEventSelector>
    GetEventDataStoreResult& AddAdvancedEventSelectors(AdvancedEventSelectorsT&& value) { m_advancedEventSelectorsHasBeenSet = true; m_advancedEventSelectors.emplace_back(std::forward<AdvancedEventSelectorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the event data store includes events from all Regions, or
     * only from the Region in which it was created.</p>
     */
    inline bool GetMultiRegionEnabled() const { return m_multiRegionEnabled; }
    inline void SetMultiRegionEnabled(bool value) { m_multiRegionEnabledHasBeenSet = true; m_multiRegionEnabled = value; }
    inline GetEventDataStoreResult& WithMultiRegionEnabled(bool value) { SetMultiRegionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether an event data store is collecting logged events for an
     * organization in Organizations.</p>
     */
    inline bool GetOrganizationEnabled() const { return m_organizationEnabled; }
    inline void SetOrganizationEnabled(bool value) { m_organizationEnabledHasBeenSet = true; m_organizationEnabled = value; }
    inline GetEventDataStoreResult& WithOrganizationEnabled(bool value) { SetOrganizationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention period of the event data store, in days.</p>
     */
    inline int GetRetentionPeriod() const { return m_retentionPeriod; }
    inline void SetRetentionPeriod(int value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }
    inline GetEventDataStoreResult& WithRetentionPeriod(int value) { SetRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that termination protection is enabled.</p>
     */
    inline bool GetTerminationProtectionEnabled() const { return m_terminationProtectionEnabled; }
    inline void SetTerminationProtectionEnabled(bool value) { m_terminationProtectionEnabledHasBeenSet = true; m_terminationProtectionEnabled = value; }
    inline GetEventDataStoreResult& WithTerminationProtectionEnabled(bool value) { SetTerminationProtectionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the event data store's creation.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    GetEventDataStoreResult& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows the time that an event data store was updated, if applicable.
     * <code>UpdatedTimestamp</code> is always either the same or newer than the time
     * shown in <code>CreatedTimestamp</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const { return m_updatedTimestamp; }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    void SetUpdatedTimestamp(UpdatedTimestampT&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::forward<UpdatedTimestampT>(value); }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    GetEventDataStoreResult& WithUpdatedTimestamp(UpdatedTimestampT&& value) { SetUpdatedTimestamp(std::forward<UpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the KMS key ID that encrypts the events delivered by CloudTrail.
     * The value is a fully specified ARN to a KMS key in the following format.</p> <p>
     * <code>arn:aws:kms:us-east-2:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    GetEventDataStoreResult& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The billing mode for the event data store.</p>
     */
    inline BillingMode GetBillingMode() const { return m_billingMode; }
    inline void SetBillingMode(BillingMode value) { m_billingModeHasBeenSet = true; m_billingMode = value; }
    inline GetEventDataStoreResult& WithBillingMode(BillingMode value) { SetBillingMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/query-federation.html">Lake
     * query federation</a> status. The status is <code>ENABLED</code> if Lake query
     * federation is enabled, or <code>DISABLED</code> if Lake query federation is
     * disabled. You cannot delete an event data store if the
     * <code>FederationStatus</code> is <code>ENABLED</code>. </p>
     */
    inline FederationStatus GetFederationStatus() const { return m_federationStatus; }
    inline void SetFederationStatus(FederationStatus value) { m_federationStatusHasBeenSet = true; m_federationStatus = value; }
    inline GetEventDataStoreResult& WithFederationStatus(FederationStatus value) { SetFederationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> If Lake query federation is enabled, provides the ARN of the federation role
     * used to access the resources for the federated event data store. </p>
     */
    inline const Aws::String& GetFederationRoleArn() const { return m_federationRoleArn; }
    template<typename FederationRoleArnT = Aws::String>
    void SetFederationRoleArn(FederationRoleArnT&& value) { m_federationRoleArnHasBeenSet = true; m_federationRoleArn = std::forward<FederationRoleArnT>(value); }
    template<typename FederationRoleArnT = Aws::String>
    GetEventDataStoreResult& WithFederationRoleArn(FederationRoleArnT&& value) { SetFederationRoleArn(std::forward<FederationRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The partition keys for the event data store. To improve query performance and
     * efficiency, CloudTrail Lake organizes event data into partitions based on values
     * derived from partition keys.</p>
     */
    inline const Aws::Vector<PartitionKey>& GetPartitionKeys() const { return m_partitionKeys; }
    template<typename PartitionKeysT = Aws::Vector<PartitionKey>>
    void SetPartitionKeys(PartitionKeysT&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys = std::forward<PartitionKeysT>(value); }
    template<typename PartitionKeysT = Aws::Vector<PartitionKey>>
    GetEventDataStoreResult& WithPartitionKeys(PartitionKeysT&& value) { SetPartitionKeys(std::forward<PartitionKeysT>(value)); return *this;}
    template<typename PartitionKeysT = PartitionKey>
    GetEventDataStoreResult& AddPartitionKeys(PartitionKeysT&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys.emplace_back(std::forward<PartitionKeysT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEventDataStoreResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventDataStoreArn;
    bool m_eventDataStoreArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    EventDataStoreStatus m_status{EventDataStoreStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

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

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp{};
    bool m_updatedTimestampHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    BillingMode m_billingMode{BillingMode::NOT_SET};
    bool m_billingModeHasBeenSet = false;

    FederationStatus m_federationStatus{FederationStatus::NOT_SET};
    bool m_federationStatusHasBeenSet = false;

    Aws::String m_federationRoleArn;
    bool m_federationRoleArnHasBeenSet = false;

    Aws::Vector<PartitionKey> m_partitionKeys;
    bool m_partitionKeysHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
