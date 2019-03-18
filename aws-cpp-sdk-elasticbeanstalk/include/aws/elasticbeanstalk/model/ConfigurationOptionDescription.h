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
  class AWS_ELASTICBEANSTALK_API ConfigurationOptionDescription
  {
  public:
    ConfigurationOptionDescription();
    ConfigurationOptionDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    ConfigurationOptionDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A unique namespace identifying the option's associated AWS resource.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>A unique namespace identifying the option's associated AWS resource.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>A unique namespace identifying the option's associated AWS resource.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>A unique namespace identifying the option's associated AWS resource.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>A unique namespace identifying the option's associated AWS resource.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>A unique namespace identifying the option's associated AWS resource.</p>
     */
    inline ConfigurationOptionDescription& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>A unique namespace identifying the option's associated AWS resource.</p>
     */
    inline ConfigurationOptionDescription& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>A unique namespace identifying the option's associated AWS resource.</p>
     */
    inline ConfigurationOptionDescription& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The name of the configuration option.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the configuration option.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the configuration option.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the configuration option.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the configuration option.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the configuration option.</p>
     */
    inline ConfigurationOptionDescription& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the configuration option.</p>
     */
    inline ConfigurationOptionDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration option.</p>
     */
    inline ConfigurationOptionDescription& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The default value for this configuration option.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>The default value for this configuration option.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>The default value for this configuration option.</p>
     */
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The default value for this configuration option.</p>
     */
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>The default value for this configuration option.</p>
     */
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    /**
     * <p>The default value for this configuration option.</p>
     */
    inline ConfigurationOptionDescription& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The default value for this configuration option.</p>
     */
    inline ConfigurationOptionDescription& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p>The default value for this configuration option.</p>
     */
    inline ConfigurationOptionDescription& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}


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
    inline bool ChangeSeverityHasBeenSet() const { return m_changeSeverityHasBeenSet; }

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
    inline void SetChangeSeverity(const Aws::String& value) { m_changeSeverityHasBeenSet = true; m_changeSeverity = value; }

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
    inline void SetChangeSeverity(Aws::String&& value) { m_changeSeverityHasBeenSet = true; m_changeSeverity = std::move(value); }

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
    inline void SetChangeSeverity(const char* value) { m_changeSeverityHasBeenSet = true; m_changeSeverity.assign(value); }

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
    inline ConfigurationOptionDescription& WithChangeSeverity(const Aws::String& value) { SetChangeSeverity(value); return *this;}

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
    inline ConfigurationOptionDescription& WithChangeSeverity(Aws::String&& value) { SetChangeSeverity(std::move(value)); return *this;}

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
    inline ConfigurationOptionDescription& WithChangeSeverity(const char* value) { SetChangeSeverity(value); return *this;}


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

    /**
     * <p>An indication of whether the user defined this configuration option:</p> <ul>
     * <li> <p> <code>true</code> : This configuration option was defined by the user.
     * It is a valid choice for specifying if this as an <code>Option to Remove</code>
     * when updating configuration settings. </p> </li> <li> <p> <code>false</code> :
     * This configuration was not defined by the user.</p> </li> </ul> <p> Constraint:
     * You can remove only <code>UserDefined</code> options from a configuration. </p>
     * <p> Valid Values: <code>true</code> | <code>false</code> </p>
     */
    inline bool UserDefinedHasBeenSet() const { return m_userDefinedHasBeenSet; }

    /**
     * <p>An indication of whether the user defined this configuration option:</p> <ul>
     * <li> <p> <code>true</code> : This configuration option was defined by the user.
     * It is a valid choice for specifying if this as an <code>Option to Remove</code>
     * when updating configuration settings. </p> </li> <li> <p> <code>false</code> :
     * This configuration was not defined by the user.</p> </li> </ul> <p> Constraint:
     * You can remove only <code>UserDefined</code> options from a configuration. </p>
     * <p> Valid Values: <code>true</code> | <code>false</code> </p>
     */
    inline void SetUserDefined(bool value) { m_userDefinedHasBeenSet = true; m_userDefined = value; }

    /**
     * <p>An indication of whether the user defined this configuration option:</p> <ul>
     * <li> <p> <code>true</code> : This configuration option was defined by the user.
     * It is a valid choice for specifying if this as an <code>Option to Remove</code>
     * when updating configuration settings. </p> </li> <li> <p> <code>false</code> :
     * This configuration was not defined by the user.</p> </li> </ul> <p> Constraint:
     * You can remove only <code>UserDefined</code> options from a configuration. </p>
     * <p> Valid Values: <code>true</code> | <code>false</code> </p>
     */
    inline ConfigurationOptionDescription& WithUserDefined(bool value) { SetUserDefined(value); return *this;}


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
    inline bool ValueTypeHasBeenSet() const { return m_valueTypeHasBeenSet; }

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
    inline void SetValueType(const ConfigurationOptionValueType& value) { m_valueTypeHasBeenSet = true; m_valueType = value; }

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
    inline void SetValueType(ConfigurationOptionValueType&& value) { m_valueTypeHasBeenSet = true; m_valueType = std::move(value); }

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
    inline ConfigurationOptionDescription& WithValueType(const ConfigurationOptionValueType& value) { SetValueType(value); return *this;}

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
    inline ConfigurationOptionDescription& WithValueType(ConfigurationOptionValueType&& value) { SetValueType(std::move(value)); return *this;}


    /**
     * <p>If specified, values for the configuration option are selected from this
     * list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValueOptions() const{ return m_valueOptions; }

    /**
     * <p>If specified, values for the configuration option are selected from this
     * list.</p>
     */
    inline bool ValueOptionsHasBeenSet() const { return m_valueOptionsHasBeenSet; }

    /**
     * <p>If specified, values for the configuration option are selected from this
     * list.</p>
     */
    inline void SetValueOptions(const Aws::Vector<Aws::String>& value) { m_valueOptionsHasBeenSet = true; m_valueOptions = value; }

    /**
     * <p>If specified, values for the configuration option are selected from this
     * list.</p>
     */
    inline void SetValueOptions(Aws::Vector<Aws::String>&& value) { m_valueOptionsHasBeenSet = true; m_valueOptions = std::move(value); }

    /**
     * <p>If specified, values for the configuration option are selected from this
     * list.</p>
     */
    inline ConfigurationOptionDescription& WithValueOptions(const Aws::Vector<Aws::String>& value) { SetValueOptions(value); return *this;}

    /**
     * <p>If specified, values for the configuration option are selected from this
     * list.</p>
     */
    inline ConfigurationOptionDescription& WithValueOptions(Aws::Vector<Aws::String>&& value) { SetValueOptions(std::move(value)); return *this;}

    /**
     * <p>If specified, values for the configuration option are selected from this
     * list.</p>
     */
    inline ConfigurationOptionDescription& AddValueOptions(const Aws::String& value) { m_valueOptionsHasBeenSet = true; m_valueOptions.push_back(value); return *this; }

    /**
     * <p>If specified, values for the configuration option are selected from this
     * list.</p>
     */
    inline ConfigurationOptionDescription& AddValueOptions(Aws::String&& value) { m_valueOptionsHasBeenSet = true; m_valueOptions.push_back(std::move(value)); return *this; }

    /**
     * <p>If specified, values for the configuration option are selected from this
     * list.</p>
     */
    inline ConfigurationOptionDescription& AddValueOptions(const char* value) { m_valueOptionsHasBeenSet = true; m_valueOptions.push_back(value); return *this; }


    /**
     * <p>If specified, the configuration option must be a numeric value greater than
     * this value.</p>
     */
    inline int GetMinValue() const{ return m_minValue; }

    /**
     * <p>If specified, the configuration option must be a numeric value greater than
     * this value.</p>
     */
    inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }

    /**
     * <p>If specified, the configuration option must be a numeric value greater than
     * this value.</p>
     */
    inline void SetMinValue(int value) { m_minValueHasBeenSet = true; m_minValue = value; }

    /**
     * <p>If specified, the configuration option must be a numeric value greater than
     * this value.</p>
     */
    inline ConfigurationOptionDescription& WithMinValue(int value) { SetMinValue(value); return *this;}


    /**
     * <p>If specified, the configuration option must be a numeric value less than this
     * value.</p>
     */
    inline int GetMaxValue() const{ return m_maxValue; }

    /**
     * <p>If specified, the configuration option must be a numeric value less than this
     * value.</p>
     */
    inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }

    /**
     * <p>If specified, the configuration option must be a numeric value less than this
     * value.</p>
     */
    inline void SetMaxValue(int value) { m_maxValueHasBeenSet = true; m_maxValue = value; }

    /**
     * <p>If specified, the configuration option must be a numeric value less than this
     * value.</p>
     */
    inline ConfigurationOptionDescription& WithMaxValue(int value) { SetMaxValue(value); return *this;}


    /**
     * <p>If specified, the configuration option must be a string value no longer than
     * this value.</p>
     */
    inline int GetMaxLength() const{ return m_maxLength; }

    /**
     * <p>If specified, the configuration option must be a string value no longer than
     * this value.</p>
     */
    inline bool MaxLengthHasBeenSet() const { return m_maxLengthHasBeenSet; }

    /**
     * <p>If specified, the configuration option must be a string value no longer than
     * this value.</p>
     */
    inline void SetMaxLength(int value) { m_maxLengthHasBeenSet = true; m_maxLength = value; }

    /**
     * <p>If specified, the configuration option must be a string value no longer than
     * this value.</p>
     */
    inline ConfigurationOptionDescription& WithMaxLength(int value) { SetMaxLength(value); return *this;}


    /**
     * <p>If specified, the configuration option must be a string value that satisfies
     * this regular expression.</p>
     */
    inline const OptionRestrictionRegex& GetRegex() const{ return m_regex; }

    /**
     * <p>If specified, the configuration option must be a string value that satisfies
     * this regular expression.</p>
     */
    inline bool RegexHasBeenSet() const { return m_regexHasBeenSet; }

    /**
     * <p>If specified, the configuration option must be a string value that satisfies
     * this regular expression.</p>
     */
    inline void SetRegex(const OptionRestrictionRegex& value) { m_regexHasBeenSet = true; m_regex = value; }

    /**
     * <p>If specified, the configuration option must be a string value that satisfies
     * this regular expression.</p>
     */
    inline void SetRegex(OptionRestrictionRegex&& value) { m_regexHasBeenSet = true; m_regex = std::move(value); }

    /**
     * <p>If specified, the configuration option must be a string value that satisfies
     * this regular expression.</p>
     */
    inline ConfigurationOptionDescription& WithRegex(const OptionRestrictionRegex& value) { SetRegex(value); return *this;}

    /**
     * <p>If specified, the configuration option must be a string value that satisfies
     * this regular expression.</p>
     */
    inline ConfigurationOptionDescription& WithRegex(OptionRestrictionRegex&& value) { SetRegex(std::move(value)); return *this;}

  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet;

    Aws::String m_changeSeverity;
    bool m_changeSeverityHasBeenSet;

    bool m_userDefined;
    bool m_userDefinedHasBeenSet;

    ConfigurationOptionValueType m_valueType;
    bool m_valueTypeHasBeenSet;

    Aws::Vector<Aws::String> m_valueOptions;
    bool m_valueOptionsHasBeenSet;

    int m_minValue;
    bool m_minValueHasBeenSet;

    int m_maxValue;
    bool m_maxValueHasBeenSet;

    int m_maxLength;
    bool m_maxLengthHasBeenSet;

    OptionRestrictionRegex m_regex;
    bool m_regexHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
