/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/config/model/ConfigurationItemStatus.h>
#include <aws/config/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/Relationship.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ConfigService
{
namespace Model
{

  /**
   * <p>A list that contains detailed configurations of a specified resource.</p>
   * <note> <p>Currently, the list does not contain information about non-AWS
   * components (for example, applications on your Amazon EC2 instances).</p> </note>
   */
  class AWS_CONFIGSERVICE_API ConfigurationItem
  {
  public:
    ConfigurationItem();
    ConfigurationItem(const Aws::Utils::Json::JsonValue& jsonValue);
    ConfigurationItem& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The version number of the resource configuration.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version number of the resource configuration.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version number of the resource configuration.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version number of the resource configuration.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version number of the resource configuration.</p>
     */
    inline ConfigurationItem& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version number of the resource configuration.</p>
     */
    inline ConfigurationItem& WithVersion(Aws::String&& value) { SetVersion(value); return *this;}

    /**
     * <p>The version number of the resource configuration.</p>
     */
    inline ConfigurationItem& WithVersion(const char* value) { SetVersion(value); return *this;}

    /**
     * <p>The 12 digit AWS account ID associated with the resource.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The 12 digit AWS account ID associated with the resource.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The 12 digit AWS account ID associated with the resource.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The 12 digit AWS account ID associated with the resource.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The 12 digit AWS account ID associated with the resource.</p>
     */
    inline ConfigurationItem& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The 12 digit AWS account ID associated with the resource.</p>
     */
    inline ConfigurationItem& WithAccountId(Aws::String&& value) { SetAccountId(value); return *this;}

    /**
     * <p>The 12 digit AWS account ID associated with the resource.</p>
     */
    inline ConfigurationItem& WithAccountId(const char* value) { SetAccountId(value); return *this;}

    /**
     * <p>The time when the configuration recording was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetConfigurationItemCaptureTime() const{ return m_configurationItemCaptureTime; }

    /**
     * <p>The time when the configuration recording was initiated.</p>
     */
    inline void SetConfigurationItemCaptureTime(const Aws::Utils::DateTime& value) { m_configurationItemCaptureTimeHasBeenSet = true; m_configurationItemCaptureTime = value; }

    /**
     * <p>The time when the configuration recording was initiated.</p>
     */
    inline void SetConfigurationItemCaptureTime(Aws::Utils::DateTime&& value) { m_configurationItemCaptureTimeHasBeenSet = true; m_configurationItemCaptureTime = value; }

    /**
     * <p>The time when the configuration recording was initiated.</p>
     */
    inline ConfigurationItem& WithConfigurationItemCaptureTime(const Aws::Utils::DateTime& value) { SetConfigurationItemCaptureTime(value); return *this;}

    /**
     * <p>The time when the configuration recording was initiated.</p>
     */
    inline ConfigurationItem& WithConfigurationItemCaptureTime(Aws::Utils::DateTime&& value) { SetConfigurationItemCaptureTime(value); return *this;}

    /**
     * <p>The configuration item status.</p>
     */
    inline const ConfigurationItemStatus& GetConfigurationItemStatus() const{ return m_configurationItemStatus; }

    /**
     * <p>The configuration item status.</p>
     */
    inline void SetConfigurationItemStatus(const ConfigurationItemStatus& value) { m_configurationItemStatusHasBeenSet = true; m_configurationItemStatus = value; }

    /**
     * <p>The configuration item status.</p>
     */
    inline void SetConfigurationItemStatus(ConfigurationItemStatus&& value) { m_configurationItemStatusHasBeenSet = true; m_configurationItemStatus = value; }

    /**
     * <p>The configuration item status.</p>
     */
    inline ConfigurationItem& WithConfigurationItemStatus(const ConfigurationItemStatus& value) { SetConfigurationItemStatus(value); return *this;}

    /**
     * <p>The configuration item status.</p>
     */
    inline ConfigurationItem& WithConfigurationItemStatus(ConfigurationItemStatus&& value) { SetConfigurationItemStatus(value); return *this;}

    /**
     * <p>An identifier that indicates the ordering of the configuration items of a
     * resource.</p>
     */
    inline const Aws::String& GetConfigurationStateId() const{ return m_configurationStateId; }

    /**
     * <p>An identifier that indicates the ordering of the configuration items of a
     * resource.</p>
     */
    inline void SetConfigurationStateId(const Aws::String& value) { m_configurationStateIdHasBeenSet = true; m_configurationStateId = value; }

    /**
     * <p>An identifier that indicates the ordering of the configuration items of a
     * resource.</p>
     */
    inline void SetConfigurationStateId(Aws::String&& value) { m_configurationStateIdHasBeenSet = true; m_configurationStateId = value; }

    /**
     * <p>An identifier that indicates the ordering of the configuration items of a
     * resource.</p>
     */
    inline void SetConfigurationStateId(const char* value) { m_configurationStateIdHasBeenSet = true; m_configurationStateId.assign(value); }

    /**
     * <p>An identifier that indicates the ordering of the configuration items of a
     * resource.</p>
     */
    inline ConfigurationItem& WithConfigurationStateId(const Aws::String& value) { SetConfigurationStateId(value); return *this;}

    /**
     * <p>An identifier that indicates the ordering of the configuration items of a
     * resource.</p>
     */
    inline ConfigurationItem& WithConfigurationStateId(Aws::String&& value) { SetConfigurationStateId(value); return *this;}

    /**
     * <p>An identifier that indicates the ordering of the configuration items of a
     * resource.</p>
     */
    inline ConfigurationItem& WithConfigurationStateId(const char* value) { SetConfigurationStateId(value); return *this;}

    /**
     * <p>Unique MD5 hash that represents the configuration item's state.</p> <p>You
     * can use MD5 hash to compare the states of two or more configuration items that
     * are associated with the same resource.</p>
     */
    inline const Aws::String& GetConfigurationItemMD5Hash() const{ return m_configurationItemMD5Hash; }

    /**
     * <p>Unique MD5 hash that represents the configuration item's state.</p> <p>You
     * can use MD5 hash to compare the states of two or more configuration items that
     * are associated with the same resource.</p>
     */
    inline void SetConfigurationItemMD5Hash(const Aws::String& value) { m_configurationItemMD5HashHasBeenSet = true; m_configurationItemMD5Hash = value; }

    /**
     * <p>Unique MD5 hash that represents the configuration item's state.</p> <p>You
     * can use MD5 hash to compare the states of two or more configuration items that
     * are associated with the same resource.</p>
     */
    inline void SetConfigurationItemMD5Hash(Aws::String&& value) { m_configurationItemMD5HashHasBeenSet = true; m_configurationItemMD5Hash = value; }

    /**
     * <p>Unique MD5 hash that represents the configuration item's state.</p> <p>You
     * can use MD5 hash to compare the states of two or more configuration items that
     * are associated with the same resource.</p>
     */
    inline void SetConfigurationItemMD5Hash(const char* value) { m_configurationItemMD5HashHasBeenSet = true; m_configurationItemMD5Hash.assign(value); }

    /**
     * <p>Unique MD5 hash that represents the configuration item's state.</p> <p>You
     * can use MD5 hash to compare the states of two or more configuration items that
     * are associated with the same resource.</p>
     */
    inline ConfigurationItem& WithConfigurationItemMD5Hash(const Aws::String& value) { SetConfigurationItemMD5Hash(value); return *this;}

    /**
     * <p>Unique MD5 hash that represents the configuration item's state.</p> <p>You
     * can use MD5 hash to compare the states of two or more configuration items that
     * are associated with the same resource.</p>
     */
    inline ConfigurationItem& WithConfigurationItemMD5Hash(Aws::String&& value) { SetConfigurationItemMD5Hash(value); return *this;}

    /**
     * <p>Unique MD5 hash that represents the configuration item's state.</p> <p>You
     * can use MD5 hash to compare the states of two or more configuration items that
     * are associated with the same resource.</p>
     */
    inline ConfigurationItem& WithConfigurationItemMD5Hash(const char* value) { SetConfigurationItemMD5Hash(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline ConfigurationItem& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline ConfigurationItem& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline ConfigurationItem& WithArn(const char* value) { SetArn(value); return *this;}

    /**
     * <p>The type of AWS resource.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of AWS resource.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of AWS resource.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of AWS resource.</p>
     */
    inline ConfigurationItem& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of AWS resource.</p>
     */
    inline ConfigurationItem& WithResourceType(ResourceType&& value) { SetResourceType(value); return *this;}

    /**
     * <p>The ID of the resource (for example., <code>sg-xxxxxx</code>).</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the resource (for example., <code>sg-xxxxxx</code>).</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the resource (for example., <code>sg-xxxxxx</code>).</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the resource (for example., <code>sg-xxxxxx</code>).</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the resource (for example., <code>sg-xxxxxx</code>).</p>
     */
    inline ConfigurationItem& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the resource (for example., <code>sg-xxxxxx</code>).</p>
     */
    inline ConfigurationItem& WithResourceId(Aws::String&& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the resource (for example., <code>sg-xxxxxx</code>).</p>
     */
    inline ConfigurationItem& WithResourceId(const char* value) { SetResourceId(value); return *this;}

    /**
     * <p>The custom name of the resource, if available.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The custom name of the resource, if available.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The custom name of the resource, if available.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The custom name of the resource, if available.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The custom name of the resource, if available.</p>
     */
    inline ConfigurationItem& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The custom name of the resource, if available.</p>
     */
    inline ConfigurationItem& WithResourceName(Aws::String&& value) { SetResourceName(value); return *this;}

    /**
     * <p>The custom name of the resource, if available.</p>
     */
    inline ConfigurationItem& WithResourceName(const char* value) { SetResourceName(value); return *this;}

    /**
     * <p>The region where the resource resides.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }

    /**
     * <p>The region where the resource resides.</p>
     */
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }

    /**
     * <p>The region where the resource resides.</p>
     */
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }

    /**
     * <p>The region where the resource resides.</p>
     */
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }

    /**
     * <p>The region where the resource resides.</p>
     */
    inline ConfigurationItem& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}

    /**
     * <p>The region where the resource resides.</p>
     */
    inline ConfigurationItem& WithAwsRegion(Aws::String&& value) { SetAwsRegion(value); return *this;}

    /**
     * <p>The region where the resource resides.</p>
     */
    inline ConfigurationItem& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}

    /**
     * <p>The Availability Zone associated with the resource.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone associated with the resource.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone associated with the resource.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone associated with the resource.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone associated with the resource.</p>
     */
    inline ConfigurationItem& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone associated with the resource.</p>
     */
    inline ConfigurationItem& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone associated with the resource.</p>
     */
    inline ConfigurationItem& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The time stamp when the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetResourceCreationTime() const{ return m_resourceCreationTime; }

    /**
     * <p>The time stamp when the resource was created.</p>
     */
    inline void SetResourceCreationTime(const Aws::Utils::DateTime& value) { m_resourceCreationTimeHasBeenSet = true; m_resourceCreationTime = value; }

    /**
     * <p>The time stamp when the resource was created.</p>
     */
    inline void SetResourceCreationTime(Aws::Utils::DateTime&& value) { m_resourceCreationTimeHasBeenSet = true; m_resourceCreationTime = value; }

    /**
     * <p>The time stamp when the resource was created.</p>
     */
    inline ConfigurationItem& WithResourceCreationTime(const Aws::Utils::DateTime& value) { SetResourceCreationTime(value); return *this;}

    /**
     * <p>The time stamp when the resource was created.</p>
     */
    inline ConfigurationItem& WithResourceCreationTime(Aws::Utils::DateTime&& value) { SetResourceCreationTime(value); return *this;}

    /**
     * <p>A mapping of key value tags associated with the resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A mapping of key value tags associated with the resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A mapping of key value tags associated with the resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A mapping of key value tags associated with the resource.</p>
     */
    inline ConfigurationItem& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A mapping of key value tags associated with the resource.</p>
     */
    inline ConfigurationItem& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(value); return *this;}

    /**
     * <p>A mapping of key value tags associated with the resource.</p>
     */
    inline ConfigurationItem& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>A mapping of key value tags associated with the resource.</p>
     */
    inline ConfigurationItem& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>A mapping of key value tags associated with the resource.</p>
     */
    inline ConfigurationItem& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>A mapping of key value tags associated with the resource.</p>
     */
    inline ConfigurationItem& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>A mapping of key value tags associated with the resource.</p>
     */
    inline ConfigurationItem& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>A mapping of key value tags associated with the resource.</p>
     */
    inline ConfigurationItem& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>A mapping of key value tags associated with the resource.</p>
     */
    inline ConfigurationItem& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>A list of CloudTrail event IDs.</p> <p>A populated field indicates that the
     * current configuration was initiated by the events recorded in the CloudTrail
     * log. For more information about CloudTrail, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/what_is_cloud_trail_top_level.html">What
     * is AWS CloudTrail?</a>.</p> <p>An empty field indicates that the current
     * configuration was not initiated by any event.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRelatedEvents() const{ return m_relatedEvents; }

    /**
     * <p>A list of CloudTrail event IDs.</p> <p>A populated field indicates that the
     * current configuration was initiated by the events recorded in the CloudTrail
     * log. For more information about CloudTrail, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/what_is_cloud_trail_top_level.html">What
     * is AWS CloudTrail?</a>.</p> <p>An empty field indicates that the current
     * configuration was not initiated by any event.</p>
     */
    inline void SetRelatedEvents(const Aws::Vector<Aws::String>& value) { m_relatedEventsHasBeenSet = true; m_relatedEvents = value; }

    /**
     * <p>A list of CloudTrail event IDs.</p> <p>A populated field indicates that the
     * current configuration was initiated by the events recorded in the CloudTrail
     * log. For more information about CloudTrail, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/what_is_cloud_trail_top_level.html">What
     * is AWS CloudTrail?</a>.</p> <p>An empty field indicates that the current
     * configuration was not initiated by any event.</p>
     */
    inline void SetRelatedEvents(Aws::Vector<Aws::String>&& value) { m_relatedEventsHasBeenSet = true; m_relatedEvents = value; }

    /**
     * <p>A list of CloudTrail event IDs.</p> <p>A populated field indicates that the
     * current configuration was initiated by the events recorded in the CloudTrail
     * log. For more information about CloudTrail, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/what_is_cloud_trail_top_level.html">What
     * is AWS CloudTrail?</a>.</p> <p>An empty field indicates that the current
     * configuration was not initiated by any event.</p>
     */
    inline ConfigurationItem& WithRelatedEvents(const Aws::Vector<Aws::String>& value) { SetRelatedEvents(value); return *this;}

    /**
     * <p>A list of CloudTrail event IDs.</p> <p>A populated field indicates that the
     * current configuration was initiated by the events recorded in the CloudTrail
     * log. For more information about CloudTrail, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/what_is_cloud_trail_top_level.html">What
     * is AWS CloudTrail?</a>.</p> <p>An empty field indicates that the current
     * configuration was not initiated by any event.</p>
     */
    inline ConfigurationItem& WithRelatedEvents(Aws::Vector<Aws::String>&& value) { SetRelatedEvents(value); return *this;}

    /**
     * <p>A list of CloudTrail event IDs.</p> <p>A populated field indicates that the
     * current configuration was initiated by the events recorded in the CloudTrail
     * log. For more information about CloudTrail, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/what_is_cloud_trail_top_level.html">What
     * is AWS CloudTrail?</a>.</p> <p>An empty field indicates that the current
     * configuration was not initiated by any event.</p>
     */
    inline ConfigurationItem& AddRelatedEvents(const Aws::String& value) { m_relatedEventsHasBeenSet = true; m_relatedEvents.push_back(value); return *this; }

    /**
     * <p>A list of CloudTrail event IDs.</p> <p>A populated field indicates that the
     * current configuration was initiated by the events recorded in the CloudTrail
     * log. For more information about CloudTrail, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/what_is_cloud_trail_top_level.html">What
     * is AWS CloudTrail?</a>.</p> <p>An empty field indicates that the current
     * configuration was not initiated by any event.</p>
     */
    inline ConfigurationItem& AddRelatedEvents(Aws::String&& value) { m_relatedEventsHasBeenSet = true; m_relatedEvents.push_back(value); return *this; }

    /**
     * <p>A list of CloudTrail event IDs.</p> <p>A populated field indicates that the
     * current configuration was initiated by the events recorded in the CloudTrail
     * log. For more information about CloudTrail, see <a
     * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/what_is_cloud_trail_top_level.html">What
     * is AWS CloudTrail?</a>.</p> <p>An empty field indicates that the current
     * configuration was not initiated by any event.</p>
     */
    inline ConfigurationItem& AddRelatedEvents(const char* value) { m_relatedEventsHasBeenSet = true; m_relatedEvents.push_back(value); return *this; }

    /**
     * <p>A list of related AWS resources.</p>
     */
    inline const Aws::Vector<Relationship>& GetRelationships() const{ return m_relationships; }

    /**
     * <p>A list of related AWS resources.</p>
     */
    inline void SetRelationships(const Aws::Vector<Relationship>& value) { m_relationshipsHasBeenSet = true; m_relationships = value; }

    /**
     * <p>A list of related AWS resources.</p>
     */
    inline void SetRelationships(Aws::Vector<Relationship>&& value) { m_relationshipsHasBeenSet = true; m_relationships = value; }

    /**
     * <p>A list of related AWS resources.</p>
     */
    inline ConfigurationItem& WithRelationships(const Aws::Vector<Relationship>& value) { SetRelationships(value); return *this;}

    /**
     * <p>A list of related AWS resources.</p>
     */
    inline ConfigurationItem& WithRelationships(Aws::Vector<Relationship>&& value) { SetRelationships(value); return *this;}

    /**
     * <p>A list of related AWS resources.</p>
     */
    inline ConfigurationItem& AddRelationships(const Relationship& value) { m_relationshipsHasBeenSet = true; m_relationships.push_back(value); return *this; }

    /**
     * <p>A list of related AWS resources.</p>
     */
    inline ConfigurationItem& AddRelationships(Relationship&& value) { m_relationshipsHasBeenSet = true; m_relationships.push_back(value); return *this; }

    /**
     * <p>The description of the resource configuration.</p>
     */
    inline const Aws::String& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The description of the resource configuration.</p>
     */
    inline void SetConfiguration(const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The description of the resource configuration.</p>
     */
    inline void SetConfiguration(Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The description of the resource configuration.</p>
     */
    inline void SetConfiguration(const char* value) { m_configurationHasBeenSet = true; m_configuration.assign(value); }

    /**
     * <p>The description of the resource configuration.</p>
     */
    inline ConfigurationItem& WithConfiguration(const Aws::String& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The description of the resource configuration.</p>
     */
    inline ConfigurationItem& WithConfiguration(Aws::String&& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The description of the resource configuration.</p>
     */
    inline ConfigurationItem& WithConfiguration(const char* value) { SetConfiguration(value); return *this;}

    /**
     * <p>Configuration attributes that AWS Config returns for certain resource types
     * to supplement the information returned for the <code>configuration</code>
     * parameter.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSupplementaryConfiguration() const{ return m_supplementaryConfiguration; }

    /**
     * <p>Configuration attributes that AWS Config returns for certain resource types
     * to supplement the information returned for the <code>configuration</code>
     * parameter.</p>
     */
    inline void SetSupplementaryConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { m_supplementaryConfigurationHasBeenSet = true; m_supplementaryConfiguration = value; }

    /**
     * <p>Configuration attributes that AWS Config returns for certain resource types
     * to supplement the information returned for the <code>configuration</code>
     * parameter.</p>
     */
    inline void SetSupplementaryConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { m_supplementaryConfigurationHasBeenSet = true; m_supplementaryConfiguration = value; }

    /**
     * <p>Configuration attributes that AWS Config returns for certain resource types
     * to supplement the information returned for the <code>configuration</code>
     * parameter.</p>
     */
    inline ConfigurationItem& WithSupplementaryConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { SetSupplementaryConfiguration(value); return *this;}

    /**
     * <p>Configuration attributes that AWS Config returns for certain resource types
     * to supplement the information returned for the <code>configuration</code>
     * parameter.</p>
     */
    inline ConfigurationItem& WithSupplementaryConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { SetSupplementaryConfiguration(value); return *this;}

    /**
     * <p>Configuration attributes that AWS Config returns for certain resource types
     * to supplement the information returned for the <code>configuration</code>
     * parameter.</p>
     */
    inline ConfigurationItem& AddSupplementaryConfiguration(const Aws::String& key, const Aws::String& value) { m_supplementaryConfigurationHasBeenSet = true; m_supplementaryConfiguration[key] = value; return *this; }

    /**
     * <p>Configuration attributes that AWS Config returns for certain resource types
     * to supplement the information returned for the <code>configuration</code>
     * parameter.</p>
     */
    inline ConfigurationItem& AddSupplementaryConfiguration(Aws::String&& key, const Aws::String& value) { m_supplementaryConfigurationHasBeenSet = true; m_supplementaryConfiguration[key] = value; return *this; }

    /**
     * <p>Configuration attributes that AWS Config returns for certain resource types
     * to supplement the information returned for the <code>configuration</code>
     * parameter.</p>
     */
    inline ConfigurationItem& AddSupplementaryConfiguration(const Aws::String& key, Aws::String&& value) { m_supplementaryConfigurationHasBeenSet = true; m_supplementaryConfiguration[key] = value; return *this; }

    /**
     * <p>Configuration attributes that AWS Config returns for certain resource types
     * to supplement the information returned for the <code>configuration</code>
     * parameter.</p>
     */
    inline ConfigurationItem& AddSupplementaryConfiguration(Aws::String&& key, Aws::String&& value) { m_supplementaryConfigurationHasBeenSet = true; m_supplementaryConfiguration[key] = value; return *this; }

    /**
     * <p>Configuration attributes that AWS Config returns for certain resource types
     * to supplement the information returned for the <code>configuration</code>
     * parameter.</p>
     */
    inline ConfigurationItem& AddSupplementaryConfiguration(const char* key, Aws::String&& value) { m_supplementaryConfigurationHasBeenSet = true; m_supplementaryConfiguration[key] = value; return *this; }

    /**
     * <p>Configuration attributes that AWS Config returns for certain resource types
     * to supplement the information returned for the <code>configuration</code>
     * parameter.</p>
     */
    inline ConfigurationItem& AddSupplementaryConfiguration(Aws::String&& key, const char* value) { m_supplementaryConfigurationHasBeenSet = true; m_supplementaryConfiguration[key] = value; return *this; }

    /**
     * <p>Configuration attributes that AWS Config returns for certain resource types
     * to supplement the information returned for the <code>configuration</code>
     * parameter.</p>
     */
    inline ConfigurationItem& AddSupplementaryConfiguration(const char* key, const char* value) { m_supplementaryConfigurationHasBeenSet = true; m_supplementaryConfiguration[key] = value; return *this; }

  private:
    Aws::String m_version;
    bool m_versionHasBeenSet;
    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;
    Aws::Utils::DateTime m_configurationItemCaptureTime;
    bool m_configurationItemCaptureTimeHasBeenSet;
    ConfigurationItemStatus m_configurationItemStatus;
    bool m_configurationItemStatusHasBeenSet;
    Aws::String m_configurationStateId;
    bool m_configurationStateIdHasBeenSet;
    Aws::String m_configurationItemMD5Hash;
    bool m_configurationItemMD5HashHasBeenSet;
    Aws::String m_arn;
    bool m_arnHasBeenSet;
    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;
    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;
    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet;
    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet;
    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;
    Aws::Utils::DateTime m_resourceCreationTime;
    bool m_resourceCreationTimeHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
    Aws::Vector<Aws::String> m_relatedEvents;
    bool m_relatedEventsHasBeenSet;
    Aws::Vector<Relationship> m_relationships;
    bool m_relationshipsHasBeenSet;
    Aws::String m_configuration;
    bool m_configurationHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_supplementaryConfiguration;
    bool m_supplementaryConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
