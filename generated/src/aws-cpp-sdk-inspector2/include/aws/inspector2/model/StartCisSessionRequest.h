/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/inspector2/model/StartCisSessionMessage.h>
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
  class StartCisSessionRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API StartCisSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartCisSession"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    /**
     * <p>The start CIS session message.</p>
     */
    inline const StartCisSessionMessage& GetMessage() const{ return m_message; }

    /**
     * <p>The start CIS session message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The start CIS session message.</p>
     */
    inline void SetMessage(const StartCisSessionMessage& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The start CIS session message.</p>
     */
    inline void SetMessage(StartCisSessionMessage&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The start CIS session message.</p>
     */
    inline StartCisSessionRequest& WithMessage(const StartCisSessionMessage& value) { SetMessage(value); return *this;}

    /**
     * <p>The start CIS session message.</p>
     */
    inline StartCisSessionRequest& WithMessage(StartCisSessionMessage&& value) { SetMessage(std::move(value)); return *this;}


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
    inline StartCisSessionRequest& WithScanJobId(const Aws::String& value) { SetScanJobId(value); return *this;}

    /**
     * <p>A unique identifier for the scan job.</p>
     */
    inline StartCisSessionRequest& WithScanJobId(Aws::String&& value) { SetScanJobId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the scan job.</p>
     */
    inline StartCisSessionRequest& WithScanJobId(const char* value) { SetScanJobId(value); return *this;}

  private:

    StartCisSessionMessage m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_scanJobId;
    bool m_scanJobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
