/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda-web/LambdaWebRequest.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>
#include <aws/lambda-web/model/Filter.h>

#include <utility>

namespace Aws {
namespace LambdaWeb {
namespace Model {

/**
 * <p>The request to list web function endpoints.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/ListWebFunctionEndpointsRequest">AWS
 * API Reference</a></p>
 */
class ListWebFunctionEndpointsRequest : public LambdaWebRequest {
 public:
  AWS_LAMBDAWEB_API ListWebFunctionEndpointsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListWebFunctionEndpoints"; }

  AWS_LAMBDAWEB_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the web function. You can specify the function name or the
   * function ARN. The length constraint applies only to the full ARN. If you specify
   * only the function name, it is limited to 64 characters in length.</p>
   */
  inline const Aws::String& GetFunctionName() const { return m_functionName; }
  inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
  template <typename FunctionNameT = Aws::String>
  void SetFunctionName(FunctionNameT&& value) {
    m_functionNameHasBeenSet = true;
    m_functionName = std::forward<FunctionNameT>(value);
  }
  template <typename FunctionNameT = Aws::String>
  ListWebFunctionEndpointsRequest& WithFunctionName(FunctionNameT&& value) {
    SetFunctionName(std::forward<FunctionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of filters to apply to the results. Supported filter names:
   * <code>authType</code>, <code>autoDeploymentMode</code>,
   * <code>endpointType</code>, <code>state</code>, and
   * <code>updateStatus</code>.</p>
   */
  inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<Filter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<Filter>>
  ListWebFunctionEndpointsRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = Filter>
  ListWebFunctionEndpointsRequest& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in a single call. Minimum value of 1,
   * maximum value of 50. Default is 50.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListWebFunctionEndpointsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token that's returned by a previous request to retrieve the
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
  ListWebFunctionEndpointsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_functionName;

  Aws::Vector<Filter> m_filters;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_functionNameHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
