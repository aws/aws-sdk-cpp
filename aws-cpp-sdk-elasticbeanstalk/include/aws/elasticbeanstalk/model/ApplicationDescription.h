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
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/ApplicationResourceLifecycleConfig.h>
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
   * <p>Describes the properties of an application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ApplicationDescription">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API ApplicationDescription
  {
  public:
    ApplicationDescription();
    ApplicationDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    ApplicationDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArnHasBeenSet = true; m_applicationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetApplicationArn(const char* value) { m_applicationArnHasBeenSet = true; m_applicationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline ApplicationDescription& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline ApplicationDescription& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline ApplicationDescription& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}


    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline ApplicationDescription& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline ApplicationDescription& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline ApplicationDescription& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>User-defined description of the application.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>User-defined description of the application.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>User-defined description of the application.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>User-defined description of the application.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>User-defined description of the application.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>User-defined description of the application.</p>
     */
    inline ApplicationDescription& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>User-defined description of the application.</p>
     */
    inline ApplicationDescription& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>User-defined description of the application.</p>
     */
    inline ApplicationDescription& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The date when the application was created.</p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const{ return m_dateCreated; }

    /**
     * <p>The date when the application was created.</p>
     */
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }

    /**
     * <p>The date when the application was created.</p>
     */
    inline void SetDateCreated(const Aws::Utils::DateTime& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }

    /**
     * <p>The date when the application was created.</p>
     */
    inline void SetDateCreated(Aws::Utils::DateTime&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }

    /**
     * <p>The date when the application was created.</p>
     */
    inline ApplicationDescription& WithDateCreated(const Aws::Utils::DateTime& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The date when the application was created.</p>
     */
    inline ApplicationDescription& WithDateCreated(Aws::Utils::DateTime&& value) { SetDateCreated(std::move(value)); return *this;}


    /**
     * <p>The date when the application was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetDateUpdated() const{ return m_dateUpdated; }

    /**
     * <p>The date when the application was last modified.</p>
     */
    inline bool DateUpdatedHasBeenSet() const { return m_dateUpdatedHasBeenSet; }

    /**
     * <p>The date when the application was last modified.</p>
     */
    inline void SetDateUpdated(const Aws::Utils::DateTime& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = value; }

    /**
     * <p>The date when the application was last modified.</p>
     */
    inline void SetDateUpdated(Aws::Utils::DateTime&& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = std::move(value); }

    /**
     * <p>The date when the application was last modified.</p>
     */
    inline ApplicationDescription& WithDateUpdated(const Aws::Utils::DateTime& value) { SetDateUpdated(value); return *this;}

    /**
     * <p>The date when the application was last modified.</p>
     */
    inline ApplicationDescription& WithDateUpdated(Aws::Utils::DateTime&& value) { SetDateUpdated(std::move(value)); return *this;}


    /**
     * <p>The names of the versions for this application.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVersions() const{ return m_versions; }

    /**
     * <p>The names of the versions for this application.</p>
     */
    inline bool VersionsHasBeenSet() const { return m_versionsHasBeenSet; }

    /**
     * <p>The names of the versions for this application.</p>
     */
    inline void SetVersions(const Aws::Vector<Aws::String>& value) { m_versionsHasBeenSet = true; m_versions = value; }

    /**
     * <p>The names of the versions for this application.</p>
     */
    inline void SetVersions(Aws::Vector<Aws::String>&& value) { m_versionsHasBeenSet = true; m_versions = std::move(value); }

    /**
     * <p>The names of the versions for this application.</p>
     */
    inline ApplicationDescription& WithVersions(const Aws::Vector<Aws::String>& value) { SetVersions(value); return *this;}

    /**
     * <p>The names of the versions for this application.</p>
     */
    inline ApplicationDescription& WithVersions(Aws::Vector<Aws::String>&& value) { SetVersions(std::move(value)); return *this;}

    /**
     * <p>The names of the versions for this application.</p>
     */
    inline ApplicationDescription& AddVersions(const Aws::String& value) { m_versionsHasBeenSet = true; m_versions.push_back(value); return *this; }

    /**
     * <p>The names of the versions for this application.</p>
     */
    inline ApplicationDescription& AddVersions(Aws::String&& value) { m_versionsHasBeenSet = true; m_versions.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the versions for this application.</p>
     */
    inline ApplicationDescription& AddVersions(const char* value) { m_versionsHasBeenSet = true; m_versions.push_back(value); return *this; }


    /**
     * <p>The names of the configuration templates associated with this
     * application.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigurationTemplates() const{ return m_configurationTemplates; }

    /**
     * <p>The names of the configuration templates associated with this
     * application.</p>
     */
    inline bool ConfigurationTemplatesHasBeenSet() const { return m_configurationTemplatesHasBeenSet; }

    /**
     * <p>The names of the configuration templates associated with this
     * application.</p>
     */
    inline void SetConfigurationTemplates(const Aws::Vector<Aws::String>& value) { m_configurationTemplatesHasBeenSet = true; m_configurationTemplates = value; }

    /**
     * <p>The names of the configuration templates associated with this
     * application.</p>
     */
    inline void SetConfigurationTemplates(Aws::Vector<Aws::String>&& value) { m_configurationTemplatesHasBeenSet = true; m_configurationTemplates = std::move(value); }

    /**
     * <p>The names of the configuration templates associated with this
     * application.</p>
     */
    inline ApplicationDescription& WithConfigurationTemplates(const Aws::Vector<Aws::String>& value) { SetConfigurationTemplates(value); return *this;}

    /**
     * <p>The names of the configuration templates associated with this
     * application.</p>
     */
    inline ApplicationDescription& WithConfigurationTemplates(Aws::Vector<Aws::String>&& value) { SetConfigurationTemplates(std::move(value)); return *this;}

    /**
     * <p>The names of the configuration templates associated with this
     * application.</p>
     */
    inline ApplicationDescription& AddConfigurationTemplates(const Aws::String& value) { m_configurationTemplatesHasBeenSet = true; m_configurationTemplates.push_back(value); return *this; }

    /**
     * <p>The names of the configuration templates associated with this
     * application.</p>
     */
    inline ApplicationDescription& AddConfigurationTemplates(Aws::String&& value) { m_configurationTemplatesHasBeenSet = true; m_configurationTemplates.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the configuration templates associated with this
     * application.</p>
     */
    inline ApplicationDescription& AddConfigurationTemplates(const char* value) { m_configurationTemplatesHasBeenSet = true; m_configurationTemplates.push_back(value); return *this; }


    /**
     * <p>The lifecycle settings for the application.</p>
     */
    inline const ApplicationResourceLifecycleConfig& GetResourceLifecycleConfig() const{ return m_resourceLifecycleConfig; }

    /**
     * <p>The lifecycle settings for the application.</p>
     */
    inline bool ResourceLifecycleConfigHasBeenSet() const { return m_resourceLifecycleConfigHasBeenSet; }

    /**
     * <p>The lifecycle settings for the application.</p>
     */
    inline void SetResourceLifecycleConfig(const ApplicationResourceLifecycleConfig& value) { m_resourceLifecycleConfigHasBeenSet = true; m_resourceLifecycleConfig = value; }

    /**
     * <p>The lifecycle settings for the application.</p>
     */
    inline void SetResourceLifecycleConfig(ApplicationResourceLifecycleConfig&& value) { m_resourceLifecycleConfigHasBeenSet = true; m_resourceLifecycleConfig = std::move(value); }

    /**
     * <p>The lifecycle settings for the application.</p>
     */
    inline ApplicationDescription& WithResourceLifecycleConfig(const ApplicationResourceLifecycleConfig& value) { SetResourceLifecycleConfig(value); return *this;}

    /**
     * <p>The lifecycle settings for the application.</p>
     */
    inline ApplicationDescription& WithResourceLifecycleConfig(ApplicationResourceLifecycleConfig&& value) { SetResourceLifecycleConfig(std::move(value)); return *this;}

  private:

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet;

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Utils::DateTime m_dateCreated;
    bool m_dateCreatedHasBeenSet;

    Aws::Utils::DateTime m_dateUpdated;
    bool m_dateUpdatedHasBeenSet;

    Aws::Vector<Aws::String> m_versions;
    bool m_versionsHasBeenSet;

    Aws::Vector<Aws::String> m_configurationTemplates;
    bool m_configurationTemplatesHasBeenSet;

    ApplicationResourceLifecycleConfig m_resourceLifecycleConfig;
    bool m_resourceLifecycleConfigHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
