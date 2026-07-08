/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Inspector2 {
namespace Model {

/**
 */
class ListConnectorScanConfigurationsRequest : public Inspector2Request {
 public:
  AWS_INSPECTOR2_API ListConnectorScanConfigurationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListConnectorScanConfigurations"; }

  AWS_INSPECTOR2_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The list of Amazon Web Services Config connector ARNs to filter results.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAwsConfigConnectorArns() const { return m_awsConfigConnectorArns; }
  inline bool AwsConfigConnectorArnsHasBeenSet() const { return m_awsConfigConnectorArnsHasBeenSet; }
  template <typename AwsConfigConnectorArnsT = Aws::Vector<Aws::String>>
  void SetAwsConfigConnectorArns(AwsConfigConnectorArnsT&& value) {
    m_awsConfigConnectorArnsHasBeenSet = true;
    m_awsConfigConnectorArns = std::forward<AwsConfigConnectorArnsT>(value);
  }
  template <typename AwsConfigConnectorArnsT = Aws::Vector<Aws::String>>
  ListConnectorScanConfigurationsRequest& WithAwsConfigConnectorArns(AwsConfigConnectorArnsT&& value) {
    SetAwsConfigConnectorArns(std::forward<AwsConfigConnectorArnsT>(value));
    return *this;
  }
  template <typename AwsConfigConnectorArnsT = Aws::String>
  ListConnectorScanConfigurationsRequest& AddAwsConfigConnectorArns(AwsConfigConnectorArnsT&& value) {
    m_awsConfigConnectorArnsHasBeenSet = true;
    m_awsConfigConnectorArns.emplace_back(std::forward<AwsConfigConnectorArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in a single call. Valid range is 1 to
   * 50. To retrieve the remaining results, make another request with the
   * <code>nextToken</code> value returned from this request.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListConnectorScanConfigurationsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token to use for paginating results. Set this value to null for the first
   * request. For subsequent calls, use the <code>nextToken</code> value returned
   * from the previous request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListConnectorScanConfigurationsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_awsConfigConnectorArns;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_awsConfigConnectorArnsHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
