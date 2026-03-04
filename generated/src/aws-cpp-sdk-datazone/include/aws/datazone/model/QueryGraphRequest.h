/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AdditionalAttributes.h>
#include <aws/datazone/model/MatchClause.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace DataZone {
namespace Model {

/**
 */
class QueryGraphRequest : public DataZoneRequest {
 public:
  AWS_DATAZONE_API QueryGraphRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "QueryGraph"; }

  AWS_DATAZONE_API Aws::String SerializePayload() const override;

  AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The identifier of the Amazon DataZone domain.</p>
   */
  inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
  inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
  template <typename DomainIdentifierT = Aws::String>
  void SetDomainIdentifier(DomainIdentifierT&& value) {
    m_domainIdentifierHasBeenSet = true;
    m_domainIdentifier = std::forward<DomainIdentifierT>(value);
  }
  template <typename DomainIdentifierT = Aws::String>
  QueryGraphRequest& WithDomainIdentifier(DomainIdentifierT&& value) {
    SetDomainIdentifier(std::forward<DomainIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of query match clauses.</p>
   */
  inline const Aws::Vector<MatchClause>& GetMatch() const { return m_match; }
  inline bool MatchHasBeenSet() const { return m_matchHasBeenSet; }
  template <typename MatchT = Aws::Vector<MatchClause>>
  void SetMatch(MatchT&& value) {
    m_matchHasBeenSet = true;
    m_match = std::forward<MatchT>(value);
  }
  template <typename MatchT = Aws::Vector<MatchClause>>
  QueryGraphRequest& WithMatch(MatchT&& value) {
    SetMatch(std::forward<MatchT>(value));
    return *this;
  }
  template <typename MatchT = MatchClause>
  QueryGraphRequest& AddMatch(MatchT&& value) {
    m_matchHasBeenSet = true;
    m_match.emplace_back(std::forward<MatchT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of entities to return in a single call to
   * <code>QueryGraph</code>. When the number of entities to be listed is greater
   * than the value of <code>MaxResults</code>, the response contains a
   * <code>NextToken</code> value that you can use in a subsequent call to
   * <code>QueryGraph</code> to list the next set of entities.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline QueryGraphRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the number of entities is greater than the default value for the
   * <code>MaxResults</code> parameter, or if you explicitly specify a value for
   * <code>MaxResults</code> that is less than the number of entities, the response
   * includes a pagination token named <code>NextToken</code>. You can specify this
   * <code>NextToken</code> value in a subsequent call to <code>QueryGraph</code> to
   * list the next set of entities.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  QueryGraphRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional details on the queried entity that can be requested in the
   * response.</p>
   */
  inline const AdditionalAttributes& GetAdditionalAttributes() const { return m_additionalAttributes; }
  inline bool AdditionalAttributesHasBeenSet() const { return m_additionalAttributesHasBeenSet; }
  template <typename AdditionalAttributesT = AdditionalAttributes>
  void SetAdditionalAttributes(AdditionalAttributesT&& value) {
    m_additionalAttributesHasBeenSet = true;
    m_additionalAttributes = std::forward<AdditionalAttributesT>(value);
  }
  template <typename AdditionalAttributesT = AdditionalAttributes>
  QueryGraphRequest& WithAdditionalAttributes(AdditionalAttributesT&& value) {
    SetAdditionalAttributes(std::forward<AdditionalAttributesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainIdentifier;

  Aws::Vector<MatchClause> m_match;

  int m_maxResults{0};

  Aws::String m_nextToken;

  AdditionalAttributes m_additionalAttributes;
  bool m_domainIdentifierHasBeenSet = false;
  bool m_matchHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_additionalAttributesHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
