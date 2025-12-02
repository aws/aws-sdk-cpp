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
class GetDurableExecutionStateRequest : public LambdaRequest {
 public:
  AWS_LAMBDA_API GetDurableExecutionStateRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetDurableExecutionState"; }

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
  GetDurableExecutionStateRequest& WithDurableExecutionArn(DurableExecutionArnT&& value) {
    SetDurableExecutionArn(std::forward<DurableExecutionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A checkpoint token that identifies the current state of the execution. This
   * token is provided by the Lambda runtime and ensures that state retrieval is
   * consistent with the current execution context.</p>
   */
  inline const Aws::String& GetCheckpointToken() const { return m_checkpointToken; }
  inline bool CheckpointTokenHasBeenSet() const { return m_checkpointTokenHasBeenSet; }
  template <typename CheckpointTokenT = Aws::String>
  void SetCheckpointToken(CheckpointTokenT&& value) {
    m_checkpointTokenHasBeenSet = true;
    m_checkpointToken = std::forward<CheckpointTokenT>(value);
  }
  template <typename CheckpointTokenT = Aws::String>
  GetDurableExecutionStateRequest& WithCheckpointToken(CheckpointTokenT&& value) {
    SetCheckpointToken(std::forward<CheckpointTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If <code>NextMarker</code> was returned from a previous request, use this
   * value to retrieve the next page of operations. Each pagination token expires
   * after 24 hours.</p>
   */
  inline const Aws::String& GetMarker() const { return m_marker; }
  inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
  template <typename MarkerT = Aws::String>
  void SetMarker(MarkerT&& value) {
    m_markerHasBeenSet = true;
    m_marker = std::forward<MarkerT>(value);
  }
  template <typename MarkerT = Aws::String>
  GetDurableExecutionStateRequest& WithMarker(MarkerT&& value) {
    SetMarker(std::forward<MarkerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of operations to return per call. You can use
   * <code>Marker</code> to retrieve additional pages of results. The default is 100
   * and the maximum allowed is 1000. A value of 0 uses the default.</p>
   */
  inline int GetMaxItems() const { return m_maxItems; }
  inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
  inline void SetMaxItems(int value) {
    m_maxItemsHasBeenSet = true;
    m_maxItems = value;
  }
  inline GetDurableExecutionStateRequest& WithMaxItems(int value) {
    SetMaxItems(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_durableExecutionArn;
  bool m_durableExecutionArnHasBeenSet = false;

  Aws::String m_checkpointToken;
  bool m_checkpointTokenHasBeenSet = false;

  Aws::String m_marker;
  bool m_markerHasBeenSet = false;

  int m_maxItems{0};
  bool m_maxItemsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
