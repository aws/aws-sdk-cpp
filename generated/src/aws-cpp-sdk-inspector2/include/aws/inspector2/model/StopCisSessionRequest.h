/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/inspector2/model/StopCisSessionMessage.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class StopCisSessionRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API StopCisSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopCisSession"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    /**
     * <p>The stop CIS session message.</p>
     */
    inline const StopCisSessionMessage& GetMessage() const{ return m_message; }

    /**
     * <p>The stop CIS session message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The stop CIS session message.</p>
     */
    inline void SetMessage(const StopCisSessionMessage& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The stop CIS session message.</p>
     */
    inline void SetMessage(StopCisSessionMessage&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The stop CIS session message.</p>
     */
    inline StopCisSessionRequest& WithMessage(const StopCisSessionMessage& value) { SetMessage(value); return *this;}

    /**
     * <p>The stop CIS session message.</p>
     */
    inline StopCisSessionRequest& WithMessage(StopCisSessionMessage&& value) { SetMessage(std::move(value)); return *this;}


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
    inline StopCisSessionRequest& WithScanJobId(const Aws::String& value) { SetScanJobId(value); return *this;}

    /**
     * <p>A unique identifier for the scan job.</p>
     */
    inline StopCisSessionRequest& WithScanJobId(Aws::String&& value) { SetScanJobId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the scan job.</p>
     */
    inline StopCisSessionRequest& WithScanJobId(const char* value) { SetScanJobId(value); return *this;}


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
    inline StopCisSessionRequest& WithSessionToken(const Aws::String& value) { SetSessionToken(value); return *this;}

    /**
     * <p>The unique token that identifies the CIS session.</p>
     */
    inline StopCisSessionRequest& WithSessionToken(Aws::String&& value) { SetSessionToken(std::move(value)); return *this;}

    /**
     * <p>The unique token that identifies the CIS session.</p>
     */
    inline StopCisSessionRequest& WithSessionToken(const char* value) { SetSessionToken(value); return *this;}

  private:

    StopCisSessionMessage m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_scanJobId;
    bool m_scanJobIdHasBeenSet = false;

    Aws::String m_sessionToken;
    bool m_sessionTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
