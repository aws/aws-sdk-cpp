/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/DataTableAttribute.h>
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
class DescribeDataTableAttributeResult {
 public:
  AWS_CONNECT_API DescribeDataTableAttributeResult() = default;
  AWS_CONNECT_API DescribeDataTableAttributeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API DescribeDataTableAttributeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The complete attribute information including configuration, validation rules,
   * lock version, and metadata.</p>
   */
  inline const DataTableAttribute& GetAttribute() const { return m_attribute; }
  template <typename AttributeT = DataTableAttribute>
  void SetAttribute(AttributeT&& value) {
    m_attributeHasBeenSet = true;
    m_attribute = std::forward<AttributeT>(value);
  }
  template <typename AttributeT = DataTableAttribute>
  DescribeDataTableAttributeResult& WithAttribute(AttributeT&& value) {
    SetAttribute(std::forward<AttributeT>(value));
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
  DescribeDataTableAttributeResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  DataTableAttribute m_attribute;
  bool m_attributeHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
