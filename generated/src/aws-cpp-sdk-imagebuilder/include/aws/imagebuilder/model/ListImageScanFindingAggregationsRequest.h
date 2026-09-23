/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/Filter.h>

#include <utility>

namespace Aws {
namespace imagebuilder {
namespace Model {

/**
 */
class ListImageScanFindingAggregationsRequest : public ImagebuilderRequest {
 public:
  AWS_IMAGEBUILDER_API ListImageScanFindingAggregationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListImageScanFindingAggregations"; }

  AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A filter name and value pair that determines the type of aggregation that
   * Image Builder returns. Use one of the following filter names:</p> <ul> <li> <p>
   * <code>imageBuildVersionArn</code> </p> </li> <li> <p>
   * <code>imagePipelineArn</code> </p> </li> <li> <p> <code>vulnerabilityId</code>
   * </p> </li> </ul> <p>If you don't specify a filter, Image Builder returns an
   * aggregation for your account.</p>
   */
  inline const Filter& GetFilter() const { return m_filter; }
  inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
  template <typename FilterT = Filter>
  void SetFilter(FilterT&& value) {
    m_filterHasBeenSet = true;
    m_filter = std::forward<FilterT>(value);
  }
  template <typename FilterT = Filter>
  ListImageScanFindingAggregationsRequest& WithFilter(FilterT&& value) {
    SetFilter(std::forward<FilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token to specify where to start paginating. Use the <code>nextToken</code>
   * value from a previously truncated response.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListImageScanFindingAggregationsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Filter m_filter;

  Aws::String m_nextToken;
  bool m_filterHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
