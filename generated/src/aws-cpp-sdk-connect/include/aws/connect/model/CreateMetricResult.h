/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {
class CreateMetricResult {
 public:
  AWS_CONNECT_API CreateMetricResult() = default;
  AWS_CONNECT_API CreateMetricResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API CreateMetricResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the metric.</p>
   */
  inline const Aws::String& GetMetricArn() const { return m_metricArn; }
  template <typename MetricArnT = Aws::String>
  void SetMetricArn(MetricArnT&& value) {
    m_metricArnHasBeenSet = true;
    m_metricArn = std::forward<MetricArnT>(value);
  }
  template <typename MetricArnT = Aws::String>
  CreateMetricResult& WithMetricArn(MetricArnT&& value) {
    SetMetricArn(std::forward<MetricArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the metric.</p>
   */
  inline const Aws::String& GetMetricId() const { return m_metricId; }
  template <typename MetricIdT = Aws::String>
  void SetMetricId(MetricIdT&& value) {
    m_metricIdHasBeenSet = true;
    m_metricId = std::forward<MetricIdT>(value);
  }
  template <typename MetricIdT = Aws::String>
  CreateMetricResult& WithMetricId(MetricIdT&& value) {
    SetMetricId(std::forward<MetricIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  CreateMetricResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_metricArn;

  Aws::String m_metricId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_metricArnHasBeenSet = false;
  bool m_metricIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
