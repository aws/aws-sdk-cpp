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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/OptionSpecification.h>
#include <utility>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Result message containing a list of application version
   * descriptions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeConfigurationOptionsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API DescribeConfigurationOptionsRequest : public ElasticBeanstalkRequest
  {
  public:
    DescribeConfigurationOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConfigurationOptions"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the application associated with the configuration template or
     * environment. Only needed if you want to describe the configuration options
     * associated with either the configuration template or environment.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application associated with the configuration template or
     * environment. Only needed if you want to describe the configuration options
     * associated with either the configuration template or environment.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of the application associated with the configuration template or
     * environment. Only needed if you want to describe the configuration options
     * associated with either the configuration template or environment.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application associated with the configuration template or
     * environment. Only needed if you want to describe the configuration options
     * associated with either the configuration template or environment.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of the application associated with the configuration template or
     * environment. Only needed if you want to describe the configuration options
     * associated with either the configuration template or environment.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the application associated with the configuration template or
     * environment. Only needed if you want to describe the configuration options
     * associated with either the configuration template or environment.</p>
     */
    inline DescribeConfigurationOptionsRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application associated with the configuration template or
     * environment. Only needed if you want to describe the configuration options
     * associated with either the configuration template or environment.</p>
     */
    inline DescribeConfigurationOptionsRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the application associated with the configuration template or
     * environment. Only needed if you want to describe the configuration options
     * associated with either the configuration template or environment.</p>
     */
    inline DescribeConfigurationOptionsRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>The name of the configuration template whose configuration options you want
     * to describe.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the configuration template whose configuration options you want
     * to describe.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the configuration template whose configuration options you want
     * to describe.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the configuration template whose configuration options you want
     * to describe.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the configuration template whose configuration options you want
     * to describe.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the configuration template whose configuration options you want
     * to describe.</p>
     */
    inline DescribeConfigurationOptionsRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the configuration template whose configuration options you want
     * to describe.</p>
     */
    inline DescribeConfigurationOptionsRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration template whose configuration options you want
     * to describe.</p>
     */
    inline DescribeConfigurationOptionsRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>The name of the environment whose configuration options you want to
     * describe.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>The name of the environment whose configuration options you want to
     * describe.</p>
     */
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }

    /**
     * <p>The name of the environment whose configuration options you want to
     * describe.</p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>The name of the environment whose configuration options you want to
     * describe.</p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }

    /**
     * <p>The name of the environment whose configuration options you want to
     * describe.</p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p>The name of the environment whose configuration options you want to
     * describe.</p>
     */
    inline DescribeConfigurationOptionsRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The name of the environment whose configuration options you want to
     * describe.</p>
     */
    inline DescribeConfigurationOptionsRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the environment whose configuration options you want to
     * describe.</p>
     */
    inline DescribeConfigurationOptionsRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}


    /**
     * <p>The name of the solution stack whose configuration options you want to
     * describe.</p>
     */
    inline const Aws::String& GetSolutionStackName() const{ return m_solutionStackName; }

    /**
     * <p>The name of the solution stack whose configuration options you want to
     * describe.</p>
     */
    inline bool SolutionStackNameHasBeenSet() const { return m_solutionStackNameHasBeenSet; }

    /**
     * <p>The name of the solution stack whose configuration options you want to
     * describe.</p>
     */
    inline void SetSolutionStackName(const Aws::String& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = value; }

    /**
     * <p>The name of the solution stack whose configuration options you want to
     * describe.</p>
     */
    inline void SetSolutionStackName(Aws::String&& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = std::move(value); }

    /**
     * <p>The name of the solution stack whose configuration options you want to
     * describe.</p>
     */
    inline void SetSolutionStackName(const char* value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName.assign(value); }

    /**
     * <p>The name of the solution stack whose configuration options you want to
     * describe.</p>
     */
    inline DescribeConfigurationOptionsRequest& WithSolutionStackName(const Aws::String& value) { SetSolutionStackName(value); return *this;}

    /**
     * <p>The name of the solution stack whose configuration options you want to
     * describe.</p>
     */
    inline DescribeConfigurationOptionsRequest& WithSolutionStackName(Aws::String&& value) { SetSolutionStackName(std::move(value)); return *this;}

    /**
     * <p>The name of the solution stack whose configuration options you want to
     * describe.</p>
     */
    inline DescribeConfigurationOptionsRequest& WithSolutionStackName(const char* value) { SetSolutionStackName(value); return *this;}


    /**
     * <p>The ARN of the custom platform.</p>
     */
    inline const Aws::String& GetPlatformArn() const{ return m_platformArn; }

    /**
     * <p>The ARN of the custom platform.</p>
     */
    inline bool PlatformArnHasBeenSet() const { return m_platformArnHasBeenSet; }

    /**
     * <p>The ARN of the custom platform.</p>
     */
    inline void SetPlatformArn(const Aws::String& value) { m_platformArnHasBeenSet = true; m_platformArn = value; }

    /**
     * <p>The ARN of the custom platform.</p>
     */
    inline void SetPlatformArn(Aws::String&& value) { m_platformArnHasBeenSet = true; m_platformArn = std::move(value); }

    /**
     * <p>The ARN of the custom platform.</p>
     */
    inline void SetPlatformArn(const char* value) { m_platformArnHasBeenSet = true; m_platformArn.assign(value); }

    /**
     * <p>The ARN of the custom platform.</p>
     */
    inline DescribeConfigurationOptionsRequest& WithPlatformArn(const Aws::String& value) { SetPlatformArn(value); return *this;}

    /**
     * <p>The ARN of the custom platform.</p>
     */
    inline DescribeConfigurationOptionsRequest& WithPlatformArn(Aws::String&& value) { SetPlatformArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the custom platform.</p>
     */
    inline DescribeConfigurationOptionsRequest& WithPlatformArn(const char* value) { SetPlatformArn(value); return *this;}


    /**
     * <p>If specified, restricts the descriptions to only the specified options.</p>
     */
    inline const Aws::Vector<OptionSpecification>& GetOptions() const{ return m_options; }

    /**
     * <p>If specified, restricts the descriptions to only the specified options.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>If specified, restricts the descriptions to only the specified options.</p>
     */
    inline void SetOptions(const Aws::Vector<OptionSpecification>& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>If specified, restricts the descriptions to only the specified options.</p>
     */
    inline void SetOptions(Aws::Vector<OptionSpecification>&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>If specified, restricts the descriptions to only the specified options.</p>
     */
    inline DescribeConfigurationOptionsRequest& WithOptions(const Aws::Vector<OptionSpecification>& value) { SetOptions(value); return *this;}

    /**
     * <p>If specified, restricts the descriptions to only the specified options.</p>
     */
    inline DescribeConfigurationOptionsRequest& WithOptions(Aws::Vector<OptionSpecification>&& value) { SetOptions(std::move(value)); return *this;}

    /**
     * <p>If specified, restricts the descriptions to only the specified options.</p>
     */
    inline DescribeConfigurationOptionsRequest& AddOptions(const OptionSpecification& value) { m_optionsHasBeenSet = true; m_options.push_back(value); return *this; }

    /**
     * <p>If specified, restricts the descriptions to only the specified options.</p>
     */
    inline DescribeConfigurationOptionsRequest& AddOptions(OptionSpecification&& value) { m_optionsHasBeenSet = true; m_options.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet;

    Aws::String m_solutionStackName;
    bool m_solutionStackNameHasBeenSet;

    Aws::String m_platformArn;
    bool m_platformArnHasBeenSet;

    Aws::Vector<OptionSpecification> m_options;
    bool m_optionsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
