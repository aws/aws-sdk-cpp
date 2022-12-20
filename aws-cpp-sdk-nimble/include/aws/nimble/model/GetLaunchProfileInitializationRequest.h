/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/NimbleStudioRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace NimbleStudio
{
namespace Model
{

  /**
   */
  class GetLaunchProfileInitializationRequest : public NimbleStudioRequest
  {
  public:
    AWS_NIMBLESTUDIO_API GetLaunchProfileInitializationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLaunchProfileInitialization"; }

    AWS_NIMBLESTUDIO_API Aws::String SerializePayload() const override;

    AWS_NIMBLESTUDIO_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
    inline GetLaunchProfileInitializationRequest& WithLaunchProfileId(const Aws::String& value) { SetLaunchProfileId(value); return *this;}

    /**
     * <p>The ID of the launch profile used to control access from the streaming
     * session.</p>
     */
    inline GetLaunchProfileInitializationRequest& WithLaunchProfileId(Aws::String&& value) { SetLaunchProfileId(std::move(value)); return *this;}

    /**
     * <p>The ID of the launch profile used to control access from the streaming
     * session.</p>
     */
    inline GetLaunchProfileInitializationRequest& WithLaunchProfileId(const char* value) { SetLaunchProfileId(value); return *this;}


    /**
     * <p>The launch profile protocol versions supported by the client.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLaunchProfileProtocolVersions() const{ return m_launchProfileProtocolVersions; }

    /**
     * <p>The launch profile protocol versions supported by the client.</p>
     */
    inline bool LaunchProfileProtocolVersionsHasBeenSet() const { return m_launchProfileProtocolVersionsHasBeenSet; }

    /**
     * <p>The launch profile protocol versions supported by the client.</p>
     */
    inline void SetLaunchProfileProtocolVersions(const Aws::Vector<Aws::String>& value) { m_launchProfileProtocolVersionsHasBeenSet = true; m_launchProfileProtocolVersions = value; }

    /**
     * <p>The launch profile protocol versions supported by the client.</p>
     */
    inline void SetLaunchProfileProtocolVersions(Aws::Vector<Aws::String>&& value) { m_launchProfileProtocolVersionsHasBeenSet = true; m_launchProfileProtocolVersions = std::move(value); }

    /**
     * <p>The launch profile protocol versions supported by the client.</p>
     */
    inline GetLaunchProfileInitializationRequest& WithLaunchProfileProtocolVersions(const Aws::Vector<Aws::String>& value) { SetLaunchProfileProtocolVersions(value); return *this;}

    /**
     * <p>The launch profile protocol versions supported by the client.</p>
     */
    inline GetLaunchProfileInitializationRequest& WithLaunchProfileProtocolVersions(Aws::Vector<Aws::String>&& value) { SetLaunchProfileProtocolVersions(std::move(value)); return *this;}

    /**
     * <p>The launch profile protocol versions supported by the client.</p>
     */
    inline GetLaunchProfileInitializationRequest& AddLaunchProfileProtocolVersions(const Aws::String& value) { m_launchProfileProtocolVersionsHasBeenSet = true; m_launchProfileProtocolVersions.push_back(value); return *this; }

    /**
     * <p>The launch profile protocol versions supported by the client.</p>
     */
    inline GetLaunchProfileInitializationRequest& AddLaunchProfileProtocolVersions(Aws::String&& value) { m_launchProfileProtocolVersionsHasBeenSet = true; m_launchProfileProtocolVersions.push_back(std::move(value)); return *this; }

    /**
     * <p>The launch profile protocol versions supported by the client.</p>
     */
    inline GetLaunchProfileInitializationRequest& AddLaunchProfileProtocolVersions(const char* value) { m_launchProfileProtocolVersionsHasBeenSet = true; m_launchProfileProtocolVersions.push_back(value); return *this; }


    /**
     * <p>The launch purpose.</p>
     */
    inline const Aws::String& GetLaunchPurpose() const{ return m_launchPurpose; }

    /**
     * <p>The launch purpose.</p>
     */
    inline bool LaunchPurposeHasBeenSet() const { return m_launchPurposeHasBeenSet; }

    /**
     * <p>The launch purpose.</p>
     */
    inline void SetLaunchPurpose(const Aws::String& value) { m_launchPurposeHasBeenSet = true; m_launchPurpose = value; }

    /**
     * <p>The launch purpose.</p>
     */
    inline void SetLaunchPurpose(Aws::String&& value) { m_launchPurposeHasBeenSet = true; m_launchPurpose = std::move(value); }

    /**
     * <p>The launch purpose.</p>
     */
    inline void SetLaunchPurpose(const char* value) { m_launchPurposeHasBeenSet = true; m_launchPurpose.assign(value); }

    /**
     * <p>The launch purpose.</p>
     */
    inline GetLaunchProfileInitializationRequest& WithLaunchPurpose(const Aws::String& value) { SetLaunchPurpose(value); return *this;}

    /**
     * <p>The launch purpose.</p>
     */
    inline GetLaunchProfileInitializationRequest& WithLaunchPurpose(Aws::String&& value) { SetLaunchPurpose(std::move(value)); return *this;}

    /**
     * <p>The launch purpose.</p>
     */
    inline GetLaunchProfileInitializationRequest& WithLaunchPurpose(const char* value) { SetLaunchPurpose(value); return *this;}


    /**
     * <p>The platform where this Launch Profile will be used, either Windows or
     * Linux.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }

    /**
     * <p>The platform where this Launch Profile will be used, either Windows or
     * Linux.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The platform where this Launch Profile will be used, either Windows or
     * Linux.</p>
     */
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The platform where this Launch Profile will be used, either Windows or
     * Linux.</p>
     */
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The platform where this Launch Profile will be used, either Windows or
     * Linux.</p>
     */
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }

    /**
     * <p>The platform where this Launch Profile will be used, either Windows or
     * Linux.</p>
     */
    inline GetLaunchProfileInitializationRequest& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}

    /**
     * <p>The platform where this Launch Profile will be used, either Windows or
     * Linux.</p>
     */
    inline GetLaunchProfileInitializationRequest& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}

    /**
     * <p>The platform where this Launch Profile will be used, either Windows or
     * Linux.</p>
     */
    inline GetLaunchProfileInitializationRequest& WithPlatform(const char* value) { SetPlatform(value); return *this;}


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
    inline GetLaunchProfileInitializationRequest& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}

    /**
     * <p>The studio ID. </p>
     */
    inline GetLaunchProfileInitializationRequest& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}

    /**
     * <p>The studio ID. </p>
     */
    inline GetLaunchProfileInitializationRequest& WithStudioId(const char* value) { SetStudioId(value); return *this;}

  private:

    Aws::String m_launchProfileId;
    bool m_launchProfileIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_launchProfileProtocolVersions;
    bool m_launchProfileProtocolVersionsHasBeenSet = false;

    Aws::String m_launchPurpose;
    bool m_launchPurposeHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
