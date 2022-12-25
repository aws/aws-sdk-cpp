/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/NimbleStudioRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/nimble/model/StreamConfigurationCreate.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

  /**
   */
  class UpdateLaunchProfileRequest : public NimbleStudioRequest
  {
  public:
    AWS_NIMBLESTUDIO_API UpdateLaunchProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLaunchProfile"; }

    AWS_NIMBLESTUDIO_API Aws::String SerializePayload() const override;

    AWS_NIMBLESTUDIO_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the Amazon Web Services SDK
     * automatically generates a client token and uses it for the request to ensure
     * idempotency.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the Amazon Web Services SDK
     * automatically generates a client token and uses it for the request to ensure
     * idempotency.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the Amazon Web Services SDK
     * automatically generates a client token and uses it for the request to ensure
     * idempotency.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the Amazon Web Services SDK
     * automatically generates a client token and uses it for the request to ensure
     * idempotency.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the Amazon Web Services SDK
     * automatically generates a client token and uses it for the request to ensure
     * idempotency.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the Amazon Web Services SDK
     * automatically generates a client token and uses it for the request to ensure
     * idempotency.</p>
     */
    inline UpdateLaunchProfileRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the Amazon Web Services SDK
     * automatically generates a client token and uses it for the request to ensure
     * idempotency.</p>
     */
    inline UpdateLaunchProfileRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the Amazon Web Services SDK
     * automatically generates a client token and uses it for the request to ensure
     * idempotency.</p>
     */
    inline UpdateLaunchProfileRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description.</p>
     */
    inline UpdateLaunchProfileRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description.</p>
     */
    inline UpdateLaunchProfileRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description.</p>
     */
    inline UpdateLaunchProfileRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID of the launch profile used to control access from the streaming
     * session.</p>
     */
    inline const Aws::String& GetLaunchProfileId() const{ return m_launchProfileId; }

    /**
     * <p>The ID of the launch profile used to control access from the streaming
     * session.</p>
     */
    inline bool LaunchProfileIdHasBeenSet() const { return m_launchProfileIdHasBeenSet; }

    /**
     * <p>The ID of the launch profile used to control access from the streaming
     * session.</p>
     */
    inline void SetLaunchProfileId(const Aws::String& value) { m_launchProfileIdHasBeenSet = true; m_launchProfileId = value; }

    /**
     * <p>The ID of the launch profile used to control access from the streaming
     * session.</p>
     */
    inline void SetLaunchProfileId(Aws::String&& value) { m_launchProfileIdHasBeenSet = true; m_launchProfileId = std::move(value); }

    /**
     * <p>The ID of the launch profile used to control access from the streaming
     * session.</p>
     */
    inline void SetLaunchProfileId(const char* value) { m_launchProfileIdHasBeenSet = true; m_launchProfileId.assign(value); }

    /**
     * <p>The ID of the launch profile used to control access from the streaming
     * session.</p>
     */
    inline UpdateLaunchProfileRequest& WithLaunchProfileId(const Aws::String& value) { SetLaunchProfileId(value); return *this;}

    /**
     * <p>The ID of the launch profile used to control access from the streaming
     * session.</p>
     */
    inline UpdateLaunchProfileRequest& WithLaunchProfileId(Aws::String&& value) { SetLaunchProfileId(std::move(value)); return *this;}

    /**
     * <p>The ID of the launch profile used to control access from the streaming
     * session.</p>
     */
    inline UpdateLaunchProfileRequest& WithLaunchProfileId(const char* value) { SetLaunchProfileId(value); return *this;}


    /**
     * <p>The version number of the protocol that is used by the launch profile. The
     * only valid version is "2021-03-31".</p>
     */
    inline const Aws::Vector<Aws::String>& GetLaunchProfileProtocolVersions() const{ return m_launchProfileProtocolVersions; }

    /**
     * <p>The version number of the protocol that is used by the launch profile. The
     * only valid version is "2021-03-31".</p>
     */
    inline bool LaunchProfileProtocolVersionsHasBeenSet() const { return m_launchProfileProtocolVersionsHasBeenSet; }

    /**
     * <p>The version number of the protocol that is used by the launch profile. The
     * only valid version is "2021-03-31".</p>
     */
    inline void SetLaunchProfileProtocolVersions(const Aws::Vector<Aws::String>& value) { m_launchProfileProtocolVersionsHasBeenSet = true; m_launchProfileProtocolVersions = value; }

    /**
     * <p>The version number of the protocol that is used by the launch profile. The
     * only valid version is "2021-03-31".</p>
     */
    inline void SetLaunchProfileProtocolVersions(Aws::Vector<Aws::String>&& value) { m_launchProfileProtocolVersionsHasBeenSet = true; m_launchProfileProtocolVersions = std::move(value); }

    /**
     * <p>The version number of the protocol that is used by the launch profile. The
     * only valid version is "2021-03-31".</p>
     */
    inline UpdateLaunchProfileRequest& WithLaunchProfileProtocolVersions(const Aws::Vector<Aws::String>& value) { SetLaunchProfileProtocolVersions(value); return *this;}

    /**
     * <p>The version number of the protocol that is used by the launch profile. The
     * only valid version is "2021-03-31".</p>
     */
    inline UpdateLaunchProfileRequest& WithLaunchProfileProtocolVersions(Aws::Vector<Aws::String>&& value) { SetLaunchProfileProtocolVersions(std::move(value)); return *this;}

    /**
     * <p>The version number of the protocol that is used by the launch profile. The
     * only valid version is "2021-03-31".</p>
     */
    inline UpdateLaunchProfileRequest& AddLaunchProfileProtocolVersions(const Aws::String& value) { m_launchProfileProtocolVersionsHasBeenSet = true; m_launchProfileProtocolVersions.push_back(value); return *this; }

    /**
     * <p>The version number of the protocol that is used by the launch profile. The
     * only valid version is "2021-03-31".</p>
     */
    inline UpdateLaunchProfileRequest& AddLaunchProfileProtocolVersions(Aws::String&& value) { m_launchProfileProtocolVersionsHasBeenSet = true; m_launchProfileProtocolVersions.push_back(std::move(value)); return *this; }

    /**
     * <p>The version number of the protocol that is used by the launch profile. The
     * only valid version is "2021-03-31".</p>
     */
    inline UpdateLaunchProfileRequest& AddLaunchProfileProtocolVersions(const char* value) { m_launchProfileProtocolVersionsHasBeenSet = true; m_launchProfileProtocolVersions.push_back(value); return *this; }


    /**
     * <p>The name for the launch profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the launch profile.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the launch profile.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the launch profile.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the launch profile.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the launch profile.</p>
     */
    inline UpdateLaunchProfileRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the launch profile.</p>
     */
    inline UpdateLaunchProfileRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the launch profile.</p>
     */
    inline UpdateLaunchProfileRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A configuration for a streaming session.</p>
     */
    inline const StreamConfigurationCreate& GetStreamConfiguration() const{ return m_streamConfiguration; }

    /**
     * <p>A configuration for a streaming session.</p>
     */
    inline bool StreamConfigurationHasBeenSet() const { return m_streamConfigurationHasBeenSet; }

    /**
     * <p>A configuration for a streaming session.</p>
     */
    inline void SetStreamConfiguration(const StreamConfigurationCreate& value) { m_streamConfigurationHasBeenSet = true; m_streamConfiguration = value; }

    /**
     * <p>A configuration for a streaming session.</p>
     */
    inline void SetStreamConfiguration(StreamConfigurationCreate&& value) { m_streamConfigurationHasBeenSet = true; m_streamConfiguration = std::move(value); }

    /**
     * <p>A configuration for a streaming session.</p>
     */
    inline UpdateLaunchProfileRequest& WithStreamConfiguration(const StreamConfigurationCreate& value) { SetStreamConfiguration(value); return *this;}

    /**
     * <p>A configuration for a streaming session.</p>
     */
    inline UpdateLaunchProfileRequest& WithStreamConfiguration(StreamConfigurationCreate&& value) { SetStreamConfiguration(std::move(value)); return *this;}


    /**
     * <p>Unique identifiers for a collection of studio components that can be used
     * with this launch profile.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStudioComponentIds() const{ return m_studioComponentIds; }

    /**
     * <p>Unique identifiers for a collection of studio components that can be used
     * with this launch profile.</p>
     */
    inline bool StudioComponentIdsHasBeenSet() const { return m_studioComponentIdsHasBeenSet; }

    /**
     * <p>Unique identifiers for a collection of studio components that can be used
     * with this launch profile.</p>
     */
    inline void SetStudioComponentIds(const Aws::Vector<Aws::String>& value) { m_studioComponentIdsHasBeenSet = true; m_studioComponentIds = value; }

    /**
     * <p>Unique identifiers for a collection of studio components that can be used
     * with this launch profile.</p>
     */
    inline void SetStudioComponentIds(Aws::Vector<Aws::String>&& value) { m_studioComponentIdsHasBeenSet = true; m_studioComponentIds = std::move(value); }

    /**
     * <p>Unique identifiers for a collection of studio components that can be used
     * with this launch profile.</p>
     */
    inline UpdateLaunchProfileRequest& WithStudioComponentIds(const Aws::Vector<Aws::String>& value) { SetStudioComponentIds(value); return *this;}

    /**
     * <p>Unique identifiers for a collection of studio components that can be used
     * with this launch profile.</p>
     */
    inline UpdateLaunchProfileRequest& WithStudioComponentIds(Aws::Vector<Aws::String>&& value) { SetStudioComponentIds(std::move(value)); return *this;}

    /**
     * <p>Unique identifiers for a collection of studio components that can be used
     * with this launch profile.</p>
     */
    inline UpdateLaunchProfileRequest& AddStudioComponentIds(const Aws::String& value) { m_studioComponentIdsHasBeenSet = true; m_studioComponentIds.push_back(value); return *this; }

    /**
     * <p>Unique identifiers for a collection of studio components that can be used
     * with this launch profile.</p>
     */
    inline UpdateLaunchProfileRequest& AddStudioComponentIds(Aws::String&& value) { m_studioComponentIdsHasBeenSet = true; m_studioComponentIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Unique identifiers for a collection of studio components that can be used
     * with this launch profile.</p>
     */
    inline UpdateLaunchProfileRequest& AddStudioComponentIds(const char* value) { m_studioComponentIdsHasBeenSet = true; m_studioComponentIds.push_back(value); return *this; }


    /**
     * <p>The studio ID. </p>
     */
    inline const Aws::String& GetStudioId() const{ return m_studioId; }

    /**
     * <p>The studio ID. </p>
     */
    inline bool StudioIdHasBeenSet() const { return m_studioIdHasBeenSet; }

    /**
     * <p>The studio ID. </p>
     */
    inline void SetStudioId(const Aws::String& value) { m_studioIdHasBeenSet = true; m_studioId = value; }

    /**
     * <p>The studio ID. </p>
     */
    inline void SetStudioId(Aws::String&& value) { m_studioIdHasBeenSet = true; m_studioId = std::move(value); }

    /**
     * <p>The studio ID. </p>
     */
    inline void SetStudioId(const char* value) { m_studioIdHasBeenSet = true; m_studioId.assign(value); }

    /**
     * <p>The studio ID. </p>
     */
    inline UpdateLaunchProfileRequest& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}

    /**
     * <p>The studio ID. </p>
     */
    inline UpdateLaunchProfileRequest& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}

    /**
     * <p>The studio ID. </p>
     */
    inline UpdateLaunchProfileRequest& WithStudioId(const char* value) { SetStudioId(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_launchProfileId;
    bool m_launchProfileIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_launchProfileProtocolVersions;
    bool m_launchProfileProtocolVersionsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    StreamConfigurationCreate m_streamConfiguration;
    bool m_streamConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_studioComponentIds;
    bool m_studioComponentIdsHasBeenSet = false;

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
