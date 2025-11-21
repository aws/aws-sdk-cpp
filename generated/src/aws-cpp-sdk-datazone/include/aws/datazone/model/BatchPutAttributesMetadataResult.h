/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AttributeError.h>
#include <aws/datazone/model/BatchPutAttributeOutput.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {
class BatchPutAttributesMetadataResult {
 public:
  AWS_DATAZONE_API BatchPutAttributesMetadataResult() = default;
  AWS_DATAZONE_API BatchPutAttributesMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DATAZONE_API BatchPutAttributesMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The results of the BatchPutAttributeMetadata action.</p>
   */
  inline const Aws::Vector<BatchPutAttributeOutput>& GetAttributes() const { return m_attributes; }
  template <typename AttributesT = Aws::Vector<BatchPutAttributeOutput>>
  void SetAttributes(AttributesT&& value) {
    m_attributesHasBeenSet = true;
    m_attributes = std::forward<AttributesT>(value);
  }
  template <typename AttributesT = Aws::Vector<BatchPutAttributeOutput>>
  BatchPutAttributesMetadataResult& WithAttributes(AttributesT&& value) {
    SetAttributes(std::forward<AttributesT>(value));
    return *this;
  }
  template <typename AttributesT = BatchPutAttributeOutput>
  BatchPutAttributesMetadataResult& AddAttributes(AttributesT&& value) {
    m_attributesHasBeenSet = true;
    m_attributes.emplace_back(std::forward<AttributesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The errors generated when the BatchPutAttributeMetadata action is
   * invoked.</p>
   */
  inline const Aws::Vector<AttributeError>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<AttributeError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<AttributeError>>
  BatchPutAttributesMetadataResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = AttributeError>
  BatchPutAttributesMetadataResult& AddErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors.emplace_back(std::forward<ErrorsT>(value));
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
  BatchPutAttributesMetadataResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<BatchPutAttributeOutput> m_attributes;
  bool m_attributesHasBeenSet = false;

  Aws::Vector<AttributeError> m_errors;
  bool m_errorsHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
