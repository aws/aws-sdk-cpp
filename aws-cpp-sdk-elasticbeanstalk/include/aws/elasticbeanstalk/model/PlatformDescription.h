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
#include <aws/elasticbeanstalk/model/PlatformStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/PlatformProgrammingLanguage.h>
#include <aws/elasticbeanstalk/model/PlatformFramework.h>
#include <aws/elasticbeanstalk/model/CustomAmi.h>
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
   * <p>Detailed information about a platform.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/PlatformDescription">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API PlatformDescription
  {
  public:
    PlatformDescription();
    PlatformDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    PlatformDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ARN of the platform.</p>
     */
    inline const Aws::String& GetPlatformArn() const{ return m_platformArn; }

    /**
     * <p>The ARN of the platform.</p>
     */
    inline bool PlatformArnHasBeenSet() const { return m_platformArnHasBeenSet; }

    /**
     * <p>The ARN of the platform.</p>
     */
    inline void SetPlatformArn(const Aws::String& value) { m_platformArnHasBeenSet = true; m_platformArn = value; }

    /**
     * <p>The ARN of the platform.</p>
     */
    inline void SetPlatformArn(Aws::String&& value) { m_platformArnHasBeenSet = true; m_platformArn = std::move(value); }

    /**
     * <p>The ARN of the platform.</p>
     */
    inline void SetPlatformArn(const char* value) { m_platformArnHasBeenSet = true; m_platformArn.assign(value); }

    /**
     * <p>The ARN of the platform.</p>
     */
    inline PlatformDescription& WithPlatformArn(const Aws::String& value) { SetPlatformArn(value); return *this;}

    /**
     * <p>The ARN of the platform.</p>
     */
    inline PlatformDescription& WithPlatformArn(Aws::String&& value) { SetPlatformArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the platform.</p>
     */
    inline PlatformDescription& WithPlatformArn(const char* value) { SetPlatformArn(value); return *this;}


    /**
     * <p>The AWS account ID of the person who created the platform.</p>
     */
    inline const Aws::String& GetPlatformOwner() const{ return m_platformOwner; }

    /**
     * <p>The AWS account ID of the person who created the platform.</p>
     */
    inline bool PlatformOwnerHasBeenSet() const { return m_platformOwnerHasBeenSet; }

    /**
     * <p>The AWS account ID of the person who created the platform.</p>
     */
    inline void SetPlatformOwner(const Aws::String& value) { m_platformOwnerHasBeenSet = true; m_platformOwner = value; }

    /**
     * <p>The AWS account ID of the person who created the platform.</p>
     */
    inline void SetPlatformOwner(Aws::String&& value) { m_platformOwnerHasBeenSet = true; m_platformOwner = std::move(value); }

    /**
     * <p>The AWS account ID of the person who created the platform.</p>
     */
    inline void SetPlatformOwner(const char* value) { m_platformOwnerHasBeenSet = true; m_platformOwner.assign(value); }

    /**
     * <p>The AWS account ID of the person who created the platform.</p>
     */
    inline PlatformDescription& WithPlatformOwner(const Aws::String& value) { SetPlatformOwner(value); return *this;}

    /**
     * <p>The AWS account ID of the person who created the platform.</p>
     */
    inline PlatformDescription& WithPlatformOwner(Aws::String&& value) { SetPlatformOwner(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID of the person who created the platform.</p>
     */
    inline PlatformDescription& WithPlatformOwner(const char* value) { SetPlatformOwner(value); return *this;}


    /**
     * <p>The name of the platform.</p>
     */
    inline const Aws::String& GetPlatformName() const{ return m_platformName; }

    /**
     * <p>The name of the platform.</p>
     */
    inline bool PlatformNameHasBeenSet() const { return m_platformNameHasBeenSet; }

    /**
     * <p>The name of the platform.</p>
     */
    inline void SetPlatformName(const Aws::String& value) { m_platformNameHasBeenSet = true; m_platformName = value; }

    /**
     * <p>The name of the platform.</p>
     */
    inline void SetPlatformName(Aws::String&& value) { m_platformNameHasBeenSet = true; m_platformName = std::move(value); }

    /**
     * <p>The name of the platform.</p>
     */
    inline void SetPlatformName(const char* value) { m_platformNameHasBeenSet = true; m_platformName.assign(value); }

    /**
     * <p>The name of the platform.</p>
     */
    inline PlatformDescription& WithPlatformName(const Aws::String& value) { SetPlatformName(value); return *this;}

    /**
     * <p>The name of the platform.</p>
     */
    inline PlatformDescription& WithPlatformName(Aws::String&& value) { SetPlatformName(std::move(value)); return *this;}

    /**
     * <p>The name of the platform.</p>
     */
    inline PlatformDescription& WithPlatformName(const char* value) { SetPlatformName(value); return *this;}


    /**
     * <p>The version of the platform.</p>
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }

    /**
     * <p>The version of the platform.</p>
     */
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }

    /**
     * <p>The version of the platform.</p>
     */
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }

    /**
     * <p>The version of the platform.</p>
     */
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }

    /**
     * <p>The version of the platform.</p>
     */
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }

    /**
     * <p>The version of the platform.</p>
     */
    inline PlatformDescription& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}

    /**
     * <p>The version of the platform.</p>
     */
    inline PlatformDescription& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the platform.</p>
     */
    inline PlatformDescription& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}


    /**
     * <p>The name of the solution stack used by the platform.</p>
     */
    inline const Aws::String& GetSolutionStackName() const{ return m_solutionStackName; }

    /**
     * <p>The name of the solution stack used by the platform.</p>
     */
    inline bool SolutionStackNameHasBeenSet() const { return m_solutionStackNameHasBeenSet; }

    /**
     * <p>The name of the solution stack used by the platform.</p>
     */
    inline void SetSolutionStackName(const Aws::String& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = value; }

    /**
     * <p>The name of the solution stack used by the platform.</p>
     */
    inline void SetSolutionStackName(Aws::String&& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = std::move(value); }

    /**
     * <p>The name of the solution stack used by the platform.</p>
     */
    inline void SetSolutionStackName(const char* value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName.assign(value); }

    /**
     * <p>The name of the solution stack used by the platform.</p>
     */
    inline PlatformDescription& WithSolutionStackName(const Aws::String& value) { SetSolutionStackName(value); return *this;}

    /**
     * <p>The name of the solution stack used by the platform.</p>
     */
    inline PlatformDescription& WithSolutionStackName(Aws::String&& value) { SetSolutionStackName(std::move(value)); return *this;}

    /**
     * <p>The name of the solution stack used by the platform.</p>
     */
    inline PlatformDescription& WithSolutionStackName(const char* value) { SetSolutionStackName(value); return *this;}


    /**
     * <p>The status of the platform.</p>
     */
    inline const PlatformStatus& GetPlatformStatus() const{ return m_platformStatus; }

    /**
     * <p>The status of the platform.</p>
     */
    inline bool PlatformStatusHasBeenSet() const { return m_platformStatusHasBeenSet; }

    /**
     * <p>The status of the platform.</p>
     */
    inline void SetPlatformStatus(const PlatformStatus& value) { m_platformStatusHasBeenSet = true; m_platformStatus = value; }

    /**
     * <p>The status of the platform.</p>
     */
    inline void SetPlatformStatus(PlatformStatus&& value) { m_platformStatusHasBeenSet = true; m_platformStatus = std::move(value); }

    /**
     * <p>The status of the platform.</p>
     */
    inline PlatformDescription& WithPlatformStatus(const PlatformStatus& value) { SetPlatformStatus(value); return *this;}

    /**
     * <p>The status of the platform.</p>
     */
    inline PlatformDescription& WithPlatformStatus(PlatformStatus&& value) { SetPlatformStatus(std::move(value)); return *this;}


    /**
     * <p>The date when the platform was created.</p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const{ return m_dateCreated; }

    /**
     * <p>The date when the platform was created.</p>
     */
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }

    /**
     * <p>The date when the platform was created.</p>
     */
    inline void SetDateCreated(const Aws::Utils::DateTime& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }

    /**
     * <p>The date when the platform was created.</p>
     */
    inline void SetDateCreated(Aws::Utils::DateTime&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }

    /**
     * <p>The date when the platform was created.</p>
     */
    inline PlatformDescription& WithDateCreated(const Aws::Utils::DateTime& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The date when the platform was created.</p>
     */
    inline PlatformDescription& WithDateCreated(Aws::Utils::DateTime&& value) { SetDateCreated(std::move(value)); return *this;}


    /**
     * <p>The date when the platform was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetDateUpdated() const{ return m_dateUpdated; }

    /**
     * <p>The date when the platform was last updated.</p>
     */
    inline bool DateUpdatedHasBeenSet() const { return m_dateUpdatedHasBeenSet; }

    /**
     * <p>The date when the platform was last updated.</p>
     */
    inline void SetDateUpdated(const Aws::Utils::DateTime& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = value; }

    /**
     * <p>The date when the platform was last updated.</p>
     */
    inline void SetDateUpdated(Aws::Utils::DateTime&& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = std::move(value); }

    /**
     * <p>The date when the platform was last updated.</p>
     */
    inline PlatformDescription& WithDateUpdated(const Aws::Utils::DateTime& value) { SetDateUpdated(value); return *this;}

    /**
     * <p>The date when the platform was last updated.</p>
     */
    inline PlatformDescription& WithDateUpdated(Aws::Utils::DateTime&& value) { SetDateUpdated(std::move(value)); return *this;}


    /**
     * <p>The category of the platform.</p>
     */
    inline const Aws::String& GetPlatformCategory() const{ return m_platformCategory; }

    /**
     * <p>The category of the platform.</p>
     */
    inline bool PlatformCategoryHasBeenSet() const { return m_platformCategoryHasBeenSet; }

    /**
     * <p>The category of the platform.</p>
     */
    inline void SetPlatformCategory(const Aws::String& value) { m_platformCategoryHasBeenSet = true; m_platformCategory = value; }

    /**
     * <p>The category of the platform.</p>
     */
    inline void SetPlatformCategory(Aws::String&& value) { m_platformCategoryHasBeenSet = true; m_platformCategory = std::move(value); }

    /**
     * <p>The category of the platform.</p>
     */
    inline void SetPlatformCategory(const char* value) { m_platformCategoryHasBeenSet = true; m_platformCategory.assign(value); }

    /**
     * <p>The category of the platform.</p>
     */
    inline PlatformDescription& WithPlatformCategory(const Aws::String& value) { SetPlatformCategory(value); return *this;}

    /**
     * <p>The category of the platform.</p>
     */
    inline PlatformDescription& WithPlatformCategory(Aws::String&& value) { SetPlatformCategory(std::move(value)); return *this;}

    /**
     * <p>The category of the platform.</p>
     */
    inline PlatformDescription& WithPlatformCategory(const char* value) { SetPlatformCategory(value); return *this;}


    /**
     * <p>The description of the platform.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the platform.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the platform.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the platform.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the platform.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the platform.</p>
     */
    inline PlatformDescription& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the platform.</p>
     */
    inline PlatformDescription& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the platform.</p>
     */
    inline PlatformDescription& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Information about the maintainer of the platform.</p>
     */
    inline const Aws::String& GetMaintainer() const{ return m_maintainer; }

    /**
     * <p>Information about the maintainer of the platform.</p>
     */
    inline bool MaintainerHasBeenSet() const { return m_maintainerHasBeenSet; }

    /**
     * <p>Information about the maintainer of the platform.</p>
     */
    inline void SetMaintainer(const Aws::String& value) { m_maintainerHasBeenSet = true; m_maintainer = value; }

    /**
     * <p>Information about the maintainer of the platform.</p>
     */
    inline void SetMaintainer(Aws::String&& value) { m_maintainerHasBeenSet = true; m_maintainer = std::move(value); }

    /**
     * <p>Information about the maintainer of the platform.</p>
     */
    inline void SetMaintainer(const char* value) { m_maintainerHasBeenSet = true; m_maintainer.assign(value); }

    /**
     * <p>Information about the maintainer of the platform.</p>
     */
    inline PlatformDescription& WithMaintainer(const Aws::String& value) { SetMaintainer(value); return *this;}

    /**
     * <p>Information about the maintainer of the platform.</p>
     */
    inline PlatformDescription& WithMaintainer(Aws::String&& value) { SetMaintainer(std::move(value)); return *this;}

    /**
     * <p>Information about the maintainer of the platform.</p>
     */
    inline PlatformDescription& WithMaintainer(const char* value) { SetMaintainer(value); return *this;}


    /**
     * <p>The operating system used by the platform.</p>
     */
    inline const Aws::String& GetOperatingSystemName() const{ return m_operatingSystemName; }

    /**
     * <p>The operating system used by the platform.</p>
     */
    inline bool OperatingSystemNameHasBeenSet() const { return m_operatingSystemNameHasBeenSet; }

    /**
     * <p>The operating system used by the platform.</p>
     */
    inline void SetOperatingSystemName(const Aws::String& value) { m_operatingSystemNameHasBeenSet = true; m_operatingSystemName = value; }

    /**
     * <p>The operating system used by the platform.</p>
     */
    inline void SetOperatingSystemName(Aws::String&& value) { m_operatingSystemNameHasBeenSet = true; m_operatingSystemName = std::move(value); }

    /**
     * <p>The operating system used by the platform.</p>
     */
    inline void SetOperatingSystemName(const char* value) { m_operatingSystemNameHasBeenSet = true; m_operatingSystemName.assign(value); }

    /**
     * <p>The operating system used by the platform.</p>
     */
    inline PlatformDescription& WithOperatingSystemName(const Aws::String& value) { SetOperatingSystemName(value); return *this;}

    /**
     * <p>The operating system used by the platform.</p>
     */
    inline PlatformDescription& WithOperatingSystemName(Aws::String&& value) { SetOperatingSystemName(std::move(value)); return *this;}

    /**
     * <p>The operating system used by the platform.</p>
     */
    inline PlatformDescription& WithOperatingSystemName(const char* value) { SetOperatingSystemName(value); return *this;}


    /**
     * <p>The version of the operating system used by the platform.</p>
     */
    inline const Aws::String& GetOperatingSystemVersion() const{ return m_operatingSystemVersion; }

    /**
     * <p>The version of the operating system used by the platform.</p>
     */
    inline bool OperatingSystemVersionHasBeenSet() const { return m_operatingSystemVersionHasBeenSet; }

    /**
     * <p>The version of the operating system used by the platform.</p>
     */
    inline void SetOperatingSystemVersion(const Aws::String& value) { m_operatingSystemVersionHasBeenSet = true; m_operatingSystemVersion = value; }

    /**
     * <p>The version of the operating system used by the platform.</p>
     */
    inline void SetOperatingSystemVersion(Aws::String&& value) { m_operatingSystemVersionHasBeenSet = true; m_operatingSystemVersion = std::move(value); }

    /**
     * <p>The version of the operating system used by the platform.</p>
     */
    inline void SetOperatingSystemVersion(const char* value) { m_operatingSystemVersionHasBeenSet = true; m_operatingSystemVersion.assign(value); }

    /**
     * <p>The version of the operating system used by the platform.</p>
     */
    inline PlatformDescription& WithOperatingSystemVersion(const Aws::String& value) { SetOperatingSystemVersion(value); return *this;}

    /**
     * <p>The version of the operating system used by the platform.</p>
     */
    inline PlatformDescription& WithOperatingSystemVersion(Aws::String&& value) { SetOperatingSystemVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the operating system used by the platform.</p>
     */
    inline PlatformDescription& WithOperatingSystemVersion(const char* value) { SetOperatingSystemVersion(value); return *this;}


    /**
     * <p>The programming languages supported by the platform.</p>
     */
    inline const Aws::Vector<PlatformProgrammingLanguage>& GetProgrammingLanguages() const{ return m_programmingLanguages; }

    /**
     * <p>The programming languages supported by the platform.</p>
     */
    inline bool ProgrammingLanguagesHasBeenSet() const { return m_programmingLanguagesHasBeenSet; }

    /**
     * <p>The programming languages supported by the platform.</p>
     */
    inline void SetProgrammingLanguages(const Aws::Vector<PlatformProgrammingLanguage>& value) { m_programmingLanguagesHasBeenSet = true; m_programmingLanguages = value; }

    /**
     * <p>The programming languages supported by the platform.</p>
     */
    inline void SetProgrammingLanguages(Aws::Vector<PlatformProgrammingLanguage>&& value) { m_programmingLanguagesHasBeenSet = true; m_programmingLanguages = std::move(value); }

    /**
     * <p>The programming languages supported by the platform.</p>
     */
    inline PlatformDescription& WithProgrammingLanguages(const Aws::Vector<PlatformProgrammingLanguage>& value) { SetProgrammingLanguages(value); return *this;}

    /**
     * <p>The programming languages supported by the platform.</p>
     */
    inline PlatformDescription& WithProgrammingLanguages(Aws::Vector<PlatformProgrammingLanguage>&& value) { SetProgrammingLanguages(std::move(value)); return *this;}

    /**
     * <p>The programming languages supported by the platform.</p>
     */
    inline PlatformDescription& AddProgrammingLanguages(const PlatformProgrammingLanguage& value) { m_programmingLanguagesHasBeenSet = true; m_programmingLanguages.push_back(value); return *this; }

    /**
     * <p>The programming languages supported by the platform.</p>
     */
    inline PlatformDescription& AddProgrammingLanguages(PlatformProgrammingLanguage&& value) { m_programmingLanguagesHasBeenSet = true; m_programmingLanguages.push_back(std::move(value)); return *this; }


    /**
     * <p>The frameworks supported by the platform.</p>
     */
    inline const Aws::Vector<PlatformFramework>& GetFrameworks() const{ return m_frameworks; }

    /**
     * <p>The frameworks supported by the platform.</p>
     */
    inline bool FrameworksHasBeenSet() const { return m_frameworksHasBeenSet; }

    /**
     * <p>The frameworks supported by the platform.</p>
     */
    inline void SetFrameworks(const Aws::Vector<PlatformFramework>& value) { m_frameworksHasBeenSet = true; m_frameworks = value; }

    /**
     * <p>The frameworks supported by the platform.</p>
     */
    inline void SetFrameworks(Aws::Vector<PlatformFramework>&& value) { m_frameworksHasBeenSet = true; m_frameworks = std::move(value); }

    /**
     * <p>The frameworks supported by the platform.</p>
     */
    inline PlatformDescription& WithFrameworks(const Aws::Vector<PlatformFramework>& value) { SetFrameworks(value); return *this;}

    /**
     * <p>The frameworks supported by the platform.</p>
     */
    inline PlatformDescription& WithFrameworks(Aws::Vector<PlatformFramework>&& value) { SetFrameworks(std::move(value)); return *this;}

    /**
     * <p>The frameworks supported by the platform.</p>
     */
    inline PlatformDescription& AddFrameworks(const PlatformFramework& value) { m_frameworksHasBeenSet = true; m_frameworks.push_back(value); return *this; }

    /**
     * <p>The frameworks supported by the platform.</p>
     */
    inline PlatformDescription& AddFrameworks(PlatformFramework&& value) { m_frameworksHasBeenSet = true; m_frameworks.push_back(std::move(value)); return *this; }


    /**
     * <p>The custom AMIs supported by the platform.</p>
     */
    inline const Aws::Vector<CustomAmi>& GetCustomAmiList() const{ return m_customAmiList; }

    /**
     * <p>The custom AMIs supported by the platform.</p>
     */
    inline bool CustomAmiListHasBeenSet() const { return m_customAmiListHasBeenSet; }

    /**
     * <p>The custom AMIs supported by the platform.</p>
     */
    inline void SetCustomAmiList(const Aws::Vector<CustomAmi>& value) { m_customAmiListHasBeenSet = true; m_customAmiList = value; }

    /**
     * <p>The custom AMIs supported by the platform.</p>
     */
    inline void SetCustomAmiList(Aws::Vector<CustomAmi>&& value) { m_customAmiListHasBeenSet = true; m_customAmiList = std::move(value); }

    /**
     * <p>The custom AMIs supported by the platform.</p>
     */
    inline PlatformDescription& WithCustomAmiList(const Aws::Vector<CustomAmi>& value) { SetCustomAmiList(value); return *this;}

    /**
     * <p>The custom AMIs supported by the platform.</p>
     */
    inline PlatformDescription& WithCustomAmiList(Aws::Vector<CustomAmi>&& value) { SetCustomAmiList(std::move(value)); return *this;}

    /**
     * <p>The custom AMIs supported by the platform.</p>
     */
    inline PlatformDescription& AddCustomAmiList(const CustomAmi& value) { m_customAmiListHasBeenSet = true; m_customAmiList.push_back(value); return *this; }

    /**
     * <p>The custom AMIs supported by the platform.</p>
     */
    inline PlatformDescription& AddCustomAmiList(CustomAmi&& value) { m_customAmiListHasBeenSet = true; m_customAmiList.push_back(std::move(value)); return *this; }


    /**
     * <p>The tiers supported by the platform.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedTierList() const{ return m_supportedTierList; }

    /**
     * <p>The tiers supported by the platform.</p>
     */
    inline bool SupportedTierListHasBeenSet() const { return m_supportedTierListHasBeenSet; }

    /**
     * <p>The tiers supported by the platform.</p>
     */
    inline void SetSupportedTierList(const Aws::Vector<Aws::String>& value) { m_supportedTierListHasBeenSet = true; m_supportedTierList = value; }

    /**
     * <p>The tiers supported by the platform.</p>
     */
    inline void SetSupportedTierList(Aws::Vector<Aws::String>&& value) { m_supportedTierListHasBeenSet = true; m_supportedTierList = std::move(value); }

    /**
     * <p>The tiers supported by the platform.</p>
     */
    inline PlatformDescription& WithSupportedTierList(const Aws::Vector<Aws::String>& value) { SetSupportedTierList(value); return *this;}

    /**
     * <p>The tiers supported by the platform.</p>
     */
    inline PlatformDescription& WithSupportedTierList(Aws::Vector<Aws::String>&& value) { SetSupportedTierList(std::move(value)); return *this;}

    /**
     * <p>The tiers supported by the platform.</p>
     */
    inline PlatformDescription& AddSupportedTierList(const Aws::String& value) { m_supportedTierListHasBeenSet = true; m_supportedTierList.push_back(value); return *this; }

    /**
     * <p>The tiers supported by the platform.</p>
     */
    inline PlatformDescription& AddSupportedTierList(Aws::String&& value) { m_supportedTierListHasBeenSet = true; m_supportedTierList.push_back(std::move(value)); return *this; }

    /**
     * <p>The tiers supported by the platform.</p>
     */
    inline PlatformDescription& AddSupportedTierList(const char* value) { m_supportedTierListHasBeenSet = true; m_supportedTierList.push_back(value); return *this; }


    /**
     * <p>The additions supported by the platform.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedAddonList() const{ return m_supportedAddonList; }

    /**
     * <p>The additions supported by the platform.</p>
     */
    inline bool SupportedAddonListHasBeenSet() const { return m_supportedAddonListHasBeenSet; }

    /**
     * <p>The additions supported by the platform.</p>
     */
    inline void SetSupportedAddonList(const Aws::Vector<Aws::String>& value) { m_supportedAddonListHasBeenSet = true; m_supportedAddonList = value; }

    /**
     * <p>The additions supported by the platform.</p>
     */
    inline void SetSupportedAddonList(Aws::Vector<Aws::String>&& value) { m_supportedAddonListHasBeenSet = true; m_supportedAddonList = std::move(value); }

    /**
     * <p>The additions supported by the platform.</p>
     */
    inline PlatformDescription& WithSupportedAddonList(const Aws::Vector<Aws::String>& value) { SetSupportedAddonList(value); return *this;}

    /**
     * <p>The additions supported by the platform.</p>
     */
    inline PlatformDescription& WithSupportedAddonList(Aws::Vector<Aws::String>&& value) { SetSupportedAddonList(std::move(value)); return *this;}

    /**
     * <p>The additions supported by the platform.</p>
     */
    inline PlatformDescription& AddSupportedAddonList(const Aws::String& value) { m_supportedAddonListHasBeenSet = true; m_supportedAddonList.push_back(value); return *this; }

    /**
     * <p>The additions supported by the platform.</p>
     */
    inline PlatformDescription& AddSupportedAddonList(Aws::String&& value) { m_supportedAddonListHasBeenSet = true; m_supportedAddonList.push_back(std::move(value)); return *this; }

    /**
     * <p>The additions supported by the platform.</p>
     */
    inline PlatformDescription& AddSupportedAddonList(const char* value) { m_supportedAddonListHasBeenSet = true; m_supportedAddonList.push_back(value); return *this; }

  private:

    Aws::String m_platformArn;
    bool m_platformArnHasBeenSet;

    Aws::String m_platformOwner;
    bool m_platformOwnerHasBeenSet;

    Aws::String m_platformName;
    bool m_platformNameHasBeenSet;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet;

    Aws::String m_solutionStackName;
    bool m_solutionStackNameHasBeenSet;

    PlatformStatus m_platformStatus;
    bool m_platformStatusHasBeenSet;

    Aws::Utils::DateTime m_dateCreated;
    bool m_dateCreatedHasBeenSet;

    Aws::Utils::DateTime m_dateUpdated;
    bool m_dateUpdatedHasBeenSet;

    Aws::String m_platformCategory;
    bool m_platformCategoryHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_maintainer;
    bool m_maintainerHasBeenSet;

    Aws::String m_operatingSystemName;
    bool m_operatingSystemNameHasBeenSet;

    Aws::String m_operatingSystemVersion;
    bool m_operatingSystemVersionHasBeenSet;

    Aws::Vector<PlatformProgrammingLanguage> m_programmingLanguages;
    bool m_programmingLanguagesHasBeenSet;

    Aws::Vector<PlatformFramework> m_frameworks;
    bool m_frameworksHasBeenSet;

    Aws::Vector<CustomAmi> m_customAmiList;
    bool m_customAmiListHasBeenSet;

    Aws::Vector<Aws::String> m_supportedTierList;
    bool m_supportedTierListHasBeenSet;

    Aws::Vector<Aws::String> m_supportedAddonList;
    bool m_supportedAddonListHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
