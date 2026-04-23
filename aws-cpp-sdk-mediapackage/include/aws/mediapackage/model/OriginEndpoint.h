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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage/model/CmafPackage.h>
#include <aws/mediapackage/model/DashPackage.h>
#include <aws/mediapackage/model/HlsPackage.h>
#include <aws/mediapackage/model/MssPackage.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MediaPackage
{
namespace Model
{

  /**
   * An OriginEndpoint resource configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/OriginEndpoint">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIAPACKAGE_API OriginEndpoint
  {
  public:
    OriginEndpoint();
    OriginEndpoint(Aws::Utils::Json::JsonView jsonValue);
    OriginEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The Amazon Resource Name (ARN) assigned to the OriginEndpoint.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The Amazon Resource Name (ARN) assigned to the OriginEndpoint.
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) assigned to the OriginEndpoint.
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * The Amazon Resource Name (ARN) assigned to the OriginEndpoint.
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) assigned to the OriginEndpoint.
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) assigned to the OriginEndpoint.
     */
    inline OriginEndpoint& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) assigned to the OriginEndpoint.
     */
    inline OriginEndpoint& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) assigned to the OriginEndpoint.
     */
    inline OriginEndpoint& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * The ID of the Channel the OriginEndpoint is associated with.
     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }

    /**
     * The ID of the Channel the OriginEndpoint is associated with.
     */
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }

    /**
     * The ID of the Channel the OriginEndpoint is associated with.
     */
    inline void SetChannelId(const Aws::String& value) { m_channelIdHasBeenSet = true; m_channelId = value; }

    /**
     * The ID of the Channel the OriginEndpoint is associated with.
     */
    inline void SetChannelId(Aws::String&& value) { m_channelIdHasBeenSet = true; m_channelId = std::move(value); }

    /**
     * The ID of the Channel the OriginEndpoint is associated with.
     */
    inline void SetChannelId(const char* value) { m_channelIdHasBeenSet = true; m_channelId.assign(value); }

    /**
     * The ID of the Channel the OriginEndpoint is associated with.
     */
    inline OriginEndpoint& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}

    /**
     * The ID of the Channel the OriginEndpoint is associated with.
     */
    inline OriginEndpoint& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}

    /**
     * The ID of the Channel the OriginEndpoint is associated with.
     */
    inline OriginEndpoint& WithChannelId(const char* value) { SetChannelId(value); return *this;}


    
    inline const CmafPackage& GetCmafPackage() const{ return m_cmafPackage; }

    
    inline bool CmafPackageHasBeenSet() const { return m_cmafPackageHasBeenSet; }

    
    inline void SetCmafPackage(const CmafPackage& value) { m_cmafPackageHasBeenSet = true; m_cmafPackage = value; }

    
    inline void SetCmafPackage(CmafPackage&& value) { m_cmafPackageHasBeenSet = true; m_cmafPackage = std::move(value); }

    
    inline OriginEndpoint& WithCmafPackage(const CmafPackage& value) { SetCmafPackage(value); return *this;}

    
    inline OriginEndpoint& WithCmafPackage(CmafPackage&& value) { SetCmafPackage(std::move(value)); return *this;}


    
    inline const DashPackage& GetDashPackage() const{ return m_dashPackage; }

    
    inline bool DashPackageHasBeenSet() const { return m_dashPackageHasBeenSet; }

    
    inline void SetDashPackage(const DashPackage& value) { m_dashPackageHasBeenSet = true; m_dashPackage = value; }

    
    inline void SetDashPackage(DashPackage&& value) { m_dashPackageHasBeenSet = true; m_dashPackage = std::move(value); }

    
    inline OriginEndpoint& WithDashPackage(const DashPackage& value) { SetDashPackage(value); return *this;}

    
    inline OriginEndpoint& WithDashPackage(DashPackage&& value) { SetDashPackage(std::move(value)); return *this;}


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
    inline OriginEndpoint& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A short text description of the OriginEndpoint.
     */
    inline OriginEndpoint& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A short text description of the OriginEndpoint.
     */
    inline OriginEndpoint& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const HlsPackage& GetHlsPackage() const{ return m_hlsPackage; }

    
    inline bool HlsPackageHasBeenSet() const { return m_hlsPackageHasBeenSet; }

    
    inline void SetHlsPackage(const HlsPackage& value) { m_hlsPackageHasBeenSet = true; m_hlsPackage = value; }

    
    inline void SetHlsPackage(HlsPackage&& value) { m_hlsPackageHasBeenSet = true; m_hlsPackage = std::move(value); }

    
    inline OriginEndpoint& WithHlsPackage(const HlsPackage& value) { SetHlsPackage(value); return *this;}

    
    inline OriginEndpoint& WithHlsPackage(HlsPackage&& value) { SetHlsPackage(std::move(value)); return *this;}


    /**
     * The ID of the OriginEndpoint.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of the OriginEndpoint.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The ID of the OriginEndpoint.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The ID of the OriginEndpoint.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The ID of the OriginEndpoint.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The ID of the OriginEndpoint.
     */
    inline OriginEndpoint& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of the OriginEndpoint.
     */
    inline OriginEndpoint& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of the OriginEndpoint.
     */
    inline OriginEndpoint& WithId(const char* value) { SetId(value); return *this;}


    /**
     * A short string appended to the end of the OriginEndpoint URL.
     */
    inline const Aws::String& GetManifestName() const{ return m_manifestName; }

    /**
     * A short string appended to the end of the OriginEndpoint URL.
     */
    inline bool ManifestNameHasBeenSet() const { return m_manifestNameHasBeenSet; }

    /**
     * A short string appended to the end of the OriginEndpoint URL.
     */
    inline void SetManifestName(const Aws::String& value) { m_manifestNameHasBeenSet = true; m_manifestName = value; }

    /**
     * A short string appended to the end of the OriginEndpoint URL.
     */
    inline void SetManifestName(Aws::String&& value) { m_manifestNameHasBeenSet = true; m_manifestName = std::move(value); }

    /**
     * A short string appended to the end of the OriginEndpoint URL.
     */
    inline void SetManifestName(const char* value) { m_manifestNameHasBeenSet = true; m_manifestName.assign(value); }

    /**
     * A short string appended to the end of the OriginEndpoint URL.
     */
    inline OriginEndpoint& WithManifestName(const Aws::String& value) { SetManifestName(value); return *this;}

    /**
     * A short string appended to the end of the OriginEndpoint URL.
     */
    inline OriginEndpoint& WithManifestName(Aws::String&& value) { SetManifestName(std::move(value)); return *this;}

    /**
     * A short string appended to the end of the OriginEndpoint URL.
     */
    inline OriginEndpoint& WithManifestName(const char* value) { SetManifestName(value); return *this;}


    
    inline const MssPackage& GetMssPackage() const{ return m_mssPackage; }

    
    inline bool MssPackageHasBeenSet() const { return m_mssPackageHasBeenSet; }

    
    inline void SetMssPackage(const MssPackage& value) { m_mssPackageHasBeenSet = true; m_mssPackage = value; }

    
    inline void SetMssPackage(MssPackage&& value) { m_mssPackageHasBeenSet = true; m_mssPackage = std::move(value); }

    
    inline OriginEndpoint& WithMssPackage(const MssPackage& value) { SetMssPackage(value); return *this;}

    
    inline OriginEndpoint& WithMssPackage(MssPackage&& value) { SetMssPackage(std::move(value)); return *this;}


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
    inline OriginEndpoint& WithStartoverWindowSeconds(int value) { SetStartoverWindowSeconds(value); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline OriginEndpoint& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline OriginEndpoint& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline OriginEndpoint& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    
    inline OriginEndpoint& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline OriginEndpoint& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline OriginEndpoint& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline OriginEndpoint& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline OriginEndpoint& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline OriginEndpoint& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


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
    inline OriginEndpoint& WithTimeDelaySeconds(int value) { SetTimeDelaySeconds(value); return *this;}


    /**
     * The URL of the packaged OriginEndpoint for consumption.
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * The URL of the packaged OriginEndpoint for consumption.
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * The URL of the packaged OriginEndpoint for consumption.
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * The URL of the packaged OriginEndpoint for consumption.
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * The URL of the packaged OriginEndpoint for consumption.
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * The URL of the packaged OriginEndpoint for consumption.
     */
    inline OriginEndpoint& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * The URL of the packaged OriginEndpoint for consumption.
     */
    inline OriginEndpoint& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * The URL of the packaged OriginEndpoint for consumption.
     */
    inline OriginEndpoint& WithUrl(const char* value) { SetUrl(value); return *this;}


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
    inline OriginEndpoint& WithWhitelist(const Aws::Vector<Aws::String>& value) { SetWhitelist(value); return *this;}

    /**
     * A list of source IP CIDR blocks that will be allowed to access the
     * OriginEndpoint.
     */
    inline OriginEndpoint& WithWhitelist(Aws::Vector<Aws::String>&& value) { SetWhitelist(std::move(value)); return *this;}

    /**
     * A list of source IP CIDR blocks that will be allowed to access the
     * OriginEndpoint.
     */
    inline OriginEndpoint& AddWhitelist(const Aws::String& value) { m_whitelistHasBeenSet = true; m_whitelist.push_back(value); return *this; }

    /**
     * A list of source IP CIDR blocks that will be allowed to access the
     * OriginEndpoint.
     */
    inline OriginEndpoint& AddWhitelist(Aws::String&& value) { m_whitelistHasBeenSet = true; m_whitelist.push_back(std::move(value)); return *this; }

    /**
     * A list of source IP CIDR blocks that will be allowed to access the
     * OriginEndpoint.
     */
    inline OriginEndpoint& AddWhitelist(const char* value) { m_whitelistHasBeenSet = true; m_whitelist.push_back(value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet;

    CmafPackage m_cmafPackage;
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

    Aws::String m_url;
    bool m_urlHasBeenSet;

    Aws::Vector<Aws::String> m_whitelist;
    bool m_whitelistHasBeenSet;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
