﻿/**
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
    AWS_ELASTICBEANSTALK_API ConfigurationOptionDescription();
    AWS_ELASTICBEANSTALK_API ConfigurationOptionDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API ConfigurationOptionDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A unique namespace identifying the option's associated AWS resource.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }
    inline ConfigurationOptionDescription& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline ConfigurationOptionDescription& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline ConfigurationOptionDescription& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration option.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ConfigurationOptionDescription& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ConfigurationOptionDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ConfigurationOptionDescription& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default value for this configuration option.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }
    inline ConfigurationOptionDescription& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}
    inline ConfigurationOptionDescription& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}
    inline ConfigurationOptionDescription& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}
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
    inline const Aws::String& GetChangeSeverity() const{ return m_changeSeverity; }
    inline bool ChangeSeverityHasBeenSet() const { return m_changeSeverityHasBeenSet; }
    inline void SetChangeSeverity(const Aws::String& value) { m_changeSeverityHasBeenSet = true; m_changeSeverity = value; }
    inline void SetChangeSeverity(Aws::String&& value) { m_changeSeverityHasBeenSet = true; m_changeSeverity = std::move(value); }
    inline void SetChangeSeverity(const char* value) { m_changeSeverityHasBeenSet = true; m_changeSeverity.assign(value); }
    inline ConfigurationOptionDescription& WithChangeSeverity(const Aws::String& value) { SetChangeSeverity(value); return *this;}
    inline ConfigurationOptionDescription& WithChangeSeverity(Aws::String&& value) { SetChangeSeverity(std::move(value)); return *this;}
    inline ConfigurationOptionDescription& WithChangeSeverity(const char* value) { SetChangeSeverity(value); return *this;}
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
    inline bool GetUserDefined() const{ return m_userDefined; }
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
    inline const ConfigurationOptionValueType& GetValueType() const{ return m_valueType; }
    inline bool ValueTypeHasBeenSet() const { return m_valueTypeHasBeenSet; }
    inline void SetValueType(const ConfigurationOptionValueType& value) { m_valueTypeHasBeenSet = true; m_valueType = value; }
    inline void SetValueType(ConfigurationOptionValueType&& value) { m_valueTypeHasBeenSet = true; m_valueType = std::move(value); }
    inline ConfigurationOptionDescription& WithValueType(const ConfigurationOptionValueType& value) { SetValueType(value); return *this;}
    inline ConfigurationOptionDescription& WithValueType(ConfigurationOptionValueType&& value) { SetValueType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, values for the configuration option are selected from this
     * list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValueOptions() const{ return m_valueOptions; }
    inline bool ValueOptionsHasBeenSet() const { return m_valueOptionsHasBeenSet; }
    inline void SetValueOptions(const Aws::Vector<Aws::String>& value) { m_valueOptionsHasBeenSet = true; m_valueOptions = value; }
    inline void SetValueOptions(Aws::Vector<Aws::String>&& value) { m_valueOptionsHasBeenSet = true; m_valueOptions = std::move(value); }
    inline ConfigurationOptionDescription& WithValueOptions(const Aws::Vector<Aws::String>& value) { SetValueOptions(value); return *this;}
    inline ConfigurationOptionDescription& WithValueOptions(Aws::Vector<Aws::String>&& value) { SetValueOptions(std::move(value)); return *this;}
    inline ConfigurationOptionDescription& AddValueOptions(const Aws::String& value) { m_valueOptionsHasBeenSet = true; m_valueOptions.push_back(value); return *this; }
    inline ConfigurationOptionDescription& AddValueOptions(Aws::String&& value) { m_valueOptionsHasBeenSet = true; m_valueOptions.push_back(std::move(value)); return *this; }
    inline ConfigurationOptionDescription& AddValueOptions(const char* value) { m_valueOptionsHasBeenSet = true; m_valueOptions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If specified, the configuration option must be a numeric value greater than
     * this value.</p>
     */
    inline int GetMinValue() const{ return m_minValue; }
    inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }
    inline void SetMinValue(int value) { m_minValueHasBeenSet = true; m_minValue = value; }
    inline ConfigurationOptionDescription& WithMinValue(int value) { SetMinValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, the configuration option must be a numeric value less than this
     * value.</p>
     */
    inline int GetMaxValue() const{ return m_maxValue; }
    inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }
    inline void SetMaxValue(int value) { m_maxValueHasBeenSet = true; m_maxValue = value; }
    inline ConfigurationOptionDescription& WithMaxValue(int value) { SetMaxValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, the configuration option must be a string value no longer than
     * this value.</p>
     */
    inline int GetMaxLength() const{ return m_maxLength; }
    inline bool MaxLengthHasBeenSet() const { return m_maxLengthHasBeenSet; }
    inline void SetMaxLength(int value) { m_maxLengthHasBeenSet = true; m_maxLength = value; }
    inline ConfigurationOptionDescription& WithMaxLength(int value) { SetMaxLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, the configuration option must be a string value that satisfies
     * this regular expression.</p>
     */
    inline const OptionRestrictionRegex& GetRegex() const{ return m_regex; }
    inline bool RegexHasBeenSet() const { return m_regexHasBeenSet; }
    inline void SetRegex(const OptionRestrictionRegex& value) { m_regexHasBeenSet = true; m_regex = value; }
    inline void SetRegex(OptionRestrictionRegex&& value) { m_regexHasBeenSet = true; m_regex = std::move(value); }
    inline ConfigurationOptionDescription& WithRegex(const OptionRestrictionRegex& value) { SetRegex(value); return *this;}
    inline ConfigurationOptionDescription& WithRegex(OptionRestrictionRegex&& value) { SetRegex(std::move(value)); return *this;}
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

    bool m_userDefined;
    bool m_userDefinedHasBeenSet = false;

    ConfigurationOptionValueType m_valueType;
    bool m_valueTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_valueOptions;
    bool m_valueOptionsHasBeenSet = false;

    int m_minValue;
    bool m_minValueHasBeenSet = false;

    int m_maxValue;
    bool m_maxValueHasBeenSet = false;

    int m_maxLength;
    bool m_maxLengthHasBeenSet = false;

    OptionRestrictionRegex m_regex;
    bool m_regexHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
