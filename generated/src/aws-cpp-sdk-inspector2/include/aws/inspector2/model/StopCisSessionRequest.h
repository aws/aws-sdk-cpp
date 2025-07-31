/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/StopCisSessionMessage.h>
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
    AWS_INSPECTOR2_API StopCisSessionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopCisSession"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique identifier for the scan job.</p>
     */
    inline const Aws::String& GetScanJobId() const { return m_scanJobId; }
    inline bool ScanJobIdHasBeenSet() const { return m_scanJobIdHasBeenSet; }
    template<typename ScanJobIdT = Aws::String>
    void SetScanJobId(ScanJobIdT&& value) { m_scanJobIdHasBeenSet = true; m_scanJobId = std::forward<ScanJobIdT>(value); }
    template<typename ScanJobIdT = Aws::String>
    StopCisSessionRequest& WithScanJobId(ScanJobIdT&& value) { SetScanJobId(std::forward<ScanJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique token that identifies the CIS session.</p>
     */
    inline const Aws::String& GetSessionToken() const { return m_sessionToken; }
    inline bool SessionTokenHasBeenSet() const { return m_sessionTokenHasBeenSet; }
    template<typename SessionTokenT = Aws::String>
    void SetSessionToken(SessionTokenT&& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = std::forward<SessionTokenT>(value); }
    template<typename SessionTokenT = Aws::String>
    StopCisSessionRequest& WithSessionToken(SessionTokenT&& value) { SetSessionToken(std::forward<SessionTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stop CIS session message.</p>
     */
    inline const StopCisSessionMessage& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = StopCisSessionMessage>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = StopCisSessionMessage>
    StopCisSessionRequest& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scanJobId;
    bool m_scanJobIdHasBeenSet = false;

    Aws::String m_sessionToken;
    bool m_sessionTokenHasBeenSet = false;

    StopCisSessionMessage m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
