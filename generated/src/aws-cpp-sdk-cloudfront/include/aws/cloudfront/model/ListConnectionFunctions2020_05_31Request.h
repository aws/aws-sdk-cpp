/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/FunctionStage.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CloudFront {
namespace Model {

/**
 */
class ListConnectionFunctions2020_05_31Request : public CloudFrontRequest {
 public:
  AWS_CLOUDFRONT_API ListConnectionFunctions2020_05_31Request() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListConnectionFunctions"; }

  AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Use this field when paginating results to indicate where to begin in your
   * list. The response includes items in the list that occur after the marker. To
   * get the next page of the list, set this field's value to the value of
   * <code>NextMarker</code> from the current page's response.</p>
   */
  inline const Aws::String& GetMarker() const { return m_marker; }
  inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
  template <typename MarkerT = Aws::String>
  void SetMarker(MarkerT&& value) {
    m_markerHasBeenSet = true;
    m_marker = std::forward<MarkerT>(value);
  }
  template <typename MarkerT = Aws::String>
  ListConnectionFunctions2020_05_31Request& WithMarker(MarkerT&& value) {
    SetMarker(std::forward<MarkerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of connection functions that you want returned in the
   * response.</p>
   */
  inline int GetMaxItems() const { return m_maxItems; }
  inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
  inline void SetMaxItems(int value) {
    m_maxItemsHasBeenSet = true;
    m_maxItems = value;
  }
  inline ListConnectionFunctions2020_05_31Request& WithMaxItems(int value) {
    SetMaxItems(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection function's stage.</p>
   */
  inline FunctionStage GetStage() const { return m_stage; }
  inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
  inline void SetStage(FunctionStage value) {
    m_stageHasBeenSet = true;
    m_stage = value;
  }
  inline ListConnectionFunctions2020_05_31Request& WithStage(FunctionStage value) {
    SetStage(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_marker;
  bool m_markerHasBeenSet = false;

  int m_maxItems{0};
  bool m_maxItemsHasBeenSet = false;

  FunctionStage m_stage{FunctionStage::NOT_SET};
  bool m_stageHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
