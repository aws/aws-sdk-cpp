/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/MetricCategory.h>
#include <aws/ec2/model/ResponseMetadata.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {
class DescribeMetricCategoriesResponse {
 public:
  AWS_EC2_API DescribeMetricCategoriesResponse() = default;
  AWS_EC2_API DescribeMetricCategoriesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API DescribeMetricCategoriesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Information about the metric categories.</p>
   */
  inline const Aws::Vector<MetricCategory>& GetMetricCategories() const { return m_metricCategories; }
  template <typename MetricCategoriesT = Aws::Vector<MetricCategory>>
  void SetMetricCategories(MetricCategoriesT&& value) {
    m_metricCategoriesHasBeenSet = true;
    m_metricCategories = std::forward<MetricCategoriesT>(value);
  }
  template <typename MetricCategoriesT = Aws::Vector<MetricCategory>>
  DescribeMetricCategoriesResponse& WithMetricCategories(MetricCategoriesT&& value) {
    SetMetricCategories(std::forward<MetricCategoriesT>(value));
    return *this;
  }
  template <typename MetricCategoriesT = MetricCategory>
  DescribeMetricCategoriesResponse& AddMetricCategories(MetricCategoriesT&& value) {
    m_metricCategoriesHasBeenSet = true;
    m_metricCategories.emplace_back(std::forward<MetricCategoriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to include in another request to get the next page of items. This
   * value is <code>null</code> when there are no more items to return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeMetricCategoriesResponse& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
  template <typename ResponseMetadataT = ResponseMetadata>
  void SetResponseMetadata(ResponseMetadataT&& value) {
    m_responseMetadataHasBeenSet = true;
    m_responseMetadata = std::forward<ResponseMetadataT>(value);
  }
  template <typename ResponseMetadataT = ResponseMetadata>
  DescribeMetricCategoriesResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<MetricCategory> m_metricCategories;

  Aws::String m_nextToken;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_metricCategoriesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
