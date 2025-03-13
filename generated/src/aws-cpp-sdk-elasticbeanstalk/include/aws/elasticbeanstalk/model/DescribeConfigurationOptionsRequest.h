/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeConfigurationOptionsRequest : public ElasticBeanstalkRequest
  {
  public:
    AWS_ELASTICBEANSTALK_API DescribeConfigurationOptionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConfigurationOptions"; }

    AWS_ELASTICBEANSTALK_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICBEANSTALK_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the application associated with the configuration template or
     * environment. Only needed if you want to describe the configuration options
     * associated with either the configuration template or environment.</p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    DescribeConfigurationOptionsRequest& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration template whose configuration options you want
     * to describe.</p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    DescribeConfigurationOptionsRequest& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment whose configuration options you want to
     * describe.</p>
     */
    inline const Aws::String& GetEnvironmentName() const { return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    template<typename EnvironmentNameT = Aws::String>
    void SetEnvironmentName(EnvironmentNameT&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::forward<EnvironmentNameT>(value); }
    template<typename EnvironmentNameT = Aws::String>
    DescribeConfigurationOptionsRequest& WithEnvironmentName(EnvironmentNameT&& value) { SetEnvironmentName(std::forward<EnvironmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the solution stack whose configuration options you want to
     * describe.</p>
     */
    inline const Aws::String& GetSolutionStackName() const { return m_solutionStackName; }
    inline bool SolutionStackNameHasBeenSet() const { return m_solutionStackNameHasBeenSet; }
    template<typename SolutionStackNameT = Aws::String>
    void SetSolutionStackName(SolutionStackNameT&& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = std::forward<SolutionStackNameT>(value); }
    template<typename SolutionStackNameT = Aws::String>
    DescribeConfigurationOptionsRequest& WithSolutionStackName(SolutionStackNameT&& value) { SetSolutionStackName(std::forward<SolutionStackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the custom platform.</p>
     */
    inline const Aws::String& GetPlatformArn() const { return m_platformArn; }
    inline bool PlatformArnHasBeenSet() const { return m_platformArnHasBeenSet; }
    template<typename PlatformArnT = Aws::String>
    void SetPlatformArn(PlatformArnT&& value) { m_platformArnHasBeenSet = true; m_platformArn = std::forward<PlatformArnT>(value); }
    template<typename PlatformArnT = Aws::String>
    DescribeConfigurationOptionsRequest& WithPlatformArn(PlatformArnT&& value) { SetPlatformArn(std::forward<PlatformArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, restricts the descriptions to only the specified options.</p>
     */
    inline const Aws::Vector<OptionSpecification>& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = Aws::Vector<OptionSpecification>>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = Aws::Vector<OptionSpecification>>
    DescribeConfigurationOptionsRequest& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    template<typename OptionsT = OptionSpecification>
    DescribeConfigurationOptionsRequest& AddOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options.emplace_back(std::forward<OptionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::String m_solutionStackName;
    bool m_solutionStackNameHasBeenSet = false;

    Aws::String m_platformArn;
    bool m_platformArnHasBeenSet = false;

    Aws::Vector<OptionSpecification> m_options;
    bool m_optionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
