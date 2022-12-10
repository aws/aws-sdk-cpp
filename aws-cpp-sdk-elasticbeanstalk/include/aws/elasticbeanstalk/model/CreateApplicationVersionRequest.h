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
    AWS_ELASTICBEANSTALK_API CreateApplicationVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApplicationVersion"; }

    AWS_ELASTICBEANSTALK_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICBEANSTALK_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p> The name of the application. If no application is found with this name, and
     * <code>AutoCreateApplication</code> is <code>false</code>, returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p> The name of the application. If no application is found with this name, and
     * <code>AutoCreateApplication</code> is <code>false</code>, returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p> The name of the application. If no application is found with this name, and
     * <code>AutoCreateApplication</code> is <code>false</code>, returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p> The name of the application. If no application is found with this name, and
     * <code>AutoCreateApplication</code> is <code>false</code>, returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p> The name of the application. If no application is found with this name, and
     * <code>AutoCreateApplication</code> is <code>false</code>, returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p> The name of the application. If no application is found with this name, and
     * <code>AutoCreateApplication</code> is <code>false</code>, returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline CreateApplicationVersionRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p> The name of the application. If no application is found with this name, and
     * <code>AutoCreateApplication</code> is <code>false</code>, returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline CreateApplicationVersionRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p> The name of the application. If no application is found with this name, and
     * <code>AutoCreateApplication</code> is <code>false</code>, returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline CreateApplicationVersionRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>A label identifying this version.</p> <p>Constraint: Must be unique per
     * application. If an application version already exists with this label for the
     * specified application, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline const Aws::String& GetVersionLabel() const{ return m_versionLabel; }

    /**
     * <p>A label identifying this version.</p> <p>Constraint: Must be unique per
     * application. If an application version already exists with this label for the
     * specified application, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline bool VersionLabelHasBeenSet() const { return m_versionLabelHasBeenSet; }

    /**
     * <p>A label identifying this version.</p> <p>Constraint: Must be unique per
     * application. If an application version already exists with this label for the
     * specified application, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetVersionLabel(const Aws::String& value) { m_versionLabelHasBeenSet = true; m_versionLabel = value; }

    /**
     * <p>A label identifying this version.</p> <p>Constraint: Must be unique per
     * application. If an application version already exists with this label for the
     * specified application, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetVersionLabel(Aws::String&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = std::move(value); }

    /**
     * <p>A label identifying this version.</p> <p>Constraint: Must be unique per
     * application. If an application version already exists with this label for the
     * specified application, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetVersionLabel(const char* value) { m_versionLabelHasBeenSet = true; m_versionLabel.assign(value); }

    /**
     * <p>A label identifying this version.</p> <p>Constraint: Must be unique per
     * application. If an application version already exists with this label for the
     * specified application, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline CreateApplicationVersionRequest& WithVersionLabel(const Aws::String& value) { SetVersionLabel(value); return *this;}

    /**
     * <p>A label identifying this version.</p> <p>Constraint: Must be unique per
     * application. If an application version already exists with this label for the
     * specified application, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline CreateApplicationVersionRequest& WithVersionLabel(Aws::String&& value) { SetVersionLabel(std::move(value)); return *this;}

    /**
     * <p>A label identifying this version.</p> <p>Constraint: Must be unique per
     * application. If an application version already exists with this label for the
     * specified application, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline CreateApplicationVersionRequest& WithVersionLabel(const char* value) { SetVersionLabel(value); return *this;}


    /**
     * <p>A description of this application version.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of this application version.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of this application version.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of this application version.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of this application version.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of this application version.</p>
     */
    inline CreateApplicationVersionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of this application version.</p>
     */
    inline CreateApplicationVersionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of this application version.</p>
     */
    inline CreateApplicationVersionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specify a commit in an AWS CodeCommit Git repository to use as the source
     * code for the application version.</p>
     */
    inline const SourceBuildInformation& GetSourceBuildInformation() const{ return m_sourceBuildInformation; }

    /**
     * <p>Specify a commit in an AWS CodeCommit Git repository to use as the source
     * code for the application version.</p>
     */
    inline bool SourceBuildInformationHasBeenSet() const { return m_sourceBuildInformationHasBeenSet; }

    /**
     * <p>Specify a commit in an AWS CodeCommit Git repository to use as the source
     * code for the application version.</p>
     */
    inline void SetSourceBuildInformation(const SourceBuildInformation& value) { m_sourceBuildInformationHasBeenSet = true; m_sourceBuildInformation = value; }

    /**
     * <p>Specify a commit in an AWS CodeCommit Git repository to use as the source
     * code for the application version.</p>
     */
    inline void SetSourceBuildInformation(SourceBuildInformation&& value) { m_sourceBuildInformationHasBeenSet = true; m_sourceBuildInformation = std::move(value); }

    /**
     * <p>Specify a commit in an AWS CodeCommit Git repository to use as the source
     * code for the application version.</p>
     */
    inline CreateApplicationVersionRequest& WithSourceBuildInformation(const SourceBuildInformation& value) { SetSourceBuildInformation(value); return *this;}

    /**
     * <p>Specify a commit in an AWS CodeCommit Git repository to use as the source
     * code for the application version.</p>
     */
    inline CreateApplicationVersionRequest& WithSourceBuildInformation(SourceBuildInformation&& value) { SetSourceBuildInformation(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 bucket and key that identify the location of the source bundle
     * for this version.</p>  <p>The Amazon S3 bucket must be in the same region
     * as the environment.</p>  <p>Specify a source bundle in S3 or a commit in
     * an AWS CodeCommit repository (with <code>SourceBuildInformation</code>), but not
     * both. If neither <code>SourceBundle</code> nor
     * <code>SourceBuildInformation</code> are provided, Elastic Beanstalk uses a
     * sample application.</p>
     */
    inline const S3Location& GetSourceBundle() const{ return m_sourceBundle; }

    /**
     * <p>The Amazon S3 bucket and key that identify the location of the source bundle
     * for this version.</p>  <p>The Amazon S3 bucket must be in the same region
     * as the environment.</p>  <p>Specify a source bundle in S3 or a commit in
     * an AWS CodeCommit repository (with <code>SourceBuildInformation</code>), but not
     * both. If neither <code>SourceBundle</code> nor
     * <code>SourceBuildInformation</code> are provided, Elastic Beanstalk uses a
     * sample application.</p>
     */
    inline bool SourceBundleHasBeenSet() const { return m_sourceBundleHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket and key that identify the location of the source bundle
     * for this version.</p>  <p>The Amazon S3 bucket must be in the same region
     * as the environment.</p>  <p>Specify a source bundle in S3 or a commit in
     * an AWS CodeCommit repository (with <code>SourceBuildInformation</code>), but not
     * both. If neither <code>SourceBundle</code> nor
     * <code>SourceBuildInformation</code> are provided, Elastic Beanstalk uses a
     * sample application.</p>
     */
    inline void SetSourceBundle(const S3Location& value) { m_sourceBundleHasBeenSet = true; m_sourceBundle = value; }

    /**
     * <p>The Amazon S3 bucket and key that identify the location of the source bundle
     * for this version.</p>  <p>The Amazon S3 bucket must be in the same region
     * as the environment.</p>  <p>Specify a source bundle in S3 or a commit in
     * an AWS CodeCommit repository (with <code>SourceBuildInformation</code>), but not
     * both. If neither <code>SourceBundle</code> nor
     * <code>SourceBuildInformation</code> are provided, Elastic Beanstalk uses a
     * sample application.</p>
     */
    inline void SetSourceBundle(S3Location&& value) { m_sourceBundleHasBeenSet = true; m_sourceBundle = std::move(value); }

    /**
     * <p>The Amazon S3 bucket and key that identify the location of the source bundle
     * for this version.</p>  <p>The Amazon S3 bucket must be in the same region
     * as the environment.</p>  <p>Specify a source bundle in S3 or a commit in
     * an AWS CodeCommit repository (with <code>SourceBuildInformation</code>), but not
     * both. If neither <code>SourceBundle</code> nor
     * <code>SourceBuildInformation</code> are provided, Elastic Beanstalk uses a
     * sample application.</p>
     */
    inline CreateApplicationVersionRequest& WithSourceBundle(const S3Location& value) { SetSourceBundle(value); return *this;}

    /**
     * <p>The Amazon S3 bucket and key that identify the location of the source bundle
     * for this version.</p>  <p>The Amazon S3 bucket must be in the same region
     * as the environment.</p>  <p>Specify a source bundle in S3 or a commit in
     * an AWS CodeCommit repository (with <code>SourceBuildInformation</code>), but not
     * both. If neither <code>SourceBundle</code> nor
     * <code>SourceBuildInformation</code> are provided, Elastic Beanstalk uses a
     * sample application.</p>
     */
    inline CreateApplicationVersionRequest& WithSourceBundle(S3Location&& value) { SetSourceBundle(std::move(value)); return *this;}


    /**
     * <p>Settings for an AWS CodeBuild build.</p>
     */
    inline const BuildConfiguration& GetBuildConfiguration() const{ return m_buildConfiguration; }

    /**
     * <p>Settings for an AWS CodeBuild build.</p>
     */
    inline bool BuildConfigurationHasBeenSet() const { return m_buildConfigurationHasBeenSet; }

    /**
     * <p>Settings for an AWS CodeBuild build.</p>
     */
    inline void SetBuildConfiguration(const BuildConfiguration& value) { m_buildConfigurationHasBeenSet = true; m_buildConfiguration = value; }

    /**
     * <p>Settings for an AWS CodeBuild build.</p>
     */
    inline void SetBuildConfiguration(BuildConfiguration&& value) { m_buildConfigurationHasBeenSet = true; m_buildConfiguration = std::move(value); }

    /**
     * <p>Settings for an AWS CodeBuild build.</p>
     */
    inline CreateApplicationVersionRequest& WithBuildConfiguration(const BuildConfiguration& value) { SetBuildConfiguration(value); return *this;}

    /**
     * <p>Settings for an AWS CodeBuild build.</p>
     */
    inline CreateApplicationVersionRequest& WithBuildConfiguration(BuildConfiguration&& value) { SetBuildConfiguration(std::move(value)); return *this;}


    /**
     * <p>Set to <code>true</code> to create an application with the specified name if
     * it doesn't already exist.</p>
     */
    inline bool GetAutoCreateApplication() const{ return m_autoCreateApplication; }

    /**
     * <p>Set to <code>true</code> to create an application with the specified name if
     * it doesn't already exist.</p>
     */
    inline bool AutoCreateApplicationHasBeenSet() const { return m_autoCreateApplicationHasBeenSet; }

    /**
     * <p>Set to <code>true</code> to create an application with the specified name if
     * it doesn't already exist.</p>
     */
    inline void SetAutoCreateApplication(bool value) { m_autoCreateApplicationHasBeenSet = true; m_autoCreateApplication = value; }

    /**
     * <p>Set to <code>true</code> to create an application with the specified name if
     * it doesn't already exist.</p>
     */
    inline CreateApplicationVersionRequest& WithAutoCreateApplication(bool value) { SetAutoCreateApplication(value); return *this;}


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
    inline bool GetProcess() const{ return m_process; }

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
    inline bool ProcessHasBeenSet() const { return m_processHasBeenSet; }

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
    inline void SetProcess(bool value) { m_processHasBeenSet = true; m_process = value; }

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
    inline CreateApplicationVersionRequest& WithProcess(bool value) { SetProcess(value); return *this;}


    /**
     * <p>Specifies the tags applied to the application version.</p> <p>Elastic
     * Beanstalk applies these tags only to the application version. Environments that
     * use the application version don't inherit the tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Specifies the tags applied to the application version.</p> <p>Elastic
     * Beanstalk applies these tags only to the application version. Environments that
     * use the application version don't inherit the tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Specifies the tags applied to the application version.</p> <p>Elastic
     * Beanstalk applies these tags only to the application version. Environments that
     * use the application version don't inherit the tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Specifies the tags applied to the application version.</p> <p>Elastic
     * Beanstalk applies these tags only to the application version. Environments that
     * use the application version don't inherit the tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Specifies the tags applied to the application version.</p> <p>Elastic
     * Beanstalk applies these tags only to the application version. Environments that
     * use the application version don't inherit the tags.</p>
     */
    inline CreateApplicationVersionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Specifies the tags applied to the application version.</p> <p>Elastic
     * Beanstalk applies these tags only to the application version. Environments that
     * use the application version don't inherit the tags.</p>
     */
    inline CreateApplicationVersionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Specifies the tags applied to the application version.</p> <p>Elastic
     * Beanstalk applies these tags only to the application version. Environments that
     * use the application version don't inherit the tags.</p>
     */
    inline CreateApplicationVersionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Specifies the tags applied to the application version.</p> <p>Elastic
     * Beanstalk applies these tags only to the application version. Environments that
     * use the application version don't inherit the tags.</p>
     */
    inline CreateApplicationVersionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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

    bool m_autoCreateApplication;
    bool m_autoCreateApplicationHasBeenSet = false;

    bool m_process;
    bool m_processHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
