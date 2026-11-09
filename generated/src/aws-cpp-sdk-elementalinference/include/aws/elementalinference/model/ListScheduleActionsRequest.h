/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInferenceRequest.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace ElementalInference {
namespace Model {

/**
 */
class ListScheduleActionsRequest : public ElementalInferenceRequest {
 public:
  AWS_ELEMENTALINFERENCE_API ListScheduleActionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListScheduleActions"; }

  AWS_ELEMENTALINFERENCE_API Aws::String SerializePayload() const override;

  AWS_ELEMENTALINFERENCE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The ID of the feed that you want to query.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  ListScheduleActionsRequest& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return for each API request. If you don't
   * specify MaxResults, Elemental Inference returns a maximum of 10 results for each
   * page. </p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListScheduleActionsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token that identifies the batch of results that you want to see. To see
   * the next batch, submit the request a second time and specify the NextToken value
   * that Elemental Inference returned. </p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListScheduleActionsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_idHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
