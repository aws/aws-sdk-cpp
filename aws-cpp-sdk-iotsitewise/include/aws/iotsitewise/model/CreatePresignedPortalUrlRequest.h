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


    
    inline const Aws::String& GetPortalId() const{ return m_portalId; }

    
    inline bool PortalIdHasBeenSet() const { return m_portalIdHasBeenSet; }

    
    inline void SetPortalId(const Aws::String& value) { m_portalIdHasBeenSet = true; m_portalId = value; }

    
    inline void SetPortalId(Aws::String&& value) { m_portalIdHasBeenSet = true; m_portalId = std::move(value); }

    
    inline void SetPortalId(const char* value) { m_portalIdHasBeenSet = true; m_portalId.assign(value); }

    
    inline CreatePresignedPortalUrlRequest& WithPortalId(const Aws::String& value) { SetPortalId(value); return *this;}

    
    inline CreatePresignedPortalUrlRequest& WithPortalId(Aws::String&& value) { SetPortalId(std::move(value)); return *this;}

    
    inline CreatePresignedPortalUrlRequest& WithPortalId(const char* value) { SetPortalId(value); return *this;}


    
    inline int GetSessionDurationSeconds() const{ return m_sessionDurationSeconds; }

    
    inline bool SessionDurationSecondsHasBeenSet() const { return m_sessionDurationSecondsHasBeenSet; }

    
    inline void SetSessionDurationSeconds(int value) { m_sessionDurationSecondsHasBeenSet = true; m_sessionDurationSeconds = value; }

    
    inline CreatePresignedPortalUrlRequest& WithSessionDurationSeconds(int value) { SetSessionDurationSeconds(value); return *this;}


    
    inline const Aws::String& GetState() const{ return m_state; }

    
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    
    inline CreatePresignedPortalUrlRequest& WithState(const Aws::String& value) { SetState(value); return *this;}

    
    inline CreatePresignedPortalUrlRequest& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    
    inline CreatePresignedPortalUrlRequest& WithState(const char* value) { SetState(value); return *this;}

  private:

    Aws::String m_portalId;
    bool m_portalIdHasBeenSet;

    int m_sessionDurationSeconds;
    bool m_sessionDurationSecondsHasBeenSet;

    Aws::String m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
