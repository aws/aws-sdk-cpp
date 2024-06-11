/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class GetDistributionsRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API GetDistributionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDistributions"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the distribution for which to return information.</p> <p>When
     * omitted, the response includes all of your distributions in the Amazon Web
     * Services Region where the request is made.</p>
     */
    inline const Aws::String& GetDistributionName() const{ return m_distributionName; }
    inline bool DistributionNameHasBeenSet() const { return m_distributionNameHasBeenSet; }
    inline void SetDistributionName(const Aws::String& value) { m_distributionNameHasBeenSet = true; m_distributionName = value; }
    inline void SetDistributionName(Aws::String&& value) { m_distributionNameHasBeenSet = true; m_distributionName = std::move(value); }
    inline void SetDistributionName(const char* value) { m_distributionNameHasBeenSet = true; m_distributionName.assign(value); }
    inline GetDistributionsRequest& WithDistributionName(const Aws::String& value) { SetDistributionName(value); return *this;}
    inline GetDistributionsRequest& WithDistributionName(Aws::String&& value) { SetDistributionName(std::move(value)); return *this;}
    inline GetDistributionsRequest& WithDistributionName(const char* value) { SetDistributionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>To
     * get a page token, perform an initial <code>GetDistributions</code> request. If
     * your results are paginated, the response will return a next page token that you
     * can specify as the page token in a subsequent request.</p>
     */
    inline const Aws::String& GetPageToken() const{ return m_pageToken; }
    inline bool PageTokenHasBeenSet() const { return m_pageTokenHasBeenSet; }
    inline void SetPageToken(const Aws::String& value) { m_pageTokenHasBeenSet = true; m_pageToken = value; }
    inline void SetPageToken(Aws::String&& value) { m_pageTokenHasBeenSet = true; m_pageToken = std::move(value); }
    inline void SetPageToken(const char* value) { m_pageTokenHasBeenSet = true; m_pageToken.assign(value); }
    inline GetDistributionsRequest& WithPageToken(const Aws::String& value) { SetPageToken(value); return *this;}
    inline GetDistributionsRequest& WithPageToken(Aws::String&& value) { SetPageToken(std::move(value)); return *this;}
    inline GetDistributionsRequest& WithPageToken(const char* value) { SetPageToken(value); return *this;}
    ///@}
  private:

    Aws::String m_distributionName;
    bool m_distributionNameHasBeenSet = false;

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
