/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/finspace/FinspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/KxVolumeType.h>
#include <aws/finspace/model/KxNAS1Configuration.h>
#include <aws/finspace/model/KxAzMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace finspace
{
namespace Model
{

  /**
   */
  class CreateKxVolumeRequest : public FinspaceRequest
  {
  public:
    AWS_FINSPACE_API CreateKxVolumeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateKxVolume"; }

    AWS_FINSPACE_API Aws::String SerializePayload() const override;


    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline CreateKxVolumeRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline CreateKxVolumeRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline CreateKxVolumeRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>A unique identifier for the kdb environment, whose clusters can attach to the
     * volume. </p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>A unique identifier for the kdb environment, whose clusters can attach to the
     * volume. </p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>A unique identifier for the kdb environment, whose clusters can attach to the
     * volume. </p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>A unique identifier for the kdb environment, whose clusters can attach to the
     * volume. </p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>A unique identifier for the kdb environment, whose clusters can attach to the
     * volume. </p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>A unique identifier for the kdb environment, whose clusters can attach to the
     * volume. </p>
     */
    inline CreateKxVolumeRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>A unique identifier for the kdb environment, whose clusters can attach to the
     * volume. </p>
     */
    inline CreateKxVolumeRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the kdb environment, whose clusters can attach to the
     * volume. </p>
     */
    inline CreateKxVolumeRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p> The type of file system volume. Currently, FinSpace only supports
     * <code>NAS_1</code> volume type. When you select <code>NAS_1</code> volume type,
     * you must also provide <code>nas1Configuration</code>. </p>
     */
    inline const KxVolumeType& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p> The type of file system volume. Currently, FinSpace only supports
     * <code>NAS_1</code> volume type. When you select <code>NAS_1</code> volume type,
     * you must also provide <code>nas1Configuration</code>. </p>
     */
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }

    /**
     * <p> The type of file system volume. Currently, FinSpace only supports
     * <code>NAS_1</code> volume type. When you select <code>NAS_1</code> volume type,
     * you must also provide <code>nas1Configuration</code>. </p>
     */
    inline void SetVolumeType(const KxVolumeType& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p> The type of file system volume. Currently, FinSpace only supports
     * <code>NAS_1</code> volume type. When you select <code>NAS_1</code> volume type,
     * you must also provide <code>nas1Configuration</code>. </p>
     */
    inline void SetVolumeType(KxVolumeType&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }

    /**
     * <p> The type of file system volume. Currently, FinSpace only supports
     * <code>NAS_1</code> volume type. When you select <code>NAS_1</code> volume type,
     * you must also provide <code>nas1Configuration</code>. </p>
     */
    inline CreateKxVolumeRequest& WithVolumeType(const KxVolumeType& value) { SetVolumeType(value); return *this;}

    /**
     * <p> The type of file system volume. Currently, FinSpace only supports
     * <code>NAS_1</code> volume type. When you select <code>NAS_1</code> volume type,
     * you must also provide <code>nas1Configuration</code>. </p>
     */
    inline CreateKxVolumeRequest& WithVolumeType(KxVolumeType&& value) { SetVolumeType(std::move(value)); return *this;}


    /**
     * <p>A unique identifier for the volume.</p>
     */
    inline const Aws::String& GetVolumeName() const{ return m_volumeName; }

    /**
     * <p>A unique identifier for the volume.</p>
     */
    inline bool VolumeNameHasBeenSet() const { return m_volumeNameHasBeenSet; }

    /**
     * <p>A unique identifier for the volume.</p>
     */
    inline void SetVolumeName(const Aws::String& value) { m_volumeNameHasBeenSet = true; m_volumeName = value; }

    /**
     * <p>A unique identifier for the volume.</p>
     */
    inline void SetVolumeName(Aws::String&& value) { m_volumeNameHasBeenSet = true; m_volumeName = std::move(value); }

    /**
     * <p>A unique identifier for the volume.</p>
     */
    inline void SetVolumeName(const char* value) { m_volumeNameHasBeenSet = true; m_volumeName.assign(value); }

    /**
     * <p>A unique identifier for the volume.</p>
     */
    inline CreateKxVolumeRequest& WithVolumeName(const Aws::String& value) { SetVolumeName(value); return *this;}

    /**
     * <p>A unique identifier for the volume.</p>
     */
    inline CreateKxVolumeRequest& WithVolumeName(Aws::String&& value) { SetVolumeName(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the volume.</p>
     */
    inline CreateKxVolumeRequest& WithVolumeName(const char* value) { SetVolumeName(value); return *this;}


    /**
     * <p> A description of the volume. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> A description of the volume. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> A description of the volume. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> A description of the volume. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> A description of the volume. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> A description of the volume. </p>
     */
    inline CreateKxVolumeRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A description of the volume. </p>
     */
    inline CreateKxVolumeRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A description of the volume. </p>
     */
    inline CreateKxVolumeRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> Specifies the configuration for the Network attached storage (NAS_1) file
     * system volume. This parameter is required when you choose
     * <code>volumeType</code> as <i>NAS_1</i>.</p>
     */
    inline const KxNAS1Configuration& GetNas1Configuration() const{ return m_nas1Configuration; }

    /**
     * <p> Specifies the configuration for the Network attached storage (NAS_1) file
     * system volume. This parameter is required when you choose
     * <code>volumeType</code> as <i>NAS_1</i>.</p>
     */
    inline bool Nas1ConfigurationHasBeenSet() const { return m_nas1ConfigurationHasBeenSet; }

    /**
     * <p> Specifies the configuration for the Network attached storage (NAS_1) file
     * system volume. This parameter is required when you choose
     * <code>volumeType</code> as <i>NAS_1</i>.</p>
     */
    inline void SetNas1Configuration(const KxNAS1Configuration& value) { m_nas1ConfigurationHasBeenSet = true; m_nas1Configuration = value; }

    /**
     * <p> Specifies the configuration for the Network attached storage (NAS_1) file
     * system volume. This parameter is required when you choose
     * <code>volumeType</code> as <i>NAS_1</i>.</p>
     */
    inline void SetNas1Configuration(KxNAS1Configuration&& value) { m_nas1ConfigurationHasBeenSet = true; m_nas1Configuration = std::move(value); }

    /**
     * <p> Specifies the configuration for the Network attached storage (NAS_1) file
     * system volume. This parameter is required when you choose
     * <code>volumeType</code> as <i>NAS_1</i>.</p>
     */
    inline CreateKxVolumeRequest& WithNas1Configuration(const KxNAS1Configuration& value) { SetNas1Configuration(value); return *this;}

    /**
     * <p> Specifies the configuration for the Network attached storage (NAS_1) file
     * system volume. This parameter is required when you choose
     * <code>volumeType</code> as <i>NAS_1</i>.</p>
     */
    inline CreateKxVolumeRequest& WithNas1Configuration(KxNAS1Configuration&& value) { SetNas1Configuration(std::move(value)); return *this;}


    /**
     * <p>The number of availability zones you want to assign per cluster. Currently,
     * FinSpace only support <code>SINGLE</code> for volumes.</p>
     */
    inline const KxAzMode& GetAzMode() const{ return m_azMode; }

    /**
     * <p>The number of availability zones you want to assign per cluster. Currently,
     * FinSpace only support <code>SINGLE</code> for volumes.</p>
     */
    inline bool AzModeHasBeenSet() const { return m_azModeHasBeenSet; }

    /**
     * <p>The number of availability zones you want to assign per cluster. Currently,
     * FinSpace only support <code>SINGLE</code> for volumes.</p>
     */
    inline void SetAzMode(const KxAzMode& value) { m_azModeHasBeenSet = true; m_azMode = value; }

    /**
     * <p>The number of availability zones you want to assign per cluster. Currently,
     * FinSpace only support <code>SINGLE</code> for volumes.</p>
     */
    inline void SetAzMode(KxAzMode&& value) { m_azModeHasBeenSet = true; m_azMode = std::move(value); }

    /**
     * <p>The number of availability zones you want to assign per cluster. Currently,
     * FinSpace only support <code>SINGLE</code> for volumes.</p>
     */
    inline CreateKxVolumeRequest& WithAzMode(const KxAzMode& value) { SetAzMode(value); return *this;}

    /**
     * <p>The number of availability zones you want to assign per cluster. Currently,
     * FinSpace only support <code>SINGLE</code> for volumes.</p>
     */
    inline CreateKxVolumeRequest& WithAzMode(KxAzMode&& value) { SetAzMode(std::move(value)); return *this;}


    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZoneIds() const{ return m_availabilityZoneIds; }

    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline bool AvailabilityZoneIdsHasBeenSet() const { return m_availabilityZoneIdsHasBeenSet; }

    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline void SetAvailabilityZoneIds(const Aws::Vector<Aws::String>& value) { m_availabilityZoneIdsHasBeenSet = true; m_availabilityZoneIds = value; }

    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline void SetAvailabilityZoneIds(Aws::Vector<Aws::String>&& value) { m_availabilityZoneIdsHasBeenSet = true; m_availabilityZoneIds = std::move(value); }

    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline CreateKxVolumeRequest& WithAvailabilityZoneIds(const Aws::Vector<Aws::String>& value) { SetAvailabilityZoneIds(value); return *this;}

    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline CreateKxVolumeRequest& WithAvailabilityZoneIds(Aws::Vector<Aws::String>&& value) { SetAvailabilityZoneIds(std::move(value)); return *this;}

    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline CreateKxVolumeRequest& AddAvailabilityZoneIds(const Aws::String& value) { m_availabilityZoneIdsHasBeenSet = true; m_availabilityZoneIds.push_back(value); return *this; }

    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline CreateKxVolumeRequest& AddAvailabilityZoneIds(Aws::String&& value) { m_availabilityZoneIdsHasBeenSet = true; m_availabilityZoneIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline CreateKxVolumeRequest& AddAvailabilityZoneIds(const char* value) { m_availabilityZoneIdsHasBeenSet = true; m_availabilityZoneIds.push_back(value); return *this; }


    /**
     * <p> A list of key-value pairs to label the volume. You can add up to 50 tags to
     * a volume. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> A list of key-value pairs to label the volume. You can add up to 50 tags to
     * a volume. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> A list of key-value pairs to label the volume. You can add up to 50 tags to
     * a volume. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> A list of key-value pairs to label the volume. You can add up to 50 tags to
     * a volume. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> A list of key-value pairs to label the volume. You can add up to 50 tags to
     * a volume. </p>
     */
    inline CreateKxVolumeRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> A list of key-value pairs to label the volume. You can add up to 50 tags to
     * a volume. </p>
     */
    inline CreateKxVolumeRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> A list of key-value pairs to label the volume. You can add up to 50 tags to
     * a volume. </p>
     */
    inline CreateKxVolumeRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p> A list of key-value pairs to label the volume. You can add up to 50 tags to
     * a volume. </p>
     */
    inline CreateKxVolumeRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> A list of key-value pairs to label the volume. You can add up to 50 tags to
     * a volume. </p>
     */
    inline CreateKxVolumeRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A list of key-value pairs to label the volume. You can add up to 50 tags to
     * a volume. </p>
     */
    inline CreateKxVolumeRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> A list of key-value pairs to label the volume. You can add up to 50 tags to
     * a volume. </p>
     */
    inline CreateKxVolumeRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A list of key-value pairs to label the volume. You can add up to 50 tags to
     * a volume. </p>
     */
    inline CreateKxVolumeRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> A list of key-value pairs to label the volume. You can add up to 50 tags to
     * a volume. </p>
     */
    inline CreateKxVolumeRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    KxVolumeType m_volumeType;
    bool m_volumeTypeHasBeenSet = false;

    Aws::String m_volumeName;
    bool m_volumeNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    KxNAS1Configuration m_nas1Configuration;
    bool m_nas1ConfigurationHasBeenSet = false;

    KxAzMode m_azMode;
    bool m_azModeHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZoneIds;
    bool m_availabilityZoneIdsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
