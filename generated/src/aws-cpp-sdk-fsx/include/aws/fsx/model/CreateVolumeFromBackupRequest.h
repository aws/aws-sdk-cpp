/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/CreateOntapVolumeConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class CreateVolumeFromBackupRequest : public FSxRequest
  {
  public:
    AWS_FSX_API CreateVolumeFromBackupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVolumeFromBackup"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetBackupId() const{ return m_backupId; }

    
    inline bool BackupIdHasBeenSet() const { return m_backupIdHasBeenSet; }

    
    inline void SetBackupId(const Aws::String& value) { m_backupIdHasBeenSet = true; m_backupId = value; }

    
    inline void SetBackupId(Aws::String&& value) { m_backupIdHasBeenSet = true; m_backupId = std::move(value); }

    
    inline void SetBackupId(const char* value) { m_backupIdHasBeenSet = true; m_backupId.assign(value); }

    
    inline CreateVolumeFromBackupRequest& WithBackupId(const Aws::String& value) { SetBackupId(value); return *this;}

    
    inline CreateVolumeFromBackupRequest& WithBackupId(Aws::String&& value) { SetBackupId(std::move(value)); return *this;}

    
    inline CreateVolumeFromBackupRequest& WithBackupId(const char* value) { SetBackupId(value); return *this;}


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline CreateVolumeFromBackupRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline CreateVolumeFromBackupRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline CreateVolumeFromBackupRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The name of the new volume you're creating.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the new volume you're creating.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the new volume you're creating.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the new volume you're creating.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the new volume you're creating.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the new volume you're creating.</p>
     */
    inline CreateVolumeFromBackupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the new volume you're creating.</p>
     */
    inline CreateVolumeFromBackupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the new volume you're creating.</p>
     */
    inline CreateVolumeFromBackupRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies the configuration of the ONTAP volume that you are creating.</p>
     */
    inline const CreateOntapVolumeConfiguration& GetOntapConfiguration() const{ return m_ontapConfiguration; }

    /**
     * <p>Specifies the configuration of the ONTAP volume that you are creating.</p>
     */
    inline bool OntapConfigurationHasBeenSet() const { return m_ontapConfigurationHasBeenSet; }

    /**
     * <p>Specifies the configuration of the ONTAP volume that you are creating.</p>
     */
    inline void SetOntapConfiguration(const CreateOntapVolumeConfiguration& value) { m_ontapConfigurationHasBeenSet = true; m_ontapConfiguration = value; }

    /**
     * <p>Specifies the configuration of the ONTAP volume that you are creating.</p>
     */
    inline void SetOntapConfiguration(CreateOntapVolumeConfiguration&& value) { m_ontapConfigurationHasBeenSet = true; m_ontapConfiguration = std::move(value); }

    /**
     * <p>Specifies the configuration of the ONTAP volume that you are creating.</p>
     */
    inline CreateVolumeFromBackupRequest& WithOntapConfiguration(const CreateOntapVolumeConfiguration& value) { SetOntapConfiguration(value); return *this;}

    /**
     * <p>Specifies the configuration of the ONTAP volume that you are creating.</p>
     */
    inline CreateVolumeFromBackupRequest& WithOntapConfiguration(CreateOntapVolumeConfiguration&& value) { SetOntapConfiguration(std::move(value)); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CreateVolumeFromBackupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CreateVolumeFromBackupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateVolumeFromBackupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline CreateVolumeFromBackupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_backupId;
    bool m_backupIdHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CreateOntapVolumeConfiguration m_ontapConfiguration;
    bool m_ontapConfigurationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
