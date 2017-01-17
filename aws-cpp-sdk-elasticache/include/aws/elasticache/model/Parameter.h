﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticache/model/ChangeType.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Describes an individual setting that controls some aspect of ElastiCache
   * behavior.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/Parameter">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICACHE_API Parameter
  {
  public:
    Parameter();
    Parameter(const Aws::Utils::Xml::XmlNode& xmlNode);
    Parameter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The name of the parameter.</p>
     */
    inline const Aws::String& GetParameterName() const{ return m_parameterName; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetParameterName(const Aws::String& value) { m_parameterNameHasBeenSet = true; m_parameterName = value; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetParameterName(Aws::String&& value) { m_parameterNameHasBeenSet = true; m_parameterName = value; }

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
    inline Parameter& WithParameterName(Aws::String&& value) { SetParameterName(value); return *this;}

    /**
     * <p>The name of the parameter.</p>
     */
    inline Parameter& WithParameterName(const char* value) { SetParameterName(value); return *this;}

    /**
     * <p>The value of the parameter.</p>
     */
    inline const Aws::String& GetParameterValue() const{ return m_parameterValue; }

    /**
     * <p>The value of the parameter.</p>
     */
    inline void SetParameterValue(const Aws::String& value) { m_parameterValueHasBeenSet = true; m_parameterValue = value; }

    /**
     * <p>The value of the parameter.</p>
     */
    inline void SetParameterValue(Aws::String&& value) { m_parameterValueHasBeenSet = true; m_parameterValue = value; }

    /**
     * <p>The value of the parameter.</p>
     */
    inline void SetParameterValue(const char* value) { m_parameterValueHasBeenSet = true; m_parameterValue.assign(value); }

    /**
     * <p>The value of the parameter.</p>
     */
    inline Parameter& WithParameterValue(const Aws::String& value) { SetParameterValue(value); return *this;}

    /**
     * <p>The value of the parameter.</p>
     */
    inline Parameter& WithParameterValue(Aws::String&& value) { SetParameterValue(value); return *this;}

    /**
     * <p>The value of the parameter.</p>
     */
    inline Parameter& WithParameterValue(const char* value) { SetParameterValue(value); return *this;}

    /**
     * <p>A description of the parameter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the parameter.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the parameter.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the parameter.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the parameter.</p>
     */
    inline Parameter& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the parameter.</p>
     */
    inline Parameter& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the parameter.</p>
     */
    inline Parameter& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The source of the parameter.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The source of the parameter.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source of the parameter.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source of the parameter.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The source of the parameter.</p>
     */
    inline Parameter& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The source of the parameter.</p>
     */
    inline Parameter& WithSource(Aws::String&& value) { SetSource(value); return *this;}

    /**
     * <p>The source of the parameter.</p>
     */
    inline Parameter& WithSource(const char* value) { SetSource(value); return *this;}

    /**
     * <p>The valid data type for the parameter.</p>
     */
    inline const Aws::String& GetDataType() const{ return m_dataType; }

    /**
     * <p>The valid data type for the parameter.</p>
     */
    inline void SetDataType(const Aws::String& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

    /**
     * <p>The valid data type for the parameter.</p>
     */
    inline void SetDataType(Aws::String&& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

    /**
     * <p>The valid data type for the parameter.</p>
     */
    inline void SetDataType(const char* value) { m_dataTypeHasBeenSet = true; m_dataType.assign(value); }

    /**
     * <p>The valid data type for the parameter.</p>
     */
    inline Parameter& WithDataType(const Aws::String& value) { SetDataType(value); return *this;}

    /**
     * <p>The valid data type for the parameter.</p>
     */
    inline Parameter& WithDataType(Aws::String&& value) { SetDataType(value); return *this;}

    /**
     * <p>The valid data type for the parameter.</p>
     */
    inline Parameter& WithDataType(const char* value) { SetDataType(value); return *this;}

    /**
     * <p>The valid range of values for the parameter.</p>
     */
    inline const Aws::String& GetAllowedValues() const{ return m_allowedValues; }

    /**
     * <p>The valid range of values for the parameter.</p>
     */
    inline void SetAllowedValues(const Aws::String& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }

    /**
     * <p>The valid range of values for the parameter.</p>
     */
    inline void SetAllowedValues(Aws::String&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }

    /**
     * <p>The valid range of values for the parameter.</p>
     */
    inline void SetAllowedValues(const char* value) { m_allowedValuesHasBeenSet = true; m_allowedValues.assign(value); }

    /**
     * <p>The valid range of values for the parameter.</p>
     */
    inline Parameter& WithAllowedValues(const Aws::String& value) { SetAllowedValues(value); return *this;}

    /**
     * <p>The valid range of values for the parameter.</p>
     */
    inline Parameter& WithAllowedValues(Aws::String&& value) { SetAllowedValues(value); return *this;}

    /**
     * <p>The valid range of values for the parameter.</p>
     */
    inline Parameter& WithAllowedValues(const char* value) { SetAllowedValues(value); return *this;}

    /**
     * <p>Indicates whether (<code>true</code>) or not (<code>false</code>) the
     * parameter can be modified. Some parameters have security or operational
     * implications that prevent them from being changed.</p>
     */
    inline bool GetIsModifiable() const{ return m_isModifiable; }

    /**
     * <p>Indicates whether (<code>true</code>) or not (<code>false</code>) the
     * parameter can be modified. Some parameters have security or operational
     * implications that prevent them from being changed.</p>
     */
    inline void SetIsModifiable(bool value) { m_isModifiableHasBeenSet = true; m_isModifiable = value; }

    /**
     * <p>Indicates whether (<code>true</code>) or not (<code>false</code>) the
     * parameter can be modified. Some parameters have security or operational
     * implications that prevent them from being changed.</p>
     */
    inline Parameter& WithIsModifiable(bool value) { SetIsModifiable(value); return *this;}

    /**
     * <p>The earliest cache engine version to which the parameter can apply.</p>
     */
    inline const Aws::String& GetMinimumEngineVersion() const{ return m_minimumEngineVersion; }

    /**
     * <p>The earliest cache engine version to which the parameter can apply.</p>
     */
    inline void SetMinimumEngineVersion(const Aws::String& value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion = value; }

    /**
     * <p>The earliest cache engine version to which the parameter can apply.</p>
     */
    inline void SetMinimumEngineVersion(Aws::String&& value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion = value; }

    /**
     * <p>The earliest cache engine version to which the parameter can apply.</p>
     */
    inline void SetMinimumEngineVersion(const char* value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion.assign(value); }

    /**
     * <p>The earliest cache engine version to which the parameter can apply.</p>
     */
    inline Parameter& WithMinimumEngineVersion(const Aws::String& value) { SetMinimumEngineVersion(value); return *this;}

    /**
     * <p>The earliest cache engine version to which the parameter can apply.</p>
     */
    inline Parameter& WithMinimumEngineVersion(Aws::String&& value) { SetMinimumEngineVersion(value); return *this;}

    /**
     * <p>The earliest cache engine version to which the parameter can apply.</p>
     */
    inline Parameter& WithMinimumEngineVersion(const char* value) { SetMinimumEngineVersion(value); return *this;}

    /**
     * <p>Indicates whether a change to the parameter is applied immediately or
     * requires a reboot for the change to be applied. You can force a reboot or wait
     * until the next maintenance window's reboot. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Clusters.Rebooting.html">Rebooting
     * a Cluster</a>.</p>
     */
    inline const ChangeType& GetChangeType() const{ return m_changeType; }

    /**
     * <p>Indicates whether a change to the parameter is applied immediately or
     * requires a reboot for the change to be applied. You can force a reboot or wait
     * until the next maintenance window's reboot. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Clusters.Rebooting.html">Rebooting
     * a Cluster</a>.</p>
     */
    inline void SetChangeType(const ChangeType& value) { m_changeTypeHasBeenSet = true; m_changeType = value; }

    /**
     * <p>Indicates whether a change to the parameter is applied immediately or
     * requires a reboot for the change to be applied. You can force a reboot or wait
     * until the next maintenance window's reboot. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Clusters.Rebooting.html">Rebooting
     * a Cluster</a>.</p>
     */
    inline void SetChangeType(ChangeType&& value) { m_changeTypeHasBeenSet = true; m_changeType = value; }

    /**
     * <p>Indicates whether a change to the parameter is applied immediately or
     * requires a reboot for the change to be applied. You can force a reboot or wait
     * until the next maintenance window's reboot. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Clusters.Rebooting.html">Rebooting
     * a Cluster</a>.</p>
     */
    inline Parameter& WithChangeType(const ChangeType& value) { SetChangeType(value); return *this;}

    /**
     * <p>Indicates whether a change to the parameter is applied immediately or
     * requires a reboot for the change to be applied. You can force a reboot or wait
     * until the next maintenance window's reboot. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Clusters.Rebooting.html">Rebooting
     * a Cluster</a>.</p>
     */
    inline Parameter& WithChangeType(ChangeType&& value) { SetChangeType(value); return *this;}

  private:
    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet;
    Aws::String m_parameterValue;
    bool m_parameterValueHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_source;
    bool m_sourceHasBeenSet;
    Aws::String m_dataType;
    bool m_dataTypeHasBeenSet;
    Aws::String m_allowedValues;
    bool m_allowedValuesHasBeenSet;
    bool m_isModifiable;
    bool m_isModifiableHasBeenSet;
    Aws::String m_minimumEngineVersion;
    bool m_minimumEngineVersionHasBeenSet;
    ChangeType m_changeType;
    bool m_changeTypeHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
