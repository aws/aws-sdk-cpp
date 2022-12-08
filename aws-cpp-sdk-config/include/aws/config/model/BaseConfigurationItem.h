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
   * <p>The detailed configuration of a specified resource.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/BaseConfigurationItem">AWS
   * API Reference</a></p>
   */
  class BaseConfigurationItem
  {
  public:
    AWS_CONFIGSERVICE_API BaseConfigurationItem();
    AWS_CONFIGSERVICE_API BaseConfigurationItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API BaseConfigurationItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The version number of the resource configuration.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version number of the resource configuration.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version number of the resource configuration.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version number of the resource configuration.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version number of the resource configuration.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version number of the resource configuration.</p>
     */
    inline BaseConfigurationItem& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version number of the resource configuration.</p>
     */
    inline BaseConfigurationItem& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the resource configuration.</p>
     */
    inline BaseConfigurationItem& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The 12-digit Amazon Web Services account ID associated with the resource.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The 12-digit Amazon Web Services account ID associated with the resource.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The 12-digit Amazon Web Services account ID associated with the resource.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The 12-digit Amazon Web Services account ID associated with the resource.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The 12-digit Amazon Web Services account ID associated with the resource.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The 12-digit Amazon Web Services account ID associated with the resource.</p>
     */
    inline BaseConfigurationItem& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The 12-digit Amazon Web Services account ID associated with the resource.</p>
     */
    inline BaseConfigurationItem& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The 12-digit Amazon Web Services account ID associated with the resource.</p>
     */
    inline BaseConfigurationItem& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The time when the configuration recording was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetConfigurationItemCaptureTime() const{ return m_configurationItemCaptureTime; }

    /**
     * <p>The time when the configuration recording was initiated.</p>
     */
    inline bool ConfigurationItemCaptureTimeHasBeenSet() const { return m_configurationItemCaptureTimeHasBeenSet; }

    /**
     * <p>The time when the configuration recording was initiated.</p>
     */
    inline void SetConfigurationItemCaptureTime(const Aws::Utils::DateTime& value) { m_configurationItemCaptureTimeHasBeenSet = true; m_configurationItemCaptureTime = value; }

    /**
     * <p>The time when the configuration recording was initiated.</p>
     */
    inline void SetConfigurationItemCaptureTime(Aws::Utils::DateTime&& value) { m_configurationItemCaptureTimeHasBeenSet = true; m_configurationItemCaptureTime = std::move(value); }

    /**
     * <p>The time when the configuration recording was initiated.</p>
     */
    inline BaseConfigurationItem& WithConfigurationItemCaptureTime(const Aws::Utils::DateTime& value) { SetConfigurationItemCaptureTime(value); return *this;}

    /**
     * <p>The time when the configuration recording was initiated.</p>
     */
    inline BaseConfigurationItem& WithConfigurationItemCaptureTime(Aws::Utils::DateTime&& value) { SetConfigurationItemCaptureTime(std::move(value)); return *this;}


    /**
     * <p>The configuration item status. The valid values are:</p> <ul> <li> <p>OK –
     * The resource configuration has been updated</p> </li> <li> <p>ResourceDiscovered
     * – The resource was newly discovered</p> </li> <li> <p>ResourceNotRecorded – The
     * resource was discovered but its configuration was not recorded since the
     * recorder excludes the recording of resources of this type</p> </li> <li>
     * <p>ResourceDeleted – The resource was deleted</p> </li> <li>
     * <p>ResourceDeletedNotRecorded – The resource was deleted but its configuration
     * was not recorded since the recorder excludes the recording of resources of this
     * type</p> </li> </ul>  <p>The CIs do not incur any cost.</p> 
     */
    inline const ConfigurationItemStatus& GetConfigurationItemStatus() const{ return m_configurationItemStatus; }

    /**
     * <p>The configuration item status. The valid values are:</p> <ul> <li> <p>OK –
     * The resource configuration has been updated</p> </li> <li> <p>ResourceDiscovered
     * – The resource was newly discovered</p> </li> <li> <p>ResourceNotRecorded – The
     * resource was discovered but its configuration was not recorded since the
     * recorder excludes the recording of resources of this type</p> </li> <li>
     * <p>ResourceDeleted – The resource was deleted</p> </li> <li>
     * <p>ResourceDeletedNotRecorded – The resource was deleted but its configuration
     * was not recorded since the recorder excludes the recording of resources of this
     * type</p> </li> </ul>  <p>The CIs do not incur any cost.</p> 
     */
    inline bool ConfigurationItemStatusHasBeenSet() const { return m_configurationItemStatusHasBeenSet; }

    /**
     * <p>The configuration item status. The valid values are:</p> <ul> <li> <p>OK –
     * The resource configuration has been updated</p> </li> <li> <p>ResourceDiscovered
     * – The resource was newly discovered</p> </li> <li> <p>ResourceNotRecorded – The
     * resource was discovered but its configuration was not recorded since the
     * recorder excludes the recording of resources of this type</p> </li> <li>
     * <p>ResourceDeleted – The resource was deleted</p> </li> <li>
     * <p>ResourceDeletedNotRecorded – The resource was deleted but its configuration
     * was not recorded since the recorder excludes the recording of resources of this
     * type</p> </li> </ul>  <p>The CIs do not incur any cost.</p> 
     */
    inline void SetConfigurationItemStatus(const ConfigurationItemStatus& value) { m_configurationItemStatusHasBeenSet = true; m_configurationItemStatus = value; }

    /**
     * <p>The configuration item status. The valid values are:</p> <ul> <li> <p>OK –
     * The resource configuration has been updated</p> </li> <li> <p>ResourceDiscovered
     * – The resource was newly discovered</p> </li> <li> <p>ResourceNotRecorded – The
     * resource was discovered but its configuration was not recorded since the
     * recorder excludes the recording of resources of this type</p> </li> <li>
     * <p>ResourceDeleted – The resource was deleted</p> </li> <li>
     * <p>ResourceDeletedNotRecorded – The resource was deleted but its configuration
     * was not recorded since the recorder excludes the recording of resources of this
     * type</p> </li> </ul>  <p>The CIs do not incur any cost.</p> 
     */
    inline void SetConfigurationItemStatus(ConfigurationItemStatus&& value) { m_configurationItemStatusHasBeenSet = true; m_configurationItemStatus = std::move(value); }

    /**
     * <p>The configuration item status. The valid values are:</p> <ul> <li> <p>OK –
     * The resource configuration has been updated</p> </li> <li> <p>ResourceDiscovered
     * – The resource was newly discovered</p> </li> <li> <p>ResourceNotRecorded – The
     * resource was discovered but its configuration was not recorded since the
     * recorder excludes the recording of resources of this type</p> </li> <li>
     * <p>ResourceDeleted – The resource was deleted</p> </li> <li>
     * <p>ResourceDeletedNotRecorded – The resource was deleted but its configuration
     * was not recorded since the recorder excludes the recording of resources of this
     * type</p> </li> </ul>  <p>The CIs do not incur any cost.</p> 
     */
    inline BaseConfigurationItem& WithConfigurationItemStatus(const ConfigurationItemStatus& value) { SetConfigurationItemStatus(value); return *this;}

    /**
     * <p>The configuration item status. The valid values are:</p> <ul> <li> <p>OK –
     * The resource configuration has been updated</p> </li> <li> <p>ResourceDiscovered
     * – The resource was newly discovered</p> </li> <li> <p>ResourceNotRecorded – The
     * resource was discovered but its configuration was not recorded since the
     * recorder excludes the recording of resources of this type</p> </li> <li>
     * <p>ResourceDeleted – The resource was deleted</p> </li> <li>
     * <p>ResourceDeletedNotRecorded – The resource was deleted but its configuration
     * was not recorded since the recorder excludes the recording of resources of this
     * type</p> </li> </ul>  <p>The CIs do not incur any cost.</p> 
     */
    inline BaseConfigurationItem& WithConfigurationItemStatus(ConfigurationItemStatus&& value) { SetConfigurationItemStatus(std::move(value)); return *this;}


    /**
     * <p>An identifier that indicates the ordering of the configuration items of a
     * resource.</p>
     */
    inline const Aws::String& GetConfigurationStateId() const{ return m_configurationStateId; }

    /**
     * <p>An identifier that indicates the ordering of the configuration items of a
     * resource.</p>
     */
    inline bool ConfigurationStateIdHasBeenSet() const { return m_configurationStateIdHasBeenSet; }

    /**
     * <p>An identifier that indicates the ordering of the configuration items of a
     * resource.</p>
     */
    inline void SetConfigurationStateId(const Aws::String& value) { m_configurationStateIdHasBeenSet = true; m_configurationStateId = value; }

    /**
     * <p>An identifier that indicates the ordering of the configuration items of a
     * resource.</p>
     */
    inline void SetConfigurationStateId(Aws::String&& value) { m_configurationStateIdHasBeenSet = true; m_configurationStateId = std::move(value); }

    /**
     * <p>An identifier that indicates the ordering of the configuration items of a
     * resource.</p>
     */
    inline void SetConfigurationStateId(const char* value) { m_configurationStateIdHasBeenSet = true; m_configurationStateId.assign(value); }

    /**
     * <p>An identifier that indicates the ordering of the configuration items of a
     * resource.</p>
     */
    inline BaseConfigurationItem& WithConfigurationStateId(const Aws::String& value) { SetConfigurationStateId(value); return *this;}

    /**
     * <p>An identifier that indicates the ordering of the configuration items of a
     * resource.</p>
     */
    inline BaseConfigurationItem& WithConfigurationStateId(Aws::String&& value) { SetConfigurationStateId(std::move(value)); return *this;}

    /**
     * <p>An identifier that indicates the ordering of the configuration items of a
     * resource.</p>
     */
    inline BaseConfigurationItem& WithConfigurationStateId(const char* value) { SetConfigurationStateId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline BaseConfigurationItem& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline BaseConfigurationItem& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline BaseConfigurationItem& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline BaseConfigurationItem& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline BaseConfigurationItem& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The ID of the resource (for example., sg-xxxxxx).</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the resource (for example., sg-xxxxxx).</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the resource (for example., sg-xxxxxx).</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the resource (for example., sg-xxxxxx).</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the resource (for example., sg-xxxxxx).</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the resource (for example., sg-xxxxxx).</p>
     */
    inline BaseConfigurationItem& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the resource (for example., sg-xxxxxx).</p>
     */
    inline BaseConfigurationItem& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource (for example., sg-xxxxxx).</p>
     */
    inline BaseConfigurationItem& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The custom name of the resource, if available.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The custom name of the resource, if available.</p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>The custom name of the resource, if available.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The custom name of the resource, if available.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>The custom name of the resource, if available.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The custom name of the resource, if available.</p>
     */
    inline BaseConfigurationItem& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The custom name of the resource, if available.</p>
     */
    inline BaseConfigurationItem& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The custom name of the resource, if available.</p>
     */
    inline BaseConfigurationItem& WithResourceName(const char* value) { SetResourceName(value); return *this;}


    /**
     * <p>The region where the resource resides.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }

    /**
     * <p>The region where the resource resides.</p>
     */
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }

    /**
     * <p>The region where the resource resides.</p>
     */
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }

    /**
     * <p>The region where the resource resides.</p>
     */
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }

    /**
     * <p>The region where the resource resides.</p>
     */
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }

    /**
     * <p>The region where the resource resides.</p>
     */
    inline BaseConfigurationItem& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}

    /**
     * <p>The region where the resource resides.</p>
     */
    inline BaseConfigurationItem& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}

    /**
     * <p>The region where the resource resides.</p>
     */
    inline BaseConfigurationItem& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}


    /**
     * <p>The Availability Zone associated with the resource.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone associated with the resource.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone associated with the resource.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone associated with the resource.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone associated with the resource.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone associated with the resource.</p>
     */
    inline BaseConfigurationItem& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone associated with the resource.</p>
     */
    inline BaseConfigurationItem& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone associated with the resource.</p>
     */
    inline BaseConfigurationItem& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The time stamp when the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetResourceCreationTime() const{ return m_resourceCreationTime; }

    /**
     * <p>The time stamp when the resource was created.</p>
     */
    inline bool ResourceCreationTimeHasBeenSet() const { return m_resourceCreationTimeHasBeenSet; }

    /**
     * <p>The time stamp when the resource was created.</p>
     */
    inline void SetResourceCreationTime(const Aws::Utils::DateTime& value) { m_resourceCreationTimeHasBeenSet = true; m_resourceCreationTime = value; }

    /**
     * <p>The time stamp when the resource was created.</p>
     */
    inline void SetResourceCreationTime(Aws::Utils::DateTime&& value) { m_resourceCreationTimeHasBeenSet = true; m_resourceCreationTime = std::move(value); }

    /**
     * <p>The time stamp when the resource was created.</p>
     */
    inline BaseConfigurationItem& WithResourceCreationTime(const Aws::Utils::DateTime& value) { SetResourceCreationTime(value); return *this;}

    /**
     * <p>The time stamp when the resource was created.</p>
     */
    inline BaseConfigurationItem& WithResourceCreationTime(Aws::Utils::DateTime&& value) { SetResourceCreationTime(std::move(value)); return *this;}


    /**
     * <p>The description of the resource configuration.</p>
     */
    inline const Aws::String& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The description of the resource configuration.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The description of the resource configuration.</p>
     */
    inline void SetConfiguration(const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The description of the resource configuration.</p>
     */
    inline void SetConfiguration(Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The description of the resource configuration.</p>
     */
    inline void SetConfiguration(const char* value) { m_configurationHasBeenSet = true; m_configuration.assign(value); }

    /**
     * <p>The description of the resource configuration.</p>
     */
    inline BaseConfigurationItem& WithConfiguration(const Aws::String& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The description of the resource configuration.</p>
     */
    inline BaseConfigurationItem& WithConfiguration(Aws::String&& value) { SetConfiguration(std::move(value)); return *this;}

    /**
     * <p>The description of the resource configuration.</p>
     */
    inline BaseConfigurationItem& WithConfiguration(const char* value) { SetConfiguration(value); return *this;}


    /**
     * <p>Configuration attributes that Config returns for certain resource types to
     * supplement the information returned for the configuration parameter.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSupplementaryConfiguration() const{ return m_supplementaryConfiguration; }

    /**
     * <p>Configuration attributes that Config returns for certain resource types to
     * supplement the information returned for the configuration parameter.</p>
     */
    inline bool SupplementaryConfigurationHasBeenSet() const { return m_supplementaryConfigurationHasBeenSet; }

    /**
     * <p>Configuration attributes that Config returns for certain resource types to
     * supplement the information returned for the configuration parameter.</p>
     */
    inline void SetSupplementaryConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { m_supplementaryConfigurationHasBeenSet = true; m_supplementaryConfiguration = value; }

    /**
     * <p>Configuration attributes that Config returns for certain resource types to
     * supplement the information returned for the configuration parameter.</p>
     */
    inline void SetSupplementaryConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { m_supplementaryConfigurationHasBeenSet = true; m_supplementaryConfiguration = std::move(value); }

    /**
     * <p>Configuration attributes that Config returns for certain resource types to
     * supplement the information returned for the configuration parameter.</p>
     */
    inline BaseConfigurationItem& WithSupplementaryConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { SetSupplementaryConfiguration(value); return *this;}

    /**
     * <p>Configuration attributes that Config returns for certain resource types to
     * supplement the information returned for the configuration parameter.</p>
     */
    inline BaseConfigurationItem& WithSupplementaryConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { SetSupplementaryConfiguration(std::move(value)); return *this;}

    /**
     * <p>Configuration attributes that Config returns for certain resource types to
     * supplement the information returned for the configuration parameter.</p>
     */
    inline BaseConfigurationItem& AddSupplementaryConfiguration(const Aws::String& key, const Aws::String& value) { m_supplementaryConfigurationHasBeenSet = true; m_supplementaryConfiguration.emplace(key, value); return *this; }

    /**
     * <p>Configuration attributes that Config returns for certain resource types to
     * supplement the information returned for the configuration parameter.</p>
     */
    inline BaseConfigurationItem& AddSupplementaryConfiguration(Aws::String&& key, const Aws::String& value) { m_supplementaryConfigurationHasBeenSet = true; m_supplementaryConfiguration.emplace(std::move(key), value); return *this; }

    /**
     * <p>Configuration attributes that Config returns for certain resource types to
     * supplement the information returned for the configuration parameter.</p>
     */
    inline BaseConfigurationItem& AddSupplementaryConfiguration(const Aws::String& key, Aws::String&& value) { m_supplementaryConfigurationHasBeenSet = true; m_supplementaryConfiguration.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Configuration attributes that Config returns for certain resource types to
     * supplement the information returned for the configuration parameter.</p>
     */
    inline BaseConfigurationItem& AddSupplementaryConfiguration(Aws::String&& key, Aws::String&& value) { m_supplementaryConfigurationHasBeenSet = true; m_supplementaryConfiguration.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Configuration attributes that Config returns for certain resource types to
     * supplement the information returned for the configuration parameter.</p>
     */
    inline BaseConfigurationItem& AddSupplementaryConfiguration(const char* key, Aws::String&& value) { m_supplementaryConfigurationHasBeenSet = true; m_supplementaryConfiguration.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Configuration attributes that Config returns for certain resource types to
     * supplement the information returned for the configuration parameter.</p>
     */
    inline BaseConfigurationItem& AddSupplementaryConfiguration(Aws::String&& key, const char* value) { m_supplementaryConfigurationHasBeenSet = true; m_supplementaryConfiguration.emplace(std::move(key), value); return *this; }

    /**
     * <p>Configuration attributes that Config returns for certain resource types to
     * supplement the information returned for the configuration parameter.</p>
     */
    inline BaseConfigurationItem& AddSupplementaryConfiguration(const char* key, const char* value) { m_supplementaryConfigurationHasBeenSet = true; m_supplementaryConfiguration.emplace(key, value); return *this; }

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

    Aws::String m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_supplementaryConfiguration;
    bool m_supplementaryConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
