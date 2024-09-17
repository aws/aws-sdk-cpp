/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/config/model/ConfigurationItemStatus.h>
#include <aws/config/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/RecordingFrequency.h>
#include <aws/config/model/Relationship.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>A list that contains detailed configurations of a specified
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConfigurationItem">AWS
   * API Reference</a></p>
   */
  class ConfigurationItem
  {
  public:
    AWS_CONFIGSERVICE_API ConfigurationItem();
    AWS_CONFIGSERVICE_API ConfigurationItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConfigurationItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version number of the resource configuration.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline ConfigurationItem& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline ConfigurationItem& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline ConfigurationItem& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 12-digit Amazon Web Services account ID associated with the resource.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline ConfigurationItem& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline ConfigurationItem& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline ConfigurationItem& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the recording of configuration changes was initiated for the
     * resource.</p>
     */
    inline const Aws::Utils::DateTime& GetConfigurationItemCaptureTime() const{ return m_configurationItemCaptureTime; }
    inline bool ConfigurationItemCaptureTimeHasBeenSet() const { return m_configurationItemCaptureTimeHasBeenSet; }
    inline void SetConfigurationItemCaptureTime(const Aws::Utils::DateTime& value) { m_configurationItemCaptureTimeHasBeenSet = true; m_configurationItemCaptureTime = value; }
    inline void SetConfigurationItemCaptureTime(Aws::Utils::DateTime&& value) { m_configurationItemCaptureTimeHasBeenSet = true; m_configurationItemCaptureTime = std::move(value); }
    inline ConfigurationItem& WithConfigurationItemCaptureTime(const Aws::Utils::DateTime& value) { SetConfigurationItemCaptureTime(value); return *this;}
    inline ConfigurationItem& WithConfigurationItemCaptureTime(Aws::Utils::DateTime&& value) { SetConfigurationItemCaptureTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration item status. Valid values include:</p> <ul> <li> <p>OK –
     * The resource configuration has been updated</p> </li> <li> <p>ResourceDiscovered
     * – The resource was newly discovered</p> </li> <li> <p>ResourceNotRecorded – The
     * resource was discovered but its configuration was not recorded since the
     * recorder doesn't record resources of this type</p> </li> <li> <p>ResourceDeleted
     * – The resource was deleted</p> </li> <li> <p>ResourceDeletedNotRecorded – The
     * resource was deleted but its configuration was not recorded since the recorder
     * doesn't record resources of this type</p> </li> </ul>
     */
    inline const ConfigurationItemStatus& GetConfigurationItemStatus() const{ return m_configurationItemStatus; }
    inline bool ConfigurationItemStatusHasBeenSet() const { return m_configurationItemStatusHasBeenSet; }
    inline void SetConfigurationItemStatus(const ConfigurationItemStatus& value) { m_configurationItemStatusHasBeenSet = true; m_configurationItemStatus = value; }
    inline void SetConfigurationItemStatus(ConfigurationItemStatus&& value) { m_configurationItemStatusHasBeenSet = true; m_configurationItemStatus = std::move(value); }
    inline ConfigurationItem& WithConfigurationItemStatus(const ConfigurationItemStatus& value) { SetConfigurationItemStatus(value); return *this;}
    inline ConfigurationItem& WithConfigurationItemStatus(ConfigurationItemStatus&& value) { SetConfigurationItemStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier that indicates the ordering of the configuration items of a
     * resource.</p>
     */
    inline const Aws::String& GetConfigurationStateId() const{ return m_configurationStateId; }
    inline bool ConfigurationStateIdHasBeenSet() const { return m_configurationStateIdHasBeenSet; }
    inline void SetConfigurationStateId(const Aws::String& value) { m_configurationStateIdHasBeenSet = true; m_configurationStateId = value; }
    inline void SetConfigurationStateId(Aws::String&& value) { m_configurationStateIdHasBeenSet = true; m_configurationStateId = std::move(value); }
    inline void SetConfigurationStateId(const char* value) { m_configurationStateIdHasBeenSet = true; m_configurationStateId.assign(value); }
    inline ConfigurationItem& WithConfigurationStateId(const Aws::String& value) { SetConfigurationStateId(value); return *this;}
    inline ConfigurationItem& WithConfigurationStateId(Aws::String&& value) { SetConfigurationStateId(std::move(value)); return *this;}
    inline ConfigurationItem& WithConfigurationStateId(const char* value) { SetConfigurationStateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique MD5 hash that represents the configuration item's state.</p> <p>You
     * can use MD5 hash to compare the states of two or more configuration items that
     * are associated with the same resource.</p>
     */
    inline const Aws::String& GetConfigurationItemMD5Hash() const{ return m_configurationItemMD5Hash; }
    inline bool ConfigurationItemMD5HashHasBeenSet() const { return m_configurationItemMD5HashHasBeenSet; }
    inline void SetConfigurationItemMD5Hash(const Aws::String& value) { m_configurationItemMD5HashHasBeenSet = true; m_configurationItemMD5Hash = value; }
    inline void SetConfigurationItemMD5Hash(Aws::String&& value) { m_configurationItemMD5HashHasBeenSet = true; m_configurationItemMD5Hash = std::move(value); }
    inline void SetConfigurationItemMD5Hash(const char* value) { m_configurationItemMD5HashHasBeenSet = true; m_configurationItemMD5Hash.assign(value); }
    inline ConfigurationItem& WithConfigurationItemMD5Hash(const Aws::String& value) { SetConfigurationItemMD5Hash(value); return *this;}
    inline ConfigurationItem& WithConfigurationItemMD5Hash(Aws::String&& value) { SetConfigurationItemMD5Hash(std::move(value)); return *this;}
    inline ConfigurationItem& WithConfigurationItemMD5Hash(const char* value) { SetConfigurationItemMD5Hash(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) associated with the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ConfigurationItem& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ConfigurationItem& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ConfigurationItem& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline ConfigurationItem& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline ConfigurationItem& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource (for example, <code>sg-xxxxxx</code>).</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline ConfigurationItem& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline ConfigurationItem& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline ConfigurationItem& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom name of the resource, if available.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }
    inline ConfigurationItem& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}
    inline ConfigurationItem& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}
    inline ConfigurationItem& WithResourceName(const char* value) { SetResourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region where the resource resides.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }
    inline ConfigurationItem& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}
    inline ConfigurationItem& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}
    inline ConfigurationItem& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone associated with the resource.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline ConfigurationItem& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline ConfigurationItem& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline ConfigurationItem& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp when the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetResourceCreationTime() const{ return m_resourceCreationTime; }
    inline bool ResourceCreationTimeHasBeenSet() const { return m_resourceCreationTimeHasBeenSet; }
    inline void SetResourceCreationTime(const Aws::Utils::DateTime& value) { m_resourceCreationTimeHasBeenSet = true; m_resourceCreationTime = value; }
    inline void SetResourceCreationTime(Aws::Utils::DateTime&& value) { m_resourceCreationTimeHasBeenSet = true; m_resourceCreationTime = std::move(value); }
    inline ConfigurationItem& WithResourceCreationTime(const Aws::Utils::DateTime& value) { SetResourceCreationTime(value); return *this;}
    inline ConfigurationItem& WithResourceCreationTime(Aws::Utils::DateTime&& value) { SetResourceCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A mapping of key value tags associated with the resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ConfigurationItem& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline ConfigurationItem& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline ConfigurationItem& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline ConfigurationItem& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ConfigurationItem& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ConfigurationItem& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline ConfigurationItem& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ConfigurationItem& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ConfigurationItem& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of CloudTrail event IDs.</p> <p>A populated field indicates that the
     * current configuration was initiated by the events recorded in the CloudTrail
     * log. For more information about CloudTrail, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/what_is_cloud_trail_top_level.html">What
     * Is CloudTrail</a>.</p> <p>An empty field indicates that the current
     * configuration was not initiated by any event. As of Version 1.3, the
     * relatedEvents field is empty. You can access the <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/APIReference/API_LookupEvents.html">LookupEvents
     * API</a> in the <i>CloudTrail API Reference</i> to retrieve the events for the
     * resource.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRelatedEvents() const{ return m_relatedEvents; }
    inline bool RelatedEventsHasBeenSet() const { return m_relatedEventsHasBeenSet; }
    inline void SetRelatedEvents(const Aws::Vector<Aws::String>& value) { m_relatedEventsHasBeenSet = true; m_relatedEvents = value; }
    inline void SetRelatedEvents(Aws::Vector<Aws::String>&& value) { m_relatedEventsHasBeenSet = true; m_relatedEvents = std::move(value); }
    inline ConfigurationItem& WithRelatedEvents(const Aws::Vector<Aws::String>& value) { SetRelatedEvents(value); return *this;}
    inline ConfigurationItem& WithRelatedEvents(Aws::Vector<Aws::String>&& value) { SetRelatedEvents(std::move(value)); return *this;}
    inline ConfigurationItem& AddRelatedEvents(const Aws::String& value) { m_relatedEventsHasBeenSet = true; m_relatedEvents.push_back(value); return *this; }
    inline ConfigurationItem& AddRelatedEvents(Aws::String&& value) { m_relatedEventsHasBeenSet = true; m_relatedEvents.push_back(std::move(value)); return *this; }
    inline ConfigurationItem& AddRelatedEvents(const char* value) { m_relatedEventsHasBeenSet = true; m_relatedEvents.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of related Amazon Web Services resources.</p>
     */
    inline const Aws::Vector<Relationship>& GetRelationships() const{ return m_relationships; }
    inline bool RelationshipsHasBeenSet() const { return m_relationshipsHasBeenSet; }
    inline void SetRelationships(const Aws::Vector<Relationship>& value) { m_relationshipsHasBeenSet = true; m_relationships = value; }
    inline void SetRelationships(Aws::Vector<Relationship>&& value) { m_relationshipsHasBeenSet = true; m_relationships = std::move(value); }
    inline ConfigurationItem& WithRelationships(const Aws::Vector<Relationship>& value) { SetRelationships(value); return *this;}
    inline ConfigurationItem& WithRelationships(Aws::Vector<Relationship>&& value) { SetRelationships(std::move(value)); return *this;}
    inline ConfigurationItem& AddRelationships(const Relationship& value) { m_relationshipsHasBeenSet = true; m_relationships.push_back(value); return *this; }
    inline ConfigurationItem& AddRelationships(Relationship&& value) { m_relationshipsHasBeenSet = true; m_relationships.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The description of the resource configuration.</p>
     */
    inline const Aws::String& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline void SetConfiguration(const char* value) { m_configurationHasBeenSet = true; m_configuration.assign(value); }
    inline ConfigurationItem& WithConfiguration(const Aws::String& value) { SetConfiguration(value); return *this;}
    inline ConfigurationItem& WithConfiguration(Aws::String&& value) { SetConfiguration(std::move(value)); return *this;}
    inline ConfigurationItem& WithConfiguration(const char* value) { SetConfiguration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration attributes that Config returns for certain resource types to
     * supplement the information returned for the <code>configuration</code>
     * parameter.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSupplementaryConfiguration() const{ return m_supplementaryConfiguration; }
    inline bool SupplementaryConfigurationHasBeenSet() const { return m_supplementaryConfigurationHasBeenSet; }
    inline void SetSupplementaryConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { m_supplementaryConfigurationHasBeenSet = true; m_supplementaryConfiguration = value; }
    inline void SetSupplementaryConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { m_supplementaryConfigurationHasBeenSet = true; m_supplementaryConfiguration = std::move(value); }
    inline ConfigurationItem& WithSupplementaryConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { SetSupplementaryConfiguration(value); return *this;}
    inline ConfigurationItem& WithSupplementaryConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { SetSupplementaryConfiguration(std::move(value)); return *this;}
    inline ConfigurationItem& AddSupplementaryConfiguration(const Aws::String& key, const Aws::String& value) { m_supplementaryConfigurationHasBeenSet = true; m_supplementaryConfiguration.emplace(key, value); return *this; }
    inline ConfigurationItem& AddSupplementaryConfiguration(Aws::String&& key, const Aws::String& value) { m_supplementaryConfigurationHasBeenSet = true; m_supplementaryConfiguration.emplace(std::move(key), value); return *this; }
    inline ConfigurationItem& AddSupplementaryConfiguration(const Aws::String& key, Aws::String&& value) { m_supplementaryConfigurationHasBeenSet = true; m_supplementaryConfiguration.emplace(key, std::move(value)); return *this; }
    inline ConfigurationItem& AddSupplementaryConfiguration(Aws::String&& key, Aws::String&& value) { m_supplementaryConfigurationHasBeenSet = true; m_supplementaryConfiguration.emplace(std::move(key), std::move(value)); return *this; }
    inline ConfigurationItem& AddSupplementaryConfiguration(const char* key, Aws::String&& value) { m_supplementaryConfigurationHasBeenSet = true; m_supplementaryConfiguration.emplace(key, std::move(value)); return *this; }
    inline ConfigurationItem& AddSupplementaryConfiguration(Aws::String&& key, const char* value) { m_supplementaryConfigurationHasBeenSet = true; m_supplementaryConfiguration.emplace(std::move(key), value); return *this; }
    inline ConfigurationItem& AddSupplementaryConfiguration(const char* key, const char* value) { m_supplementaryConfigurationHasBeenSet = true; m_supplementaryConfiguration.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The recording frequency that Config uses to record configuration changes for
     * the resource.</p>
     */
    inline const RecordingFrequency& GetRecordingFrequency() const{ return m_recordingFrequency; }
    inline bool RecordingFrequencyHasBeenSet() const { return m_recordingFrequencyHasBeenSet; }
    inline void SetRecordingFrequency(const RecordingFrequency& value) { m_recordingFrequencyHasBeenSet = true; m_recordingFrequency = value; }
    inline void SetRecordingFrequency(RecordingFrequency&& value) { m_recordingFrequencyHasBeenSet = true; m_recordingFrequency = std::move(value); }
    inline ConfigurationItem& WithRecordingFrequency(const RecordingFrequency& value) { SetRecordingFrequency(value); return *this;}
    inline ConfigurationItem& WithRecordingFrequency(RecordingFrequency&& value) { SetRecordingFrequency(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when configuration changes for the resource were delivered.</p>
     *  <p>This field is optional and is not guaranteed to be present in a
     * configuration item (CI). If you are using daily recording, this field will be
     * populated. However, if you are using continuous recording, this field will be
     * omitted since the delivery time is instantaneous as the CI is available right
     * away. For more information on daily recording and continuous recording, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/select-resources.html#select-resources-recording-frequency">Recording
     * Frequency</a> in the <i>Config Developer Guide</i>.</p> 
     */
    inline const Aws::Utils::DateTime& GetConfigurationItemDeliveryTime() const{ return m_configurationItemDeliveryTime; }
    inline bool ConfigurationItemDeliveryTimeHasBeenSet() const { return m_configurationItemDeliveryTimeHasBeenSet; }
    inline void SetConfigurationItemDeliveryTime(const Aws::Utils::DateTime& value) { m_configurationItemDeliveryTimeHasBeenSet = true; m_configurationItemDeliveryTime = value; }
    inline void SetConfigurationItemDeliveryTime(Aws::Utils::DateTime&& value) { m_configurationItemDeliveryTimeHasBeenSet = true; m_configurationItemDeliveryTime = std::move(value); }
    inline ConfigurationItem& WithConfigurationItemDeliveryTime(const Aws::Utils::DateTime& value) { SetConfigurationItemDeliveryTime(value); return *this;}
    inline ConfigurationItem& WithConfigurationItemDeliveryTime(Aws::Utils::DateTime&& value) { SetConfigurationItemDeliveryTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Utils::DateTime m_configurationItemCaptureTime;
    bool m_configurationItemCaptureTimeHasBeenSet = false;

    ConfigurationItemStatus m_configurationItemStatus;
    bool m_configurationItemStatusHasBeenSet = false;

    Aws::String m_configurationStateId;
    bool m_configurationStateIdHasBeenSet = false;

    Aws::String m_configurationItemMD5Hash;
    bool m_configurationItemMD5HashHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::Utils::DateTime m_resourceCreationTime;
    bool m_resourceCreationTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_relatedEvents;
    bool m_relatedEventsHasBeenSet = false;

    Aws::Vector<Relationship> m_relationships;
    bool m_relationshipsHasBeenSet = false;

    Aws::String m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_supplementaryConfiguration;
    bool m_supplementaryConfigurationHasBeenSet = false;

    RecordingFrequency m_recordingFrequency;
    bool m_recordingFrequencyHasBeenSet = false;

    Aws::Utils::DateTime m_configurationItemDeliveryTime;
    bool m_configurationItemDeliveryTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
