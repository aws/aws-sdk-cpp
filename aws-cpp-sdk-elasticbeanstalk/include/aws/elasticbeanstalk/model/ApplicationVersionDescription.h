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
#include <aws/elasticbeanstalk/model/SourceBuildInformation.h>
#include <aws/elasticbeanstalk/model/S3Location.h>
#include <aws/core/utils/DateTime.h>
#include <aws/elasticbeanstalk/model/ApplicationVersionStatus.h>
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
   * <p>Describes the properties of an application version.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ApplicationVersionDescription">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API ApplicationVersionDescription
  {
  public:
    ApplicationVersionDescription();
    ApplicationVersionDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    ApplicationVersionDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) of the application version.</p>
     */
    inline const Aws::String& GetApplicationVersionArn() const{ return m_applicationVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application version.</p>
     */
    inline bool ApplicationVersionArnHasBeenSet() const { return m_applicationVersionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application version.</p>
     */
    inline void SetApplicationVersionArn(const Aws::String& value) { m_applicationVersionArnHasBeenSet = true; m_applicationVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application version.</p>
     */
    inline void SetApplicationVersionArn(Aws::String&& value) { m_applicationVersionArnHasBeenSet = true; m_applicationVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application version.</p>
     */
    inline void SetApplicationVersionArn(const char* value) { m_applicationVersionArnHasBeenSet = true; m_applicationVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application version.</p>
     */
    inline ApplicationVersionDescription& WithApplicationVersionArn(const Aws::String& value) { SetApplicationVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application version.</p>
     */
    inline ApplicationVersionDescription& WithApplicationVersionArn(Aws::String&& value) { SetApplicationVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application version.</p>
     */
    inline ApplicationVersionDescription& WithApplicationVersionArn(const char* value) { SetApplicationVersionArn(value); return *this;}


    /**
     * <p>The name of the application to which the application version belongs.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application to which the application version belongs.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of the application to which the application version belongs.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application to which the application version belongs.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of the application to which the application version belongs.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the application to which the application version belongs.</p>
     */
    inline ApplicationVersionDescription& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application to which the application version belongs.</p>
     */
    inline ApplicationVersionDescription& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the application to which the application version belongs.</p>
     */
    inline ApplicationVersionDescription& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>The description of the application version.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the application version.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the application version.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the application version.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the application version.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the application version.</p>
     */
    inline ApplicationVersionDescription& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the application version.</p>
     */
    inline ApplicationVersionDescription& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the application version.</p>
     */
    inline ApplicationVersionDescription& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A unique identifier for the application version.</p>
     */
    inline const Aws::String& GetVersionLabel() const{ return m_versionLabel; }

    /**
     * <p>A unique identifier for the application version.</p>
     */
    inline bool VersionLabelHasBeenSet() const { return m_versionLabelHasBeenSet; }

    /**
     * <p>A unique identifier for the application version.</p>
     */
    inline void SetVersionLabel(const Aws::String& value) { m_versionLabelHasBeenSet = true; m_versionLabel = value; }

    /**
     * <p>A unique identifier for the application version.</p>
     */
    inline void SetVersionLabel(Aws::String&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = std::move(value); }

    /**
     * <p>A unique identifier for the application version.</p>
     */
    inline void SetVersionLabel(const char* value) { m_versionLabelHasBeenSet = true; m_versionLabel.assign(value); }

    /**
     * <p>A unique identifier for the application version.</p>
     */
    inline ApplicationVersionDescription& WithVersionLabel(const Aws::String& value) { SetVersionLabel(value); return *this;}

    /**
     * <p>A unique identifier for the application version.</p>
     */
    inline ApplicationVersionDescription& WithVersionLabel(Aws::String&& value) { SetVersionLabel(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the application version.</p>
     */
    inline ApplicationVersionDescription& WithVersionLabel(const char* value) { SetVersionLabel(value); return *this;}


    /**
     * <p>If the version's source code was retrieved from AWS CodeCommit, the location
     * of the source code for the application version.</p>
     */
    inline const SourceBuildInformation& GetSourceBuildInformation() const{ return m_sourceBuildInformation; }

    /**
     * <p>If the version's source code was retrieved from AWS CodeCommit, the location
     * of the source code for the application version.</p>
     */
    inline bool SourceBuildInformationHasBeenSet() const { return m_sourceBuildInformationHasBeenSet; }

    /**
     * <p>If the version's source code was retrieved from AWS CodeCommit, the location
     * of the source code for the application version.</p>
     */
    inline void SetSourceBuildInformation(const SourceBuildInformation& value) { m_sourceBuildInformationHasBeenSet = true; m_sourceBuildInformation = value; }

    /**
     * <p>If the version's source code was retrieved from AWS CodeCommit, the location
     * of the source code for the application version.</p>
     */
    inline void SetSourceBuildInformation(SourceBuildInformation&& value) { m_sourceBuildInformationHasBeenSet = true; m_sourceBuildInformation = std::move(value); }

    /**
     * <p>If the version's source code was retrieved from AWS CodeCommit, the location
     * of the source code for the application version.</p>
     */
    inline ApplicationVersionDescription& WithSourceBuildInformation(const SourceBuildInformation& value) { SetSourceBuildInformation(value); return *this;}

    /**
     * <p>If the version's source code was retrieved from AWS CodeCommit, the location
     * of the source code for the application version.</p>
     */
    inline ApplicationVersionDescription& WithSourceBuildInformation(SourceBuildInformation&& value) { SetSourceBuildInformation(std::move(value)); return *this;}


    /**
     * <p>Reference to the artifact from the AWS CodeBuild build.</p>
     */
    inline const Aws::String& GetBuildArn() const{ return m_buildArn; }

    /**
     * <p>Reference to the artifact from the AWS CodeBuild build.</p>
     */
    inline bool BuildArnHasBeenSet() const { return m_buildArnHasBeenSet; }

    /**
     * <p>Reference to the artifact from the AWS CodeBuild build.</p>
     */
    inline void SetBuildArn(const Aws::String& value) { m_buildArnHasBeenSet = true; m_buildArn = value; }

    /**
     * <p>Reference to the artifact from the AWS CodeBuild build.</p>
     */
    inline void SetBuildArn(Aws::String&& value) { m_buildArnHasBeenSet = true; m_buildArn = std::move(value); }

    /**
     * <p>Reference to the artifact from the AWS CodeBuild build.</p>
     */
    inline void SetBuildArn(const char* value) { m_buildArnHasBeenSet = true; m_buildArn.assign(value); }

    /**
     * <p>Reference to the artifact from the AWS CodeBuild build.</p>
     */
    inline ApplicationVersionDescription& WithBuildArn(const Aws::String& value) { SetBuildArn(value); return *this;}

    /**
     * <p>Reference to the artifact from the AWS CodeBuild build.</p>
     */
    inline ApplicationVersionDescription& WithBuildArn(Aws::String&& value) { SetBuildArn(std::move(value)); return *this;}

    /**
     * <p>Reference to the artifact from the AWS CodeBuild build.</p>
     */
    inline ApplicationVersionDescription& WithBuildArn(const char* value) { SetBuildArn(value); return *this;}


    /**
     * <p>The storage location of the application version's source bundle in Amazon
     * S3.</p>
     */
    inline const S3Location& GetSourceBundle() const{ return m_sourceBundle; }

    /**
     * <p>The storage location of the application version's source bundle in Amazon
     * S3.</p>
     */
    inline bool SourceBundleHasBeenSet() const { return m_sourceBundleHasBeenSet; }

    /**
     * <p>The storage location of the application version's source bundle in Amazon
     * S3.</p>
     */
    inline void SetSourceBundle(const S3Location& value) { m_sourceBundleHasBeenSet = true; m_sourceBundle = value; }

    /**
     * <p>The storage location of the application version's source bundle in Amazon
     * S3.</p>
     */
    inline void SetSourceBundle(S3Location&& value) { m_sourceBundleHasBeenSet = true; m_sourceBundle = std::move(value); }

    /**
     * <p>The storage location of the application version's source bundle in Amazon
     * S3.</p>
     */
    inline ApplicationVersionDescription& WithSourceBundle(const S3Location& value) { SetSourceBundle(value); return *this;}

    /**
     * <p>The storage location of the application version's source bundle in Amazon
     * S3.</p>
     */
    inline ApplicationVersionDescription& WithSourceBundle(S3Location&& value) { SetSourceBundle(std::move(value)); return *this;}


    /**
     * <p>The creation date of the application version.</p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const{ return m_dateCreated; }

    /**
     * <p>The creation date of the application version.</p>
     */
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }

    /**
     * <p>The creation date of the application version.</p>
     */
    inline void SetDateCreated(const Aws::Utils::DateTime& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }

    /**
     * <p>The creation date of the application version.</p>
     */
    inline void SetDateCreated(Aws::Utils::DateTime&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }

    /**
     * <p>The creation date of the application version.</p>
     */
    inline ApplicationVersionDescription& WithDateCreated(const Aws::Utils::DateTime& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The creation date of the application version.</p>
     */
    inline ApplicationVersionDescription& WithDateCreated(Aws::Utils::DateTime&& value) { SetDateCreated(std::move(value)); return *this;}


    /**
     * <p>The last modified date of the application version.</p>
     */
    inline const Aws::Utils::DateTime& GetDateUpdated() const{ return m_dateUpdated; }

    /**
     * <p>The last modified date of the application version.</p>
     */
    inline bool DateUpdatedHasBeenSet() const { return m_dateUpdatedHasBeenSet; }

    /**
     * <p>The last modified date of the application version.</p>
     */
    inline void SetDateUpdated(const Aws::Utils::DateTime& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = value; }

    /**
     * <p>The last modified date of the application version.</p>
     */
    inline void SetDateUpdated(Aws::Utils::DateTime&& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = std::move(value); }

    /**
     * <p>The last modified date of the application version.</p>
     */
    inline ApplicationVersionDescription& WithDateUpdated(const Aws::Utils::DateTime& value) { SetDateUpdated(value); return *this;}

    /**
     * <p>The last modified date of the application version.</p>
     */
    inline ApplicationVersionDescription& WithDateUpdated(Aws::Utils::DateTime&& value) { SetDateUpdated(std::move(value)); return *this;}


    /**
     * <p>The processing status of the application version. Reflects the state of the
     * application version during its creation. Many of the values are only applicable
     * if you specified <code>True</code> for the <code>Process</code> parameter of the
     * <code>CreateApplicationVersion</code> action. The following list describes the
     * possible values.</p> <ul> <li> <p> <code>Unprocessed</code> – Application
     * version wasn't pre-processed or validated. Elastic Beanstalk will validate
     * configuration files during deployment of the application version to an
     * environment.</p> </li> <li> <p> <code>Processing</code> – Elastic Beanstalk is
     * currently processing the application version.</p> </li> <li> <p>
     * <code>Building</code> – Application version is currently undergoing an AWS
     * CodeBuild build.</p> </li> <li> <p> <code>Processed</code> – Elastic Beanstalk
     * was successfully pre-processed and validated.</p> </li> <li> <p>
     * <code>Failed</code> – Either the AWS CodeBuild build failed or configuration
     * files didn't pass validation. This application version isn't usable.</p> </li>
     * </ul>
     */
    inline const ApplicationVersionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The processing status of the application version. Reflects the state of the
     * application version during its creation. Many of the values are only applicable
     * if you specified <code>True</code> for the <code>Process</code> parameter of the
     * <code>CreateApplicationVersion</code> action. The following list describes the
     * possible values.</p> <ul> <li> <p> <code>Unprocessed</code> – Application
     * version wasn't pre-processed or validated. Elastic Beanstalk will validate
     * configuration files during deployment of the application version to an
     * environment.</p> </li> <li> <p> <code>Processing</code> – Elastic Beanstalk is
     * currently processing the application version.</p> </li> <li> <p>
     * <code>Building</code> – Application version is currently undergoing an AWS
     * CodeBuild build.</p> </li> <li> <p> <code>Processed</code> – Elastic Beanstalk
     * was successfully pre-processed and validated.</p> </li> <li> <p>
     * <code>Failed</code> – Either the AWS CodeBuild build failed or configuration
     * files didn't pass validation. This application version isn't usable.</p> </li>
     * </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The processing status of the application version. Reflects the state of the
     * application version during its creation. Many of the values are only applicable
     * if you specified <code>True</code> for the <code>Process</code> parameter of the
     * <code>CreateApplicationVersion</code> action. The following list describes the
     * possible values.</p> <ul> <li> <p> <code>Unprocessed</code> – Application
     * version wasn't pre-processed or validated. Elastic Beanstalk will validate
     * configuration files during deployment of the application version to an
     * environment.</p> </li> <li> <p> <code>Processing</code> – Elastic Beanstalk is
     * currently processing the application version.</p> </li> <li> <p>
     * <code>Building</code> – Application version is currently undergoing an AWS
     * CodeBuild build.</p> </li> <li> <p> <code>Processed</code> – Elastic Beanstalk
     * was successfully pre-processed and validated.</p> </li> <li> <p>
     * <code>Failed</code> – Either the AWS CodeBuild build failed or configuration
     * files didn't pass validation. This application version isn't usable.</p> </li>
     * </ul>
     */
    inline void SetStatus(const ApplicationVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The processing status of the application version. Reflects the state of the
     * application version during its creation. Many of the values are only applicable
     * if you specified <code>True</code> for the <code>Process</code> parameter of the
     * <code>CreateApplicationVersion</code> action. The following list describes the
     * possible values.</p> <ul> <li> <p> <code>Unprocessed</code> – Application
     * version wasn't pre-processed or validated. Elastic Beanstalk will validate
     * configuration files during deployment of the application version to an
     * environment.</p> </li> <li> <p> <code>Processing</code> – Elastic Beanstalk is
     * currently processing the application version.</p> </li> <li> <p>
     * <code>Building</code> – Application version is currently undergoing an AWS
     * CodeBuild build.</p> </li> <li> <p> <code>Processed</code> – Elastic Beanstalk
     * was successfully pre-processed and validated.</p> </li> <li> <p>
     * <code>Failed</code> – Either the AWS CodeBuild build failed or configuration
     * files didn't pass validation. This application version isn't usable.</p> </li>
     * </ul>
     */
    inline void SetStatus(ApplicationVersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The processing status of the application version. Reflects the state of the
     * application version during its creation. Many of the values are only applicable
     * if you specified <code>True</code> for the <code>Process</code> parameter of the
     * <code>CreateApplicationVersion</code> action. The following list describes the
     * possible values.</p> <ul> <li> <p> <code>Unprocessed</code> – Application
     * version wasn't pre-processed or validated. Elastic Beanstalk will validate
     * configuration files during deployment of the application version to an
     * environment.</p> </li> <li> <p> <code>Processing</code> – Elastic Beanstalk is
     * currently processing the application version.</p> </li> <li> <p>
     * <code>Building</code> – Application version is currently undergoing an AWS
     * CodeBuild build.</p> </li> <li> <p> <code>Processed</code> – Elastic Beanstalk
     * was successfully pre-processed and validated.</p> </li> <li> <p>
     * <code>Failed</code> – Either the AWS CodeBuild build failed or configuration
     * files didn't pass validation. This application version isn't usable.</p> </li>
     * </ul>
     */
    inline ApplicationVersionDescription& WithStatus(const ApplicationVersionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The processing status of the application version. Reflects the state of the
     * application version during its creation. Many of the values are only applicable
     * if you specified <code>True</code> for the <code>Process</code> parameter of the
     * <code>CreateApplicationVersion</code> action. The following list describes the
     * possible values.</p> <ul> <li> <p> <code>Unprocessed</code> – Application
     * version wasn't pre-processed or validated. Elastic Beanstalk will validate
     * configuration files during deployment of the application version to an
     * environment.</p> </li> <li> <p> <code>Processing</code> – Elastic Beanstalk is
     * currently processing the application version.</p> </li> <li> <p>
     * <code>Building</code> – Application version is currently undergoing an AWS
     * CodeBuild build.</p> </li> <li> <p> <code>Processed</code> – Elastic Beanstalk
     * was successfully pre-processed and validated.</p> </li> <li> <p>
     * <code>Failed</code> – Either the AWS CodeBuild build failed or configuration
     * files didn't pass validation. This application version isn't usable.</p> </li>
     * </ul>
     */
    inline ApplicationVersionDescription& WithStatus(ApplicationVersionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_applicationVersionArn;
    bool m_applicationVersionArnHasBeenSet;

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_versionLabel;
    bool m_versionLabelHasBeenSet;

    SourceBuildInformation m_sourceBuildInformation;
    bool m_sourceBuildInformationHasBeenSet;

    Aws::String m_buildArn;
    bool m_buildArnHasBeenSet;

    S3Location m_sourceBundle;
    bool m_sourceBundleHasBeenSet;

    Aws::Utils::DateTime m_dateCreated;
    bool m_dateCreatedHasBeenSet;

    Aws::Utils::DateTime m_dateUpdated;
    bool m_dateUpdatedHasBeenSet;

    ApplicationVersionStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
