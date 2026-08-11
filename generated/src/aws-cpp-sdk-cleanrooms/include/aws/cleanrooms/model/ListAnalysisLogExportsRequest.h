/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/AnalysisLogExportStatus.h>
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
class ListAnalysisLogExportsRequest : public CleanRoomsRequest {
 public:
  AWS_CLEANROOMS_API ListAnalysisLogExportsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListAnalysisLogExports"; }

  AWS_CLEANROOMS_API Aws::String SerializePayload() const override;

  AWS_CLEANROOMS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>A unique identifier for the membership to list analysis log exports for.
   * Currently accepts the membership ID.</p>
   */
  inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
  inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
  template <typename MembershipIdentifierT = Aws::String>
  void SetMembershipIdentifier(MembershipIdentifierT&& value) {
    m_membershipIdentifierHasBeenSet = true;
    m_membershipIdentifier = std::forward<MembershipIdentifierT>(value);
  }
  template <typename MembershipIdentifierT = Aws::String>
  ListAnalysisLogExportsRequest& WithMembershipIdentifier(MembershipIdentifierT&& value) {
    SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter on the unique identifier of the protected query that the analysis
   * logs were exported for.</p>
   */
  inline const Aws::String& GetAnalysisIdentifier() const { return m_analysisIdentifier; }
  inline bool AnalysisIdentifierHasBeenSet() const { return m_analysisIdentifierHasBeenSet; }
  template <typename AnalysisIdentifierT = Aws::String>
  void SetAnalysisIdentifier(AnalysisIdentifierT&& value) {
    m_analysisIdentifierHasBeenSet = true;
    m_analysisIdentifier = std::forward<AnalysisIdentifierT>(value);
  }
  template <typename AnalysisIdentifierT = Aws::String>
  ListAnalysisLogExportsRequest& WithAnalysisIdentifier(AnalysisIdentifierT&& value) {
    SetAnalysisIdentifier(std::forward<AnalysisIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter on the status of the analysis log export.</p>
   */
  inline AnalysisLogExportStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AnalysisLogExportStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListAnalysisLogExportsRequest& WithStatus(AnalysisLogExportStatus value) {
    SetStatus(value);
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
  ListAnalysisLogExportsRequest& WithNextToken(NextTokenT&& value) {
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
  inline ListAnalysisLogExportsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_membershipIdentifier;

  Aws::String m_analysisIdentifier;

  AnalysisLogExportStatus m_status{AnalysisLogExportStatus::NOT_SET};

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_membershipIdentifierHasBeenSet = false;
  bool m_analysisIdentifierHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
