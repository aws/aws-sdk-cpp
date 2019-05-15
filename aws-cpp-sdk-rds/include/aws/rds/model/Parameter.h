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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ApplyMethod.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p> This data type is used as a request parameter in the
   * <code>ModifyDBParameterGroup</code> and <code>ResetDBParameterGroup</code>
   * actions. </p> <p>This data type is used as a response element in the
   * <code>DescribeEngineDefaultParameters</code> and
   * <code>DescribeDBParameters</code> actions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/Parameter">AWS API
   * Reference</a></p>
   */
  class AWS_RDS_API Parameter
  {
  public:
    Parameter();
    Parameter(const Aws::Utils::Xml::XmlNode& xmlNode);
    Parameter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Specifies the name of the parameter.</p>
     */
    inline const Aws::String& GetParameterName() const{ return m_parameterName; }

    /**
     * <p>Specifies the name of the parameter.</p>
     */
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }

    /**
     * <p>Specifies the name of the parameter.</p>
     */
    inline void SetParameterName(const Aws::String& value) { m_parameterNameHasBeenSet = true; m_parameterName = value; }

    /**
     * <p>Specifies the name of the parameter.</p>
     */
    inline void SetParameterName(Aws::String&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::move(value); }

    /**
     * <p>Specifies the name of the parameter.</p>
     */
    inline void SetParameterName(const char* value) { m_parameterNameHasBeenSet = true; m_parameterName.assign(value); }

    /**
     * <p>Specifies the name of the parameter.</p>
     */
    inline Parameter& WithParameterName(const Aws::String& value) { SetParameterName(value); return *this;}

    /**
     * <p>Specifies the name of the parameter.</p>
     */
    inline Parameter& WithParameterName(Aws::String&& value) { SetParameterName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the parameter.</p>
     */
    inline Parameter& WithParameterName(const char* value) { SetParameterName(value); return *this;}


    /**
     * <p>Specifies the value of the parameter.</p>
     */
    inline const Aws::String& GetParameterValue() const{ return m_parameterValue; }

    /**
     * <p>Specifies the value of the parameter.</p>
     */
    inline bool ParameterValueHasBeenSet() const { return m_parameterValueHasBeenSet; }

    /**
     * <p>Specifies the value of the parameter.</p>
     */
    inline void SetParameterValue(const Aws::String& value) { m_parameterValueHasBeenSet = true; m_parameterValue = value; }

    /**
     * <p>Specifies the value of the parameter.</p>
     */
    inline void SetParameterValue(Aws::String&& value) { m_parameterValueHasBeenSet = true; m_parameterValue = std::move(value); }

    /**
     * <p>Specifies the value of the parameter.</p>
     */
    inline void SetParameterValue(const char* value) { m_parameterValueHasBeenSet = true; m_parameterValue.assign(value); }

    /**
     * <p>Specifies the value of the parameter.</p>
     */
    inline Parameter& WithParameterValue(const Aws::String& value) { SetParameterValue(value); return *this;}

    /**
     * <p>Specifies the value of the parameter.</p>
     */
    inline Parameter& WithParameterValue(Aws::String&& value) { SetParameterValue(std::move(value)); return *this;}

    /**
     * <p>Specifies the value of the parameter.</p>
     */
    inline Parameter& WithParameterValue(const char* value) { SetParameterValue(value); return *this;}


    /**
     * <p>Provides a description of the parameter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Provides a description of the parameter.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Provides a description of the parameter.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Provides a description of the parameter.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Provides a description of the parameter.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Provides a description of the parameter.</p>
     */
    inline Parameter& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Provides a description of the parameter.</p>
     */
    inline Parameter& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Provides a description of the parameter.</p>
     */
    inline Parameter& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Indicates the source of the parameter value.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>Indicates the source of the parameter value.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>Indicates the source of the parameter value.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>Indicates the source of the parameter value.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>Indicates the source of the parameter value.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>Indicates the source of the parameter value.</p>
     */
    inline Parameter& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>Indicates the source of the parameter value.</p>
     */
    inline Parameter& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>Indicates the source of the parameter value.</p>
     */
    inline Parameter& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>Specifies the engine specific parameters type.</p>
     */
    inline const Aws::String& GetApplyType() const{ return m_applyType; }

    /**
     * <p>Specifies the engine specific parameters type.</p>
     */
    inline bool ApplyTypeHasBeenSet() const { return m_applyTypeHasBeenSet; }

    /**
     * <p>Specifies the engine specific parameters type.</p>
     */
    inline void SetApplyType(const Aws::String& value) { m_applyTypeHasBeenSet = true; m_applyType = value; }

    /**
     * <p>Specifies the engine specific parameters type.</p>
     */
    inline void SetApplyType(Aws::String&& value) { m_applyTypeHasBeenSet = true; m_applyType = std::move(value); }

    /**
     * <p>Specifies the engine specific parameters type.</p>
     */
    inline void SetApplyType(const char* value) { m_applyTypeHasBeenSet = true; m_applyType.assign(value); }

    /**
     * <p>Specifies the engine specific parameters type.</p>
     */
    inline Parameter& WithApplyType(const Aws::String& value) { SetApplyType(value); return *this;}

    /**
     * <p>Specifies the engine specific parameters type.</p>
     */
    inline Parameter& WithApplyType(Aws::String&& value) { SetApplyType(std::move(value)); return *this;}

    /**
     * <p>Specifies the engine specific parameters type.</p>
     */
    inline Parameter& WithApplyType(const char* value) { SetApplyType(value); return *this;}


    /**
     * <p>Specifies the valid data type for the parameter.</p>
     */
    inline const Aws::String& GetDataType() const{ return m_dataType; }

    /**
     * <p>Specifies the valid data type for the parameter.</p>
     */
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }

    /**
     * <p>Specifies the valid data type for the parameter.</p>
     */
    inline void SetDataType(const Aws::String& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

    /**
     * <p>Specifies the valid data type for the parameter.</p>
     */
    inline void SetDataType(Aws::String&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }

    /**
     * <p>Specifies the valid data type for the parameter.</p>
     */
    inline void SetDataType(const char* value) { m_dataTypeHasBeenSet = true; m_dataType.assign(value); }

    /**
     * <p>Specifies the valid data type for the parameter.</p>
     */
    inline Parameter& WithDataType(const Aws::String& value) { SetDataType(value); return *this;}

    /**
     * <p>Specifies the valid data type for the parameter.</p>
     */
    inline Parameter& WithDataType(Aws::String&& value) { SetDataType(std::move(value)); return *this;}

    /**
     * <p>Specifies the valid data type for the parameter.</p>
     */
    inline Parameter& WithDataType(const char* value) { SetDataType(value); return *this;}


    /**
     * <p>Specifies the valid range of values for the parameter.</p>
     */
    inline const Aws::String& GetAllowedValues() const{ return m_allowedValues; }

    /**
     * <p>Specifies the valid range of values for the parameter.</p>
     */
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }

    /**
     * <p>Specifies the valid range of values for the parameter.</p>
     */
    inline void SetAllowedValues(const Aws::String& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }

    /**
     * <p>Specifies the valid range of values for the parameter.</p>
     */
    inline void SetAllowedValues(Aws::String&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::move(value); }

    /**
     * <p>Specifies the valid range of values for the parameter.</p>
     */
    inline void SetAllowedValues(const char* value) { m_allowedValuesHasBeenSet = true; m_allowedValues.assign(value); }

    /**
     * <p>Specifies the valid range of values for the parameter.</p>
     */
    inline Parameter& WithAllowedValues(const Aws::String& value) { SetAllowedValues(value); return *this;}

    /**
     * <p>Specifies the valid range of values for the parameter.</p>
     */
    inline Parameter& WithAllowedValues(Aws::String&& value) { SetAllowedValues(std::move(value)); return *this;}

    /**
     * <p>Specifies the valid range of values for the parameter.</p>
     */
    inline Parameter& WithAllowedValues(const char* value) { SetAllowedValues(value); return *this;}


    /**
     * <p> Indicates whether (<code>true</code>) or not (<code>false</code>) the
     * parameter can be modified. Some parameters have security or operational
     * implications that prevent them from being changed. </p>
     */
    inline bool GetIsModifiable() const{ return m_isModifiable; }

    /**
     * <p> Indicates whether (<code>true</code>) or not (<code>false</code>) the
     * parameter can be modified. Some parameters have security or operational
     * implications that prevent them from being changed. </p>
     */
    inline bool IsModifiableHasBeenSet() const { return m_isModifiableHasBeenSet; }

    /**
     * <p> Indicates whether (<code>true</code>) or not (<code>false</code>) the
     * parameter can be modified. Some parameters have security or operational
     * implications that prevent them from being changed. </p>
     */
    inline void SetIsModifiable(bool value) { m_isModifiableHasBeenSet = true; m_isModifiable = value; }

    /**
     * <p> Indicates whether (<code>true</code>) or not (<code>false</code>) the
     * parameter can be modified. Some parameters have security or operational
     * implications that prevent them from being changed. </p>
     */
    inline Parameter& WithIsModifiable(bool value) { SetIsModifiable(value); return *this;}


    /**
     * <p>The earliest engine version to which the parameter can apply.</p>
     */
    inline const Aws::String& GetMinimumEngineVersion() const{ return m_minimumEngineVersion; }

    /**
     * <p>The earliest engine version to which the parameter can apply.</p>
     */
    inline bool MinimumEngineVersionHasBeenSet() const { return m_minimumEngineVersionHasBeenSet; }

    /**
     * <p>The earliest engine version to which the parameter can apply.</p>
     */
    inline void SetMinimumEngineVersion(const Aws::String& value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion = value; }

    /**
     * <p>The earliest engine version to which the parameter can apply.</p>
     */
    inline void SetMinimumEngineVersion(Aws::String&& value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion = std::move(value); }

    /**
     * <p>The earliest engine version to which the parameter can apply.</p>
     */
    inline void SetMinimumEngineVersion(const char* value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion.assign(value); }

    /**
     * <p>The earliest engine version to which the parameter can apply.</p>
     */
    inline Parameter& WithMinimumEngineVersion(const Aws::String& value) { SetMinimumEngineVersion(value); return *this;}

    /**
     * <p>The earliest engine version to which the parameter can apply.</p>
     */
    inline Parameter& WithMinimumEngineVersion(Aws::String&& value) { SetMinimumEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The earliest engine version to which the parameter can apply.</p>
     */
    inline Parameter& WithMinimumEngineVersion(const char* value) { SetMinimumEngineVersion(value); return *this;}


    /**
     * <p>Indicates when to apply parameter updates.</p>
     */
    inline const ApplyMethod& GetApplyMethod() const{ return m_applyMethod; }

    /**
     * <p>Indicates when to apply parameter updates.</p>
     */
    inline bool ApplyMethodHasBeenSet() const { return m_applyMethodHasBeenSet; }

    /**
     * <p>Indicates when to apply parameter updates.</p>
     */
    inline void SetApplyMethod(const ApplyMethod& value) { m_applyMethodHasBeenSet = true; m_applyMethod = value; }

    /**
     * <p>Indicates when to apply parameter updates.</p>
     */
    inline void SetApplyMethod(ApplyMethod&& value) { m_applyMethodHasBeenSet = true; m_applyMethod = std::move(value); }

    /**
     * <p>Indicates when to apply parameter updates.</p>
     */
    inline Parameter& WithApplyMethod(const ApplyMethod& value) { SetApplyMethod(value); return *this;}

    /**
     * <p>Indicates when to apply parameter updates.</p>
     */
    inline Parameter& WithApplyMethod(ApplyMethod&& value) { SetApplyMethod(std::move(value)); return *this;}


    /**
     * <p>The valid DB engine modes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedEngineModes() const{ return m_supportedEngineModes; }

    /**
     * <p>The valid DB engine modes.</p>
     */
    inline bool SupportedEngineModesHasBeenSet() const { return m_supportedEngineModesHasBeenSet; }

    /**
     * <p>The valid DB engine modes.</p>
     */
    inline void SetSupportedEngineModes(const Aws::Vector<Aws::String>& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes = value; }

    /**
     * <p>The valid DB engine modes.</p>
     */
    inline void SetSupportedEngineModes(Aws::Vector<Aws::String>&& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes = std::move(value); }

    /**
     * <p>The valid DB engine modes.</p>
     */
    inline Parameter& WithSupportedEngineModes(const Aws::Vector<Aws::String>& value) { SetSupportedEngineModes(value); return *this;}

    /**
     * <p>The valid DB engine modes.</p>
     */
    inline Parameter& WithSupportedEngineModes(Aws::Vector<Aws::String>&& value) { SetSupportedEngineModes(std::move(value)); return *this;}

    /**
     * <p>The valid DB engine modes.</p>
     */
    inline Parameter& AddSupportedEngineModes(const Aws::String& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes.push_back(value); return *this; }

    /**
     * <p>The valid DB engine modes.</p>
     */
    inline Parameter& AddSupportedEngineModes(Aws::String&& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes.push_back(std::move(value)); return *this; }

    /**
     * <p>The valid DB engine modes.</p>
     */
    inline Parameter& AddSupportedEngineModes(const char* value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes.push_back(value); return *this; }

  private:

    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet;

    Aws::String m_parameterValue;
    bool m_parameterValueHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_source;
    bool m_sourceHasBeenSet;

    Aws::String m_applyType;
    bool m_applyTypeHasBeenSet;

    Aws::String m_dataType;
    bool m_dataTypeHasBeenSet;

    Aws::String m_allowedValues;
    bool m_allowedValuesHasBeenSet;

    bool m_isModifiable;
    bool m_isModifiableHasBeenSet;

    Aws::String m_minimumEngineVersion;
    bool m_minimumEngineVersionHasBeenSet;

    ApplyMethod m_applyMethod;
    bool m_applyMethodHasBeenSet;

    Aws::Vector<Aws::String> m_supportedEngineModes;
    bool m_supportedEngineModesHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
