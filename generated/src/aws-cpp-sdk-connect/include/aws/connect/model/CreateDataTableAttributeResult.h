/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/DataTableLockVersion.h>
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
class CreateDataTableAttributeResult {
 public:
  AWS_CONNECT_API CreateDataTableAttributeResult() = default;
  AWS_CONNECT_API CreateDataTableAttributeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API CreateDataTableAttributeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the created attribute since it also serves as the identifier.
   * This could be different than the parameter passed in since it will be trimmed
   * for whitespace.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateDataTableAttributeResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier assigned to the created attribute.</p>
   */
  inline const Aws::String& GetAttributeId() const { return m_attributeId; }
  template <typename AttributeIdT = Aws::String>
  void SetAttributeId(AttributeIdT&& value) {
    m_attributeIdHasBeenSet = true;
    m_attributeId = std::forward<AttributeIdT>(value);
  }
  template <typename AttributeIdT = Aws::String>
  CreateDataTableAttributeResult& WithAttributeId(AttributeIdT&& value) {
    SetAttributeId(std::forward<AttributeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lock version information for the data table and attribute, used for
   * optimistic locking and versioning.</p>
   */
  inline const DataTableLockVersion& GetLockVersion() const { return m_lockVersion; }
  template <typename LockVersionT = DataTableLockVersion>
  void SetLockVersion(LockVersionT&& value) {
    m_lockVersionHasBeenSet = true;
    m_lockVersion = std::forward<LockVersionT>(value);
  }
  template <typename LockVersionT = DataTableLockVersion>
  CreateDataTableAttributeResult& WithLockVersion(LockVersionT&& value) {
    SetLockVersion(std::forward<LockVersionT>(value));
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
  CreateDataTableAttributeResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_attributeId;
  bool m_attributeIdHasBeenSet = false;

  DataTableLockVersion m_lockVersion;
  bool m_lockVersionHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
