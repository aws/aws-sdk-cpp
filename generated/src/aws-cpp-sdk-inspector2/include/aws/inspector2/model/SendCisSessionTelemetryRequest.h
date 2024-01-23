/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/CisSessionMessage.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class SendCisSessionTelemetryRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API SendCisSessionTelemetryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendCisSessionTelemetry"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    /**
     * <p>The CIS session telemetry messages.</p>
     */
    inline const Aws::Vector<CisSessionMessage>& GetMessages() const{ return m_messages; }

    /**
     * <p>The CIS session telemetry messages.</p>
     */
    inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }

    /**
     * <p>The CIS session telemetry messages.</p>
     */
    inline void SetMessages(const Aws::Vector<CisSessionMessage>& value) { m_messagesHasBeenSet = true; m_messages = value; }

    /**
     * <p>The CIS session telemetry messages.</p>
     */
    inline void SetMessages(Aws::Vector<CisSessionMessage>&& value) { m_messagesHasBeenSet = true; m_messages = std::move(value); }

    /**
     * <p>The CIS session telemetry messages.</p>
     */
    inline SendCisSessionTelemetryRequest& WithMessages(const Aws::Vector<CisSessionMessage>& value) { SetMessages(value); return *this;}

    /**
     * <p>The CIS session telemetry messages.</p>
     */
    inline SendCisSessionTelemetryRequest& WithMessages(Aws::Vector<CisSessionMessage>&& value) { SetMessages(std::move(value)); return *this;}

    /**
     * <p>The CIS session telemetry messages.</p>
     */
    inline SendCisSessionTelemetryRequest& AddMessages(const CisSessionMessage& value) { m_messagesHasBeenSet = true; m_messages.push_back(value); return *this; }

    /**
     * <p>The CIS session telemetry messages.</p>
     */
    inline SendCisSessionTelemetryRequest& AddMessages(CisSessionMessage&& value) { m_messagesHasBeenSet = true; m_messages.push_back(std::move(value)); return *this; }


    /**
     * <p>A unique identifier for the scan job.</p>
     */
    inline const Aws::String& GetScanJobId() const{ return m_scanJobId; }

    /**
     * <p>A unique identifier for the scan job.</p>
     */
    inline bool ScanJobIdHasBeenSet() const { return m_scanJobIdHasBeenSet; }

    /**
     * <p>A unique identifier for the scan job.</p>
     */
    inline void SetScanJobId(const Aws::String& value) { m_scanJobIdHasBeenSet = true; m_scanJobId = value; }

    /**
     * <p>A unique identifier for the scan job.</p>
     */
    inline void SetScanJobId(Aws::String&& value) { m_scanJobIdHasBeenSet = true; m_scanJobId = std::move(value); }

    /**
     * <p>A unique identifier for the scan job.</p>
     */
    inline void SetScanJobId(const char* value) { m_scanJobIdHasBeenSet = true; m_scanJobId.assign(value); }

    /**
     * <p>A unique identifier for the scan job.</p>
     */
    inline SendCisSessionTelemetryRequest& WithScanJobId(const Aws::String& value) { SetScanJobId(value); return *this;}

    /**
     * <p>A unique identifier for the scan job.</p>
     */
    inline SendCisSessionTelemetryRequest& WithScanJobId(Aws::String&& value) { SetScanJobId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the scan job.</p>
     */
    inline SendCisSessionTelemetryRequest& WithScanJobId(const char* value) { SetScanJobId(value); return *this;}


    /**
     * <p>The unique token that identifies the CIS session.</p>
     */
    inline const Aws::String& GetSessionToken() const{ return m_sessionToken; }

    /**
     * <p>The unique token that identifies the CIS session.</p>
     */
    inline bool SessionTokenHasBeenSet() const { return m_sessionTokenHasBeenSet; }

    /**
     * <p>The unique token that identifies the CIS session.</p>
     */
    inline void SetSessionToken(const Aws::String& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = value; }

    /**
     * <p>The unique token that identifies the CIS session.</p>
     */
    inline void SetSessionToken(Aws::String&& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = std::move(value); }

    /**
     * <p>The unique token that identifies the CIS session.</p>
     */
    inline void SetSessionToken(const char* value) { m_sessionTokenHasBeenSet = true; m_sessionToken.assign(value); }

    /**
     * <p>The unique token that identifies the CIS session.</p>
     */
    inline SendCisSessionTelemetryRequest& WithSessionToken(const Aws::String& value) { SetSessionToken(value); return *this;}

    /**
     * <p>The unique token that identifies the CIS session.</p>
     */
    inline SendCisSessionTelemetryRequest& WithSessionToken(Aws::String&& value) { SetSessionToken(std::move(value)); return *this;}

    /**
     * <p>The unique token that identifies the CIS session.</p>
     */
    inline SendCisSessionTelemetryRequest& WithSessionToken(const char* value) { SetSessionToken(value); return *this;}

  private:

    Aws::Vector<CisSessionMessage> m_messages;
    bool m_messagesHasBeenSet = false;

    Aws::String m_scanJobId;
    bool m_scanJobIdHasBeenSet = false;

    Aws::String m_sessionToken;
    bool m_sessionTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
