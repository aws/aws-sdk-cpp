/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-microvms/LambdaMicrovmsRequest.h>
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace LambdaMicrovms {
namespace Model {

/**
 */
class ListMicrovmImagesRequest : public LambdaMicrovmsRequest {
 public:
  AWS_LAMBDAMICROVMS_API ListMicrovmImagesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListMicrovmImages"; }

  AWS_LAMBDAMICROVMS_API Aws::String SerializePayload() const override;

  AWS_LAMBDAMICROVMS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The maximum number of results to return in a single call.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListMicrovmImagesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token from a previous call. Use this token to retrieve the
   * next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListMicrovmImagesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters images whose name contains the specified string.</p>
   */
  inline const Aws::String& GetNameFilter() const { return m_nameFilter; }
  inline bool NameFilterHasBeenSet() const { return m_nameFilterHasBeenSet; }
  template <typename NameFilterT = Aws::String>
  void SetNameFilter(NameFilterT&& value) {
    m_nameFilterHasBeenSet = true;
    m_nameFilter = std::forward<NameFilterT>(value);
  }
  template <typename NameFilterT = Aws::String>
  ListMicrovmImagesRequest& WithNameFilter(NameFilterT&& value) {
    SetNameFilter(std::forward<NameFilterT>(value));
    return *this;
  }
  ///@}
 private:
  int m_maxResults{0};

  Aws::String m_nextToken;

  Aws::String m_nameFilter;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_nameFilterHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
