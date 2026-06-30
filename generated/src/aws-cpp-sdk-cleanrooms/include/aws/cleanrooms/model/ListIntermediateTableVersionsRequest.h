/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace CleanRooms {
namespace Model {

/**
 */
class ListIntermediateTableVersionsRequest : public CleanRoomsRequest {
 public:
  AWS_CLEANROOMS_API ListIntermediateTableVersionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListIntermediateTableVersions"; }

  AWS_CLEANROOMS_API Aws::String SerializePayload() const override;

  AWS_CLEANROOMS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The unique identifier of the membership that contains the intermediate
   * table.</p>
   */
  inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
  inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
  template <typename MembershipIdentifierT = Aws::String>
  void SetMembershipIdentifier(MembershipIdentifierT&& value) {
    m_membershipIdentifierHasBeenSet = true;
    m_membershipIdentifier = std::forward<MembershipIdentifierT>(value);
  }
  template <typename MembershipIdentifierT = Aws::String>
  ListIntermediateTableVersionsRequest& WithMembershipIdentifier(MembershipIdentifierT&& value) {
    SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the intermediate table for which to list
   * versions.</p>
   */
  inline const Aws::String& GetIntermediateTableIdentifier() const { return m_intermediateTableIdentifier; }
  inline bool IntermediateTableIdentifierHasBeenSet() const { return m_intermediateTableIdentifierHasBeenSet; }
  template <typename IntermediateTableIdentifierT = Aws::String>
  void SetIntermediateTableIdentifier(IntermediateTableIdentifierT&& value) {
    m_intermediateTableIdentifierHasBeenSet = true;
    m_intermediateTableIdentifier = std::forward<IntermediateTableIdentifierT>(value);
  }
  template <typename IntermediateTableIdentifierT = Aws::String>
  ListIntermediateTableVersionsRequest& WithIntermediateTableIdentifier(IntermediateTableIdentifierT&& value) {
    SetIntermediateTableIdentifier(std::forward<IntermediateTableIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token that's used to fetch the next set of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListIntermediateTableVersionsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results that are returned for an API request call. The
   * service chooses a default number if you don't set one. The service might return
   * a <code>nextToken</code> even if the <code>maxResults</code> value has not been
   * met.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListIntermediateTableVersionsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_membershipIdentifier;

  Aws::String m_intermediateTableIdentifier;

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_membershipIdentifierHasBeenSet = false;
  bool m_intermediateTableIdentifierHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
