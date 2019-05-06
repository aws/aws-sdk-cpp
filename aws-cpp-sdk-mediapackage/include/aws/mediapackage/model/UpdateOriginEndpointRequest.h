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
#include <aws/mediapackage/model/CmafPackageCreateOrUpdateParameters.h>
#include <aws/mediapackage/model/DashPackage.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage/model/HlsPackage.h>
#include <aws/mediapackage/model/MssPackage.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace MediaPackage
{
namespace Model
{

  /**
   * Configuration parameters used to update an existing OriginEndpoint.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/UpdateOriginEndpointRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIAPACKAGE_API UpdateOriginEndpointRequest : public MediaPackageRequest
  {
  public:
    UpdateOriginEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOriginEndpoint"; }

    Aws::String SerializePayload() const override;


    
    inline const CmafPackageCreateOrUpdateParameters& GetCmafPackage() const{ return m_cmafPackage; }

    
    inline bool CmafPackageHasBeenSet() const { return m_cmafPackageHasBeenSet; }

    
    inline void SetCmafPackage(const CmafPackageCreateOrUpdateParameters& value) { m_cmafPackageHasBeenSet = true; m_cmafPackage = value; }

    
    inline void SetCmafPackage(CmafPackageCreateOrUpdateParameters&& value) { m_cmafPackageHasBeenSet = true; m_cmafPackage = std::move(value); }

    
    inline UpdateOriginEndpointRequest& WithCmafPackage(const CmafPackageCreateOrUpdateParameters& value) { SetCmafPackage(value); return *this;}

    
    inline UpdateOriginEndpointRequest& WithCmafPackage(CmafPackageCreateOrUpdateParameters&& value) { SetCmafPackage(std::move(value)); return *this;}


    
    inline const DashPackage& GetDashPackage() const{ return m_dashPackage; }

    
    inline bool DashPackageHasBeenSet() const { return m_dashPackageHasBeenSet; }

    
    inline void SetDashPackage(const DashPackage& value) { m_dashPackageHasBeenSet = true; m_dashPackage = value; }

    
    inline void SetDashPackage(DashPackage&& value) { m_dashPackageHasBeenSet = true; m_dashPackage = std::move(value); }

    
    inline UpdateOriginEndpointRequest& WithDashPackage(const DashPackage& value) { SetDashPackage(value); return *this;}

    
    inline UpdateOriginEndpointRequest& WithDashPackage(DashPackage&& value) { SetDashPackage(std::move(value)); return *this;}


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
    inline UpdateOriginEndpointRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A short text description of the OriginEndpoint.
     */
    inline UpdateOriginEndpointRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A short text description of the OriginEndpoint.
     */
    inline UpdateOriginEndpointRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const HlsPackage& GetHlsPackage() const{ return m_hlsPackage; }

    
    inline bool HlsPackageHasBeenSet() const { return m_hlsPackageHasBeenSet; }

    
    inline void SetHlsPackage(const HlsPackage& value) { m_hlsPackageHasBeenSet = true; m_hlsPackage = value; }

    
    inline void SetHlsPackage(HlsPackage&& value) { m_hlsPackageHasBeenSet = true; m_hlsPackage = std::move(value); }

    
    inline UpdateOriginEndpointRequest& WithHlsPackage(const HlsPackage& value) { SetHlsPackage(value); return *this;}

    
    inline UpdateOriginEndpointRequest& WithHlsPackage(HlsPackage&& value) { SetHlsPackage(std::move(value)); return *this;}


    /**
     * The ID of the OriginEndpoint to update.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of the OriginEndpoint to update.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The ID of the OriginEndpoint to update.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The ID of the OriginEndpoint to update.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The ID of the OriginEndpoint to update.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The ID of the OriginEndpoint to update.
     */
    inline UpdateOriginEndpointRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of the OriginEndpoint to update.
     */
    inline UpdateOriginEndpointRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of the OriginEndpoint to update.
     */
    inline UpdateOriginEndpointRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * A short string that will be appended to the end of the Endpoint URL.
     */
    inline const Aws::String& GetManifestName() const{ return m_manifestName; }

    /**
     * A short string that will be appended to the end of the Endpoint URL.
     */
    inline bool ManifestNameHasBeenSet() const { return m_manifestNameHasBeenSet; }

    /**
     * A short string that will be appended to the end of the Endpoint URL.
     */
    inline void SetManifestName(const Aws::String& value) { m_manifestNameHasBeenSet = true; m_manifestName = value; }

    /**
     * A short string that will be appended to the end of the Endpoint URL.
     */
    inline void SetManifestName(Aws::String&& value) { m_manifestNameHasBeenSet = true; m_manifestName = std::move(value); }

    /**
     * A short string that will be appended to the end of the Endpoint URL.
     */
    inline void SetManifestName(const char* value) { m_manifestNameHasBeenSet = true; m_manifestName.assign(value); }

    /**
     * A short string that will be appended to the end of the Endpoint URL.
     */
    inline UpdateOriginEndpointRequest& WithManifestName(const Aws::String& value) { SetManifestName(value); return *this;}

    /**
     * A short string that will be appended to the end of the Endpoint URL.
     */
    inline UpdateOriginEndpointRequest& WithManifestName(Aws::String&& value) { SetManifestName(std::move(value)); return *this;}

    /**
     * A short string that will be appended to the end of the Endpoint URL.
     */
    inline UpdateOriginEndpointRequest& WithManifestName(const char* value) { SetManifestName(value); return *this;}


    
    inline const MssPackage& GetMssPackage() const{ return m_mssPackage; }

    
    inline bool MssPackageHasBeenSet() const { return m_mssPackageHasBeenSet; }

    
    inline void SetMssPackage(const MssPackage& value) { m_mssPackageHasBeenSet = true; m_mssPackage = value; }

    
    inline void SetMssPackage(MssPackage&& value) { m_mssPackageHasBeenSet = true; m_mssPackage = std::move(value); }

    
    inline UpdateOriginEndpointRequest& WithMssPackage(const MssPackage& value) { SetMssPackage(value); return *this;}

    
    inline UpdateOriginEndpointRequest& WithMssPackage(MssPackage&& value) { SetMssPackage(std::move(value)); return *this;}


    /**
     * Maximum duration (in seconds) of content to retain for startover playback.
If
     * not specified, startover playback will be disabled for the OriginEndpoint.

     */
    inline int GetStartoverWindowSeconds() const{ return m_startoverWindowSeconds; }

    /**
     * Maximum duration (in seconds) of content to retain for startover playback.
If
     * not specified, startover playback will be disabled for the OriginEndpoint.

     */
    inline bool StartoverWindowSecondsHasBeenSet() const { return m_startoverWindowSecondsHasBeenSet; }

    /**
     * Maximum duration (in seconds) of content to retain for startover playback.
If
     * not specified, startover playback will be disabled for the OriginEndpoint.

     */
    inline void SetStartoverWindowSeconds(int value) { m_startoverWindowSecondsHasBeenSet = true; m_startoverWindowSeconds = value; }

    /**
     * Maximum duration (in seconds) of content to retain for startover playback.
If
     * not specified, startover playback will be disabled for the OriginEndpoint.

     */
    inline UpdateOriginEndpointRequest& WithStartoverWindowSeconds(int value) { SetStartoverWindowSeconds(value); return *this;}


    /**
     * Amount of delay (in seconds) to enforce on the playback of live content.
If not
     * specified, there will be no time delay in effect for the OriginEndpoint.

     */
    inline int GetTimeDelaySeconds() const{ return m_timeDelaySeconds; }

    /**
     * Amount of delay (in seconds) to enforce on the playback of live content.
If not
     * specified, there will be no time delay in effect for the OriginEndpoint.

     */
    inline bool TimeDelaySecondsHasBeenSet() const { return m_timeDelaySecondsHasBeenSet; }

    /**
     * Amount of delay (in seconds) to enforce on the playback of live content.
If not
     * specified, there will be no time delay in effect for the OriginEndpoint.

     */
    inline void SetTimeDelaySeconds(int value) { m_timeDelaySecondsHasBeenSet = true; m_timeDelaySeconds = value; }

    /**
     * Amount of delay (in seconds) to enforce on the playback of live content.
If not
     * specified, there will be no time delay in effect for the OriginEndpoint.

     */
    inline UpdateOriginEndpointRequest& WithTimeDelaySeconds(int value) { SetTimeDelaySeconds(value); return *this;}


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
    inline UpdateOriginEndpointRequest& WithWhitelist(const Aws::Vector<Aws::String>& value) { SetWhitelist(value); return *this;}

    /**
     * A list of source IP CIDR blocks that will be allowed to access the
     * OriginEndpoint.
     */
    inline UpdateOriginEndpointRequest& WithWhitelist(Aws::Vector<Aws::String>&& value) { SetWhitelist(std::move(value)); return *this;}

    /**
     * A list of source IP CIDR blocks that will be allowed to access the
     * OriginEndpoint.
     */
    inline UpdateOriginEndpointRequest& AddWhitelist(const Aws::String& value) { m_whitelistHasBeenSet = true; m_whitelist.push_back(value); return *this; }

    /**
     * A list of source IP CIDR blocks that will be allowed to access the
     * OriginEndpoint.
     */
    inline UpdateOriginEndpointRequest& AddWhitelist(Aws::String&& value) { m_whitelistHasBeenSet = true; m_whitelist.push_back(std::move(value)); return *this; }

    /**
     * A list of source IP CIDR blocks that will be allowed to access the
     * OriginEndpoint.
     */
    inline UpdateOriginEndpointRequest& AddWhitelist(const char* value) { m_whitelistHasBeenSet = true; m_whitelist.push_back(value); return *this; }

  private:

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

    int m_timeDelaySeconds;
    bool m_timeDelaySecondsHasBeenSet;

    Aws::Vector<Aws::String> m_whitelist;
    bool m_whitelistHasBeenSet;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
