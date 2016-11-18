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
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
   * <p> A specification identifying an individual configuration option along with
   * its current value. For a list of possible option values, go to <a
   * href="http://docs.aws.amazon.com/elasticbeanstalk/latest/dg/command-options.html">Option
   * Values</a> in the <i>AWS Elastic Beanstalk Developer Guide</i>. </p>
   */
  class AWS_ELASTICBEANSTALK_API ConfigurationOptionSetting
  {
  public:
    ConfigurationOptionSetting();
    ConfigurationOptionSetting(const Aws::Utils::Xml::XmlNode& xmlNode);
    ConfigurationOptionSetting& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>A unique resource name for a time-based scaling configuration option.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>A unique resource name for a time-based scaling configuration option.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>A unique resource name for a time-based scaling configuration option.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>A unique resource name for a time-based scaling configuration option.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>A unique resource name for a time-based scaling configuration option.</p>
     */
    inline ConfigurationOptionSetting& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>A unique resource name for a time-based scaling configuration option.</p>
     */
    inline ConfigurationOptionSetting& WithResourceName(Aws::String&& value) { SetResourceName(value); return *this;}

    /**
     * <p>A unique resource name for a time-based scaling configuration option.</p>
     */
    inline ConfigurationOptionSetting& WithResourceName(const char* value) { SetResourceName(value); return *this;}

    /**
     * <p>A unique namespace identifying the option's associated AWS resource.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>A unique namespace identifying the option's associated AWS resource.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>A unique namespace identifying the option's associated AWS resource.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>A unique namespace identifying the option's associated AWS resource.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>A unique namespace identifying the option's associated AWS resource.</p>
     */
    inline ConfigurationOptionSetting& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>A unique namespace identifying the option's associated AWS resource.</p>
     */
    inline ConfigurationOptionSetting& WithNamespace(Aws::String&& value) { SetNamespace(value); return *this;}

    /**
     * <p>A unique namespace identifying the option's associated AWS resource.</p>
     */
    inline ConfigurationOptionSetting& WithNamespace(const char* value) { SetNamespace(value); return *this;}

    /**
     * <p>The name of the configuration option.</p>
     */
    inline const Aws::String& GetOptionName() const{ return m_optionName; }

    /**
     * <p>The name of the configuration option.</p>
     */
    inline void SetOptionName(const Aws::String& value) { m_optionNameHasBeenSet = true; m_optionName = value; }

    /**
     * <p>The name of the configuration option.</p>
     */
    inline void SetOptionName(Aws::String&& value) { m_optionNameHasBeenSet = true; m_optionName = value; }

    /**
     * <p>The name of the configuration option.</p>
     */
    inline void SetOptionName(const char* value) { m_optionNameHasBeenSet = true; m_optionName.assign(value); }

    /**
     * <p>The name of the configuration option.</p>
     */
    inline ConfigurationOptionSetting& WithOptionName(const Aws::String& value) { SetOptionName(value); return *this;}

    /**
     * <p>The name of the configuration option.</p>
     */
    inline ConfigurationOptionSetting& WithOptionName(Aws::String&& value) { SetOptionName(value); return *this;}

    /**
     * <p>The name of the configuration option.</p>
     */
    inline ConfigurationOptionSetting& WithOptionName(const char* value) { SetOptionName(value); return *this;}

    /**
     * <p>The current value for the configuration option.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The current value for the configuration option.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The current value for the configuration option.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The current value for the configuration option.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The current value for the configuration option.</p>
     */
    inline ConfigurationOptionSetting& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The current value for the configuration option.</p>
     */
    inline ConfigurationOptionSetting& WithValue(Aws::String&& value) { SetValue(value); return *this;}

    /**
     * <p>The current value for the configuration option.</p>
     */
    inline ConfigurationOptionSetting& WithValue(const char* value) { SetValue(value); return *this;}

  private:
    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet;
    Aws::String m_namespace;
    bool m_namespaceHasBeenSet;
    Aws::String m_optionName;
    bool m_optionNameHasBeenSet;
    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
