/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/UpdateOntapVolumeConfiguration.h>
#include <aws/fsx/model/UpdateOpenZFSVolumeConfiguration.h>
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
  class UpdateVolumeRequest : public FSxRequest
  {
  public:
    AWS_FSX_API UpdateVolumeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateVolume"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline UpdateVolumeRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline UpdateVolumeRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline UpdateVolumeRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The ID of the volume that you want to update, in the format
     * <code>fsvol-0123456789abcdef0</code>.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    /**
     * <p>The ID of the volume that you want to update, in the format
     * <code>fsvol-0123456789abcdef0</code>.</p>
     */
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }

    /**
     * <p>The ID of the volume that you want to update, in the format
     * <code>fsvol-0123456789abcdef0</code>.</p>
     */
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }

    /**
     * <p>The ID of the volume that you want to update, in the format
     * <code>fsvol-0123456789abcdef0</code>.</p>
     */
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }

    /**
     * <p>The ID of the volume that you want to update, in the format
     * <code>fsvol-0123456789abcdef0</code>.</p>
     */
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }

    /**
     * <p>The ID of the volume that you want to update, in the format
     * <code>fsvol-0123456789abcdef0</code>.</p>
     */
    inline UpdateVolumeRequest& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>The ID of the volume that you want to update, in the format
     * <code>fsvol-0123456789abcdef0</code>.</p>
     */
    inline UpdateVolumeRequest& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the volume that you want to update, in the format
     * <code>fsvol-0123456789abcdef0</code>.</p>
     */
    inline UpdateVolumeRequest& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}


    /**
     * <p>The configuration of the ONTAP volume that you are updating.</p>
     */
    inline const UpdateOntapVolumeConfiguration& GetOntapConfiguration() const{ return m_ontapConfiguration; }

    /**
     * <p>The configuration of the ONTAP volume that you are updating.</p>
     */
    inline bool OntapConfigurationHasBeenSet() const { return m_ontapConfigurationHasBeenSet; }

    /**
     * <p>The configuration of the ONTAP volume that you are updating.</p>
     */
    inline void SetOntapConfiguration(const UpdateOntapVolumeConfiguration& value) { m_ontapConfigurationHasBeenSet = true; m_ontapConfiguration = value; }

    /**
     * <p>The configuration of the ONTAP volume that you are updating.</p>
     */
    inline void SetOntapConfiguration(UpdateOntapVolumeConfiguration&& value) { m_ontapConfigurationHasBeenSet = true; m_ontapConfiguration = std::move(value); }

    /**
     * <p>The configuration of the ONTAP volume that you are updating.</p>
     */
    inline UpdateVolumeRequest& WithOntapConfiguration(const UpdateOntapVolumeConfiguration& value) { SetOntapConfiguration(value); return *this;}

    /**
     * <p>The configuration of the ONTAP volume that you are updating.</p>
     */
    inline UpdateVolumeRequest& WithOntapConfiguration(UpdateOntapVolumeConfiguration&& value) { SetOntapConfiguration(std::move(value)); return *this;}


    /**
     * <p>The name of the OpenZFS volume. OpenZFS root volumes are automatically named
     * <code>FSX</code>. Child volume names must be unique among their parent volume's
     * children. The name of the volume is part of the mount string for the OpenZFS
     * volume. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the OpenZFS volume. OpenZFS root volumes are automatically named
     * <code>FSX</code>. Child volume names must be unique among their parent volume's
     * children. The name of the volume is part of the mount string for the OpenZFS
     * volume. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the OpenZFS volume. OpenZFS root volumes are automatically named
     * <code>FSX</code>. Child volume names must be unique among their parent volume's
     * children. The name of the volume is part of the mount string for the OpenZFS
     * volume. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the OpenZFS volume. OpenZFS root volumes are automatically named
     * <code>FSX</code>. Child volume names must be unique among their parent volume's
     * children. The name of the volume is part of the mount string for the OpenZFS
     * volume. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the OpenZFS volume. OpenZFS root volumes are automatically named
     * <code>FSX</code>. Child volume names must be unique among their parent volume's
     * children. The name of the volume is part of the mount string for the OpenZFS
     * volume. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the OpenZFS volume. OpenZFS root volumes are automatically named
     * <code>FSX</code>. Child volume names must be unique among their parent volume's
     * children. The name of the volume is part of the mount string for the OpenZFS
     * volume. </p>
     */
    inline UpdateVolumeRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the OpenZFS volume. OpenZFS root volumes are automatically named
     * <code>FSX</code>. Child volume names must be unique among their parent volume's
     * children. The name of the volume is part of the mount string for the OpenZFS
     * volume. </p>
     */
    inline UpdateVolumeRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the OpenZFS volume. OpenZFS root volumes are automatically named
     * <code>FSX</code>. Child volume names must be unique among their parent volume's
     * children. The name of the volume is part of the mount string for the OpenZFS
     * volume. </p>
     */
    inline UpdateVolumeRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The configuration of the OpenZFS volume that you are updating.</p>
     */
    inline const UpdateOpenZFSVolumeConfiguration& GetOpenZFSConfiguration() const{ return m_openZFSConfiguration; }

    /**
     * <p>The configuration of the OpenZFS volume that you are updating.</p>
     */
    inline bool OpenZFSConfigurationHasBeenSet() const { return m_openZFSConfigurationHasBeenSet; }

    /**
     * <p>The configuration of the OpenZFS volume that you are updating.</p>
     */
    inline void SetOpenZFSConfiguration(const UpdateOpenZFSVolumeConfiguration& value) { m_openZFSConfigurationHasBeenSet = true; m_openZFSConfiguration = value; }

    /**
     * <p>The configuration of the OpenZFS volume that you are updating.</p>
     */
    inline void SetOpenZFSConfiguration(UpdateOpenZFSVolumeConfiguration&& value) { m_openZFSConfigurationHasBeenSet = true; m_openZFSConfiguration = std::move(value); }

    /**
     * <p>The configuration of the OpenZFS volume that you are updating.</p>
     */
    inline UpdateVolumeRequest& WithOpenZFSConfiguration(const UpdateOpenZFSVolumeConfiguration& value) { SetOpenZFSConfiguration(value); return *this;}

    /**
     * <p>The configuration of the OpenZFS volume that you are updating.</p>
     */
    inline UpdateVolumeRequest& WithOpenZFSConfiguration(UpdateOpenZFSVolumeConfiguration&& value) { SetOpenZFSConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;

    UpdateOntapVolumeConfiguration m_ontapConfiguration;
    bool m_ontapConfigurationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    UpdateOpenZFSVolumeConfiguration m_openZFSConfiguration;
    bool m_openZFSConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
