/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Lightsail {
namespace Model {

/**
 */
class GetSubdomainsRequest : public LightsailRequest {
 public:
  AWS_LIGHTSAIL_API GetSubdomainsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetSubdomains"; }

  AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

  AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The subdomain for which to return information (for example,
   * <code>mysite</code> or <code>blog.mysite</code>), not its web address.</p>
   * <p>When omitted, the response includes all of your subdomains.</p> <p>You can't
   * specify this parameter together with the <code>pageToken</code> parameter.</p>
   */
  inline const Aws::String& GetSubdomainName() const { return m_subdomainName; }
  inline bool SubdomainNameHasBeenSet() const { return m_subdomainNameHasBeenSet; }
  template <typename SubdomainNameT = Aws::String>
  void SetSubdomainName(SubdomainNameT&& value) {
    m_subdomainNameHasBeenSet = true;
    m_subdomainName = std::forward<SubdomainNameT>(value);
  }
  template <typename SubdomainNameT = Aws::String>
  GetSubdomainsRequest& WithSubdomainName(SubdomainNameT&& value) {
    SetSubdomainName(std::forward<SubdomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to advance to the next page of results from your request.</p> <p>To
   * get a page token, perform an initial <code>GetSubdomains</code> request. If your
   * results are paginated, the response will return a next page token that you can
   * specify as the page token in a subsequent request.</p>
   */
  inline const Aws::String& GetPageToken() const { return m_pageToken; }
  inline bool PageTokenHasBeenSet() const { return m_pageTokenHasBeenSet; }
  template <typename PageTokenT = Aws::String>
  void SetPageToken(PageTokenT&& value) {
    m_pageTokenHasBeenSet = true;
    m_pageToken = std::forward<PageTokenT>(value);
  }
  template <typename PageTokenT = Aws::String>
  GetSubdomainsRequest& WithPageToken(PageTokenT&& value) {
    SetPageToken(std::forward<PageTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_subdomainName;

  Aws::String m_pageToken;
  bool m_subdomainNameHasBeenSet = false;
  bool m_pageTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
