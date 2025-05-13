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
    AWS_FSX_API UpdateVolumeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateVolume"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    UpdateVolumeRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the volume that you want to update, in the format
     * <code>fsvol-0123456789abcdef0</code>.</p>
     */
    inline const Aws::String& GetVolumeId() const { return m_volumeId; }
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }
    template<typename VolumeIdT = Aws::String>
    void SetVolumeId(VolumeIdT&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::forward<VolumeIdT>(value); }
    template<typename VolumeIdT = Aws::String>
    UpdateVolumeRequest& WithVolumeId(VolumeIdT&& value) { SetVolumeId(std::forward<VolumeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the ONTAP volume that you are updating.</p>
     */
    inline const UpdateOntapVolumeConfiguration& GetOntapConfiguration() const { return m_ontapConfiguration; }
    inline bool OntapConfigurationHasBeenSet() const { return m_ontapConfigurationHasBeenSet; }
    template<typename OntapConfigurationT = UpdateOntapVolumeConfiguration>
    void SetOntapConfiguration(OntapConfigurationT&& value) { m_ontapConfigurationHasBeenSet = true; m_ontapConfiguration = std::forward<OntapConfigurationT>(value); }
    template<typename OntapConfigurationT = UpdateOntapVolumeConfiguration>
    UpdateVolumeRequest& WithOntapConfiguration(OntapConfigurationT&& value) { SetOntapConfiguration(std::forward<OntapConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the OpenZFS volume. OpenZFS root volumes are automatically named
     * <code>FSX</code>. Child volume names must be unique among their parent volume's
     * children. The name of the volume is part of the mount string for the OpenZFS
     * volume. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateVolumeRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the OpenZFS volume that you are updating.</p>
     */
    inline const UpdateOpenZFSVolumeConfiguration& GetOpenZFSConfiguration() const { return m_openZFSConfiguration; }
    inline bool OpenZFSConfigurationHasBeenSet() const { return m_openZFSConfigurationHasBeenSet; }
    template<typename OpenZFSConfigurationT = UpdateOpenZFSVolumeConfiguration>
    void SetOpenZFSConfiguration(OpenZFSConfigurationT&& value) { m_openZFSConfigurationHasBeenSet = true; m_openZFSConfiguration = std::forward<OpenZFSConfigurationT>(value); }
    template<typename OpenZFSConfigurationT = UpdateOpenZFSVolumeConfiguration>
    UpdateVolumeRequest& WithOpenZFSConfiguration(OpenZFSConfigurationT&& value) { SetOpenZFSConfiguration(std::forward<OpenZFSConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

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
