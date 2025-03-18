/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ApplicationVersionDescription
  {
  public:
    AWS_ELASTICBEANSTALK_API ApplicationVersionDescription() = default;
    AWS_ELASTICBEANSTALK_API ApplicationVersionDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API ApplicationVersionDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the application version.</p>
     */
    inline const Aws::String& GetApplicationVersionArn() const { return m_applicationVersionArn; }
    inline bool ApplicationVersionArnHasBeenSet() const { return m_applicationVersionArnHasBeenSet; }
    template<typename ApplicationVersionArnT = Aws::String>
    void SetApplicationVersionArn(ApplicationVersionArnT&& value) { m_applicationVersionArnHasBeenSet = true; m_applicationVersionArn = std::forward<ApplicationVersionArnT>(value); }
    template<typename ApplicationVersionArnT = Aws::String>
    ApplicationVersionDescription& WithApplicationVersionArn(ApplicationVersionArnT&& value) { SetApplicationVersionArn(std::forward<ApplicationVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application to which the application version belongs.</p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    ApplicationVersionDescription& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the application version.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ApplicationVersionDescription& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the application version.</p>
     */
    inline const Aws::String& GetVersionLabel() const { return m_versionLabel; }
    inline bool VersionLabelHasBeenSet() const { return m_versionLabelHasBeenSet; }
    template<typename VersionLabelT = Aws::String>
    void SetVersionLabel(VersionLabelT&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = std::forward<VersionLabelT>(value); }
    template<typename VersionLabelT = Aws::String>
    ApplicationVersionDescription& WithVersionLabel(VersionLabelT&& value) { SetVersionLabel(std::forward<VersionLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the version's source code was retrieved from AWS CodeCommit, the location
     * of the source code for the application version.</p>
     */
    inline const SourceBuildInformation& GetSourceBuildInformation() const { return m_sourceBuildInformation; }
    inline bool SourceBuildInformationHasBeenSet() const { return m_sourceBuildInformationHasBeenSet; }
    template<typename SourceBuildInformationT = SourceBuildInformation>
    void SetSourceBuildInformation(SourceBuildInformationT&& value) { m_sourceBuildInformationHasBeenSet = true; m_sourceBuildInformation = std::forward<SourceBuildInformationT>(value); }
    template<typename SourceBuildInformationT = SourceBuildInformation>
    ApplicationVersionDescription& WithSourceBuildInformation(SourceBuildInformationT&& value) { SetSourceBuildInformation(std::forward<SourceBuildInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reference to the artifact from the AWS CodeBuild build.</p>
     */
    inline const Aws::String& GetBuildArn() const { return m_buildArn; }
    inline bool BuildArnHasBeenSet() const { return m_buildArnHasBeenSet; }
    template<typename BuildArnT = Aws::String>
    void SetBuildArn(BuildArnT&& value) { m_buildArnHasBeenSet = true; m_buildArn = std::forward<BuildArnT>(value); }
    template<typename BuildArnT = Aws::String>
    ApplicationVersionDescription& WithBuildArn(BuildArnT&& value) { SetBuildArn(std::forward<BuildArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage location of the application version's source bundle in Amazon
     * S3.</p>
     */
    inline const S3Location& GetSourceBundle() const { return m_sourceBundle; }
    inline bool SourceBundleHasBeenSet() const { return m_sourceBundleHasBeenSet; }
    template<typename SourceBundleT = S3Location>
    void SetSourceBundle(SourceBundleT&& value) { m_sourceBundleHasBeenSet = true; m_sourceBundle = std::forward<SourceBundleT>(value); }
    template<typename SourceBundleT = S3Location>
    ApplicationVersionDescription& WithSourceBundle(SourceBundleT&& value) { SetSourceBundle(std::forward<SourceBundleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date of the application version.</p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const { return m_dateCreated; }
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }
    template<typename DateCreatedT = Aws::Utils::DateTime>
    void SetDateCreated(DateCreatedT&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::forward<DateCreatedT>(value); }
    template<typename DateCreatedT = Aws::Utils::DateTime>
    ApplicationVersionDescription& WithDateCreated(DateCreatedT&& value) { SetDateCreated(std::forward<DateCreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last modified date of the application version.</p>
     */
    inline const Aws::Utils::DateTime& GetDateUpdated() const { return m_dateUpdated; }
    inline bool DateUpdatedHasBeenSet() const { return m_dateUpdatedHasBeenSet; }
    template<typename DateUpdatedT = Aws::Utils::DateTime>
    void SetDateUpdated(DateUpdatedT&& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = std::forward<DateUpdatedT>(value); }
    template<typename DateUpdatedT = Aws::Utils::DateTime>
    ApplicationVersionDescription& WithDateUpdated(DateUpdatedT&& value) { SetDateUpdated(std::forward<DateUpdatedT>(value)); return *this;}
    ///@}

    ///@{
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
    inline ApplicationVersionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ApplicationVersionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ApplicationVersionDescription& WithStatus(ApplicationVersionStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationVersionArn;
    bool m_applicationVersionArnHasBeenSet = false;

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_versionLabel;
    bool m_versionLabelHasBeenSet = false;

    SourceBuildInformation m_sourceBuildInformation;
    bool m_sourceBuildInformationHasBeenSet = false;

    Aws::String m_buildArn;
    bool m_buildArnHasBeenSet = false;

    S3Location m_sourceBundle;
    bool m_sourceBundleHasBeenSet = false;

    Aws::Utils::DateTime m_dateCreated{};
    bool m_dateCreatedHasBeenSet = false;

    Aws::Utils::DateTime m_dateUpdated{};
    bool m_dateUpdatedHasBeenSet = false;

    ApplicationVersionStatus m_status{ApplicationVersionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
