/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/TransformationJobProperties.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace HealthLake {
namespace Model {
/**
 * <p>The response from the <code>DescribeDataTransformationJob</code>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DescribeDataTransformationJobResponse">AWS
 * API Reference</a></p>
 */
class DescribeDataTransformationJobResult {
 public:
  AWS_HEALTHLAKE_API DescribeDataTransformationJobResult() = default;
  AWS_HEALTHLAKE_API DescribeDataTransformationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_HEALTHLAKE_API DescribeDataTransformationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The properties of the data transformation job, including status,
   * configuration, and progress information.</p>
   */
  inline const TransformationJobProperties& GetTransformationJobProperties() const { return m_transformationJobProperties; }
  template <typename TransformationJobPropertiesT = TransformationJobProperties>
  void SetTransformationJobProperties(TransformationJobPropertiesT&& value) {
    m_transformationJobPropertiesHasBeenSet = true;
    m_transformationJobProperties = std::forward<TransformationJobPropertiesT>(value);
  }
  template <typename TransformationJobPropertiesT = TransformationJobProperties>
  DescribeDataTransformationJobResult& WithTransformationJobProperties(TransformationJobPropertiesT&& value) {
    SetTransformationJobProperties(std::forward<TransformationJobPropertiesT>(value));
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
  DescribeDataTransformationJobResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  TransformationJobProperties m_transformationJobProperties;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_transformationJobPropertiesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
