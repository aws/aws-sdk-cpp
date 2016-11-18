/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>Describes the properties of an application version.</p>
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
     * <p>The name of the application associated with this release.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application associated with this release.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application associated with this release.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application associated with this release.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the application associated with this release.</p>
     */
    inline ApplicationVersionDescription& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application associated with this release.</p>
     */
    inline ApplicationVersionDescription& WithApplicationName(Aws::String&& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application associated with this release.</p>
     */
    inline ApplicationVersionDescription& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /**
     * <p>The description of this application version.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of this application version.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of this application version.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of this application version.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of this application version.</p>
     */
    inline ApplicationVersionDescription& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of this application version.</p>
     */
    inline ApplicationVersionDescription& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of this application version.</p>
     */
    inline ApplicationVersionDescription& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>A label uniquely identifying the version for the associated application.</p>
     */
    inline const Aws::String& GetVersionLabel() const{ return m_versionLabel; }

    /**
     * <p>A label uniquely identifying the version for the associated application.</p>
     */
    inline void SetVersionLabel(const Aws::String& value) { m_versionLabelHasBeenSet = true; m_versionLabel = value; }

    /**
     * <p>A label uniquely identifying the version for the associated application.</p>
     */
    inline void SetVersionLabel(Aws::String&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = value; }

    /**
     * <p>A label uniquely identifying the version for the associated application.</p>
     */
    inline void SetVersionLabel(const char* value) { m_versionLabelHasBeenSet = true; m_versionLabel.assign(value); }

    /**
     * <p>A label uniquely identifying the version for the associated application.</p>
     */
    inline ApplicationVersionDescription& WithVersionLabel(const Aws::String& value) { SetVersionLabel(value); return *this;}

    /**
     * <p>A label uniquely identifying the version for the associated application.</p>
     */
    inline ApplicationVersionDescription& WithVersionLabel(Aws::String&& value) { SetVersionLabel(value); return *this;}

    /**
     * <p>A label uniquely identifying the version for the associated application.</p>
     */
    inline ApplicationVersionDescription& WithVersionLabel(const char* value) { SetVersionLabel(value); return *this;}

    
    inline const SourceBuildInformation& GetSourceBuildInformation() const{ return m_sourceBuildInformation; }

    
    inline void SetSourceBuildInformation(const SourceBuildInformation& value) { m_sourceBuildInformationHasBeenSet = true; m_sourceBuildInformation = value; }

    
    inline void SetSourceBuildInformation(SourceBuildInformation&& value) { m_sourceBuildInformationHasBeenSet = true; m_sourceBuildInformation = value; }

    
    inline ApplicationVersionDescription& WithSourceBuildInformation(const SourceBuildInformation& value) { SetSourceBuildInformation(value); return *this;}

    
    inline ApplicationVersionDescription& WithSourceBuildInformation(SourceBuildInformation&& value) { SetSourceBuildInformation(value); return *this;}

    /**
     * <p>The location where the source bundle is located for this version.</p>
     */
    inline const S3Location& GetSourceBundle() const{ return m_sourceBundle; }

    /**
     * <p>The location where the source bundle is located for this version.</p>
     */
    inline void SetSourceBundle(const S3Location& value) { m_sourceBundleHasBeenSet = true; m_sourceBundle = value; }

    /**
     * <p>The location where the source bundle is located for this version.</p>
     */
    inline void SetSourceBundle(S3Location&& value) { m_sourceBundleHasBeenSet = true; m_sourceBundle = value; }

    /**
     * <p>The location where the source bundle is located for this version.</p>
     */
    inline ApplicationVersionDescription& WithSourceBundle(const S3Location& value) { SetSourceBundle(value); return *this;}

    /**
     * <p>The location where the source bundle is located for this version.</p>
     */
    inline ApplicationVersionDescription& WithSourceBundle(S3Location&& value) { SetSourceBundle(value); return *this;}

    /**
     * <p>The creation date of the application version.</p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const{ return m_dateCreated; }

    /**
     * <p>The creation date of the application version.</p>
     */
    inline void SetDateCreated(const Aws::Utils::DateTime& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }

    /**
     * <p>The creation date of the application version.</p>
     */
    inline void SetDateCreated(Aws::Utils::DateTime&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }

    /**
     * <p>The creation date of the application version.</p>
     */
    inline ApplicationVersionDescription& WithDateCreated(const Aws::Utils::DateTime& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The creation date of the application version.</p>
     */
    inline ApplicationVersionDescription& WithDateCreated(Aws::Utils::DateTime&& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The last modified date of the application version.</p>
     */
    inline const Aws::Utils::DateTime& GetDateUpdated() const{ return m_dateUpdated; }

    /**
     * <p>The last modified date of the application version.</p>
     */
    inline void SetDateUpdated(const Aws::Utils::DateTime& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = value; }

    /**
     * <p>The last modified date of the application version.</p>
     */
    inline void SetDateUpdated(Aws::Utils::DateTime&& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = value; }

    /**
     * <p>The last modified date of the application version.</p>
     */
    inline ApplicationVersionDescription& WithDateUpdated(const Aws::Utils::DateTime& value) { SetDateUpdated(value); return *this;}

    /**
     * <p>The last modified date of the application version.</p>
     */
    inline ApplicationVersionDescription& WithDateUpdated(Aws::Utils::DateTime&& value) { SetDateUpdated(value); return *this;}

    /**
     * <p>The processing status of the application version.</p>
     */
    inline const ApplicationVersionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The processing status of the application version.</p>
     */
    inline void SetStatus(const ApplicationVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The processing status of the application version.</p>
     */
    inline void SetStatus(ApplicationVersionStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The processing status of the application version.</p>
     */
    inline ApplicationVersionDescription& WithStatus(const ApplicationVersionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The processing status of the application version.</p>
     */
    inline ApplicationVersionDescription& WithStatus(ApplicationVersionStatus&& value) { SetStatus(value); return *this;}

  private:
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_versionLabel;
    bool m_versionLabelHasBeenSet;
    SourceBuildInformation m_sourceBuildInformation;
    bool m_sourceBuildInformationHasBeenSet;
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
