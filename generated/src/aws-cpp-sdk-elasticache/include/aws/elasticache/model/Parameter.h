/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticache/model/ChangeType.h>
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
  class Parameter
  {
  public:
    AWS_ELASTICACHE_API Parameter() = default;
    AWS_ELASTICACHE_API Parameter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API Parameter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
     * <p>The value of the parameter.</p>
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
     * <p>A description of the parameter.</p>
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
     * <p>The source of the parameter.</p>
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
     * <p>The valid data type for the parameter.</p>
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
     * <p>The valid range of values for the parameter.</p>
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
     * <p>Indicates whether (<code>true</code>) or not (<code>false</code>) the
     * parameter can be modified. Some parameters have security or operational
     * implications that prevent them from being changed.</p>
     */
    inline bool GetIsModifiable() const { return m_isModifiable; }
    inline bool IsModifiableHasBeenSet() const { return m_isModifiableHasBeenSet; }
    inline void SetIsModifiable(bool value) { m_isModifiableHasBeenSet = true; m_isModifiable = value; }
    inline Parameter& WithIsModifiable(bool value) { SetIsModifiable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The earliest cache engine version to which the parameter can apply.</p>
     */
    inline const Aws::String& GetMinimumEngineVersion() const { return m_minimumEngineVersion; }
    inline bool MinimumEngineVersionHasBeenSet() const { return m_minimumEngineVersionHasBeenSet; }
    template<typename MinimumEngineVersionT = Aws::String>
    void SetMinimumEngineVersion(MinimumEngineVersionT&& value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion = std::forward<MinimumEngineVersionT>(value); }
    template<typename MinimumEngineVersionT = Aws::String>
    Parameter& WithMinimumEngineVersion(MinimumEngineVersionT&& value) { SetMinimumEngineVersion(std::forward<MinimumEngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a change to the parameter is applied immediately or
     * requires a reboot for the change to be applied. You can force a reboot or wait
     * until the next maintenance window's reboot. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/dg/Clusters.Rebooting.html">Rebooting
     * a Cluster</a>.</p>
     */
    inline ChangeType GetChangeType() const { return m_changeType; }
    inline bool ChangeTypeHasBeenSet() const { return m_changeTypeHasBeenSet; }
    inline void SetChangeType(ChangeType value) { m_changeTypeHasBeenSet = true; m_changeType = value; }
    inline Parameter& WithChangeType(ChangeType value) { SetChangeType(value); return *this;}
    ///@}
  private:

    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet = false;

    Aws::String m_parameterValue;
    bool m_parameterValueHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_dataType;
    bool m_dataTypeHasBeenSet = false;

    Aws::String m_allowedValues;
    bool m_allowedValuesHasBeenSet = false;

    bool m_isModifiable{false};
    bool m_isModifiableHasBeenSet = false;

    Aws::String m_minimumEngineVersion;
    bool m_minimumEngineVersionHasBeenSet = false;

    ChangeType m_changeType{ChangeType::NOT_SET};
    bool m_changeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
