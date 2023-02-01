/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/VolumeType.h>
#include <aws/fsx/model/CreateOntapVolumeConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/CreateOpenZFSVolumeConfiguration.h>
#include <aws/fsx/model/Tag.h>
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
  class CreateVolumeRequest : public FSxRequest
  {
  public:
    AWS_FSX_API CreateVolumeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVolume"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline CreateVolumeRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline CreateVolumeRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline CreateVolumeRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>Specifies the type of volume to create; <code>ONTAP</code> and
     * <code>OPENZFS</code> are the only valid volume types.</p>
     */
    inline const VolumeType& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p>Specifies the type of volume to create; <code>ONTAP</code> and
     * <code>OPENZFS</code> are the only valid volume types.</p>
     */
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }

    /**
     * <p>Specifies the type of volume to create; <code>ONTAP</code> and
     * <code>OPENZFS</code> are the only valid volume types.</p>
     */
    inline void SetVolumeType(const VolumeType& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p>Specifies the type of volume to create; <code>ONTAP</code> and
     * <code>OPENZFS</code> are the only valid volume types.</p>
     */
    inline void SetVolumeType(VolumeType&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }

    /**
     * <p>Specifies the type of volume to create; <code>ONTAP</code> and
     * <code>OPENZFS</code> are the only valid volume types.</p>
     */
    inline CreateVolumeRequest& WithVolumeType(const VolumeType& value) { SetVolumeType(value); return *this;}

    /**
     * <p>Specifies the type of volume to create; <code>ONTAP</code> and
     * <code>OPENZFS</code> are the only valid volume types.</p>
     */
    inline CreateVolumeRequest& WithVolumeType(VolumeType&& value) { SetVolumeType(std::move(value)); return *this;}


    /**
     * <p>Specifies the name of the volume that you're creating.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Specifies the name of the volume that you're creating.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Specifies the name of the volume that you're creating.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Specifies the name of the volume that you're creating.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Specifies the name of the volume that you're creating.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Specifies the name of the volume that you're creating.</p>
     */
    inline CreateVolumeRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Specifies the name of the volume that you're creating.</p>
     */
    inline CreateVolumeRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the volume that you're creating.</p>
     */
    inline CreateVolumeRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies the configuration to use when creating the ONTAP volume.</p>
     */
    inline const CreateOntapVolumeConfiguration& GetOntapConfiguration() const{ return m_ontapConfiguration; }

    /**
     * <p>Specifies the configuration to use when creating the ONTAP volume.</p>
     */
    inline bool OntapConfigurationHasBeenSet() const { return m_ontapConfigurationHasBeenSet; }

    /**
     * <p>Specifies the configuration to use when creating the ONTAP volume.</p>
     */
    inline void SetOntapConfiguration(const CreateOntapVolumeConfiguration& value) { m_ontapConfigurationHasBeenSet = true; m_ontapConfiguration = value; }

    /**
     * <p>Specifies the configuration to use when creating the ONTAP volume.</p>
     */
    inline void SetOntapConfiguration(CreateOntapVolumeConfiguration&& value) { m_ontapConfigurationHasBeenSet = true; m_ontapConfiguration = std::move(value); }

    /**
     * <p>Specifies the configuration to use when creating the ONTAP volume.</p>
     */
    inline CreateVolumeRequest& WithOntapConfiguration(const CreateOntapVolumeConfiguration& value) { SetOntapConfiguration(value); return *this;}

    /**
     * <p>Specifies the configuration to use when creating the ONTAP volume.</p>
     */
    inline CreateVolumeRequest& WithOntapConfiguration(CreateOntapVolumeConfiguration&& value) { SetOntapConfiguration(std::move(value)); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CreateVolumeRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CreateVolumeRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateVolumeRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline CreateVolumeRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the configuration to use when creating the OpenZFS volume.</p>
     */
    inline const CreateOpenZFSVolumeConfiguration& GetOpenZFSConfiguration() const{ return m_openZFSConfiguration; }

    /**
     * <p>Specifies the configuration to use when creating the OpenZFS volume.</p>
     */
    inline bool OpenZFSConfigurationHasBeenSet() const { return m_openZFSConfigurationHasBeenSet; }

    /**
     * <p>Specifies the configuration to use when creating the OpenZFS volume.</p>
     */
    inline void SetOpenZFSConfiguration(const CreateOpenZFSVolumeConfiguration& value) { m_openZFSConfigurationHasBeenSet = true; m_openZFSConfiguration = value; }

    /**
     * <p>Specifies the configuration to use when creating the OpenZFS volume.</p>
     */
    inline void SetOpenZFSConfiguration(CreateOpenZFSVolumeConfiguration&& value) { m_openZFSConfigurationHasBeenSet = true; m_openZFSConfiguration = std::move(value); }

    /**
     * <p>Specifies the configuration to use when creating the OpenZFS volume.</p>
     */
    inline CreateVolumeRequest& WithOpenZFSConfiguration(const CreateOpenZFSVolumeConfiguration& value) { SetOpenZFSConfiguration(value); return *this;}

    /**
     * <p>Specifies the configuration to use when creating the OpenZFS volume.</p>
     */
    inline CreateVolumeRequest& WithOpenZFSConfiguration(CreateOpenZFSVolumeConfiguration&& value) { SetOpenZFSConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    VolumeType m_volumeType;
    bool m_volumeTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CreateOntapVolumeConfiguration m_ontapConfiguration;
    bool m_ontapConfigurationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    CreateOpenZFSVolumeConfiguration m_openZFSConfiguration;
    bool m_openZFSConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
