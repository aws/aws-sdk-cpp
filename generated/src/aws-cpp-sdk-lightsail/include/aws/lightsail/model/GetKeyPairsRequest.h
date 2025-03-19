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
  class GetKeyPairsRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API GetKeyPairsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetKeyPairs"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>To
     * get a page token, perform an initial <code>GetKeyPairs</code> request. If your
     * results are paginated, the response will return a next page token that you can
     * specify as the page token in a subsequent request.</p>
     */
    inline const Aws::String& GetPageToken() const { return m_pageToken; }
    inline bool PageTokenHasBeenSet() const { return m_pageTokenHasBeenSet; }
    template<typename PageTokenT = Aws::String>
    void SetPageToken(PageTokenT&& value) { m_pageTokenHasBeenSet = true; m_pageToken = std::forward<PageTokenT>(value); }
    template<typename PageTokenT = Aws::String>
    GetKeyPairsRequest& WithPageToken(PageTokenT&& value) { SetPageToken(std::forward<PageTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that indicates whether to include the default key pair in the
     * response of your request.</p>
     */
    inline bool GetIncludeDefaultKeyPair() const { return m_includeDefaultKeyPair; }
    inline bool IncludeDefaultKeyPairHasBeenSet() const { return m_includeDefaultKeyPairHasBeenSet; }
    inline void SetIncludeDefaultKeyPair(bool value) { m_includeDefaultKeyPairHasBeenSet = true; m_includeDefaultKeyPair = value; }
    inline GetKeyPairsRequest& WithIncludeDefaultKeyPair(bool value) { SetIncludeDefaultKeyPair(value); return *this;}
    ///@}
  private:

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet = false;

    bool m_includeDefaultKeyPair{false};
    bool m_includeDefaultKeyPairHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
