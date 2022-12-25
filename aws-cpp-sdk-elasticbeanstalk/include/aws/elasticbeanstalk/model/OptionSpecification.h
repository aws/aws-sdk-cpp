/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class OptionSpecification
  {
  public:
    AWS_ELASTICBEANSTALK_API OptionSpecification();
    AWS_ELASTICBEANSTALK_API OptionSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API OptionSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    bool m_resourceNameHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_optionName;
    bool m_optionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
