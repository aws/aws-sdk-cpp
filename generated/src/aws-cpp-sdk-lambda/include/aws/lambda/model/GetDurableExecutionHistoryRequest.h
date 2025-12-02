/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/lambda/Lambda_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace Lambda {
namespace Model {

/**
 */
class GetDurableExecutionHistoryRequest : public LambdaRequest {
 public:
  AWS_LAMBDA_API GetDurableExecutionHistoryRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetDurableExecutionHistory"; }

  AWS_LAMBDA_API Aws::String SerializePayload() const override;

  AWS_LAMBDA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the durable execution.</p>
   */
  inline const Aws::String& GetDurableExecutionArn() const { return m_durableExecutionArn; }
  inline bool DurableExecutionArnHasBeenSet() const { return m_durableExecutionArnHasBeenSet; }
  template <typename DurableExecutionArnT = Aws::String>
  void SetDurableExecutionArn(DurableExecutionArnT&& value) {
    m_durableExecutionArnHasBeenSet = true;
    m_durableExecutionArn = std::forward<DurableExecutionArnT>(value);
  }
  template <typename DurableExecutionArnT = Aws::String>
  GetDurableExecutionHistoryRequest& WithDurableExecutionArn(DurableExecutionArnT&& value) {
    SetDurableExecutionArn(std::forward<DurableExecutionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to include execution data such as step results and callback
   * payloads in the history events. Set to <code>true</code> to include data, or
   * <code>false</code> to exclude it for a more compact response. The default is
   * <code>true</code>.</p>
   */
  inline bool GetIncludeExecutionData() const { return m_includeExecutionData; }
  inline bool IncludeExecutionDataHasBeenSet() const { return m_includeExecutionDataHasBeenSet; }
  inline void SetIncludeExecutionData(bool value) {
    m_includeExecutionDataHasBeenSet = true;
    m_includeExecutionData = value;
  }
  inline GetDurableExecutionHistoryRequest& WithIncludeExecutionData(bool value) {
    SetIncludeExecutionData(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of history events to return per call. You can use
   * <code>Marker</code> to retrieve additional pages of results. The default is 100
   * and the maximum allowed is 1000. A value of 0 uses the default.</p>
   */
  inline int GetMaxItems() const { return m_maxItems; }
  inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
  inline void SetMaxItems(int value) {
    m_maxItemsHasBeenSet = true;
    m_maxItems = value;
  }
  inline GetDurableExecutionHistoryRequest& WithMaxItems(int value) {
    SetMaxItems(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If <code>NextMarker</code> was returned from a previous request, use this
   * value to retrieve the next page of results. Each pagination token expires after
   * 24 hours.</p>
   */
  inline const Aws::String& GetMarker() const { return m_marker; }
  inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
  template <typename MarkerT = Aws::String>
  void SetMarker(MarkerT&& value) {
    m_markerHasBeenSet = true;
    m_marker = std::forward<MarkerT>(value);
  }
  template <typename MarkerT = Aws::String>
  GetDurableExecutionHistoryRequest& WithMarker(MarkerT&& value) {
    SetMarker(std::forward<MarkerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When set to <code>true</code>, returns the history events in reverse
   * chronological order (newest first). By default, events are returned in
   * chronological order (oldest first).</p>
   */
  inline bool GetReverseOrder() const { return m_reverseOrder; }
  inline bool ReverseOrderHasBeenSet() const { return m_reverseOrderHasBeenSet; }
  inline void SetReverseOrder(bool value) {
    m_reverseOrderHasBeenSet = true;
    m_reverseOrder = value;
  }
  inline GetDurableExecutionHistoryRequest& WithReverseOrder(bool value) {
    SetReverseOrder(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_durableExecutionArn;
  bool m_durableExecutionArnHasBeenSet = false;

  bool m_includeExecutionData{false};
  bool m_includeExecutionDataHasBeenSet = false;

  int m_maxItems{0};
  bool m_maxItemsHasBeenSet = false;

  Aws::String m_marker;
  bool m_markerHasBeenSet = false;

  bool m_reverseOrder{false};
  bool m_reverseOrderHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
