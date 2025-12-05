/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignalsRequest.h>
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace ApplicationSignals {
namespace Model {

/**
 */
class ListGroupingAttributeDefinitionsRequest : public ApplicationSignalsRequest {
 public:
  AWS_APPLICATIONSIGNALS_API ListGroupingAttributeDefinitionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListGroupingAttributeDefinitions"; }

  AWS_APPLICATIONSIGNALS_API Aws::String SerializePayload() const override;

  AWS_APPLICATIONSIGNALS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>Include this value, if it was returned by the previous operation, to get the
   * next set of grouping attribute definitions.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListGroupingAttributeDefinitionsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID to retrieve grouping attribute definitions
   * for. Use this when accessing grouping configurations from a different account in
   * cross-account monitoring scenarios.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  ListGroupingAttributeDefinitionsRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If you are using this operation in a monitoring account, specify
   * <code>true</code> to include grouping attributes from source accounts in the
   * returned data.</p>
   */
  inline bool GetIncludeLinkedAccounts() const { return m_includeLinkedAccounts; }
  inline bool IncludeLinkedAccountsHasBeenSet() const { return m_includeLinkedAccountsHasBeenSet; }
  inline void SetIncludeLinkedAccounts(bool value) {
    m_includeLinkedAccountsHasBeenSet = true;
    m_includeLinkedAccounts = value;
  }
  inline ListGroupingAttributeDefinitionsRequest& WithIncludeLinkedAccounts(bool value) {
    SetIncludeLinkedAccounts(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  Aws::String m_awsAccountId;

  bool m_includeLinkedAccounts{false};
  bool m_nextTokenHasBeenSet = false;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_includeLinkedAccountsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
