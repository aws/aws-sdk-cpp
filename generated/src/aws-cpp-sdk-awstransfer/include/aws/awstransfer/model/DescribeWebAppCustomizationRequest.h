/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class DescribeWebAppCustomizationRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API DescribeWebAppCustomizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeWebAppCustomization"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Provide the unique identifier for the web app.</p>
     */
    inline const Aws::String& GetWebAppId() const{ return m_webAppId; }
    inline bool WebAppIdHasBeenSet() const { return m_webAppIdHasBeenSet; }
    inline void SetWebAppId(const Aws::String& value) { m_webAppIdHasBeenSet = true; m_webAppId = value; }
    inline void SetWebAppId(Aws::String&& value) { m_webAppIdHasBeenSet = true; m_webAppId = std::move(value); }
    inline void SetWebAppId(const char* value) { m_webAppIdHasBeenSet = true; m_webAppId.assign(value); }
    inline DescribeWebAppCustomizationRequest& WithWebAppId(const Aws::String& value) { SetWebAppId(value); return *this;}
    inline DescribeWebAppCustomizationRequest& WithWebAppId(Aws::String&& value) { SetWebAppId(std::move(value)); return *this;}
    inline DescribeWebAppCustomizationRequest& WithWebAppId(const char* value) { SetWebAppId(value); return *this;}
    ///@}
  private:

    Aws::String m_webAppId;
    bool m_webAppIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
