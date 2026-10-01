/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessagingRequest.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace EndUserMessaging {
namespace Model {

/**
 */
class ListBrandProfileAttributesRequest : public EndUserMessagingRequest {
 public:
  AWS_ENDUSERMESSAGING_API ListBrandProfileAttributesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListBrandProfileAttributes"; }

  AWS_ENDUSERMESSAGING_API Aws::String SerializePayload() const override;

  AWS_ENDUSERMESSAGING_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The unique identifier of the brand profile. You can specify either the bare
   * ID or the full Amazon Resource Name (ARN).</p>
   */
  inline const Aws::String& GetBrandProfileId() const { return m_brandProfileId; }
  inline bool BrandProfileIdHasBeenSet() const { return m_brandProfileIdHasBeenSet; }
  template <typename BrandProfileIdT = Aws::String>
  void SetBrandProfileId(BrandProfileIdT&& value) {
    m_brandProfileIdHasBeenSet = true;
    m_brandProfileId = std::forward<BrandProfileIdT>(value);
  }
  template <typename BrandProfileIdT = Aws::String>
  ListBrandProfileAttributesRequest& WithBrandProfileId(BrandProfileIdT&& value) {
    SetBrandProfileId(std::forward<BrandProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to retrieve the next page of results. This value is returned when
   * more results are available, and is null when there are no more results to
   * return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListBrandProfileAttributesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return per page.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListBrandProfileAttributesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_brandProfileId;

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_brandProfileIdHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
