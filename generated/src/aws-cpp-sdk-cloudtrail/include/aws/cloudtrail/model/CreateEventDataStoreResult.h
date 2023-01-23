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
#include <aws/cloudtrail/model/Tag.h>
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
  class CreateEventDataStoreResult
  {
  public:
    AWS_CLOUDTRAIL_API CreateEventDataStoreResult();
    AWS_CLOUDTRAIL_API CreateEventDataStoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API CreateEventDataStoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the event data store.</p>
     */
    inline const Aws::String& GetEventDataStoreArn() const{ return m_eventDataStoreArn; }

    /**
     * <p>The ARN of the event data store.</p>
     */
    inline void SetEventDataStoreArn(const Aws::String& value) { m_eventDataStoreArn = value; }

    /**
     * <p>The ARN of the event data store.</p>
     */
    inline void SetEventDataStoreArn(Aws::String&& value) { m_eventDataStoreArn = std::move(value); }

    /**
     * <p>The ARN of the event data store.</p>
     */
    inline void SetEventDataStoreArn(const char* value) { m_eventDataStoreArn.assign(value); }

    /**
     * <p>The ARN of the event data store.</p>
     */
    inline CreateEventDataStoreResult& WithEventDataStoreArn(const Aws::String& value) { SetEventDataStoreArn(value); return *this;}

    /**
     * <p>The ARN of the event data store.</p>
     */
    inline CreateEventDataStoreResult& WithEventDataStoreArn(Aws::String&& value) { SetEventDataStoreArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the event data store.</p>
     */
    inline CreateEventDataStoreResult& WithEventDataStoreArn(const char* value) { SetEventDataStoreArn(value); return *this;}


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
    inline CreateEventDataStoreResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the event data store.</p>
     */
    inline CreateEventDataStoreResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the event data store.</p>
     */
    inline CreateEventDataStoreResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of event data store creation.</p>
     */
    inline const EventDataStoreStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of event data store creation.</p>
     */
    inline void SetStatus(const EventDataStoreStatus& value) { m_status = value; }

    /**
     * <p>The status of event data store creation.</p>
     */
    inline void SetStatus(EventDataStoreStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of event data store creation.</p>
     */
    inline CreateEventDataStoreResult& WithStatus(const EventDataStoreStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of event data store creation.</p>
     */
    inline CreateEventDataStoreResult& WithStatus(EventDataStoreStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The advanced event selectors that were used to select the events for the data
     * store.</p>
     */
    inline const Aws::Vector<AdvancedEventSelector>& GetAdvancedEventSelectors() const{ return m_advancedEventSelectors; }

    /**
     * <p>The advanced event selectors that were used to select the events for the data
     * store.</p>
     */
    inline void SetAdvancedEventSelectors(const Aws::Vector<AdvancedEventSelector>& value) { m_advancedEventSelectors = value; }

    /**
     * <p>The advanced event selectors that were used to select the events for the data
     * store.</p>
     */
    inline void SetAdvancedEventSelectors(Aws::Vector<AdvancedEventSelector>&& value) { m_advancedEventSelectors = std::move(value); }

    /**
     * <p>The advanced event selectors that were used to select the events for the data
     * store.</p>
     */
    inline CreateEventDataStoreResult& WithAdvancedEventSelectors(const Aws::Vector<AdvancedEventSelector>& value) { SetAdvancedEventSelectors(value); return *this;}

    /**
     * <p>The advanced event selectors that were used to select the events for the data
     * store.</p>
     */
    inline CreateEventDataStoreResult& WithAdvancedEventSelectors(Aws::Vector<AdvancedEventSelector>&& value) { SetAdvancedEventSelectors(std::move(value)); return *this;}

    /**
     * <p>The advanced event selectors that were used to select the events for the data
     * store.</p>
     */
    inline CreateEventDataStoreResult& AddAdvancedEventSelectors(const AdvancedEventSelector& value) { m_advancedEventSelectors.push_back(value); return *this; }

    /**
     * <p>The advanced event selectors that were used to select the events for the data
     * store.</p>
     */
    inline CreateEventDataStoreResult& AddAdvancedEventSelectors(AdvancedEventSelector&& value) { m_advancedEventSelectors.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether the event data store collects events from all regions, or
     * only from the region in which it was created.</p>
     */
    inline bool GetMultiRegionEnabled() const{ return m_multiRegionEnabled; }

    /**
     * <p>Indicates whether the event data store collects events from all regions, or
     * only from the region in which it was created.</p>
     */
    inline void SetMultiRegionEnabled(bool value) { m_multiRegionEnabled = value; }

    /**
     * <p>Indicates whether the event data store collects events from all regions, or
     * only from the region in which it was created.</p>
     */
    inline CreateEventDataStoreResult& WithMultiRegionEnabled(bool value) { SetMultiRegionEnabled(value); return *this;}


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
    inline CreateEventDataStoreResult& WithOrganizationEnabled(bool value) { SetOrganizationEnabled(value); return *this;}


    /**
     * <p>The retention period of an event data store, in days.</p>
     */
    inline int GetRetentionPeriod() const{ return m_retentionPeriod; }

    /**
     * <p>The retention period of an event data store, in days.</p>
     */
    inline void SetRetentionPeriod(int value) { m_retentionPeriod = value; }

    /**
     * <p>The retention period of an event data store, in days.</p>
     */
    inline CreateEventDataStoreResult& WithRetentionPeriod(int value) { SetRetentionPeriod(value); return *this;}


    /**
     * <p>Indicates whether termination protection is enabled for the event data
     * store.</p>
     */
    inline bool GetTerminationProtectionEnabled() const{ return m_terminationProtectionEnabled; }

    /**
     * <p>Indicates whether termination protection is enabled for the event data
     * store.</p>
     */
    inline void SetTerminationProtectionEnabled(bool value) { m_terminationProtectionEnabled = value; }

    /**
     * <p>Indicates whether termination protection is enabled for the event data
     * store.</p>
     */
    inline CreateEventDataStoreResult& WithTerminationProtectionEnabled(bool value) { SetTerminationProtectionEnabled(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetTagsList() const{ return m_tagsList; }

    
    inline void SetTagsList(const Aws::Vector<Tag>& value) { m_tagsList = value; }

    
    inline void SetTagsList(Aws::Vector<Tag>&& value) { m_tagsList = std::move(value); }

    
    inline CreateEventDataStoreResult& WithTagsList(const Aws::Vector<Tag>& value) { SetTagsList(value); return *this;}

    
    inline CreateEventDataStoreResult& WithTagsList(Aws::Vector<Tag>&& value) { SetTagsList(std::move(value)); return *this;}

    
    inline CreateEventDataStoreResult& AddTagsList(const Tag& value) { m_tagsList.push_back(value); return *this; }

    
    inline CreateEventDataStoreResult& AddTagsList(Tag&& value) { m_tagsList.push_back(std::move(value)); return *this; }


    /**
     * <p>The timestamp that shows when the event data store was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The timestamp that shows when the event data store was created.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }

    /**
     * <p>The timestamp that shows when the event data store was created.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }

    /**
     * <p>The timestamp that shows when the event data store was created.</p>
     */
    inline CreateEventDataStoreResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The timestamp that shows when the event data store was created.</p>
     */
    inline CreateEventDataStoreResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The timestamp that shows when an event data store was updated, if applicable.
     * <code>UpdatedTimestamp</code> is always either the same or newer than the time
     * shown in <code>CreatedTimestamp</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }

    /**
     * <p>The timestamp that shows when an event data store was updated, if applicable.
     * <code>UpdatedTimestamp</code> is always either the same or newer than the time
     * shown in <code>CreatedTimestamp</code>.</p>
     */
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestamp = value; }

    /**
     * <p>The timestamp that shows when an event data store was updated, if applicable.
     * <code>UpdatedTimestamp</code> is always either the same or newer than the time
     * shown in <code>CreatedTimestamp</code>.</p>
     */
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestamp = std::move(value); }

    /**
     * <p>The timestamp that shows when an event data store was updated, if applicable.
     * <code>UpdatedTimestamp</code> is always either the same or newer than the time
     * shown in <code>CreatedTimestamp</code>.</p>
     */
    inline CreateEventDataStoreResult& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}

    /**
     * <p>The timestamp that shows when an event data store was updated, if applicable.
     * <code>UpdatedTimestamp</code> is always either the same or newer than the time
     * shown in <code>CreatedTimestamp</code>.</p>
     */
    inline CreateEventDataStoreResult& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}


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
    inline CreateEventDataStoreResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>Specifies the KMS key ID that encrypts the events delivered by CloudTrail.
     * The value is a fully specified ARN to a KMS key in the following format.</p> <p>
     * <code>arn:aws:kms:us-east-2:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline CreateEventDataStoreResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>Specifies the KMS key ID that encrypts the events delivered by CloudTrail.
     * The value is a fully specified ARN to a KMS key in the following format.</p> <p>
     * <code>arn:aws:kms:us-east-2:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline CreateEventDataStoreResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::String m_eventDataStoreArn;

    Aws::String m_name;

    EventDataStoreStatus m_status;

    Aws::Vector<AdvancedEventSelector> m_advancedEventSelectors;

    bool m_multiRegionEnabled;

    bool m_organizationEnabled;

    int m_retentionPeriod;

    bool m_terminationProtectionEnabled;

    Aws::Vector<Tag> m_tagsList;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::Utils::DateTime m_updatedTimestamp;

    Aws::String m_kmsKeyId;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
