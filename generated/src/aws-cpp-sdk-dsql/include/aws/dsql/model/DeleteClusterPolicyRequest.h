/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dsql/DSQLRequest.h>
#include <aws/dsql/DSQL_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace DSQL {
namespace Model {

/**
 */
class DeleteClusterPolicyRequest : public DSQLRequest {
 public:
  AWS_DSQL_API DeleteClusterPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteClusterPolicy"; }

  AWS_DSQL_API Aws::String SerializePayload() const override;

  AWS_DSQL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{

  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  DeleteClusterPolicyRequest& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The expected version of the policy to delete. This parameter ensures that
   * you're deleting the correct version of the policy and helps prevent accidental
   * deletions.</p>
   */
  inline const Aws::String& GetExpectedPolicyVersion() const { return m_expectedPolicyVersion; }
  inline bool ExpectedPolicyVersionHasBeenSet() const { return m_expectedPolicyVersionHasBeenSet; }
  template <typename ExpectedPolicyVersionT = Aws::String>
  void SetExpectedPolicyVersion(ExpectedPolicyVersionT&& value) {
    m_expectedPolicyVersionHasBeenSet = true;
    m_expectedPolicyVersion = std::forward<ExpectedPolicyVersionT>(value);
  }
  template <typename ExpectedPolicyVersionT = Aws::String>
  DeleteClusterPolicyRequest& WithExpectedPolicyVersion(ExpectedPolicyVersionT&& value) {
    SetExpectedPolicyVersion(std::forward<ExpectedPolicyVersionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  DeleteClusterPolicyRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_identifier;
  bool m_identifierHasBeenSet = false;

  Aws::String m_expectedPolicyVersion;
  bool m_expectedPolicyVersionHasBeenSet = false;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace DSQL
}  // namespace Aws
