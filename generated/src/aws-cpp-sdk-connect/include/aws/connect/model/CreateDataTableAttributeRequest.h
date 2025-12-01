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
class CreateDataTableAttributeRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API CreateDataTableAttributeRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateDataTableAttribute"; }

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
  CreateDataTableAttributeRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the data table. Must also accept the table ARN with
   * or without a version alias. If the version is provided as part of the identifier
   * or ARN, the version must be one of the two available system managed aliases,
   * $SAVED or $LATEST.</p>
   */
  inline const Aws::String& GetDataTableId() const { return m_dataTableId; }
  inline bool DataTableIdHasBeenSet() const { return m_dataTableIdHasBeenSet; }
  template <typename DataTableIdT = Aws::String>
  void SetDataTableId(DataTableIdT&& value) {
    m_dataTableIdHasBeenSet = true;
    m_dataTableId = std::forward<DataTableIdT>(value);
  }
  template <typename DataTableIdT = Aws::String>
  CreateDataTableAttributeRequest& WithDataTableId(DataTableIdT&& value) {
    SetDataTableId(std::forward<DataTableIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name for the attribute. Must conform to Connect human readable string
   * specification and have 1-127 characters. Must not start with the reserved case
   * insensitive values 'connect:' and 'aws:'. Whitespace trimmed before persisting.
   * Must be unique for the data table using case-insensitive comparison.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateDataTableAttributeRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of value allowed or the resultant type after the value's expression
   * is evaluated. Must be one of TEXT, TEXT_LIST, NUMBER, NUMBER_LIST, and
   * BOOLEAN.</p>
   */
  inline DataTableAttributeValueType GetValueType() const { return m_valueType; }
  inline bool ValueTypeHasBeenSet() const { return m_valueTypeHasBeenSet; }
  inline void SetValueType(DataTableAttributeValueType value) {
    m_valueTypeHasBeenSet = true;
    m_valueType = value;
  }
  inline CreateDataTableAttributeRequest& WithValueType(DataTableAttributeValueType value) {
    SetValueType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional description for the attribute. Must conform to Connect human
   * readable string specification and have 0-250 characters. Whitespace trimmed
   * before persisting.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateDataTableAttributeRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional boolean that defaults to false. Determines if the value is used to
   * identify a record in the table. Values for primary attributes must not be
   * expressions.</p>
   */
  inline bool GetPrimary() const { return m_primary; }
  inline bool PrimaryHasBeenSet() const { return m_primaryHasBeenSet; }
  inline void SetPrimary(bool value) {
    m_primaryHasBeenSet = true;
    m_primary = value;
  }
  inline CreateDataTableAttributeRequest& WithPrimary(bool value) {
    SetPrimary(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional validation rules for the attribute. Borrows heavily from JSON Schema
   * - Draft 2020-12. The maximum length of arrays within validations and depth of
   * validations is 5. There are default limits that apply to all types. Customer
   * specified limits in excess of the default limits are not permitted.</p>
   */
  inline const Validation& GetValidation() const { return m_validation; }
  inline bool ValidationHasBeenSet() const { return m_validationHasBeenSet; }
  template <typename ValidationT = Validation>
  void SetValidation(ValidationT&& value) {
    m_validationHasBeenSet = true;
    m_validation = std::forward<ValidationT>(value);
  }
  template <typename ValidationT = Validation>
  CreateDataTableAttributeRequest& WithValidation(ValidationT&& value) {
    SetValidation(std::forward<ValidationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;
  bool m_instanceIdHasBeenSet = false;

  Aws::String m_dataTableId;
  bool m_dataTableIdHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  DataTableAttributeValueType m_valueType{DataTableAttributeValueType::NOT_SET};
  bool m_valueTypeHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  bool m_primary{false};
  bool m_primaryHasBeenSet = false;

  Validation m_validation;
  bool m_validationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
