/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/UpdateOntapVolumeConfiguration.h>
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
  class AWS_FSX_API UpdateVolumeRequest : public FSxRequest
  {
  public:
    UpdateVolumeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateVolume"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline UpdateVolumeRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline UpdateVolumeRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline UpdateVolumeRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>Specifies the volume that you want to update, formatted
     * <code>fsvol-0123456789abcdef0</code>.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    /**
     * <p>Specifies the volume that you want to update, formatted
     * <code>fsvol-0123456789abcdef0</code>.</p>
     */
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }

    /**
     * <p>Specifies the volume that you want to update, formatted
     * <code>fsvol-0123456789abcdef0</code>.</p>
     */
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }

    /**
     * <p>Specifies the volume that you want to update, formatted
     * <code>fsvol-0123456789abcdef0</code>.</p>
     */
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }

    /**
     * <p>Specifies the volume that you want to update, formatted
     * <code>fsvol-0123456789abcdef0</code>.</p>
     */
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }

    /**
     * <p>Specifies the volume that you want to update, formatted
     * <code>fsvol-0123456789abcdef0</code>.</p>
     */
    inline UpdateVolumeRequest& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>Specifies the volume that you want to update, formatted
     * <code>fsvol-0123456789abcdef0</code>.</p>
     */
    inline UpdateVolumeRequest& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}

    /**
     * <p>Specifies the volume that you want to update, formatted
     * <code>fsvol-0123456789abcdef0</code>.</p>
     */
    inline UpdateVolumeRequest& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}


    /**
     * <p>The <code>ONTAP</code> configuration of the volume you are updating.</p>
     */
    inline const UpdateOntapVolumeConfiguration& GetOntapConfiguration() const{ return m_ontapConfiguration; }

    /**
     * <p>The <code>ONTAP</code> configuration of the volume you are updating.</p>
     */
    inline bool OntapConfigurationHasBeenSet() const { return m_ontapConfigurationHasBeenSet; }

    /**
     * <p>The <code>ONTAP</code> configuration of the volume you are updating.</p>
     */
    inline void SetOntapConfiguration(const UpdateOntapVolumeConfiguration& value) { m_ontapConfigurationHasBeenSet = true; m_ontapConfiguration = value; }

    /**
     * <p>The <code>ONTAP</code> configuration of the volume you are updating.</p>
     */
    inline void SetOntapConfiguration(UpdateOntapVolumeConfiguration&& value) { m_ontapConfigurationHasBeenSet = true; m_ontapConfiguration = std::move(value); }

    /**
     * <p>The <code>ONTAP</code> configuration of the volume you are updating.</p>
     */
    inline UpdateVolumeRequest& WithOntapConfiguration(const UpdateOntapVolumeConfiguration& value) { SetOntapConfiguration(value); return *this;}

    /**
     * <p>The <code>ONTAP</code> configuration of the volume you are updating.</p>
     */
    inline UpdateVolumeRequest& WithOntapConfiguration(UpdateOntapVolumeConfiguration&& value) { SetOntapConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet;

    UpdateOntapVolumeConfiguration m_ontapConfiguration;
    bool m_ontapConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
