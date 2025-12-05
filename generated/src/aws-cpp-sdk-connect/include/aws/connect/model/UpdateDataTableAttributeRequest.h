/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/DataTableAttributeValueType.h>
#include <aws/connect/model/Validation.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class UpdateDataTableAttributeRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API UpdateDataTableAttributeRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateDataTableAttribute"; }

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
  UpdateDataTableAttributeRequest& WithInstanceId(InstanceIdT&& value) {
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
  UpdateDataTableAttributeRequest& WithDataTableId(DataTableIdT&& value) {
    SetDataTableId(std::forward<DataTableIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current name of the attribute to update. Used as an identifier since
   * attribute names can be changed.</p>
   */
  inline const Aws::String& GetAttributeName() const { return m_attributeName; }
  inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
  template <typename AttributeNameT = Aws::String>
  void SetAttributeName(AttributeNameT&& value) {
    m_attributeNameHasBeenSet = true;
    m_attributeName = std::forward<AttributeNameT>(value);
  }
  template <typename AttributeNameT = Aws::String>
  UpdateDataTableAttributeRequest& WithAttributeName(AttributeNameT&& value) {
    SetAttributeName(std::forward<AttributeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new name for the attribute. Must conform to Connect human readable string
   * specification and be unique within the data table.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateDataTableAttributeRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated value type for the attribute. When changing value types, existing
   * values are not deleted but may return default values if incompatible.</p>
   */
  inline DataTableAttributeValueType GetValueType() const { return m_valueType; }
  inline bool ValueTypeHasBeenSet() const { return m_valueTypeHasBeenSet; }
  inline void SetValueType(DataTableAttributeValueType value) {
    m_valueTypeHasBeenSet = true;
    m_valueType = value;
  }
  inline UpdateDataTableAttributeRequest& WithValueType(DataTableAttributeValueType value) {
    SetValueType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated description for the attribute.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateDataTableAttributeRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the attribute should be treated as a primary key. Converting to
   * primary attribute requires existing values to maintain uniqueness.</p>
   */
  inline bool GetPrimary() const { return m_primary; }
  inline bool PrimaryHasBeenSet() const { return m_primaryHasBeenSet; }
  inline void SetPrimary(bool value) {
    m_primaryHasBeenSet = true;
    m_primary = value;
  }
  inline UpdateDataTableAttributeRequest& WithPrimary(bool value) {
    SetPrimary(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated validation rules for the attribute. Changes do not affect
   * existing values until they are modified.</p>
   */
  inline const Validation& GetValidation() const { return m_validation; }
  inline bool ValidationHasBeenSet() const { return m_validationHasBeenSet; }
  template <typename ValidationT = Validation>
  void SetValidation(ValidationT&& value) {
    m_validationHasBeenSet = true;
    m_validation = std::forward<ValidationT>(value);
  }
  template <typename ValidationT = Validation>
  UpdateDataTableAttributeRequest& WithValidation(ValidationT&& value) {
    SetValidation(std::forward<ValidationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_dataTableId;

  Aws::String m_attributeName;

  Aws::String m_name;

  DataTableAttributeValueType m_valueType{DataTableAttributeValueType::NOT_SET};

  Aws::String m_description;

  bool m_primary{false};

  Validation m_validation;
  bool m_instanceIdHasBeenSet = false;
  bool m_dataTableIdHasBeenSet = false;
  bool m_attributeNameHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_valueTypeHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_primaryHasBeenSet = false;
  bool m_validationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
