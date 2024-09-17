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
  class RestoreEventDataStoreResult
  {
  public:
    AWS_CLOUDTRAIL_API RestoreEventDataStoreResult();
    AWS_CLOUDTRAIL_API RestoreEventDataStoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API RestoreEventDataStoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The event data store ARN.</p>
     */
    inline const Aws::String& GetEventDataStoreArn() const{ return m_eventDataStoreArn; }
    inline void SetEventDataStoreArn(const Aws::String& value) { m_eventDataStoreArn = value; }
    inline void SetEventDataStoreArn(Aws::String&& value) { m_eventDataStoreArn = std::move(value); }
    inline void SetEventDataStoreArn(const char* value) { m_eventDataStoreArn.assign(value); }
    inline RestoreEventDataStoreResult& WithEventDataStoreArn(const Aws::String& value) { SetEventDataStoreArn(value); return *this;}
    inline RestoreEventDataStoreResult& WithEventDataStoreArn(Aws::String&& value) { SetEventDataStoreArn(std::move(value)); return *this;}
    inline RestoreEventDataStoreResult& WithEventDataStoreArn(const char* value) { SetEventDataStoreArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the event data store.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline RestoreEventDataStoreResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RestoreEventDataStoreResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RestoreEventDataStoreResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the event data store.</p>
     */
    inline const EventDataStoreStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const EventDataStoreStatus& value) { m_status = value; }
    inline void SetStatus(EventDataStoreStatus&& value) { m_status = std::move(value); }
    inline RestoreEventDataStoreResult& WithStatus(const EventDataStoreStatus& value) { SetStatus(value); return *this;}
    inline RestoreEventDataStoreResult& WithStatus(EventDataStoreStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The advanced event selectors that were used to select events.</p>
     */
    inline const Aws::Vector<AdvancedEventSelector>& GetAdvancedEventSelectors() const{ return m_advancedEventSelectors; }
    inline void SetAdvancedEventSelectors(const Aws::Vector<AdvancedEventSelector>& value) { m_advancedEventSelectors = value; }
    inline void SetAdvancedEventSelectors(Aws::Vector<AdvancedEventSelector>&& value) { m_advancedEventSelectors = std::move(value); }
    inline RestoreEventDataStoreResult& WithAdvancedEventSelectors(const Aws::Vector<AdvancedEventSelector>& value) { SetAdvancedEventSelectors(value); return *this;}
    inline RestoreEventDataStoreResult& WithAdvancedEventSelectors(Aws::Vector<AdvancedEventSelector>&& value) { SetAdvancedEventSelectors(std::move(value)); return *this;}
    inline RestoreEventDataStoreResult& AddAdvancedEventSelectors(const AdvancedEventSelector& value) { m_advancedEventSelectors.push_back(value); return *this; }
    inline RestoreEventDataStoreResult& AddAdvancedEventSelectors(AdvancedEventSelector&& value) { m_advancedEventSelectors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the event data store is collecting events from all Regions,
     * or only from the Region in which the event data store was created.</p>
     */
    inline bool GetMultiRegionEnabled() const{ return m_multiRegionEnabled; }
    inline void SetMultiRegionEnabled(bool value) { m_multiRegionEnabled = value; }
    inline RestoreEventDataStoreResult& WithMultiRegionEnabled(bool value) { SetMultiRegionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether an event data store is collecting logged events for an
     * organization in Organizations.</p>
     */
    inline bool GetOrganizationEnabled() const{ return m_organizationEnabled; }
    inline void SetOrganizationEnabled(bool value) { m_organizationEnabled = value; }
    inline RestoreEventDataStoreResult& WithOrganizationEnabled(bool value) { SetOrganizationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention period, in days.</p>
     */
    inline int GetRetentionPeriod() const{ return m_retentionPeriod; }
    inline void SetRetentionPeriod(int value) { m_retentionPeriod = value; }
    inline RestoreEventDataStoreResult& WithRetentionPeriod(int value) { SetRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that termination protection is enabled and the event data store
     * cannot be automatically deleted.</p>
     */
    inline bool GetTerminationProtectionEnabled() const{ return m_terminationProtectionEnabled; }
    inline void SetTerminationProtectionEnabled(bool value) { m_terminationProtectionEnabled = value; }
    inline RestoreEventDataStoreResult& WithTerminationProtectionEnabled(bool value) { SetTerminationProtectionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of an event data store's creation.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }
    inline RestoreEventDataStoreResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline RestoreEventDataStoreResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that shows when an event data store was updated, if applicable.
     * <code>UpdatedTimestamp</code> is always either the same or newer than the time
     * shown in <code>CreatedTimestamp</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestamp = value; }
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestamp = std::move(value); }
    inline RestoreEventDataStoreResult& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}
    inline RestoreEventDataStoreResult& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the KMS key ID that encrypts the events delivered by CloudTrail.
     * The value is a fully specified ARN to a KMS key in the following format.</p> <p>
     * <code>arn:aws:kms:us-east-2:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }
    inline RestoreEventDataStoreResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline RestoreEventDataStoreResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline RestoreEventDataStoreResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The billing mode for the event data store.</p>
     */
    inline const BillingMode& GetBillingMode() const{ return m_billingMode; }
    inline void SetBillingMode(const BillingMode& value) { m_billingMode = value; }
    inline void SetBillingMode(BillingMode&& value) { m_billingMode = std::move(value); }
    inline RestoreEventDataStoreResult& WithBillingMode(const BillingMode& value) { SetBillingMode(value); return *this;}
    inline RestoreEventDataStoreResult& WithBillingMode(BillingMode&& value) { SetBillingMode(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RestoreEventDataStoreResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RestoreEventDataStoreResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RestoreEventDataStoreResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
