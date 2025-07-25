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
#include <aws/config/model/RecordingFrequency.h>
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
   * <p>The detailed configurations of a specified resource.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/BaseConfigurationItem">AWS
   * API Reference</a></p>
   */
  class BaseConfigurationItem
  {
  public:
    AWS_CONFIGSERVICE_API BaseConfigurationItem() = default;
    AWS_CONFIGSERVICE_API BaseConfigurationItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API BaseConfigurationItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version number of the resource configuration.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    BaseConfigurationItem& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 12-digit Amazon Web Services account ID associated with the resource.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    BaseConfigurationItem& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the recording of configuration changes was initiated for the
     * resource.</p>
     */
    inline const Aws::Utils::DateTime& GetConfigurationItemCaptureTime() const { return m_configurationItemCaptureTime; }
    inline bool ConfigurationItemCaptureTimeHasBeenSet() const { return m_configurationItemCaptureTimeHasBeenSet; }
    template<typename ConfigurationItemCaptureTimeT = Aws::Utils::DateTime>
    void SetConfigurationItemCaptureTime(ConfigurationItemCaptureTimeT&& value) { m_configurationItemCaptureTimeHasBeenSet = true; m_configurationItemCaptureTime = std::forward<ConfigurationItemCaptureTimeT>(value); }
    template<typename ConfigurationItemCaptureTimeT = Aws::Utils::DateTime>
    BaseConfigurationItem& WithConfigurationItemCaptureTime(ConfigurationItemCaptureTimeT&& value) { SetConfigurationItemCaptureTime(std::forward<ConfigurationItemCaptureTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration item status. Valid values include:</p> <ul> <li> <p>OK –
     * The resource configuration has been updated.</p> </li> <li>
     * <p>ResourceDiscovered – The resource was newly discovered.</p> </li> <li>
     * <p>ResourceNotRecorded – The resource was discovered, but its configuration was
     * not recorded since the recorder doesn't record resources of this type.</p> </li>
     * <li> <p>ResourceDeleted – The resource was deleted</p> </li> <li>
     * <p>ResourceDeletedNotRecorded – The resource was deleted, but its configuration
     * was not recorded since the recorder doesn't record resources of this type.</p>
     * </li> </ul>
     */
    inline ConfigurationItemStatus GetConfigurationItemStatus() const { return m_configurationItemStatus; }
    inline bool ConfigurationItemStatusHasBeenSet() const { return m_configurationItemStatusHasBeenSet; }
    inline void SetConfigurationItemStatus(ConfigurationItemStatus value) { m_configurationItemStatusHasBeenSet = true; m_configurationItemStatus = value; }
    inline BaseConfigurationItem& WithConfigurationItemStatus(ConfigurationItemStatus value) { SetConfigurationItemStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier that indicates the ordering of the configuration items of a
     * resource.</p>
     */
    inline const Aws::String& GetConfigurationStateId() const { return m_configurationStateId; }
    inline bool ConfigurationStateIdHasBeenSet() const { return m_configurationStateIdHasBeenSet; }
    template<typename ConfigurationStateIdT = Aws::String>
    void SetConfigurationStateId(ConfigurationStateIdT&& value) { m_configurationStateIdHasBeenSet = true; m_configurationStateId = std::forward<ConfigurationStateIdT>(value); }
    template<typename ConfigurationStateIdT = Aws::String>
    BaseConfigurationItem& WithConfigurationStateId(ConfigurationStateIdT&& value) { SetConfigurationStateId(std::forward<ConfigurationStateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    BaseConfigurationItem& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline BaseConfigurationItem& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource (for example., sg-xxxxxx).</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    BaseConfigurationItem& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom name of the resource, if available.</p>
     */
    inline const Aws::String& GetResourceName() const { return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    template<typename ResourceNameT = Aws::String>
    void SetResourceName(ResourceNameT&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::forward<ResourceNameT>(value); }
    template<typename ResourceNameT = Aws::String>
    BaseConfigurationItem& WithResourceName(ResourceNameT&& value) { SetResourceName(std::forward<ResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region where the resource resides.</p>
     */
    inline const Aws::String& GetAwsRegion() const { return m_awsRegion; }
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
    template<typename AwsRegionT = Aws::String>
    void SetAwsRegion(AwsRegionT&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::forward<AwsRegionT>(value); }
    template<typename AwsRegionT = Aws::String>
    BaseConfigurationItem& WithAwsRegion(AwsRegionT&& value) { SetAwsRegion(std::forward<AwsRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone associated with the resource.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    BaseConfigurationItem& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp when the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetResourceCreationTime() const { return m_resourceCreationTime; }
    inline bool ResourceCreationTimeHasBeenSet() const { return m_resourceCreationTimeHasBeenSet; }
    template<typename ResourceCreationTimeT = Aws::Utils::DateTime>
    void SetResourceCreationTime(ResourceCreationTimeT&& value) { m_resourceCreationTimeHasBeenSet = true; m_resourceCreationTime = std::forward<ResourceCreationTimeT>(value); }
    template<typename ResourceCreationTimeT = Aws::Utils::DateTime>
    BaseConfigurationItem& WithResourceCreationTime(ResourceCreationTimeT&& value) { SetResourceCreationTime(std::forward<ResourceCreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON-encoded string that contains the contents for the resource
     * configuration. This string needs to be deserialized using
     * <code>json.loads()</code> before you can access the contents. </p>
     */
    inline const Aws::String& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = Aws::String>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = Aws::String>
    BaseConfigurationItem& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string to string map that contains additional contents for the resource
     * configuration.Config returns this field for certain resource types to supplement
     * the information returned for the <code>configuration</code> field.</p> <p>This
     * string needs to be deserialized using <code>json.loads()</code> before you can
     * access the contents.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSupplementaryConfiguration() const { return m_supplementaryConfiguration; }
    inline bool SupplementaryConfigurationHasBeenSet() const { return m_supplementaryConfigurationHasBeenSet; }
    template<typename SupplementaryConfigurationT = Aws::Map<Aws::String, Aws::String>>
    void SetSupplementaryConfiguration(SupplementaryConfigurationT&& value) { m_supplementaryConfigurationHasBeenSet = true; m_supplementaryConfiguration = std::forward<SupplementaryConfigurationT>(value); }
    template<typename SupplementaryConfigurationT = Aws::Map<Aws::String, Aws::String>>
    BaseConfigurationItem& WithSupplementaryConfiguration(SupplementaryConfigurationT&& value) { SetSupplementaryConfiguration(std::forward<SupplementaryConfigurationT>(value)); return *this;}
    template<typename SupplementaryConfigurationKeyT = Aws::String, typename SupplementaryConfigurationValueT = Aws::String>
    BaseConfigurationItem& AddSupplementaryConfiguration(SupplementaryConfigurationKeyT&& key, SupplementaryConfigurationValueT&& value) {
      m_supplementaryConfigurationHasBeenSet = true; m_supplementaryConfiguration.emplace(std::forward<SupplementaryConfigurationKeyT>(key), std::forward<SupplementaryConfigurationValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The recording frequency that Config uses to record configuration changes for
     * the resource.</p>  <p>This field only appears in the API response when
     * <code>DAILY</code> recording is enabled for a resource type. If this field is
     * not present, <code>CONTINUOUS</code> recording is enabled for that resource
     * type. For more information on daily recording and continuous recording, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/select-resources.html#select-resources-recording-frequency">Recording
     * Frequency</a> in the <i>Config Developer Guide</i>.</p> 
     */
    inline RecordingFrequency GetRecordingFrequency() const { return m_recordingFrequency; }
    inline bool RecordingFrequencyHasBeenSet() const { return m_recordingFrequencyHasBeenSet; }
    inline void SetRecordingFrequency(RecordingFrequency value) { m_recordingFrequencyHasBeenSet = true; m_recordingFrequency = value; }
    inline BaseConfigurationItem& WithRecordingFrequency(RecordingFrequency value) { SetRecordingFrequency(value); return *this;}
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
    inline const Aws::Utils::DateTime& GetConfigurationItemDeliveryTime() const { return m_configurationItemDeliveryTime; }
    inline bool ConfigurationItemDeliveryTimeHasBeenSet() const { return m_configurationItemDeliveryTimeHasBeenSet; }
    template<typename ConfigurationItemDeliveryTimeT = Aws::Utils::DateTime>
    void SetConfigurationItemDeliveryTime(ConfigurationItemDeliveryTimeT&& value) { m_configurationItemDeliveryTimeHasBeenSet = true; m_configurationItemDeliveryTime = std::forward<ConfigurationItemDeliveryTimeT>(value); }
    template<typename ConfigurationItemDeliveryTimeT = Aws::Utils::DateTime>
    BaseConfigurationItem& WithConfigurationItemDeliveryTime(ConfigurationItemDeliveryTimeT&& value) { SetConfigurationItemDeliveryTime(std::forward<ConfigurationItemDeliveryTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Utils::DateTime m_configurationItemCaptureTime{};
    bool m_configurationItemCaptureTimeHasBeenSet = false;

    ConfigurationItemStatus m_configurationItemStatus{ConfigurationItemStatus::NOT_SET};
    bool m_configurationItemStatusHasBeenSet = false;

    Aws::String m_configurationStateId;
    bool m_configurationStateIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::Utils::DateTime m_resourceCreationTime{};
    bool m_resourceCreationTimeHasBeenSet = false;

    Aws::String m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_supplementaryConfiguration;
    bool m_supplementaryConfigurationHasBeenSet = false;

    RecordingFrequency m_recordingFrequency{RecordingFrequency::NOT_SET};
    bool m_recordingFrequencyHasBeenSet = false;

    Aws::Utils::DateTime m_configurationItemDeliveryTime{};
    bool m_configurationItemDeliveryTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
