/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Appflow
{
namespace Model
{

  /**
   * <p>Contains information about the connector runtime settings that are required
   * for flow execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ConnectorRuntimeSetting">AWS
   * API Reference</a></p>
   */
  class ConnectorRuntimeSetting
  {
  public:
    AWS_APPFLOW_API ConnectorRuntimeSetting();
    AWS_APPFLOW_API ConnectorRuntimeSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ConnectorRuntimeSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains value information about the connector runtime setting.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline ConnectorRuntimeSetting& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline ConnectorRuntimeSetting& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline ConnectorRuntimeSetting& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data type of the connector runtime setting.</p>
     */
    inline const Aws::String& GetDataType() const{ return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(const Aws::String& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline void SetDataType(Aws::String&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }
    inline void SetDataType(const char* value) { m_dataTypeHasBeenSet = true; m_dataType.assign(value); }
    inline ConnectorRuntimeSetting& WithDataType(const Aws::String& value) { SetDataType(value); return *this;}
    inline ConnectorRuntimeSetting& WithDataType(Aws::String&& value) { SetDataType(std::move(value)); return *this;}
    inline ConnectorRuntimeSetting& WithDataType(const char* value) { SetDataType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this connector runtime setting is required.</p>
     */
    inline bool GetIsRequired() const{ return m_isRequired; }
    inline bool IsRequiredHasBeenSet() const { return m_isRequiredHasBeenSet; }
    inline void SetIsRequired(bool value) { m_isRequiredHasBeenSet = true; m_isRequired = value; }
    inline ConnectorRuntimeSetting& WithIsRequired(bool value) { SetIsRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A label used for connector runtime setting.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }
    inline ConnectorRuntimeSetting& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}
    inline ConnectorRuntimeSetting& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}
    inline ConnectorRuntimeSetting& WithLabel(const char* value) { SetLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description about the connector runtime setting.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ConnectorRuntimeSetting& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ConnectorRuntimeSetting& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ConnectorRuntimeSetting& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the scope of the connector runtime setting.</p>
     */
    inline const Aws::String& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const Aws::String& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(Aws::String&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline void SetScope(const char* value) { m_scopeHasBeenSet = true; m_scope.assign(value); }
    inline ConnectorRuntimeSetting& WithScope(const Aws::String& value) { SetScope(value); return *this;}
    inline ConnectorRuntimeSetting& WithScope(Aws::String&& value) { SetScope(std::move(value)); return *this;}
    inline ConnectorRuntimeSetting& WithScope(const char* value) { SetScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains default values for the connector runtime setting that are supplied
     * by the connector.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectorSuppliedValueOptions() const{ return m_connectorSuppliedValueOptions; }
    inline bool ConnectorSuppliedValueOptionsHasBeenSet() const { return m_connectorSuppliedValueOptionsHasBeenSet; }
    inline void SetConnectorSuppliedValueOptions(const Aws::Vector<Aws::String>& value) { m_connectorSuppliedValueOptionsHasBeenSet = true; m_connectorSuppliedValueOptions = value; }
    inline void SetConnectorSuppliedValueOptions(Aws::Vector<Aws::String>&& value) { m_connectorSuppliedValueOptionsHasBeenSet = true; m_connectorSuppliedValueOptions = std::move(value); }
    inline ConnectorRuntimeSetting& WithConnectorSuppliedValueOptions(const Aws::Vector<Aws::String>& value) { SetConnectorSuppliedValueOptions(value); return *this;}
    inline ConnectorRuntimeSetting& WithConnectorSuppliedValueOptions(Aws::Vector<Aws::String>&& value) { SetConnectorSuppliedValueOptions(std::move(value)); return *this;}
    inline ConnectorRuntimeSetting& AddConnectorSuppliedValueOptions(const Aws::String& value) { m_connectorSuppliedValueOptionsHasBeenSet = true; m_connectorSuppliedValueOptions.push_back(value); return *this; }
    inline ConnectorRuntimeSetting& AddConnectorSuppliedValueOptions(Aws::String&& value) { m_connectorSuppliedValueOptionsHasBeenSet = true; m_connectorSuppliedValueOptions.push_back(std::move(value)); return *this; }
    inline ConnectorRuntimeSetting& AddConnectorSuppliedValueOptions(const char* value) { m_connectorSuppliedValueOptionsHasBeenSet = true; m_connectorSuppliedValueOptions.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_dataType;
    bool m_dataTypeHasBeenSet = false;

    bool m_isRequired;
    bool m_isRequiredHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::Vector<Aws::String> m_connectorSuppliedValueOptions;
    bool m_connectorSuppliedValueOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
