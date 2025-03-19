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
    AWS_APPFLOW_API ConnectorRuntimeSetting() = default;
    AWS_APPFLOW_API ConnectorRuntimeSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ConnectorRuntimeSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains value information about the connector runtime setting.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    ConnectorRuntimeSetting& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data type of the connector runtime setting.</p>
     */
    inline const Aws::String& GetDataType() const { return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    template<typename DataTypeT = Aws::String>
    void SetDataType(DataTypeT&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::forward<DataTypeT>(value); }
    template<typename DataTypeT = Aws::String>
    ConnectorRuntimeSetting& WithDataType(DataTypeT&& value) { SetDataType(std::forward<DataTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this connector runtime setting is required.</p>
     */
    inline bool GetIsRequired() const { return m_isRequired; }
    inline bool IsRequiredHasBeenSet() const { return m_isRequiredHasBeenSet; }
    inline void SetIsRequired(bool value) { m_isRequiredHasBeenSet = true; m_isRequired = value; }
    inline ConnectorRuntimeSetting& WithIsRequired(bool value) { SetIsRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A label used for connector runtime setting.</p>
     */
    inline const Aws::String& GetLabel() const { return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    template<typename LabelT = Aws::String>
    void SetLabel(LabelT&& value) { m_labelHasBeenSet = true; m_label = std::forward<LabelT>(value); }
    template<typename LabelT = Aws::String>
    ConnectorRuntimeSetting& WithLabel(LabelT&& value) { SetLabel(std::forward<LabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description about the connector runtime setting.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ConnectorRuntimeSetting& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the scope of the connector runtime setting.</p>
     */
    inline const Aws::String& GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    template<typename ScopeT = Aws::String>
    void SetScope(ScopeT&& value) { m_scopeHasBeenSet = true; m_scope = std::forward<ScopeT>(value); }
    template<typename ScopeT = Aws::String>
    ConnectorRuntimeSetting& WithScope(ScopeT&& value) { SetScope(std::forward<ScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains default values for the connector runtime setting that are supplied
     * by the connector.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectorSuppliedValueOptions() const { return m_connectorSuppliedValueOptions; }
    inline bool ConnectorSuppliedValueOptionsHasBeenSet() const { return m_connectorSuppliedValueOptionsHasBeenSet; }
    template<typename ConnectorSuppliedValueOptionsT = Aws::Vector<Aws::String>>
    void SetConnectorSuppliedValueOptions(ConnectorSuppliedValueOptionsT&& value) { m_connectorSuppliedValueOptionsHasBeenSet = true; m_connectorSuppliedValueOptions = std::forward<ConnectorSuppliedValueOptionsT>(value); }
    template<typename ConnectorSuppliedValueOptionsT = Aws::Vector<Aws::String>>
    ConnectorRuntimeSetting& WithConnectorSuppliedValueOptions(ConnectorSuppliedValueOptionsT&& value) { SetConnectorSuppliedValueOptions(std::forward<ConnectorSuppliedValueOptionsT>(value)); return *this;}
    template<typename ConnectorSuppliedValueOptionsT = Aws::String>
    ConnectorRuntimeSetting& AddConnectorSuppliedValueOptions(ConnectorSuppliedValueOptionsT&& value) { m_connectorSuppliedValueOptionsHasBeenSet = true; m_connectorSuppliedValueOptions.emplace_back(std::forward<ConnectorSuppliedValueOptionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_dataType;
    bool m_dataTypeHasBeenSet = false;

    bool m_isRequired{false};
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
