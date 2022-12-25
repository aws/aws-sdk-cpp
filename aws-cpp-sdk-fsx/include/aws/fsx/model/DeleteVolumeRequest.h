/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/DeleteVolumeOntapConfiguration.h>
#include <aws/fsx/model/DeleteVolumeOpenZFSConfiguration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   */
  class DeleteVolumeRequest : public FSxRequest
  {
  public:
    AWS_FSX_API DeleteVolumeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteVolume"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline DeleteVolumeRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline DeleteVolumeRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline DeleteVolumeRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The ID of the volume that you are deleting.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    /**
     * <p>The ID of the volume that you are deleting.</p>
     */
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }

    /**
     * <p>The ID of the volume that you are deleting.</p>
     */
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }

    /**
     * <p>The ID of the volume that you are deleting.</p>
     */
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }

    /**
     * <p>The ID of the volume that you are deleting.</p>
     */
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }

    /**
     * <p>The ID of the volume that you are deleting.</p>
     */
    inline DeleteVolumeRequest& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>The ID of the volume that you are deleting.</p>
     */
    inline DeleteVolumeRequest& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the volume that you are deleting.</p>
     */
    inline DeleteVolumeRequest& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}


    /**
     * <p>For Amazon FSx for ONTAP volumes, specify whether to take a final backup of
     * the volume and apply tags to the backup. To apply tags to the backup, you must
     * have the <code>fsx:TagResource</code> permission.</p>
     */
    inline const DeleteVolumeOntapConfiguration& GetOntapConfiguration() const{ return m_ontapConfiguration; }

    /**
     * <p>For Amazon FSx for ONTAP volumes, specify whether to take a final backup of
     * the volume and apply tags to the backup. To apply tags to the backup, you must
     * have the <code>fsx:TagResource</code> permission.</p>
     */
    inline bool OntapConfigurationHasBeenSet() const { return m_ontapConfigurationHasBeenSet; }

    /**
     * <p>For Amazon FSx for ONTAP volumes, specify whether to take a final backup of
     * the volume and apply tags to the backup. To apply tags to the backup, you must
     * have the <code>fsx:TagResource</code> permission.</p>
     */
    inline void SetOntapConfiguration(const DeleteVolumeOntapConfiguration& value) { m_ontapConfigurationHasBeenSet = true; m_ontapConfiguration = value; }

    /**
     * <p>For Amazon FSx for ONTAP volumes, specify whether to take a final backup of
     * the volume and apply tags to the backup. To apply tags to the backup, you must
     * have the <code>fsx:TagResource</code> permission.</p>
     */
    inline void SetOntapConfiguration(DeleteVolumeOntapConfiguration&& value) { m_ontapConfigurationHasBeenSet = true; m_ontapConfiguration = std::move(value); }

    /**
     * <p>For Amazon FSx for ONTAP volumes, specify whether to take a final backup of
     * the volume and apply tags to the backup. To apply tags to the backup, you must
     * have the <code>fsx:TagResource</code> permission.</p>
     */
    inline DeleteVolumeRequest& WithOntapConfiguration(const DeleteVolumeOntapConfiguration& value) { SetOntapConfiguration(value); return *this;}

    /**
     * <p>For Amazon FSx for ONTAP volumes, specify whether to take a final backup of
     * the volume and apply tags to the backup. To apply tags to the backup, you must
     * have the <code>fsx:TagResource</code> permission.</p>
     */
    inline DeleteVolumeRequest& WithOntapConfiguration(DeleteVolumeOntapConfiguration&& value) { SetOntapConfiguration(std::move(value)); return *this;}


    /**
     * <p>For Amazon FSx for OpenZFS volumes, specify whether to delete all child
     * volumes and snapshots.</p>
     */
    inline const DeleteVolumeOpenZFSConfiguration& GetOpenZFSConfiguration() const{ return m_openZFSConfiguration; }

    /**
     * <p>For Amazon FSx for OpenZFS volumes, specify whether to delete all child
     * volumes and snapshots.</p>
     */
    inline bool OpenZFSConfigurationHasBeenSet() const { return m_openZFSConfigurationHasBeenSet; }

    /**
     * <p>For Amazon FSx for OpenZFS volumes, specify whether to delete all child
     * volumes and snapshots.</p>
     */
    inline void SetOpenZFSConfiguration(const DeleteVolumeOpenZFSConfiguration& value) { m_openZFSConfigurationHasBeenSet = true; m_openZFSConfiguration = value; }

    /**
     * <p>For Amazon FSx for OpenZFS volumes, specify whether to delete all child
     * volumes and snapshots.</p>
     */
    inline void SetOpenZFSConfiguration(DeleteVolumeOpenZFSConfiguration&& value) { m_openZFSConfigurationHasBeenSet = true; m_openZFSConfiguration = std::move(value); }

    /**
     * <p>For Amazon FSx for OpenZFS volumes, specify whether to delete all child
     * volumes and snapshots.</p>
     */
    inline DeleteVolumeRequest& WithOpenZFSConfiguration(const DeleteVolumeOpenZFSConfiguration& value) { SetOpenZFSConfiguration(value); return *this;}

    /**
     * <p>For Amazon FSx for OpenZFS volumes, specify whether to delete all child
     * volumes and snapshots.</p>
     */
    inline DeleteVolumeRequest& WithOpenZFSConfiguration(DeleteVolumeOpenZFSConfiguration&& value) { SetOpenZFSConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;

    DeleteVolumeOntapConfiguration m_ontapConfiguration;
    bool m_ontapConfigurationHasBeenSet = false;

    DeleteVolumeOpenZFSConfiguration m_openZFSConfiguration;
    bool m_openZFSConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
