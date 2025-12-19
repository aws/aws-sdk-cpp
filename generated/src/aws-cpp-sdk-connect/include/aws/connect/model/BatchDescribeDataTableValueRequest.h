/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/DataTableValueIdentifier.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class BatchDescribeDataTableValueRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API BatchDescribeDataTableValueRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchDescribeDataTableValue"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier for the Amazon Connect instance.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  BatchDescribeDataTableValueRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the data table. Must also accept the table ARN with
   * or without a version alias.</p>
   */
  inline const Aws::String& GetDataTableId() const { return m_dataTableId; }
  inline bool DataTableIdHasBeenSet() const { return m_dataTableIdHasBeenSet; }
  template <typename DataTableIdT = Aws::String>
  void SetDataTableId(DataTableIdT&& value) {
    m_dataTableIdHasBeenSet = true;
    m_dataTableId = std::forward<DataTableIdT>(value);
  }
  template <typename DataTableIdT = Aws::String>
  BatchDescribeDataTableValueRequest& WithDataTableId(DataTableIdT&& value) {
    SetDataTableId(std::forward<DataTableIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of value identifiers to retrieve, each specifying primary values and
   * attribute names.</p>
   */
  inline const Aws::Vector<DataTableValueIdentifier>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<DataTableValueIdentifier>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<DataTableValueIdentifier>>
  BatchDescribeDataTableValueRequest& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = DataTableValueIdentifier>
  BatchDescribeDataTableValueRequest& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_dataTableId;

  Aws::Vector<DataTableValueIdentifier> m_values;
  bool m_instanceIdHasBeenSet = false;
  bool m_dataTableIdHasBeenSet = false;
  bool m_valuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
