/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/finspace/FinspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/KxNAS1Configuration.h>
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
  class UpdateKxVolumeRequest : public FinspaceRequest
  {
  public:
    AWS_FINSPACE_API UpdateKxVolumeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateKxVolume"; }

    AWS_FINSPACE_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique identifier for the kdb environment where you created the storage
     * volume. </p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>A unique identifier for the kdb environment where you created the storage
     * volume. </p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>A unique identifier for the kdb environment where you created the storage
     * volume. </p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>A unique identifier for the kdb environment where you created the storage
     * volume. </p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>A unique identifier for the kdb environment where you created the storage
     * volume. </p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>A unique identifier for the kdb environment where you created the storage
     * volume. </p>
     */
    inline UpdateKxVolumeRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>A unique identifier for the kdb environment where you created the storage
     * volume. </p>
     */
    inline UpdateKxVolumeRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the kdb environment where you created the storage
     * volume. </p>
     */
    inline UpdateKxVolumeRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p> A unique identifier for the volume.</p>
     */
    inline const Aws::String& GetVolumeName() const{ return m_volumeName; }

    /**
     * <p> A unique identifier for the volume.</p>
     */
    inline bool VolumeNameHasBeenSet() const { return m_volumeNameHasBeenSet; }

    /**
     * <p> A unique identifier for the volume.</p>
     */
    inline void SetVolumeName(const Aws::String& value) { m_volumeNameHasBeenSet = true; m_volumeName = value; }

    /**
     * <p> A unique identifier for the volume.</p>
     */
    inline void SetVolumeName(Aws::String&& value) { m_volumeNameHasBeenSet = true; m_volumeName = std::move(value); }

    /**
     * <p> A unique identifier for the volume.</p>
     */
    inline void SetVolumeName(const char* value) { m_volumeNameHasBeenSet = true; m_volumeName.assign(value); }

    /**
     * <p> A unique identifier for the volume.</p>
     */
    inline UpdateKxVolumeRequest& WithVolumeName(const Aws::String& value) { SetVolumeName(value); return *this;}

    /**
     * <p> A unique identifier for the volume.</p>
     */
    inline UpdateKxVolumeRequest& WithVolumeName(Aws::String&& value) { SetVolumeName(std::move(value)); return *this;}

    /**
     * <p> A unique identifier for the volume.</p>
     */
    inline UpdateKxVolumeRequest& WithVolumeName(const char* value) { SetVolumeName(value); return *this;}


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
    inline UpdateKxVolumeRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A description of the volume. </p>
     */
    inline UpdateKxVolumeRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A description of the volume. </p>
     */
    inline UpdateKxVolumeRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline UpdateKxVolumeRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline UpdateKxVolumeRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline UpdateKxVolumeRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p> Specifies the configuration for the Network attached storage (NAS_1) file
     * system volume.</p>
     */
    inline const KxNAS1Configuration& GetNas1Configuration() const{ return m_nas1Configuration; }

    /**
     * <p> Specifies the configuration for the Network attached storage (NAS_1) file
     * system volume.</p>
     */
    inline bool Nas1ConfigurationHasBeenSet() const { return m_nas1ConfigurationHasBeenSet; }

    /**
     * <p> Specifies the configuration for the Network attached storage (NAS_1) file
     * system volume.</p>
     */
    inline void SetNas1Configuration(const KxNAS1Configuration& value) { m_nas1ConfigurationHasBeenSet = true; m_nas1Configuration = value; }

    /**
     * <p> Specifies the configuration for the Network attached storage (NAS_1) file
     * system volume.</p>
     */
    inline void SetNas1Configuration(KxNAS1Configuration&& value) { m_nas1ConfigurationHasBeenSet = true; m_nas1Configuration = std::move(value); }

    /**
     * <p> Specifies the configuration for the Network attached storage (NAS_1) file
     * system volume.</p>
     */
    inline UpdateKxVolumeRequest& WithNas1Configuration(const KxNAS1Configuration& value) { SetNas1Configuration(value); return *this;}

    /**
     * <p> Specifies the configuration for the Network attached storage (NAS_1) file
     * system volume.</p>
     */
    inline UpdateKxVolumeRequest& WithNas1Configuration(KxNAS1Configuration&& value) { SetNas1Configuration(std::move(value)); return *this;}

  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_volumeName;
    bool m_volumeNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    KxNAS1Configuration m_nas1Configuration;
    bool m_nas1ConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
