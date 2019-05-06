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
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Result message containing all of the configuration settings for a specified
   * solution stack or configuration template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeConfigurationSettingsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API DescribeConfigurationSettingsRequest : public ElasticBeanstalkRequest
  {
  public:
    DescribeConfigurationSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConfigurationSettings"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The application for the environment or configuration template.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The application for the environment or configuration template.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The application for the environment or configuration template.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The application for the environment or configuration template.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The application for the environment or configuration template.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The application for the environment or configuration template.</p>
     */
    inline DescribeConfigurationSettingsRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The application for the environment or configuration template.</p>
     */
    inline DescribeConfigurationSettingsRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The application for the environment or configuration template.</p>
     */
    inline DescribeConfigurationSettingsRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>The name of the configuration template to describe.</p> <p> Conditional: You
     * must specify either this parameter or an EnvironmentName, but not both. If you
     * specify both, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterCombination</code> error. If you do not specify either,
     * AWS Elastic Beanstalk returns a <code>MissingRequiredParameter</code> error.
     * </p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the configuration template to describe.</p> <p> Conditional: You
     * must specify either this parameter or an EnvironmentName, but not both. If you
     * specify both, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterCombination</code> error. If you do not specify either,
     * AWS Elastic Beanstalk returns a <code>MissingRequiredParameter</code> error.
     * </p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the configuration template to describe.</p> <p> Conditional: You
     * must specify either this parameter or an EnvironmentName, but not both. If you
     * specify both, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterCombination</code> error. If you do not specify either,
     * AWS Elastic Beanstalk returns a <code>MissingRequiredParameter</code> error.
     * </p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the configuration template to describe.</p> <p> Conditional: You
     * must specify either this parameter or an EnvironmentName, but not both. If you
     * specify both, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterCombination</code> error. If you do not specify either,
     * AWS Elastic Beanstalk returns a <code>MissingRequiredParameter</code> error.
     * </p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the configuration template to describe.</p> <p> Conditional: You
     * must specify either this parameter or an EnvironmentName, but not both. If you
     * specify both, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterCombination</code> error. If you do not specify either,
     * AWS Elastic Beanstalk returns a <code>MissingRequiredParameter</code> error.
     * </p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the configuration template to describe.</p> <p> Conditional: You
     * must specify either this parameter or an EnvironmentName, but not both. If you
     * specify both, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterCombination</code> error. If you do not specify either,
     * AWS Elastic Beanstalk returns a <code>MissingRequiredParameter</code> error.
     * </p>
     */
    inline DescribeConfigurationSettingsRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the configuration template to describe.</p> <p> Conditional: You
     * must specify either this parameter or an EnvironmentName, but not both. If you
     * specify both, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterCombination</code> error. If you do not specify either,
     * AWS Elastic Beanstalk returns a <code>MissingRequiredParameter</code> error.
     * </p>
     */
    inline DescribeConfigurationSettingsRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration template to describe.</p> <p> Conditional: You
     * must specify either this parameter or an EnvironmentName, but not both. If you
     * specify both, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterCombination</code> error. If you do not specify either,
     * AWS Elastic Beanstalk returns a <code>MissingRequiredParameter</code> error.
     * </p>
     */
    inline DescribeConfigurationSettingsRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>The name of the environment to describe.</p> <p> Condition: You must specify
     * either this or a TemplateName, but not both. If you specify both, AWS Elastic
     * Beanstalk returns an <code>InvalidParameterCombination</code> error. If you do
     * not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>The name of the environment to describe.</p> <p> Condition: You must specify
     * either this or a TemplateName, but not both. If you specify both, AWS Elastic
     * Beanstalk returns an <code>InvalidParameterCombination</code> error. If you do
     * not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }

    /**
     * <p>The name of the environment to describe.</p> <p> Condition: You must specify
     * either this or a TemplateName, but not both. If you specify both, AWS Elastic
     * Beanstalk returns an <code>InvalidParameterCombination</code> error. If you do
     * not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>The name of the environment to describe.</p> <p> Condition: You must specify
     * either this or a TemplateName, but not both. If you specify both, AWS Elastic
     * Beanstalk returns an <code>InvalidParameterCombination</code> error. If you do
     * not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }

    /**
     * <p>The name of the environment to describe.</p> <p> Condition: You must specify
     * either this or a TemplateName, but not both. If you specify both, AWS Elastic
     * Beanstalk returns an <code>InvalidParameterCombination</code> error. If you do
     * not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p>The name of the environment to describe.</p> <p> Condition: You must specify
     * either this or a TemplateName, but not both. If you specify both, AWS Elastic
     * Beanstalk returns an <code>InvalidParameterCombination</code> error. If you do
     * not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline DescribeConfigurationSettingsRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The name of the environment to describe.</p> <p> Condition: You must specify
     * either this or a TemplateName, but not both. If you specify both, AWS Elastic
     * Beanstalk returns an <code>InvalidParameterCombination</code> error. If you do
     * not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline DescribeConfigurationSettingsRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the environment to describe.</p> <p> Condition: You must specify
     * either this or a TemplateName, but not both. If you specify both, AWS Elastic
     * Beanstalk returns an <code>InvalidParameterCombination</code> error. If you do
     * not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline DescribeConfigurationSettingsRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
