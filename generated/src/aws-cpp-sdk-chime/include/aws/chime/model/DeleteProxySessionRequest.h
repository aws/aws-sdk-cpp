/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class DeleteProxySessionRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API DeleteProxySessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteProxySession"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Chime voice connector ID.</p>
     */
    inline const Aws::String& GetVoiceConnectorId() const{ return m_voiceConnectorId; }

    /**
     * <p>The Amazon Chime voice connector ID.</p>
     */
    inline bool VoiceConnectorIdHasBeenSet() const { return m_voiceConnectorIdHasBeenSet; }

    /**
     * <p>The Amazon Chime voice connector ID.</p>
     */
    inline void SetVoiceConnectorId(const Aws::String& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = value; }

    /**
     * <p>The Amazon Chime voice connector ID.</p>
     */
    inline void SetVoiceConnectorId(Aws::String&& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = std::move(value); }

    /**
     * <p>The Amazon Chime voice connector ID.</p>
     */
    inline void SetVoiceConnectorId(const char* value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId.assign(value); }

    /**
     * <p>The Amazon Chime voice connector ID.</p>
     */
    inline DeleteProxySessionRequest& WithVoiceConnectorId(const Aws::String& value) { SetVoiceConnectorId(value); return *this;}

    /**
     * <p>The Amazon Chime voice connector ID.</p>
     */
    inline DeleteProxySessionRequest& WithVoiceConnectorId(Aws::String&& value) { SetVoiceConnectorId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime voice connector ID.</p>
     */
    inline DeleteProxySessionRequest& WithVoiceConnectorId(const char* value) { SetVoiceConnectorId(value); return *this;}


    /**
     * <p>The proxy session ID.</p>
     */
    inline const Aws::String& GetProxySessionId() const{ return m_proxySessionId; }

    /**
     * <p>The proxy session ID.</p>
     */
    inline bool ProxySessionIdHasBeenSet() const { return m_proxySessionIdHasBeenSet; }

    /**
     * <p>The proxy session ID.</p>
     */
    inline void SetProxySessionId(const Aws::String& value) { m_proxySessionIdHasBeenSet = true; m_proxySessionId = value; }

    /**
     * <p>The proxy session ID.</p>
     */
    inline void SetProxySessionId(Aws::String&& value) { m_proxySessionIdHasBeenSet = true; m_proxySessionId = std::move(value); }

    /**
     * <p>The proxy session ID.</p>
     */
    inline void SetProxySessionId(const char* value) { m_proxySessionIdHasBeenSet = true; m_proxySessionId.assign(value); }

    /**
     * <p>The proxy session ID.</p>
     */
    inline DeleteProxySessionRequest& WithProxySessionId(const Aws::String& value) { SetProxySessionId(value); return *this;}

    /**
     * <p>The proxy session ID.</p>
     */
    inline DeleteProxySessionRequest& WithProxySessionId(Aws::String&& value) { SetProxySessionId(std::move(value)); return *this;}

    /**
     * <p>The proxy session ID.</p>
     */
    inline DeleteProxySessionRequest& WithProxySessionId(const char* value) { SetProxySessionId(value); return *this;}

  private:

    Aws::String m_voiceConnectorId;
    bool m_voiceConnectorIdHasBeenSet = false;

    Aws::String m_proxySessionId;
    bool m_proxySessionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
