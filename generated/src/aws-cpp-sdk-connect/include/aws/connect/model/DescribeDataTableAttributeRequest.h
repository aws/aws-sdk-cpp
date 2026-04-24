/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class DescribeDataTableAttributeRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API DescribeDataTableAttributeRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeDataTableAttribute"; }

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
  DescribeDataTableAttributeRequest& WithInstanceId(InstanceIdT&& value) {
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
  DescribeDataTableAttributeRequest& WithDataTableId(DataTableIdT&& value) {
    SetDataTableId(std::forward<DataTableIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the attribute to retrieve detailed information for.</p>
   */
  inline const Aws::String& GetAttributeName() const { return m_attributeName; }
  inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
  template <typename AttributeNameT = Aws::String>
  void SetAttributeName(AttributeNameT&& value) {
    m_attributeNameHasBeenSet = true;
    m_attributeName = std::forward<AttributeNameT>(value);
  }
  template <typename AttributeNameT = Aws::String>
  DescribeDataTableAttributeRequest& WithAttributeName(AttributeNameT&& value) {
    SetAttributeName(std::forward<AttributeNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_dataTableId;

  Aws::String m_attributeName;
  bool m_instanceIdHasBeenSet = false;
  bool m_dataTableIdHasBeenSet = false;
  bool m_attributeNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
