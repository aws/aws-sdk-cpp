/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dax/model/ParameterType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dax/model/IsModifiable.h>
#include <aws/dax/model/ChangeType.h>
#include <aws/dax/model/NodeTypeSpecificValue.h>
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
namespace DAX
{
namespace Model
{

  /**
   * <p>Describes an individual setting that controls some aspect of DAX
   * behavior.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/Parameter">AWS API
   * Reference</a></p>
   */
  class Parameter
  {
  public:
    AWS_DAX_API Parameter() = default;
    AWS_DAX_API Parameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_DAX_API Parameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DAX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the parameter.</p>
     */
    inline const Aws::String& GetParameterName() const { return m_parameterName; }
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }
    template<typename ParameterNameT = Aws::String>
    void SetParameterName(ParameterNameT&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::forward<ParameterNameT>(value); }
    template<typename ParameterNameT = Aws::String>
    Parameter& WithParameterName(ParameterNameT&& value) { SetParameterName(std::forward<ParameterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the parameter can be applied to any nodes, or only nodes
     * of a particular type.</p>
     */
    inline ParameterType GetParameterType() const { return m_parameterType; }
    inline bool ParameterTypeHasBeenSet() const { return m_parameterTypeHasBeenSet; }
    inline void SetParameterType(ParameterType value) { m_parameterTypeHasBeenSet = true; m_parameterType = value; }
    inline Parameter& WithParameterType(ParameterType value) { SetParameterType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for the parameter.</p>
     */
    inline const Aws::String& GetParameterValue() const { return m_parameterValue; }
    inline bool ParameterValueHasBeenSet() const { return m_parameterValueHasBeenSet; }
    template<typename ParameterValueT = Aws::String>
    void SetParameterValue(ParameterValueT&& value) { m_parameterValueHasBeenSet = true; m_parameterValue = std::forward<ParameterValueT>(value); }
    template<typename ParameterValueT = Aws::String>
    Parameter& WithParameterValue(ParameterValueT&& value) { SetParameterValue(std::forward<ParameterValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of node types, and specific parameter values for each node.</p>
     */
    inline const Aws::Vector<NodeTypeSpecificValue>& GetNodeTypeSpecificValues() const { return m_nodeTypeSpecificValues; }
    inline bool NodeTypeSpecificValuesHasBeenSet() const { return m_nodeTypeSpecificValuesHasBeenSet; }
    template<typename NodeTypeSpecificValuesT = Aws::Vector<NodeTypeSpecificValue>>
    void SetNodeTypeSpecificValues(NodeTypeSpecificValuesT&& value) { m_nodeTypeSpecificValuesHasBeenSet = true; m_nodeTypeSpecificValues = std::forward<NodeTypeSpecificValuesT>(value); }
    template<typename NodeTypeSpecificValuesT = Aws::Vector<NodeTypeSpecificValue>>
    Parameter& WithNodeTypeSpecificValues(NodeTypeSpecificValuesT&& value) { SetNodeTypeSpecificValues(std::forward<NodeTypeSpecificValuesT>(value)); return *this;}
    template<typename NodeTypeSpecificValuesT = NodeTypeSpecificValue>
    Parameter& AddNodeTypeSpecificValues(NodeTypeSpecificValuesT&& value) { m_nodeTypeSpecificValuesHasBeenSet = true; m_nodeTypeSpecificValues.emplace_back(std::forward<NodeTypeSpecificValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A description of the parameter</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Parameter& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How the parameter is defined. For example, <code>system</code> denotes a
     * system-defined parameter.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    Parameter& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the parameter. For example, <code>integer</code>:</p>
     */
    inline const Aws::String& GetDataType() const { return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    template<typename DataTypeT = Aws::String>
    void SetDataType(DataTypeT&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::forward<DataTypeT>(value); }
    template<typename DataTypeT = Aws::String>
    Parameter& WithDataType(DataTypeT&& value) { SetDataType(std::forward<DataTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A range of values within which the parameter can be set.</p>
     */
    inline const Aws::String& GetAllowedValues() const { return m_allowedValues; }
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
    template<typename AllowedValuesT = Aws::String>
    void SetAllowedValues(AllowedValuesT&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::forward<AllowedValuesT>(value); }
    template<typename AllowedValuesT = Aws::String>
    Parameter& WithAllowedValues(AllowedValuesT&& value) { SetAllowedValues(std::forward<AllowedValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the customer is allowed to modify the parameter.</p>
     */
    inline IsModifiable GetIsModifiable() const { return m_isModifiable; }
    inline bool IsModifiableHasBeenSet() const { return m_isModifiableHasBeenSet; }
    inline void SetIsModifiable(IsModifiable value) { m_isModifiableHasBeenSet = true; m_isModifiable = value; }
    inline Parameter& WithIsModifiable(IsModifiable value) { SetIsModifiable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The conditions under which changes to this parameter can be applied. For
     * example, <code>requires-reboot</code> indicates that a new value for this
     * parameter will only take effect if a node is rebooted.</p>
     */
    inline ChangeType GetChangeType() const { return m_changeType; }
    inline bool ChangeTypeHasBeenSet() const { return m_changeTypeHasBeenSet; }
    inline void SetChangeType(ChangeType value) { m_changeTypeHasBeenSet = true; m_changeType = value; }
    inline Parameter& WithChangeType(ChangeType value) { SetChangeType(value); return *this;}
    ///@}
  private:

    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet = false;

    ParameterType m_parameterType{ParameterType::NOT_SET};
    bool m_parameterTypeHasBeenSet = false;

    Aws::String m_parameterValue;
    bool m_parameterValueHasBeenSet = false;

    Aws::Vector<NodeTypeSpecificValue> m_nodeTypeSpecificValues;
    bool m_nodeTypeSpecificValuesHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_dataType;
    bool m_dataTypeHasBeenSet = false;

    Aws::String m_allowedValues;
    bool m_allowedValuesHasBeenSet = false;

    IsModifiable m_isModifiable{IsModifiable::NOT_SET};
    bool m_isModifiableHasBeenSet = false;

    ChangeType m_changeType{ChangeType::NOT_SET};
    bool m_changeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
