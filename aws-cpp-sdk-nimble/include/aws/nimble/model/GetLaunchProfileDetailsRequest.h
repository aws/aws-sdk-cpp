﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/NimbleStudioRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

  /**
   */
  class AWS_NIMBLESTUDIO_API GetLaunchProfileDetailsRequest : public NimbleStudioRequest
  {
  public:
    GetLaunchProfileDetailsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLaunchProfileDetails"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The Launch Profile ID.</p>
     */
    inline const Aws::String& GetLaunchProfileId() const{ return m_launchProfileId; }

    /**
     * <p>The Launch Profile ID.</p>
     */
    inline bool LaunchProfileIdHasBeenSet() const { return m_launchProfileIdHasBeenSet; }

    /**
     * <p>The Launch Profile ID.</p>
     */
    inline void SetLaunchProfileId(const Aws::String& value) { m_launchProfileIdHasBeenSet = true; m_launchProfileId = value; }

    /**
     * <p>The Launch Profile ID.</p>
     */
    inline void SetLaunchProfileId(Aws::String&& value) { m_launchProfileIdHasBeenSet = true; m_launchProfileId = std::move(value); }

    /**
     * <p>The Launch Profile ID.</p>
     */
    inline void SetLaunchProfileId(const char* value) { m_launchProfileIdHasBeenSet = true; m_launchProfileId.assign(value); }

    /**
     * <p>The Launch Profile ID.</p>
     */
    inline GetLaunchProfileDetailsRequest& WithLaunchProfileId(const Aws::String& value) { SetLaunchProfileId(value); return *this;}

    /**
     * <p>The Launch Profile ID.</p>
     */
    inline GetLaunchProfileDetailsRequest& WithLaunchProfileId(Aws::String&& value) { SetLaunchProfileId(std::move(value)); return *this;}

    /**
     * <p>The Launch Profile ID.</p>
     */
    inline GetLaunchProfileDetailsRequest& WithLaunchProfileId(const char* value) { SetLaunchProfileId(value); return *this;}


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
    inline GetLaunchProfileDetailsRequest& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}

    /**
     * <p>The studio ID. </p>
     */
    inline GetLaunchProfileDetailsRequest& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}

    /**
     * <p>The studio ID. </p>
     */
    inline GetLaunchProfileDetailsRequest& WithStudioId(const char* value) { SetStudioId(value); return *this;}

  private:

    Aws::String m_launchProfileId;
    bool m_launchProfileIdHasBeenSet;

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
