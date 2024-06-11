/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
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
  class SendCisSessionHealthRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API SendCisSessionHealthRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendCisSessionHealth"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique identifier for the scan job.</p>
     */
    inline const Aws::String& GetScanJobId() const{ return m_scanJobId; }
    inline bool ScanJobIdHasBeenSet() const { return m_scanJobIdHasBeenSet; }
    inline void SetScanJobId(const Aws::String& value) { m_scanJobIdHasBeenSet = true; m_scanJobId = value; }
    inline void SetScanJobId(Aws::String&& value) { m_scanJobIdHasBeenSet = true; m_scanJobId = std::move(value); }
    inline void SetScanJobId(const char* value) { m_scanJobIdHasBeenSet = true; m_scanJobId.assign(value); }
    inline SendCisSessionHealthRequest& WithScanJobId(const Aws::String& value) { SetScanJobId(value); return *this;}
    inline SendCisSessionHealthRequest& WithScanJobId(Aws::String&& value) { SetScanJobId(std::move(value)); return *this;}
    inline SendCisSessionHealthRequest& WithScanJobId(const char* value) { SetScanJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique token that identifies the CIS session.</p>
     */
    inline const Aws::String& GetSessionToken() const{ return m_sessionToken; }
    inline bool SessionTokenHasBeenSet() const { return m_sessionTokenHasBeenSet; }
    inline void SetSessionToken(const Aws::String& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = value; }
    inline void SetSessionToken(Aws::String&& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = std::move(value); }
    inline void SetSessionToken(const char* value) { m_sessionTokenHasBeenSet = true; m_sessionToken.assign(value); }
    inline SendCisSessionHealthRequest& WithSessionToken(const Aws::String& value) { SetSessionToken(value); return *this;}
    inline SendCisSessionHealthRequest& WithSessionToken(Aws::String&& value) { SetSessionToken(std::move(value)); return *this;}
    inline SendCisSessionHealthRequest& WithSessionToken(const char* value) { SetSessionToken(value); return *this;}
    ///@}
  private:

    Aws::String m_scanJobId;
    bool m_scanJobIdHasBeenSet = false;

    Aws::String m_sessionToken;
    bool m_sessionTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
