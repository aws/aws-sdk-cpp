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
   * <p>A specification identifying an individual configuration option.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/OptionSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API OptionSpecification
  {
  public:
    OptionSpecification();
    OptionSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    OptionSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A unique resource name for a time-based scaling configuration option.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>A unique resource name for a time-based scaling configuration option.</p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>A unique resource name for a time-based scaling configuration option.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>A unique resource name for a time-based scaling configuration option.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>A unique resource name for a time-based scaling configuration option.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>A unique resource name for a time-based scaling configuration option.</p>
     */
    inline OptionSpecification& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>A unique resource name for a time-based scaling configuration option.</p>
     */
    inline OptionSpecification& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>A unique resource name for a time-based scaling configuration option.</p>
     */
    inline OptionSpecification& WithResourceName(const char* value) { SetResourceName(value); return *this;}


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
    inline OptionSpecification& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>A unique namespace identifying the option's associated AWS resource.</p>
     */
    inline OptionSpecification& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>A unique namespace identifying the option's associated AWS resource.</p>
     */
    inline OptionSpecification& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The name of the configuration option.</p>
     */
    inline const Aws::String& GetOptionName() const{ return m_optionName; }

    /**
     * <p>The name of the configuration option.</p>
     */
    inline bool OptionNameHasBeenSet() const { return m_optionNameHasBeenSet; }

    /**
     * <p>The name of the configuration option.</p>
     */
    inline void SetOptionName(const Aws::String& value) { m_optionNameHasBeenSet = true; m_optionName = value; }

    /**
     * <p>The name of the configuration option.</p>
     */
    inline void SetOptionName(Aws::String&& value) { m_optionNameHasBeenSet = true; m_optionName = std::move(value); }

    /**
     * <p>The name of the configuration option.</p>
     */
    inline void SetOptionName(const char* value) { m_optionNameHasBeenSet = true; m_optionName.assign(value); }

    /**
     * <p>The name of the configuration option.</p>
     */
    inline OptionSpecification& WithOptionName(const Aws::String& value) { SetOptionName(value); return *this;}

    /**
     * <p>The name of the configuration option.</p>
     */
    inline OptionSpecification& WithOptionName(Aws::String&& value) { SetOptionName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration option.</p>
     */
    inline OptionSpecification& WithOptionName(const char* value) { SetOptionName(value); return *this;}

  private:

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet;

    Aws::String m_optionName;
    bool m_optionNameHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
