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
    AWS_CLOUDTRAIL_API GetEventDataStoreResult();
    AWS_CLOUDTRAIL_API GetEventDataStoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API GetEventDataStoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The event data store Amazon Resource Number (ARN).</p>
     */
    inline const Aws::String& GetEventDataStoreArn() const{ return m_eventDataStoreArn; }

    /**
     * <p>The event data store Amazon Resource Number (ARN).</p>
     */
    inline void SetEventDataStoreArn(const Aws::String& value) { m_eventDataStoreArn = value; }

    /**
     * <p>The event data store Amazon Resource Number (ARN).</p>
     */
    inline void SetEventDataStoreArn(Aws::String&& value) { m_eventDataStoreArn = std::move(value); }

    /**
     * <p>The event data store Amazon Resource Number (ARN).</p>
     */
    inline void SetEventDataStoreArn(const char* value) { m_eventDataStoreArn.assign(value); }

    /**
     * <p>The event data store Amazon Resource Number (ARN).</p>
     */
    inline GetEventDataStoreResult& WithEventDataStoreArn(const Aws::String& value) { SetEventDataStoreArn(value); return *this;}

    /**
     * <p>The event data store Amazon Resource Number (ARN).</p>
     */
    inline GetEventDataStoreResult& WithEventDataStoreArn(Aws::String&& value) { SetEventDataStoreArn(std::move(value)); return *this;}

    /**
     * <p>The event data store Amazon Resource Number (ARN).</p>
     */
    inline GetEventDataStoreResult& WithEventDataStoreArn(const char* value) { SetEventDataStoreArn(value); return *this;}


    /**
     * <p>The name of the event data store.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the event data store.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the event data store.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the event data store.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the event data store.</p>
     */
    inline GetEventDataStoreResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the event data store.</p>
     */
    inline GetEventDataStoreResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the event data store.</p>
     */
    inline GetEventDataStoreResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of an event data store.</p>
     */
    inline const EventDataStoreStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of an event data store.</p>
     */
    inline void SetStatus(const EventDataStoreStatus& value) { m_status = value; }

    /**
     * <p>The status of an event data store.</p>
     */
    inline void SetStatus(EventDataStoreStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of an event data store.</p>
     */
    inline GetEventDataStoreResult& WithStatus(const EventDataStoreStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of an event data store.</p>
     */
    inline GetEventDataStoreResult& WithStatus(EventDataStoreStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The advanced event selectors used to select events for the data store.</p>
     */
    inline const Aws::Vector<AdvancedEventSelector>& GetAdvancedEventSelectors() const{ return m_advancedEventSelectors; }

    /**
     * <p>The advanced event selectors used to select events for the data store.</p>
     */
    inline void SetAdvancedEventSelectors(const Aws::Vector<AdvancedEventSelector>& value) { m_advancedEventSelectors = value; }

    /**
     * <p>The advanced event selectors used to select events for the data store.</p>
     */
    inline void SetAdvancedEventSelectors(Aws::Vector<AdvancedEventSelector>&& value) { m_advancedEventSelectors = std::move(value); }

    /**
     * <p>The advanced event selectors used to select events for the data store.</p>
     */
    inline GetEventDataStoreResult& WithAdvancedEventSelectors(const Aws::Vector<AdvancedEventSelector>& value) { SetAdvancedEventSelectors(value); return *this;}

    /**
     * <p>The advanced event selectors used to select events for the data store.</p>
     */
    inline GetEventDataStoreResult& WithAdvancedEventSelectors(Aws::Vector<AdvancedEventSelector>&& value) { SetAdvancedEventSelectors(std::move(value)); return *this;}

    /**
     * <p>The advanced event selectors used to select events for the data store.</p>
     */
    inline GetEventDataStoreResult& AddAdvancedEventSelectors(const AdvancedEventSelector& value) { m_advancedEventSelectors.push_back(value); return *this; }

    /**
     * <p>The advanced event selectors used to select events for the data store.</p>
     */
    inline GetEventDataStoreResult& AddAdvancedEventSelectors(AdvancedEventSelector&& value) { m_advancedEventSelectors.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether the event data store includes events from all Regions, or
     * only from the Region in which it was created.</p>
     */
    inline bool GetMultiRegionEnabled() const{ return m_multiRegionEnabled; }

    /**
     * <p>Indicates whether the event data store includes events from all Regions, or
     * only from the Region in which it was created.</p>
     */
    inline void SetMultiRegionEnabled(bool value) { m_multiRegionEnabled = value; }

    /**
     * <p>Indicates whether the event data store includes events from all Regions, or
     * only from the Region in which it was created.</p>
     */
    inline GetEventDataStoreResult& WithMultiRegionEnabled(bool value) { SetMultiRegionEnabled(value); return *this;}


    /**
     * <p>Indicates whether an event data store is collecting logged events for an
     * organization in Organizations.</p>
     */
    inline bool GetOrganizationEnabled() const{ return m_organizationEnabled; }

    /**
     * <p>Indicates whether an event data store is collecting logged events for an
     * organization in Organizations.</p>
     */
    inline void SetOrganizationEnabled(bool value) { m_organizationEnabled = value; }

    /**
     * <p>Indicates whether an event data store is collecting logged events for an
     * organization in Organizations.</p>
     */
    inline GetEventDataStoreResult& WithOrganizationEnabled(bool value) { SetOrganizationEnabled(value); return *this;}


    /**
     * <p>The retention period of the event data store, in days.</p>
     */
    inline int GetRetentionPeriod() const{ return m_retentionPeriod; }

    /**
     * <p>The retention period of the event data store, in days.</p>
     */
    inline void SetRetentionPeriod(int value) { m_retentionPeriod = value; }

    /**
     * <p>The retention period of the event data store, in days.</p>
     */
    inline GetEventDataStoreResult& WithRetentionPeriod(int value) { SetRetentionPeriod(value); return *this;}


    /**
     * <p>Indicates that termination protection is enabled.</p>
     */
    inline bool GetTerminationProtectionEnabled() const{ return m_terminationProtectionEnabled; }

    /**
     * <p>Indicates that termination protection is enabled.</p>
     */
    inline void SetTerminationProtectionEnabled(bool value) { m_terminationProtectionEnabled = value; }

    /**
     * <p>Indicates that termination protection is enabled.</p>
     */
    inline GetEventDataStoreResult& WithTerminationProtectionEnabled(bool value) { SetTerminationProtectionEnabled(value); return *this;}


    /**
     * <p>The timestamp of the event data store's creation.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The timestamp of the event data store's creation.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }

    /**
     * <p>The timestamp of the event data store's creation.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }

    /**
     * <p>The timestamp of the event data store's creation.</p>
     */
    inline GetEventDataStoreResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The timestamp of the event data store's creation.</p>
     */
    inline GetEventDataStoreResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>Shows the time that an event data store was updated, if applicable.
     * <code>UpdatedTimestamp</code> is always either the same or newer than the time
     * shown in <code>CreatedTimestamp</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }

    /**
     * <p>Shows the time that an event data store was updated, if applicable.
     * <code>UpdatedTimestamp</code> is always either the same or newer than the time
     * shown in <code>CreatedTimestamp</code>.</p>
     */
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestamp = value; }

    /**
     * <p>Shows the time that an event data store was updated, if applicable.
     * <code>UpdatedTimestamp</code> is always either the same or newer than the time
     * shown in <code>CreatedTimestamp</code>.</p>
     */
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestamp = std::move(value); }

    /**
     * <p>Shows the time that an event data store was updated, if applicable.
     * <code>UpdatedTimestamp</code> is always either the same or newer than the time
     * shown in <code>CreatedTimestamp</code>.</p>
     */
    inline GetEventDataStoreResult& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}

    /**
     * <p>Shows the time that an event data store was updated, if applicable.
     * <code>UpdatedTimestamp</code> is always either the same or newer than the time
     * shown in <code>CreatedTimestamp</code>.</p>
     */
    inline GetEventDataStoreResult& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>Specifies the KMS key ID that encrypts the events delivered by CloudTrail.
     * The value is a fully specified ARN to a KMS key in the following format.</p> <p>
     * <code>arn:aws:kms:us-east-2:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>Specifies the KMS key ID that encrypts the events delivered by CloudTrail.
     * The value is a fully specified ARN to a KMS key in the following format.</p> <p>
     * <code>arn:aws:kms:us-east-2:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }

    /**
     * <p>Specifies the KMS key ID that encrypts the events delivered by CloudTrail.
     * The value is a fully specified ARN to a KMS key in the following format.</p> <p>
     * <code>arn:aws:kms:us-east-2:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }

    /**
     * <p>Specifies the KMS key ID that encrypts the events delivered by CloudTrail.
     * The value is a fully specified ARN to a KMS key in the following format.</p> <p>
     * <code>arn:aws:kms:us-east-2:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }

    /**
     * <p>Specifies the KMS key ID that encrypts the events delivered by CloudTrail.
     * The value is a fully specified ARN to a KMS key in the following format.</p> <p>
     * <code>arn:aws:kms:us-east-2:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline GetEventDataStoreResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>Specifies the KMS key ID that encrypts the events delivered by CloudTrail.
     * The value is a fully specified ARN to a KMS key in the following format.</p> <p>
     * <code>arn:aws:kms:us-east-2:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline GetEventDataStoreResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>Specifies the KMS key ID that encrypts the events delivered by CloudTrail.
     * The value is a fully specified ARN to a KMS key in the following format.</p> <p>
     * <code>arn:aws:kms:us-east-2:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline GetEventDataStoreResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The billing mode for the event data store.</p>
     */
    inline const BillingMode& GetBillingMode() const{ return m_billingMode; }

    /**
     * <p>The billing mode for the event data store.</p>
     */
    inline void SetBillingMode(const BillingMode& value) { m_billingMode = value; }

    /**
     * <p>The billing mode for the event data store.</p>
     */
    inline void SetBillingMode(BillingMode&& value) { m_billingMode = std::move(value); }

    /**
     * <p>The billing mode for the event data store.</p>
     */
    inline GetEventDataStoreResult& WithBillingMode(const BillingMode& value) { SetBillingMode(value); return *this;}

    /**
     * <p>The billing mode for the event data store.</p>
     */
    inline GetEventDataStoreResult& WithBillingMode(BillingMode&& value) { SetBillingMode(std::move(value)); return *this;}


    /**
     * <p> Indicates the <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/query-federation.html">Lake
     * query federation</a> status. The status is <code>ENABLED</code> if Lake query
     * federation is enabled, or <code>DISABLED</code> if Lake query federation is
     * disabled. You cannot delete an event data store if the
     * <code>FederationStatus</code> is <code>ENABLED</code>. </p>
     */
    inline const FederationStatus& GetFederationStatus() const{ return m_federationStatus; }

    /**
     * <p> Indicates the <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/query-federation.html">Lake
     * query federation</a> status. The status is <code>ENABLED</code> if Lake query
     * federation is enabled, or <code>DISABLED</code> if Lake query federation is
     * disabled. You cannot delete an event data store if the
     * <code>FederationStatus</code> is <code>ENABLED</code>. </p>
     */
    inline void SetFederationStatus(const FederationStatus& value) { m_federationStatus = value; }

    /**
     * <p> Indicates the <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/query-federation.html">Lake
     * query federation</a> status. The status is <code>ENABLED</code> if Lake query
     * federation is enabled, or <code>DISABLED</code> if Lake query federation is
     * disabled. You cannot delete an event data store if the
     * <code>FederationStatus</code> is <code>ENABLED</code>. </p>
     */
    inline void SetFederationStatus(FederationStatus&& value) { m_federationStatus = std::move(value); }

    /**
     * <p> Indicates the <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/query-federation.html">Lake
     * query federation</a> status. The status is <code>ENABLED</code> if Lake query
     * federation is enabled, or <code>DISABLED</code> if Lake query federation is
     * disabled. You cannot delete an event data store if the
     * <code>FederationStatus</code> is <code>ENABLED</code>. </p>
     */
    inline GetEventDataStoreResult& WithFederationStatus(const FederationStatus& value) { SetFederationStatus(value); return *this;}

    /**
     * <p> Indicates the <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/query-federation.html">Lake
     * query federation</a> status. The status is <code>ENABLED</code> if Lake query
     * federation is enabled, or <code>DISABLED</code> if Lake query federation is
     * disabled. You cannot delete an event data store if the
     * <code>FederationStatus</code> is <code>ENABLED</code>. </p>
     */
    inline GetEventDataStoreResult& WithFederationStatus(FederationStatus&& value) { SetFederationStatus(std::move(value)); return *this;}


    /**
     * <p> If Lake query federation is enabled, provides the ARN of the federation role
     * used to access the resources for the federated event data store. </p>
     */
    inline const Aws::String& GetFederationRoleArn() const{ return m_federationRoleArn; }

    /**
     * <p> If Lake query federation is enabled, provides the ARN of the federation role
     * used to access the resources for the federated event data store. </p>
     */
    inline void SetFederationRoleArn(const Aws::String& value) { m_federationRoleArn = value; }

    /**
     * <p> If Lake query federation is enabled, provides the ARN of the federation role
     * used to access the resources for the federated event data store. </p>
     */
    inline void SetFederationRoleArn(Aws::String&& value) { m_federationRoleArn = std::move(value); }

    /**
     * <p> If Lake query federation is enabled, provides the ARN of the federation role
     * used to access the resources for the federated event data store. </p>
     */
    inline void SetFederationRoleArn(const char* value) { m_federationRoleArn.assign(value); }

    /**
     * <p> If Lake query federation is enabled, provides the ARN of the federation role
     * used to access the resources for the federated event data store. </p>
     */
    inline GetEventDataStoreResult& WithFederationRoleArn(const Aws::String& value) { SetFederationRoleArn(value); return *this;}

    /**
     * <p> If Lake query federation is enabled, provides the ARN of the federation role
     * used to access the resources for the federated event data store. </p>
     */
    inline GetEventDataStoreResult& WithFederationRoleArn(Aws::String&& value) { SetFederationRoleArn(std::move(value)); return *this;}

    /**
     * <p> If Lake query federation is enabled, provides the ARN of the federation role
     * used to access the resources for the federated event data store. </p>
     */
    inline GetEventDataStoreResult& WithFederationRoleArn(const char* value) { SetFederationRoleArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetEventDataStoreResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetEventDataStoreResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetEventDataStoreResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_eventDataStoreArn;

    Aws::String m_name;

    EventDataStoreStatus m_status;

    Aws::Vector<AdvancedEventSelector> m_advancedEventSelectors;

    bool m_multiRegionEnabled;

    bool m_organizationEnabled;

    int m_retentionPeriod;

    bool m_terminationProtectionEnabled;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::Utils::DateTime m_updatedTimestamp;

    Aws::String m_kmsKeyId;

    BillingMode m_billingMode;

    FederationStatus m_federationStatus;

    Aws::String m_federationRoleArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
