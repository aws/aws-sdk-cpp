/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/StartCisSessionMessage.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class StartCisSessionRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API StartCisSessionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartCisSession"; }

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
    StartCisSessionRequest& WithScanJobId(ScanJobIdT&& value) { SetScanJobId(std::forward<ScanJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start CIS session message.</p>
     */
    inline const StartCisSessionMessage& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = StartCisSessionMessage>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = StartCisSessionMessage>
    StartCisSessionRequest& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scanJobId;
    bool m_scanJobIdHasBeenSet = false;

    StartCisSessionMessage m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
