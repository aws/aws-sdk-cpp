/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class AWS_IOTSITEWISE_API CreatePresignedPortalUrlRequest : public IoTSiteWiseRequest
  {
  public:
    CreatePresignedPortalUrlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePresignedPortalUrl"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the portal to access.</p>
     */
    inline const Aws::String& GetPortalId() const{ return m_portalId; }

    /**
     * <p>The ID of the portal to access.</p>
     */
    inline bool PortalIdHasBeenSet() const { return m_portalIdHasBeenSet; }

    /**
     * <p>The ID of the portal to access.</p>
     */
    inline void SetPortalId(const Aws::String& value) { m_portalIdHasBeenSet = true; m_portalId = value; }

    /**
     * <p>The ID of the portal to access.</p>
     */
    inline void SetPortalId(Aws::String&& value) { m_portalIdHasBeenSet = true; m_portalId = std::move(value); }

    /**
     * <p>The ID of the portal to access.</p>
     */
    inline void SetPortalId(const char* value) { m_portalIdHasBeenSet = true; m_portalId.assign(value); }

    /**
     * <p>The ID of the portal to access.</p>
     */
    inline CreatePresignedPortalUrlRequest& WithPortalId(const Aws::String& value) { SetPortalId(value); return *this;}

    /**
     * <p>The ID of the portal to access.</p>
     */
    inline CreatePresignedPortalUrlRequest& WithPortalId(Aws::String&& value) { SetPortalId(std::move(value)); return *this;}

    /**
     * <p>The ID of the portal to access.</p>
     */
    inline CreatePresignedPortalUrlRequest& WithPortalId(const char* value) { SetPortalId(value); return *this;}


    /**
     * <p>The duration (in seconds) for which the session at the URL is valid.</p>
     * <p>Default: 43,200 seconds (12 hours)</p>
     */
    inline int GetSessionDurationSeconds() const{ return m_sessionDurationSeconds; }

    /**
     * <p>The duration (in seconds) for which the session at the URL is valid.</p>
     * <p>Default: 43,200 seconds (12 hours)</p>
     */
    inline bool SessionDurationSecondsHasBeenSet() const { return m_sessionDurationSecondsHasBeenSet; }

    /**
     * <p>The duration (in seconds) for which the session at the URL is valid.</p>
     * <p>Default: 43,200 seconds (12 hours)</p>
     */
    inline void SetSessionDurationSeconds(int value) { m_sessionDurationSecondsHasBeenSet = true; m_sessionDurationSeconds = value; }

    /**
     * <p>The duration (in seconds) for which the session at the URL is valid.</p>
     * <p>Default: 43,200 seconds (12 hours)</p>
     */
    inline CreatePresignedPortalUrlRequest& WithSessionDurationSeconds(int value) { SetSessionDurationSeconds(value); return *this;}

  private:

    Aws::String m_portalId;
    bool m_portalIdHasBeenSet;

    int m_sessionDurationSeconds;
    bool m_sessionDurationSecondsHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
