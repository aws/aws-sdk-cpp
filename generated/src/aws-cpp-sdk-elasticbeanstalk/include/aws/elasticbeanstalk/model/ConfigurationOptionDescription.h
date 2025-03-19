/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ConfigurationOptionValueType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/OptionRestrictionRegex.h>
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
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Describes the possible values for a configuration option.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ConfigurationOptionDescription">AWS
   * API Reference</a></p>
   */
  class ConfigurationOptionDescription
  {
  public:
    AWS_ELASTICBEANSTALK_API ConfigurationOptionDescription() = default;
    AWS_ELASTICBEANSTALK_API ConfigurationOptionDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API ConfigurationOptionDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A unique namespace identifying the option's associated AWS resource.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    ConfigurationOptionDescription& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration option.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ConfigurationOptionDescription& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default value for this configuration option.</p>
     */
    inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    template<typename DefaultValueT = Aws::String>
    void SetDefaultValue(DefaultValueT&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::forward<DefaultValueT>(value); }
    template<typename DefaultValueT = Aws::String>
    ConfigurationOptionDescription& WithDefaultValue(DefaultValueT&& value) { SetDefaultValue(std::forward<DefaultValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An indication of which action is required if the value for this configuration
     * option changes:</p> <ul> <li> <p> <code>NoInterruption</code> : There is no
     * interruption to the environment or application availability.</p> </li> <li> <p>
     * <code>RestartEnvironment</code> : The environment is entirely restarted, all AWS
     * resources are deleted and recreated, and the environment is unavailable during
     * the process.</p> </li> <li> <p> <code>RestartApplicationServer</code> : The
     * environment is available the entire time. However, a short application outage
     * occurs when the application servers on the running Amazon EC2 instances are
     * restarted.</p> </li> </ul>
     */
    inline const Aws::String& GetChangeSeverity() const { return m_changeSeverity; }
    inline bool ChangeSeverityHasBeenSet() const { return m_changeSeverityHasBeenSet; }
    template<typename ChangeSeverityT = Aws::String>
    void SetChangeSeverity(ChangeSeverityT&& value) { m_changeSeverityHasBeenSet = true; m_changeSeverity = std::forward<ChangeSeverityT>(value); }
    template<typename ChangeSeverityT = Aws::String>
    ConfigurationOptionDescription& WithChangeSeverity(ChangeSeverityT&& value) { SetChangeSeverity(std::forward<ChangeSeverityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An indication of whether the user defined this configuration option:</p> <ul>
     * <li> <p> <code>true</code> : This configuration option was defined by the user.
     * It is a valid choice for specifying if this as an <code>Option to Remove</code>
     * when updating configuration settings. </p> </li> <li> <p> <code>false</code> :
     * This configuration was not defined by the user.</p> </li> </ul> <p> Constraint:
     * You can remove only <code>UserDefined</code> options from a configuration. </p>
     * <p> Valid Values: <code>true</code> | <code>false</code> </p>
     */
    inline bool GetUserDefined() const { return m_userDefined; }
    inline bool UserDefinedHasBeenSet() const { return m_userDefinedHasBeenSet; }
    inline void SetUserDefined(bool value) { m_userDefinedHasBeenSet = true; m_userDefined = value; }
    inline ConfigurationOptionDescription& WithUserDefined(bool value) { SetUserDefined(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An indication of which type of values this option has and whether it is
     * allowable to select one or more than one of the possible values:</p> <ul> <li>
     * <p> <code>Scalar</code> : Values for this option are a single selection from the
     * possible values, or an unformatted string, or numeric value governed by the
     * <code>MIN/MAX/Regex</code> constraints.</p> </li> <li> <p> <code>List</code> :
     * Values for this option are multiple selections from the possible values.</p>
     * </li> <li> <p> <code>Boolean</code> : Values for this option are either
     * <code>true</code> or <code>false</code> .</p> </li> <li> <p> <code>Json</code> :
     * Values for this option are a JSON representation of a
     * <code>ConfigDocument</code>.</p> </li> </ul>
     */
    inline ConfigurationOptionValueType GetValueType() const { return m_valueType; }
    inline bool ValueTypeHasBeenSet() const { return m_valueTypeHasBeenSet; }
    inline void SetValueType(ConfigurationOptionValueType value) { m_valueTypeHasBeenSet = true; m_valueType = value; }
    inline ConfigurationOptionDescription& WithValueType(ConfigurationOptionValueType value) { SetValueType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, values for the configuration option are selected from this
     * list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValueOptions() const { return m_valueOptions; }
    inline bool ValueOptionsHasBeenSet() const { return m_valueOptionsHasBeenSet; }
    template<typename ValueOptionsT = Aws::Vector<Aws::String>>
    void SetValueOptions(ValueOptionsT&& value) { m_valueOptionsHasBeenSet = true; m_valueOptions = std::forward<ValueOptionsT>(value); }
    template<typename ValueOptionsT = Aws::Vector<Aws::String>>
    ConfigurationOptionDescription& WithValueOptions(ValueOptionsT&& value) { SetValueOptions(std::forward<ValueOptionsT>(value)); return *this;}
    template<typename ValueOptionsT = Aws::String>
    ConfigurationOptionDescription& AddValueOptions(ValueOptionsT&& value) { m_valueOptionsHasBeenSet = true; m_valueOptions.emplace_back(std::forward<ValueOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If specified, the configuration option must be a numeric value greater than
     * this value.</p>
     */
    inline int GetMinValue() const { return m_minValue; }
    inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }
    inline void SetMinValue(int value) { m_minValueHasBeenSet = true; m_minValue = value; }
    inline ConfigurationOptionDescription& WithMinValue(int value) { SetMinValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, the configuration option must be a numeric value less than this
     * value.</p>
     */
    inline int GetMaxValue() const { return m_maxValue; }
    inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }
    inline void SetMaxValue(int value) { m_maxValueHasBeenSet = true; m_maxValue = value; }
    inline ConfigurationOptionDescription& WithMaxValue(int value) { SetMaxValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, the configuration option must be a string value no longer than
     * this value.</p>
     */
    inline int GetMaxLength() const { return m_maxLength; }
    inline bool MaxLengthHasBeenSet() const { return m_maxLengthHasBeenSet; }
    inline void SetMaxLength(int value) { m_maxLengthHasBeenSet = true; m_maxLength = value; }
    inline ConfigurationOptionDescription& WithMaxLength(int value) { SetMaxLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, the configuration option must be a string value that satisfies
     * this regular expression.</p>
     */
    inline const OptionRestrictionRegex& GetRegex() const { return m_regex; }
    inline bool RegexHasBeenSet() const { return m_regexHasBeenSet; }
    template<typename RegexT = OptionRestrictionRegex>
    void SetRegex(RegexT&& value) { m_regexHasBeenSet = true; m_regex = std::forward<RegexT>(value); }
    template<typename RegexT = OptionRestrictionRegex>
    ConfigurationOptionDescription& WithRegex(RegexT&& value) { SetRegex(std::forward<RegexT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_changeSeverity;
    bool m_changeSeverityHasBeenSet = false;

    bool m_userDefined{false};
    bool m_userDefinedHasBeenSet = false;

    ConfigurationOptionValueType m_valueType{ConfigurationOptionValueType::NOT_SET};
    bool m_valueTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_valueOptions;
    bool m_valueOptionsHasBeenSet = false;

    int m_minValue{0};
    bool m_minValueHasBeenSet = false;

    int m_maxValue{0};
    bool m_maxValueHasBeenSet = false;

    int m_maxLength{0};
    bool m_maxLengthHasBeenSet = false;

    OptionRestrictionRegex m_regex;
    bool m_regexHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
