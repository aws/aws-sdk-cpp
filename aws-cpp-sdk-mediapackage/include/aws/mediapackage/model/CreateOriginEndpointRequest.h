/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/mediapackage/MediaPackageRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage/model/CmafPackageCreateOrUpdateParameters.h>
#include <aws/mediapackage/model/DashPackage.h>
#include <aws/mediapackage/model/HlsPackage.h>
#include <aws/mediapackage/model/MssPackage.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace MediaPackage
{
namespace Model
{

  /**
   * Configuration parameters used to create a new OriginEndpoint.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/CreateOriginEndpointRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIAPACKAGE_API CreateOriginEndpointRequest : public MediaPackageRequest
  {
  public:
    CreateOriginEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOriginEndpoint"; }

    Aws::String SerializePayload() const override;


    /**
     * The ID of the Channel that the OriginEndpoint will be associated with.
This
     * cannot be changed after the OriginEndpoint is created.

     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }

    /**
     * The ID of the Channel that the OriginEndpoint will be associated with.
This
     * cannot be changed after the OriginEndpoint is created.

     */
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }

    /**
     * The ID of the Channel that the OriginEndpoint will be associated with.
This
     * cannot be changed after the OriginEndpoint is created.

     */
    inline void SetChannelId(const Aws::String& value) { m_channelIdHasBeenSet = true; m_channelId = value; }

    /**
     * The ID of the Channel that the OriginEndpoint will be associated with.
This
     * cannot be changed after the OriginEndpoint is created.

     */
    inline void SetChannelId(Aws::String&& value) { m_channelIdHasBeenSet = true; m_channelId = std::move(value); }

    /**
     * The ID of the Channel that the OriginEndpoint will be associated with.
This
     * cannot be changed after the OriginEndpoint is created.

     */
    inline void SetChannelId(const char* value) { m_channelIdHasBeenSet = true; m_channelId.assign(value); }

    /**
     * The ID of the Channel that the OriginEndpoint will be associated with.
This
     * cannot be changed after the OriginEndpoint is created.

     */
    inline CreateOriginEndpointRequest& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}

    /**
     * The ID of the Channel that the OriginEndpoint will be associated with.
This
     * cannot be changed after the OriginEndpoint is created.

     */
    inline CreateOriginEndpointRequest& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}

    /**
     * The ID of the Channel that the OriginEndpoint will be associated with.
This
     * cannot be changed after the OriginEndpoint is created.

     */
    inline CreateOriginEndpointRequest& WithChannelId(const char* value) { SetChannelId(value); return *this;}


    
    inline const CmafPackageCreateOrUpdateParameters& GetCmafPackage() const{ return m_cmafPackage; }

    
    inline bool CmafPackageHasBeenSet() const { return m_cmafPackageHasBeenSet; }

    
    inline void SetCmafPackage(const CmafPackageCreateOrUpdateParameters& value) { m_cmafPackageHasBeenSet = true; m_cmafPackage = value; }

    
    inline void SetCmafPackage(CmafPackageCreateOrUpdateParameters&& value) { m_cmafPackageHasBeenSet = true; m_cmafPackage = std::move(value); }

    
    inline CreateOriginEndpointRequest& WithCmafPackage(const CmafPackageCreateOrUpdateParameters& value) { SetCmafPackage(value); return *this;}

    
    inline CreateOriginEndpointRequest& WithCmafPackage(CmafPackageCreateOrUpdateParameters&& value) { SetCmafPackage(std::move(value)); return *this;}


    
    inline const DashPackage& GetDashPackage() const{ return m_dashPackage; }

    
    inline bool DashPackageHasBeenSet() const { return m_dashPackageHasBeenSet; }

    
    inline void SetDashPackage(const DashPackage& value) { m_dashPackageHasBeenSet = true; m_dashPackage = value; }

    
    inline void SetDashPackage(DashPackage&& value) { m_dashPackageHasBeenSet = true; m_dashPackage = std::move(value); }

    
    inline CreateOriginEndpointRequest& WithDashPackage(const DashPackage& value) { SetDashPackage(value); return *this;}

    
    inline CreateOriginEndpointRequest& WithDashPackage(DashPackage&& value) { SetDashPackage(std::move(value)); return *this;}


    /**
     * A short text description of the OriginEndpoint.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * A short text description of the OriginEndpoint.
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * A short text description of the OriginEndpoint.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * A short text description of the OriginEndpoint.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * A short text description of the OriginEndpoint.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * A short text description of the OriginEndpoint.
     */
    inline CreateOriginEndpointRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A short text description of the OriginEndpoint.
     */
    inline CreateOriginEndpointRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A short text description of the OriginEndpoint.
     */
    inline CreateOriginEndpointRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const HlsPackage& GetHlsPackage() const{ return m_hlsPackage; }

    
    inline bool HlsPackageHasBeenSet() const { return m_hlsPackageHasBeenSet; }

    
    inline void SetHlsPackage(const HlsPackage& value) { m_hlsPackageHasBeenSet = true; m_hlsPackage = value; }

    
    inline void SetHlsPackage(HlsPackage&& value) { m_hlsPackageHasBeenSet = true; m_hlsPackage = std::move(value); }

    
    inline CreateOriginEndpointRequest& WithHlsPackage(const HlsPackage& value) { SetHlsPackage(value); return *this;}

    
    inline CreateOriginEndpointRequest& WithHlsPackage(HlsPackage&& value) { SetHlsPackage(std::move(value)); return *this;}


    /**
     * The ID of the OriginEndpoint.  The ID must be unique within the region
and it
     * cannot be changed after the OriginEndpoint is created.

     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of the OriginEndpoint.  The ID must be unique within the region
and it
     * cannot be changed after the OriginEndpoint is created.

     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The ID of the OriginEndpoint.  The ID must be unique within the region
and it
     * cannot be changed after the OriginEndpoint is created.

     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The ID of the OriginEndpoint.  The ID must be unique within the region
and it
     * cannot be changed after the OriginEndpoint is created.

     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The ID of the OriginEndpoint.  The ID must be unique within the region
and it
     * cannot be changed after the OriginEndpoint is created.

     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The ID of the OriginEndpoint.  The ID must be unique within the region
and it
     * cannot be changed after the OriginEndpoint is created.

     */
    inline CreateOriginEndpointRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of the OriginEndpoint.  The ID must be unique within the region
and it
     * cannot be changed after the OriginEndpoint is created.

     */
    inline CreateOriginEndpointRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of the OriginEndpoint.  The ID must be unique within the region
and it
     * cannot be changed after the OriginEndpoint is created.

     */
    inline CreateOriginEndpointRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * A short string that will be used as the filename of the OriginEndpoint URL
     * (defaults to "index").
     */
    inline const Aws::String& GetManifestName() const{ return m_manifestName; }

    /**
     * A short string that will be used as the filename of the OriginEndpoint URL
     * (defaults to "index").
     */
    inline bool ManifestNameHasBeenSet() const { return m_manifestNameHasBeenSet; }

    /**
     * A short string that will be used as the filename of the OriginEndpoint URL
     * (defaults to "index").
     */
    inline void SetManifestName(const Aws::String& value) { m_manifestNameHasBeenSet = true; m_manifestName = value; }

    /**
     * A short string that will be used as the filename of the OriginEndpoint URL
     * (defaults to "index").
     */
    inline void SetManifestName(Aws::String&& value) { m_manifestNameHasBeenSet = true; m_manifestName = std::move(value); }

    /**
     * A short string that will be used as the filename of the OriginEndpoint URL
     * (defaults to "index").
     */
    inline void SetManifestName(const char* value) { m_manifestNameHasBeenSet = true; m_manifestName.assign(value); }

    /**
     * A short string that will be used as the filename of the OriginEndpoint URL
     * (defaults to "index").
     */
    inline CreateOriginEndpointRequest& WithManifestName(const Aws::String& value) { SetManifestName(value); return *this;}

    /**
     * A short string that will be used as the filename of the OriginEndpoint URL
     * (defaults to "index").
     */
    inline CreateOriginEndpointRequest& WithManifestName(Aws::String&& value) { SetManifestName(std::move(value)); return *this;}

    /**
     * A short string that will be used as the filename of the OriginEndpoint URL
     * (defaults to "index").
     */
    inline CreateOriginEndpointRequest& WithManifestName(const char* value) { SetManifestName(value); return *this;}


    
    inline const MssPackage& GetMssPackage() const{ return m_mssPackage; }

    
    inline bool MssPackageHasBeenSet() const { return m_mssPackageHasBeenSet; }

    
    inline void SetMssPackage(const MssPackage& value) { m_mssPackageHasBeenSet = true; m_mssPackage = value; }

    
    inline void SetMssPackage(MssPackage&& value) { m_mssPackageHasBeenSet = true; m_mssPackage = std::move(value); }

    
    inline CreateOriginEndpointRequest& WithMssPackage(const MssPackage& value) { SetMssPackage(value); return *this;}

    
    inline CreateOriginEndpointRequest& WithMssPackage(MssPackage&& value) { SetMssPackage(std::move(value)); return *this;}


    /**
     * Maximum duration (seconds) of content to retain for startover playback.
If not
     * specified, startover playback will be disabled for the OriginEndpoint.

     */
    inline int GetStartoverWindowSeconds() const{ return m_startoverWindowSeconds; }

    /**
     * Maximum duration (seconds) of content to retain for startover playback.
If not
     * specified, startover playback will be disabled for the OriginEndpoint.

     */
    inline bool StartoverWindowSecondsHasBeenSet() const { return m_startoverWindowSecondsHasBeenSet; }

    /**
     * Maximum duration (seconds) of content to retain for startover playback.
If not
     * specified, startover playback will be disabled for the OriginEndpoint.

     */
    inline void SetStartoverWindowSeconds(int value) { m_startoverWindowSecondsHasBeenSet = true; m_startoverWindowSeconds = value; }

    /**
     * Maximum duration (seconds) of content to retain for startover playback.
If not
     * specified, startover playback will be disabled for the OriginEndpoint.

     */
    inline CreateOriginEndpointRequest& WithStartoverWindowSeconds(int value) { SetStartoverWindowSeconds(value); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CreateOriginEndpointRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline CreateOriginEndpointRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateOriginEndpointRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    
    inline CreateOriginEndpointRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline CreateOriginEndpointRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CreateOriginEndpointRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline CreateOriginEndpointRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CreateOriginEndpointRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline CreateOriginEndpointRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * Amount of delay (seconds) to enforce on the playback of live content.
If not
     * specified, there will be no time delay in effect for the OriginEndpoint.

     */
    inline int GetTimeDelaySeconds() const{ return m_timeDelaySeconds; }

    /**
     * Amount of delay (seconds) to enforce on the playback of live content.
If not
     * specified, there will be no time delay in effect for the OriginEndpoint.

     */
    inline bool TimeDelaySecondsHasBeenSet() const { return m_timeDelaySecondsHasBeenSet; }

    /**
     * Amount of delay (seconds) to enforce on the playback of live content.
If not
     * specified, there will be no time delay in effect for the OriginEndpoint.

     */
    inline void SetTimeDelaySeconds(int value) { m_timeDelaySecondsHasBeenSet = true; m_timeDelaySeconds = value; }

    /**
     * Amount of delay (seconds) to enforce on the playback of live content.
If not
     * specified, there will be no time delay in effect for the OriginEndpoint.

     */
    inline CreateOriginEndpointRequest& WithTimeDelaySeconds(int value) { SetTimeDelaySeconds(value); return *this;}


    /**
     * A list of source IP CIDR blocks that will be allowed to access the
     * OriginEndpoint.
     */
    inline const Aws::Vector<Aws::String>& GetWhitelist() const{ return m_whitelist; }

    /**
     * A list of source IP CIDR blocks that will be allowed to access the
     * OriginEndpoint.
     */
    inline bool WhitelistHasBeenSet() const { return m_whitelistHasBeenSet; }

    /**
     * A list of source IP CIDR blocks that will be allowed to access the
     * OriginEndpoint.
     */
    inline void SetWhitelist(const Aws::Vector<Aws::String>& value) { m_whitelistHasBeenSet = true; m_whitelist = value; }

    /**
     * A list of source IP CIDR blocks that will be allowed to access the
     * OriginEndpoint.
     */
    inline void SetWhitelist(Aws::Vector<Aws::String>&& value) { m_whitelistHasBeenSet = true; m_whitelist = std::move(value); }

    /**
     * A list of source IP CIDR blocks that will be allowed to access the
     * OriginEndpoint.
     */
    inline CreateOriginEndpointRequest& WithWhitelist(const Aws::Vector<Aws::String>& value) { SetWhitelist(value); return *this;}

    /**
     * A list of source IP CIDR blocks that will be allowed to access the
     * OriginEndpoint.
     */
    inline CreateOriginEndpointRequest& WithWhitelist(Aws::Vector<Aws::String>&& value) { SetWhitelist(std::move(value)); return *this;}

    /**
     * A list of source IP CIDR blocks that will be allowed to access the
     * OriginEndpoint.
     */
    inline CreateOriginEndpointRequest& AddWhitelist(const Aws::String& value) { m_whitelistHasBeenSet = true; m_whitelist.push_back(value); return *this; }

    /**
     * A list of source IP CIDR blocks that will be allowed to access the
     * OriginEndpoint.
     */
    inline CreateOriginEndpointRequest& AddWhitelist(Aws::String&& value) { m_whitelistHasBeenSet = true; m_whitelist.push_back(std::move(value)); return *this; }

    /**
     * A list of source IP CIDR blocks that will be allowed to access the
     * OriginEndpoint.
     */
    inline CreateOriginEndpointRequest& AddWhitelist(const char* value) { m_whitelistHasBeenSet = true; m_whitelist.push_back(value); return *this; }

  private:

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet;

    CmafPackageCreateOrUpdateParameters m_cmafPackage;
    bool m_cmafPackageHasBeenSet;

    DashPackage m_dashPackage;
    bool m_dashPackageHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    HlsPackage m_hlsPackage;
    bool m_hlsPackageHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_manifestName;
    bool m_manifestNameHasBeenSet;

    MssPackage m_mssPackage;
    bool m_mssPackageHasBeenSet;

    int m_startoverWindowSeconds;
    bool m_startoverWindowSecondsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    int m_timeDelaySeconds;
    bool m_timeDelaySecondsHasBeenSet;

    Aws::Vector<Aws::String> m_whitelist;
    bool m_whitelistHasBeenSet;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
