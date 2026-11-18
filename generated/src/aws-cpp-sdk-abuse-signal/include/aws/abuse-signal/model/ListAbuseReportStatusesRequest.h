/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/abuse-signal/AbuseSignalRequest.h>
#include <aws/abuse-signal/AbuseSignal_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace AbuseSignal {
namespace Model {

/**
 * <p>The input for a <a>ListAbuseReportStatuses</a> request. Use it to filter
 * results by correlation ID and to page through them.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/abuse-signal-2026-01-12/ListAbuseReportStatusesRequest">AWS
 * API Reference</a></p>
 */
class ListAbuseReportStatusesRequest : public AbuseSignalRequest {
 public:
  AWS_ABUSESIGNAL_API ListAbuseReportStatusesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListAbuseReportStatuses"; }

  AWS_ABUSESIGNAL_API Aws::String SerializePayload() const override;

  AWS_ABUSESIGNAL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  AWS_ABUSESIGNAL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Filters results by the reporter-provided correlation ID.</p>
   */
  inline const Aws::String& GetCorrelationId() const { return m_correlationId; }
  inline bool CorrelationIdHasBeenSet() const { return m_correlationIdHasBeenSet; }
  template <typename CorrelationIdT = Aws::String>
  void SetCorrelationId(CorrelationIdT&& value) {
    m_correlationIdHasBeenSet = true;
    m_correlationId = std::forward<CorrelationIdT>(value);
  }
  template <typename CorrelationIdT = Aws::String>
  ListAbuseReportStatusesRequest& WithCorrelationId(CorrelationIdT&& value) {
    SetCorrelationId(std::forward<CorrelationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token for retrieving the next page of results. Omit this
   * parameter to return the first page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAbuseReportStatusesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in a single page. Valid range: 1–50.
   * The default is 50.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListAbuseReportStatusesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_correlationId;

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_correlationIdHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace AbuseSignal
}  // namespace Aws
