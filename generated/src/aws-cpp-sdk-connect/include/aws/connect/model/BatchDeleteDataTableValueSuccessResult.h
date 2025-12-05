/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/DataTableLockVersion.h>
#include <aws/connect/model/PrimaryValue.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>A batch delete data table value success result.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/BatchDeleteDataTableValueSuccessResult">AWS
 * API Reference</a></p>
 */
class BatchDeleteDataTableValueSuccessResult {
 public:
  AWS_CONNECT_API BatchDeleteDataTableValueSuccessResult() = default;
  AWS_CONNECT_API BatchDeleteDataTableValueSuccessResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API BatchDeleteDataTableValueSuccessResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The result's primary values.</p>
   */
  inline const Aws::Vector<PrimaryValue>& GetPrimaryValues() const { return m_primaryValues; }
  inline bool PrimaryValuesHasBeenSet() const { return m_primaryValuesHasBeenSet; }
  template <typename PrimaryValuesT = Aws::Vector<PrimaryValue>>
  void SetPrimaryValues(PrimaryValuesT&& value) {
    m_primaryValuesHasBeenSet = true;
    m_primaryValues = std::forward<PrimaryValuesT>(value);
  }
  template <typename PrimaryValuesT = Aws::Vector<PrimaryValue>>
  BatchDeleteDataTableValueSuccessResult& WithPrimaryValues(PrimaryValuesT&& value) {
    SetPrimaryValues(std::forward<PrimaryValuesT>(value));
    return *this;
  }
  template <typename PrimaryValuesT = PrimaryValue>
  BatchDeleteDataTableValueSuccessResult& AddPrimaryValues(PrimaryValuesT&& value) {
    m_primaryValuesHasBeenSet = true;
    m_primaryValues.emplace_back(std::forward<PrimaryValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result's attribute name.</p>
   */
  inline const Aws::String& GetAttributeName() const { return m_attributeName; }
  inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
  template <typename AttributeNameT = Aws::String>
  void SetAttributeName(AttributeNameT&& value) {
    m_attributeNameHasBeenSet = true;
    m_attributeName = std::forward<AttributeNameT>(value);
  }
  template <typename AttributeNameT = Aws::String>
  BatchDeleteDataTableValueSuccessResult& WithAttributeName(AttributeNameT&& value) {
    SetAttributeName(std::forward<AttributeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result's lock version.</p>
   */
  inline const DataTableLockVersion& GetLockVersion() const { return m_lockVersion; }
  inline bool LockVersionHasBeenSet() const { return m_lockVersionHasBeenSet; }
  template <typename LockVersionT = DataTableLockVersion>
  void SetLockVersion(LockVersionT&& value) {
    m_lockVersionHasBeenSet = true;
    m_lockVersion = std::forward<LockVersionT>(value);
  }
  template <typename LockVersionT = DataTableLockVersion>
  BatchDeleteDataTableValueSuccessResult& WithLockVersion(LockVersionT&& value) {
    SetLockVersion(std::forward<LockVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<PrimaryValue> m_primaryValues;

  Aws::String m_attributeName;

  DataTableLockVersion m_lockVersion;
  bool m_primaryValuesHasBeenSet = false;
  bool m_attributeNameHasBeenSet = false;
  bool m_lockVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
