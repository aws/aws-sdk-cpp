/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A configuration option setting for the environment.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElasticBeanstalkEnvironmentOptionSetting">AWS
   * API Reference</a></p>
   */
  class AwsElasticBeanstalkEnvironmentOptionSetting
  {
  public:
    AWS_SECURITYHUB_API AwsElasticBeanstalkEnvironmentOptionSetting();
    AWS_SECURITYHUB_API AwsElasticBeanstalkEnvironmentOptionSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElasticBeanstalkEnvironmentOptionSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of resource that the configuration option is associated with.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The type of resource that the configuration option is associated with.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The type of resource that the configuration option is associated with.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The type of resource that the configuration option is associated with.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The type of resource that the configuration option is associated with.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The type of resource that the configuration option is associated with.</p>
     */
    inline AwsElasticBeanstalkEnvironmentOptionSetting& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The type of resource that the configuration option is associated with.</p>
     */
    inline AwsElasticBeanstalkEnvironmentOptionSetting& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The type of resource that the configuration option is associated with.</p>
     */
    inline AwsElasticBeanstalkEnvironmentOptionSetting& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The name of the option.</p>
     */
    inline const Aws::String& GetOptionName() const{ return m_optionName; }

    /**
     * <p>The name of the option.</p>
     */
    inline bool OptionNameHasBeenSet() const { return m_optionNameHasBeenSet; }

    /**
     * <p>The name of the option.</p>
     */
    inline void SetOptionName(const Aws::String& value) { m_optionNameHasBeenSet = true; m_optionName = value; }

    /**
     * <p>The name of the option.</p>
     */
    inline void SetOptionName(Aws::String&& value) { m_optionNameHasBeenSet = true; m_optionName = std::move(value); }

    /**
     * <p>The name of the option.</p>
     */
    inline void SetOptionName(const char* value) { m_optionNameHasBeenSet = true; m_optionName.assign(value); }

    /**
     * <p>The name of the option.</p>
     */
    inline AwsElasticBeanstalkEnvironmentOptionSetting& WithOptionName(const Aws::String& value) { SetOptionName(value); return *this;}

    /**
     * <p>The name of the option.</p>
     */
    inline AwsElasticBeanstalkEnvironmentOptionSetting& WithOptionName(Aws::String&& value) { SetOptionName(std::move(value)); return *this;}

    /**
     * <p>The name of the option.</p>
     */
    inline AwsElasticBeanstalkEnvironmentOptionSetting& WithOptionName(const char* value) { SetOptionName(value); return *this;}


    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The name of the resource.</p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The name of the resource.</p>
     */
    inline AwsElasticBeanstalkEnvironmentOptionSetting& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The name of the resource.</p>
     */
    inline AwsElasticBeanstalkEnvironmentOptionSetting& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource.</p>
     */
    inline AwsElasticBeanstalkEnvironmentOptionSetting& WithResourceName(const char* value) { SetResourceName(value); return *this;}


    /**
     * <p>The value of the configuration setting.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the configuration setting.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the configuration setting.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the configuration setting.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the configuration setting.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the configuration setting.</p>
     */
    inline AwsElasticBeanstalkEnvironmentOptionSetting& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the configuration setting.</p>
     */
    inline AwsElasticBeanstalkEnvironmentOptionSetting& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the configuration setting.</p>
     */
    inline AwsElasticBeanstalkEnvironmentOptionSetting& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_optionName;
    bool m_optionNameHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
