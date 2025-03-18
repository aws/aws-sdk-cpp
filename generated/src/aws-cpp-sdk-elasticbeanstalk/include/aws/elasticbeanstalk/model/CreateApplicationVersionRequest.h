/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/SourceBuildInformation.h>
#include <aws/elasticbeanstalk/model/S3Location.h>
#include <aws/elasticbeanstalk/model/BuildConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreateApplicationVersionMessage">AWS
   * API Reference</a></p>
   */
  class CreateApplicationVersionRequest : public ElasticBeanstalkRequest
  {
  public:
    AWS_ELASTICBEANSTALK_API CreateApplicationVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApplicationVersion"; }

    AWS_ELASTICBEANSTALK_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICBEANSTALK_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p> The name of the application. If no application is found with this name, and
     * <code>AutoCreateApplication</code> is <code>false</code>, returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    CreateApplicationVersionRequest& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A label identifying this version.</p> <p>Constraint: Must be unique per
     * application. If an application version already exists with this label for the
     * specified application, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline const Aws::String& GetVersionLabel() const { return m_versionLabel; }
    inline bool VersionLabelHasBeenSet() const { return m_versionLabelHasBeenSet; }
    template<typename VersionLabelT = Aws::String>
    void SetVersionLabel(VersionLabelT&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = std::forward<VersionLabelT>(value); }
    template<typename VersionLabelT = Aws::String>
    CreateApplicationVersionRequest& WithVersionLabel(VersionLabelT&& value) { SetVersionLabel(std::forward<VersionLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of this application version.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateApplicationVersionRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify a commit in an AWS CodeCommit Git repository to use as the source
     * code for the application version.</p>
     */
    inline const SourceBuildInformation& GetSourceBuildInformation() const { return m_sourceBuildInformation; }
    inline bool SourceBuildInformationHasBeenSet() const { return m_sourceBuildInformationHasBeenSet; }
    template<typename SourceBuildInformationT = SourceBuildInformation>
    void SetSourceBuildInformation(SourceBuildInformationT&& value) { m_sourceBuildInformationHasBeenSet = true; m_sourceBuildInformation = std::forward<SourceBuildInformationT>(value); }
    template<typename SourceBuildInformationT = SourceBuildInformation>
    CreateApplicationVersionRequest& WithSourceBuildInformation(SourceBuildInformationT&& value) { SetSourceBuildInformation(std::forward<SourceBuildInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket and key that identify the location of the source bundle
     * for this version.</p>  <p>The Amazon S3 bucket must be in the same region
     * as the environment.</p>  <p>Specify a source bundle in S3 or a commit in
     * an AWS CodeCommit repository (with <code>SourceBuildInformation</code>), but not
     * both. If neither <code>SourceBundle</code> nor
     * <code>SourceBuildInformation</code> are provided, Elastic Beanstalk uses a
     * sample application.</p>
     */
    inline const S3Location& GetSourceBundle() const { return m_sourceBundle; }
    inline bool SourceBundleHasBeenSet() const { return m_sourceBundleHasBeenSet; }
    template<typename SourceBundleT = S3Location>
    void SetSourceBundle(SourceBundleT&& value) { m_sourceBundleHasBeenSet = true; m_sourceBundle = std::forward<SourceBundleT>(value); }
    template<typename SourceBundleT = S3Location>
    CreateApplicationVersionRequest& WithSourceBundle(SourceBundleT&& value) { SetSourceBundle(std::forward<SourceBundleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for an AWS CodeBuild build.</p>
     */
    inline const BuildConfiguration& GetBuildConfiguration() const { return m_buildConfiguration; }
    inline bool BuildConfigurationHasBeenSet() const { return m_buildConfigurationHasBeenSet; }
    template<typename BuildConfigurationT = BuildConfiguration>
    void SetBuildConfiguration(BuildConfigurationT&& value) { m_buildConfigurationHasBeenSet = true; m_buildConfiguration = std::forward<BuildConfigurationT>(value); }
    template<typename BuildConfigurationT = BuildConfiguration>
    CreateApplicationVersionRequest& WithBuildConfiguration(BuildConfigurationT&& value) { SetBuildConfiguration(std::forward<BuildConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>true</code> to create an application with the specified name if
     * it doesn't already exist.</p>
     */
    inline bool GetAutoCreateApplication() const { return m_autoCreateApplication; }
    inline bool AutoCreateApplicationHasBeenSet() const { return m_autoCreateApplicationHasBeenSet; }
    inline void SetAutoCreateApplication(bool value) { m_autoCreateApplicationHasBeenSet = true; m_autoCreateApplication = value; }
    inline CreateApplicationVersionRequest& WithAutoCreateApplication(bool value) { SetAutoCreateApplication(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Pre-processes and validates the environment manifest (<code>env.yaml</code>)
     * and configuration files (<code>*.config</code> files in the
     * <code>.ebextensions</code> folder) in the source bundle. Validating
     * configuration files can identify issues prior to deploying the application
     * version to an environment.</p> <p>You must turn processing on for application
     * versions that you create using AWS CodeBuild or AWS CodeCommit. For application
     * versions built from a source bundle in Amazon S3, processing is optional.</p>
     *  <p>The <code>Process</code> option validates Elastic Beanstalk
     * configuration files. It doesn't validate your application's configuration files,
     * like proxy server or Docker configuration.</p> 
     */
    inline bool GetProcess() const { return m_process; }
    inline bool ProcessHasBeenSet() const { return m_processHasBeenSet; }
    inline void SetProcess(bool value) { m_processHasBeenSet = true; m_process = value; }
    inline CreateApplicationVersionRequest& WithProcess(bool value) { SetProcess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the tags applied to the application version.</p> <p>Elastic
     * Beanstalk applies these tags only to the application version. Environments that
     * use the application version don't inherit the tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateApplicationVersionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateApplicationVersionRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_versionLabel;
    bool m_versionLabelHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SourceBuildInformation m_sourceBuildInformation;
    bool m_sourceBuildInformationHasBeenSet = false;

    S3Location m_sourceBundle;
    bool m_sourceBundleHasBeenSet = false;

    BuildConfiguration m_buildConfiguration;
    bool m_buildConfigurationHasBeenSet = false;

    bool m_autoCreateApplication{false};
    bool m_autoCreateApplicationHasBeenSet = false;

    bool m_process{false};
    bool m_processHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
