/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_DAX_API Parameter
  {
  public:
    Parameter();
    Parameter(Aws::Utils::Json::JsonView jsonValue);
    Parameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the parameter.</p>
     */
    inline const Aws::String& GetParameterName() const{ return m_parameterName; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetParameterName(const Aws::String& value) { m_parameterNameHasBeenSet = true; m_parameterName = value; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetParameterName(Aws::String&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::move(value); }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetParameterName(const char* value) { m_parameterNameHasBeenSet = true; m_parameterName.assign(value); }

    /**
     * <p>The name of the parameter.</p>
     */
    inline Parameter& WithParameterName(const Aws::String& value) { SetParameterName(value); return *this;}

    /**
     * <p>The name of the parameter.</p>
     */
    inline Parameter& WithParameterName(Aws::String&& value) { SetParameterName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter.</p>
     */
    inline Parameter& WithParameterName(const char* value) { SetParameterName(value); return *this;}


    /**
     * <p>Determines whether the parameter can be applied to any nodes, or only nodes
     * of a particular type.</p>
     */
    inline const ParameterType& GetParameterType() const{ return m_parameterType; }

    /**
     * <p>Determines whether the parameter can be applied to any nodes, or only nodes
     * of a particular type.</p>
     */
    inline bool ParameterTypeHasBeenSet() const { return m_parameterTypeHasBeenSet; }

    /**
     * <p>Determines whether the parameter can be applied to any nodes, or only nodes
     * of a particular type.</p>
     */
    inline void SetParameterType(const ParameterType& value) { m_parameterTypeHasBeenSet = true; m_parameterType = value; }

    /**
     * <p>Determines whether the parameter can be applied to any nodes, or only nodes
     * of a particular type.</p>
     */
    inline void SetParameterType(ParameterType&& value) { m_parameterTypeHasBeenSet = true; m_parameterType = std::move(value); }

    /**
     * <p>Determines whether the parameter can be applied to any nodes, or only nodes
     * of a particular type.</p>
     */
    inline Parameter& WithParameterType(const ParameterType& value) { SetParameterType(value); return *this;}

    /**
     * <p>Determines whether the parameter can be applied to any nodes, or only nodes
     * of a particular type.</p>
     */
    inline Parameter& WithParameterType(ParameterType&& value) { SetParameterType(std::move(value)); return *this;}


    /**
     * <p>The value for the parameter.</p>
     */
    inline const Aws::String& GetParameterValue() const{ return m_parameterValue; }

    /**
     * <p>The value for the parameter.</p>
     */
    inline bool ParameterValueHasBeenSet() const { return m_parameterValueHasBeenSet; }

    /**
     * <p>The value for the parameter.</p>
     */
    inline void SetParameterValue(const Aws::String& value) { m_parameterValueHasBeenSet = true; m_parameterValue = value; }

    /**
     * <p>The value for the parameter.</p>
     */
    inline void SetParameterValue(Aws::String&& value) { m_parameterValueHasBeenSet = true; m_parameterValue = std::move(value); }

    /**
     * <p>The value for the parameter.</p>
     */
    inline void SetParameterValue(const char* value) { m_parameterValueHasBeenSet = true; m_parameterValue.assign(value); }

    /**
     * <p>The value for the parameter.</p>
     */
    inline Parameter& WithParameterValue(const Aws::String& value) { SetParameterValue(value); return *this;}

    /**
     * <p>The value for the parameter.</p>
     */
    inline Parameter& WithParameterValue(Aws::String&& value) { SetParameterValue(std::move(value)); return *this;}

    /**
     * <p>The value for the parameter.</p>
     */
    inline Parameter& WithParameterValue(const char* value) { SetParameterValue(value); return *this;}


    /**
     * <p>A list of node types, and specific parameter values for each node.</p>
     */
    inline const Aws::Vector<NodeTypeSpecificValue>& GetNodeTypeSpecificValues() const{ return m_nodeTypeSpecificValues; }

    /**
     * <p>A list of node types, and specific parameter values for each node.</p>
     */
    inline bool NodeTypeSpecificValuesHasBeenSet() const { return m_nodeTypeSpecificValuesHasBeenSet; }

    /**
     * <p>A list of node types, and specific parameter values for each node.</p>
     */
    inline void SetNodeTypeSpecificValues(const Aws::Vector<NodeTypeSpecificValue>& value) { m_nodeTypeSpecificValuesHasBeenSet = true; m_nodeTypeSpecificValues = value; }

    /**
     * <p>A list of node types, and specific parameter values for each node.</p>
     */
    inline void SetNodeTypeSpecificValues(Aws::Vector<NodeTypeSpecificValue>&& value) { m_nodeTypeSpecificValuesHasBeenSet = true; m_nodeTypeSpecificValues = std::move(value); }

    /**
     * <p>A list of node types, and specific parameter values for each node.</p>
     */
    inline Parameter& WithNodeTypeSpecificValues(const Aws::Vector<NodeTypeSpecificValue>& value) { SetNodeTypeSpecificValues(value); return *this;}

    /**
     * <p>A list of node types, and specific parameter values for each node.</p>
     */
    inline Parameter& WithNodeTypeSpecificValues(Aws::Vector<NodeTypeSpecificValue>&& value) { SetNodeTypeSpecificValues(std::move(value)); return *this;}

    /**
     * <p>A list of node types, and specific parameter values for each node.</p>
     */
    inline Parameter& AddNodeTypeSpecificValues(const NodeTypeSpecificValue& value) { m_nodeTypeSpecificValuesHasBeenSet = true; m_nodeTypeSpecificValues.push_back(value); return *this; }

    /**
     * <p>A list of node types, and specific parameter values for each node.</p>
     */
    inline Parameter& AddNodeTypeSpecificValues(NodeTypeSpecificValue&& value) { m_nodeTypeSpecificValuesHasBeenSet = true; m_nodeTypeSpecificValues.push_back(std::move(value)); return *this; }


    /**
     * <p>A description of the parameter</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the parameter</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the parameter</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the parameter</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the parameter</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the parameter</p>
     */
    inline Parameter& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the parameter</p>
     */
    inline Parameter& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the parameter</p>
     */
    inline Parameter& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>How the parameter is defined. For example, <code>system</code> denotes a
     * system-defined parameter.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>How the parameter is defined. For example, <code>system</code> denotes a
     * system-defined parameter.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>How the parameter is defined. For example, <code>system</code> denotes a
     * system-defined parameter.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>How the parameter is defined. For example, <code>system</code> denotes a
     * system-defined parameter.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>How the parameter is defined. For example, <code>system</code> denotes a
     * system-defined parameter.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>How the parameter is defined. For example, <code>system</code> denotes a
     * system-defined parameter.</p>
     */
    inline Parameter& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>How the parameter is defined. For example, <code>system</code> denotes a
     * system-defined parameter.</p>
     */
    inline Parameter& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>How the parameter is defined. For example, <code>system</code> denotes a
     * system-defined parameter.</p>
     */
    inline Parameter& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>The data type of the parameter. For example, <code>integer</code>:</p>
     */
    inline const Aws::String& GetDataType() const{ return m_dataType; }

    /**
     * <p>The data type of the parameter. For example, <code>integer</code>:</p>
     */
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }

    /**
     * <p>The data type of the parameter. For example, <code>integer</code>:</p>
     */
    inline void SetDataType(const Aws::String& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

    /**
     * <p>The data type of the parameter. For example, <code>integer</code>:</p>
     */
    inline void SetDataType(Aws::String&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }

    /**
     * <p>The data type of the parameter. For example, <code>integer</code>:</p>
     */
    inline void SetDataType(const char* value) { m_dataTypeHasBeenSet = true; m_dataType.assign(value); }

    /**
     * <p>The data type of the parameter. For example, <code>integer</code>:</p>
     */
    inline Parameter& WithDataType(const Aws::String& value) { SetDataType(value); return *this;}

    /**
     * <p>The data type of the parameter. For example, <code>integer</code>:</p>
     */
    inline Parameter& WithDataType(Aws::String&& value) { SetDataType(std::move(value)); return *this;}

    /**
     * <p>The data type of the parameter. For example, <code>integer</code>:</p>
     */
    inline Parameter& WithDataType(const char* value) { SetDataType(value); return *this;}


    /**
     * <p>A range of values within which the parameter can be set.</p>
     */
    inline const Aws::String& GetAllowedValues() const{ return m_allowedValues; }

    /**
     * <p>A range of values within which the parameter can be set.</p>
     */
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }

    /**
     * <p>A range of values within which the parameter can be set.</p>
     */
    inline void SetAllowedValues(const Aws::String& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }

    /**
     * <p>A range of values within which the parameter can be set.</p>
     */
    inline void SetAllowedValues(Aws::String&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::move(value); }

    /**
     * <p>A range of values within which the parameter can be set.</p>
     */
    inline void SetAllowedValues(const char* value) { m_allowedValuesHasBeenSet = true; m_allowedValues.assign(value); }

    /**
     * <p>A range of values within which the parameter can be set.</p>
     */
    inline Parameter& WithAllowedValues(const Aws::String& value) { SetAllowedValues(value); return *this;}

    /**
     * <p>A range of values within which the parameter can be set.</p>
     */
    inline Parameter& WithAllowedValues(Aws::String&& value) { SetAllowedValues(std::move(value)); return *this;}

    /**
     * <p>A range of values within which the parameter can be set.</p>
     */
    inline Parameter& WithAllowedValues(const char* value) { SetAllowedValues(value); return *this;}


    /**
     * <p>Whether the customer is allowed to modify the parameter.</p>
     */
    inline const IsModifiable& GetIsModifiable() const{ return m_isModifiable; }

    /**
     * <p>Whether the customer is allowed to modify the parameter.</p>
     */
    inline bool IsModifiableHasBeenSet() const { return m_isModifiableHasBeenSet; }

    /**
     * <p>Whether the customer is allowed to modify the parameter.</p>
     */
    inline void SetIsModifiable(const IsModifiable& value) { m_isModifiableHasBeenSet = true; m_isModifiable = value; }

    /**
     * <p>Whether the customer is allowed to modify the parameter.</p>
     */
    inline void SetIsModifiable(IsModifiable&& value) { m_isModifiableHasBeenSet = true; m_isModifiable = std::move(value); }

    /**
     * <p>Whether the customer is allowed to modify the parameter.</p>
     */
    inline Parameter& WithIsModifiable(const IsModifiable& value) { SetIsModifiable(value); return *this;}

    /**
     * <p>Whether the customer is allowed to modify the parameter.</p>
     */
    inline Parameter& WithIsModifiable(IsModifiable&& value) { SetIsModifiable(std::move(value)); return *this;}


    /**
     * <p>The conditions under which changes to this parameter can be applied. For
     * example, <code>requires-reboot</code> indicates that a new value for this
     * parameter will only take effect if a node is rebooted.</p>
     */
    inline const ChangeType& GetChangeType() const{ return m_changeType; }

    /**
     * <p>The conditions under which changes to this parameter can be applied. For
     * example, <code>requires-reboot</code> indicates that a new value for this
     * parameter will only take effect if a node is rebooted.</p>
     */
    inline bool ChangeTypeHasBeenSet() const { return m_changeTypeHasBeenSet; }

    /**
     * <p>The conditions under which changes to this parameter can be applied. For
     * example, <code>requires-reboot</code> indicates that a new value for this
     * parameter will only take effect if a node is rebooted.</p>
     */
    inline void SetChangeType(const ChangeType& value) { m_changeTypeHasBeenSet = true; m_changeType = value; }

    /**
     * <p>The conditions under which changes to this parameter can be applied. For
     * example, <code>requires-reboot</code> indicates that a new value for this
     * parameter will only take effect if a node is rebooted.</p>
     */
    inline void SetChangeType(ChangeType&& value) { m_changeTypeHasBeenSet = true; m_changeType = std::move(value); }

    /**
     * <p>The conditions under which changes to this parameter can be applied. For
     * example, <code>requires-reboot</code> indicates that a new value for this
     * parameter will only take effect if a node is rebooted.</p>
     */
    inline Parameter& WithChangeType(const ChangeType& value) { SetChangeType(value); return *this;}

    /**
     * <p>The conditions under which changes to this parameter can be applied. For
     * example, <code>requires-reboot</code> indicates that a new value for this
     * parameter will only take effect if a node is rebooted.</p>
     */
    inline Parameter& WithChangeType(ChangeType&& value) { SetChangeType(std::move(value)); return *this;}

  private:

    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet;

    ParameterType m_parameterType;
    bool m_parameterTypeHasBeenSet;

    Aws::String m_parameterValue;
    bool m_parameterValueHasBeenSet;

    Aws::Vector<NodeTypeSpecificValue> m_nodeTypeSpecificValues;
    bool m_nodeTypeSpecificValuesHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_source;
    bool m_sourceHasBeenSet;

    Aws::String m_dataType;
    bool m_dataTypeHasBeenSet;

    Aws::String m_allowedValues;
    bool m_allowedValuesHasBeenSet;

    IsModifiable m_isModifiable;
    bool m_isModifiableHasBeenSet;

    ChangeType m_changeType;
    bool m_changeTypeHasBeenSet;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
