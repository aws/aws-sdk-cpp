/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/ContinuumRequest.h>
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace Continuum {
namespace Model {

/**
 * <p>Specifies pagination parameters for listing environments.</p>
 * <p>Response-filtering justification: filtering is intentionally omitted because
 * every current consumer needs the canonical complete, account-scoped environment
 * inventory, and no useful selective server-side query use case is defined.
 * Environment ID already has the GetEnvironment lookup operation, and status,
 * name, or timestamp filtering is not needed by any current workflow. Adding
 * speculative filters would require unsupported access patterns and ambiguous
 * semantics without reducing data returned for existing consumers. If a concrete
 * indexed query use case is introduced later, its filter values must be bound to
 * pagination tokens so a token cannot be replayed against a different query. The
 * formal API standards decision is recorded in the package-root BR_EXCEPTIONS.md
 * file.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/ListEnvironmentsInput">AWS
 * API Reference</a></p>
 */
class ListEnvironmentsRequest : public ContinuumRequest {
 public:
  AWS_CONTINUUM_API ListEnvironmentsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListEnvironments"; }

  AWS_CONTINUUM_API Aws::String SerializePayload() const override;

  AWS_CONTINUUM_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

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
  inline ListEnvironmentsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token returned by a previous call. Set to null for the first
   * request; use the returned token for subsequent calls.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListEnvironmentsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
