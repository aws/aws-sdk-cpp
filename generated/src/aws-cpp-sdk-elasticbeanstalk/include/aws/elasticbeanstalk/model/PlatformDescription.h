﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Detailed information about a platform version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/PlatformDescription">AWS
   * API Reference</a></p>
   */
  class PlatformDescription
  {
  public:
    AWS_ELASTICBEANSTALK_API PlatformDescription();
    AWS_ELASTICBEANSTALK_API PlatformDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API PlatformDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ARN of the platform version.</p>
     */
    inline const Aws::String& GetPlatformArn() const{ return m_platformArn; }
    inline bool PlatformArnHasBeenSet() const { return m_platformArnHasBeenSet; }
    inline void SetPlatformArn(const Aws::String& value) { m_platformArnHasBeenSet = true; m_platformArn = value; }
    inline void SetPlatformArn(Aws::String&& value) { m_platformArnHasBeenSet = true; m_platformArn = std::move(value); }
    inline void SetPlatformArn(const char* value) { m_platformArnHasBeenSet = true; m_platformArn.assign(value); }
    inline PlatformDescription& WithPlatformArn(const Aws::String& value) { SetPlatformArn(value); return *this;}
    inline PlatformDescription& WithPlatformArn(Aws::String&& value) { SetPlatformArn(std::move(value)); return *this;}
    inline PlatformDescription& WithPlatformArn(const char* value) { SetPlatformArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS account ID of the person who created the platform version.</p>
     */
    inline const Aws::String& GetPlatformOwner() const{ return m_platformOwner; }
    inline bool PlatformOwnerHasBeenSet() const { return m_platformOwnerHasBeenSet; }
    inline void SetPlatformOwner(const Aws::String& value) { m_platformOwnerHasBeenSet = true; m_platformOwner = value; }
    inline void SetPlatformOwner(Aws::String&& value) { m_platformOwnerHasBeenSet = true; m_platformOwner = std::move(value); }
    inline void SetPlatformOwner(const char* value) { m_platformOwnerHasBeenSet = true; m_platformOwner.assign(value); }
    inline PlatformDescription& WithPlatformOwner(const Aws::String& value) { SetPlatformOwner(value); return *this;}
    inline PlatformDescription& WithPlatformOwner(Aws::String&& value) { SetPlatformOwner(std::move(value)); return *this;}
    inline PlatformDescription& WithPlatformOwner(const char* value) { SetPlatformOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the platform version.</p>
     */
    inline const Aws::String& GetPlatformName() const{ return m_platformName; }
    inline bool PlatformNameHasBeenSet() const { return m_platformNameHasBeenSet; }
    inline void SetPlatformName(const Aws::String& value) { m_platformNameHasBeenSet = true; m_platformName = value; }
    inline void SetPlatformName(Aws::String&& value) { m_platformNameHasBeenSet = true; m_platformName = std::move(value); }
    inline void SetPlatformName(const char* value) { m_platformNameHasBeenSet = true; m_platformName.assign(value); }
    inline PlatformDescription& WithPlatformName(const Aws::String& value) { SetPlatformName(value); return *this;}
    inline PlatformDescription& WithPlatformName(Aws::String&& value) { SetPlatformName(std::move(value)); return *this;}
    inline PlatformDescription& WithPlatformName(const char* value) { SetPlatformName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the platform version.</p>
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }
    inline PlatformDescription& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}
    inline PlatformDescription& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}
    inline PlatformDescription& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the solution stack used by the platform version.</p>
     */
    inline const Aws::String& GetSolutionStackName() const{ return m_solutionStackName; }
    inline bool SolutionStackNameHasBeenSet() const { return m_solutionStackNameHasBeenSet; }
    inline void SetSolutionStackName(const Aws::String& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = value; }
    inline void SetSolutionStackName(Aws::String&& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = std::move(value); }
    inline void SetSolutionStackName(const char* value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName.assign(value); }
    inline PlatformDescription& WithSolutionStackName(const Aws::String& value) { SetSolutionStackName(value); return *this;}
    inline PlatformDescription& WithSolutionStackName(Aws::String&& value) { SetSolutionStackName(std::move(value)); return *this;}
    inline PlatformDescription& WithSolutionStackName(const char* value) { SetSolutionStackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the platform version.</p>
     */
    inline const PlatformStatus& GetPlatformStatus() const{ return m_platformStatus; }
    inline bool PlatformStatusHasBeenSet() const { return m_platformStatusHasBeenSet; }
    inline void SetPlatformStatus(const PlatformStatus& value) { m_platformStatusHasBeenSet = true; m_platformStatus = value; }
    inline void SetPlatformStatus(PlatformStatus&& value) { m_platformStatusHasBeenSet = true; m_platformStatus = std::move(value); }
    inline PlatformDescription& WithPlatformStatus(const PlatformStatus& value) { SetPlatformStatus(value); return *this;}
    inline PlatformDescription& WithPlatformStatus(PlatformStatus&& value) { SetPlatformStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the platform version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const{ return m_dateCreated; }
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }
    inline void SetDateCreated(const Aws::Utils::DateTime& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }
    inline void SetDateCreated(Aws::Utils::DateTime&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }
    inline PlatformDescription& WithDateCreated(const Aws::Utils::DateTime& value) { SetDateCreated(value); return *this;}
    inline PlatformDescription& WithDateCreated(Aws::Utils::DateTime&& value) { SetDateCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the platform version was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetDateUpdated() const{ return m_dateUpdated; }
    inline bool DateUpdatedHasBeenSet() const { return m_dateUpdatedHasBeenSet; }
    inline void SetDateUpdated(const Aws::Utils::DateTime& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = value; }
    inline void SetDateUpdated(Aws::Utils::DateTime&& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = std::move(value); }
    inline PlatformDescription& WithDateUpdated(const Aws::Utils::DateTime& value) { SetDateUpdated(value); return *this;}
    inline PlatformDescription& WithDateUpdated(Aws::Utils::DateTime&& value) { SetDateUpdated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of the platform version.</p>
     */
    inline const Aws::String& GetPlatformCategory() const{ return m_platformCategory; }
    inline bool PlatformCategoryHasBeenSet() const { return m_platformCategoryHasBeenSet; }
    inline void SetPlatformCategory(const Aws::String& value) { m_platformCategoryHasBeenSet = true; m_platformCategory = value; }
    inline void SetPlatformCategory(Aws::String&& value) { m_platformCategoryHasBeenSet = true; m_platformCategory = std::move(value); }
    inline void SetPlatformCategory(const char* value) { m_platformCategoryHasBeenSet = true; m_platformCategory.assign(value); }
    inline PlatformDescription& WithPlatformCategory(const Aws::String& value) { SetPlatformCategory(value); return *this;}
    inline PlatformDescription& WithPlatformCategory(Aws::String&& value) { SetPlatformCategory(std::move(value)); return *this;}
    inline PlatformDescription& WithPlatformCategory(const char* value) { SetPlatformCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the platform version.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline PlatformDescription& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline PlatformDescription& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline PlatformDescription& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the maintainer of the platform version.</p>
     */
    inline const Aws::String& GetMaintainer() const{ return m_maintainer; }
    inline bool MaintainerHasBeenSet() const { return m_maintainerHasBeenSet; }
    inline void SetMaintainer(const Aws::String& value) { m_maintainerHasBeenSet = true; m_maintainer = value; }
    inline void SetMaintainer(Aws::String&& value) { m_maintainerHasBeenSet = true; m_maintainer = std::move(value); }
    inline void SetMaintainer(const char* value) { m_maintainerHasBeenSet = true; m_maintainer.assign(value); }
    inline PlatformDescription& WithMaintainer(const Aws::String& value) { SetMaintainer(value); return *this;}
    inline PlatformDescription& WithMaintainer(Aws::String&& value) { SetMaintainer(std::move(value)); return *this;}
    inline PlatformDescription& WithMaintainer(const char* value) { SetMaintainer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system used by the platform version.</p>
     */
    inline const Aws::String& GetOperatingSystemName() const{ return m_operatingSystemName; }
    inline bool OperatingSystemNameHasBeenSet() const { return m_operatingSystemNameHasBeenSet; }
    inline void SetOperatingSystemName(const Aws::String& value) { m_operatingSystemNameHasBeenSet = true; m_operatingSystemName = value; }
    inline void SetOperatingSystemName(Aws::String&& value) { m_operatingSystemNameHasBeenSet = true; m_operatingSystemName = std::move(value); }
    inline void SetOperatingSystemName(const char* value) { m_operatingSystemNameHasBeenSet = true; m_operatingSystemName.assign(value); }
    inline PlatformDescription& WithOperatingSystemName(const Aws::String& value) { SetOperatingSystemName(value); return *this;}
    inline PlatformDescription& WithOperatingSystemName(Aws::String&& value) { SetOperatingSystemName(std::move(value)); return *this;}
    inline PlatformDescription& WithOperatingSystemName(const char* value) { SetOperatingSystemName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the operating system used by the platform version.</p>
     */
    inline const Aws::String& GetOperatingSystemVersion() const{ return m_operatingSystemVersion; }
    inline bool OperatingSystemVersionHasBeenSet() const { return m_operatingSystemVersionHasBeenSet; }
    inline void SetOperatingSystemVersion(const Aws::String& value) { m_operatingSystemVersionHasBeenSet = true; m_operatingSystemVersion = value; }
    inline void SetOperatingSystemVersion(Aws::String&& value) { m_operatingSystemVersionHasBeenSet = true; m_operatingSystemVersion = std::move(value); }
    inline void SetOperatingSystemVersion(const char* value) { m_operatingSystemVersionHasBeenSet = true; m_operatingSystemVersion.assign(value); }
    inline PlatformDescription& WithOperatingSystemVersion(const Aws::String& value) { SetOperatingSystemVersion(value); return *this;}
    inline PlatformDescription& WithOperatingSystemVersion(Aws::String&& value) { SetOperatingSystemVersion(std::move(value)); return *this;}
    inline PlatformDescription& WithOperatingSystemVersion(const char* value) { SetOperatingSystemVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The programming languages supported by the platform version.</p>
     */
    inline const Aws::Vector<PlatformProgrammingLanguage>& GetProgrammingLanguages() const{ return m_programmingLanguages; }
    inline bool ProgrammingLanguagesHasBeenSet() const { return m_programmingLanguagesHasBeenSet; }
    inline void SetProgrammingLanguages(const Aws::Vector<PlatformProgrammingLanguage>& value) { m_programmingLanguagesHasBeenSet = true; m_programmingLanguages = value; }
    inline void SetProgrammingLanguages(Aws::Vector<PlatformProgrammingLanguage>&& value) { m_programmingLanguagesHasBeenSet = true; m_programmingLanguages = std::move(value); }
    inline PlatformDescription& WithProgrammingLanguages(const Aws::Vector<PlatformProgrammingLanguage>& value) { SetProgrammingLanguages(value); return *this;}
    inline PlatformDescription& WithProgrammingLanguages(Aws::Vector<PlatformProgrammingLanguage>&& value) { SetProgrammingLanguages(std::move(value)); return *this;}
    inline PlatformDescription& AddProgrammingLanguages(const PlatformProgrammingLanguage& value) { m_programmingLanguagesHasBeenSet = true; m_programmingLanguages.push_back(value); return *this; }
    inline PlatformDescription& AddProgrammingLanguages(PlatformProgrammingLanguage&& value) { m_programmingLanguagesHasBeenSet = true; m_programmingLanguages.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The frameworks supported by the platform version.</p>
     */
    inline const Aws::Vector<PlatformFramework>& GetFrameworks() const{ return m_frameworks; }
    inline bool FrameworksHasBeenSet() const { return m_frameworksHasBeenSet; }
    inline void SetFrameworks(const Aws::Vector<PlatformFramework>& value) { m_frameworksHasBeenSet = true; m_frameworks = value; }
    inline void SetFrameworks(Aws::Vector<PlatformFramework>&& value) { m_frameworksHasBeenSet = true; m_frameworks = std::move(value); }
    inline PlatformDescription& WithFrameworks(const Aws::Vector<PlatformFramework>& value) { SetFrameworks(value); return *this;}
    inline PlatformDescription& WithFrameworks(Aws::Vector<PlatformFramework>&& value) { SetFrameworks(std::move(value)); return *this;}
    inline PlatformDescription& AddFrameworks(const PlatformFramework& value) { m_frameworksHasBeenSet = true; m_frameworks.push_back(value); return *this; }
    inline PlatformDescription& AddFrameworks(PlatformFramework&& value) { m_frameworksHasBeenSet = true; m_frameworks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The custom AMIs supported by the platform version.</p>
     */
    inline const Aws::Vector<CustomAmi>& GetCustomAmiList() const{ return m_customAmiList; }
    inline bool CustomAmiListHasBeenSet() const { return m_customAmiListHasBeenSet; }
    inline void SetCustomAmiList(const Aws::Vector<CustomAmi>& value) { m_customAmiListHasBeenSet = true; m_customAmiList = value; }
    inline void SetCustomAmiList(Aws::Vector<CustomAmi>&& value) { m_customAmiListHasBeenSet = true; m_customAmiList = std::move(value); }
    inline PlatformDescription& WithCustomAmiList(const Aws::Vector<CustomAmi>& value) { SetCustomAmiList(value); return *this;}
    inline PlatformDescription& WithCustomAmiList(Aws::Vector<CustomAmi>&& value) { SetCustomAmiList(std::move(value)); return *this;}
    inline PlatformDescription& AddCustomAmiList(const CustomAmi& value) { m_customAmiListHasBeenSet = true; m_customAmiList.push_back(value); return *this; }
    inline PlatformDescription& AddCustomAmiList(CustomAmi&& value) { m_customAmiListHasBeenSet = true; m_customAmiList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tiers supported by the platform version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedTierList() const{ return m_supportedTierList; }
    inline bool SupportedTierListHasBeenSet() const { return m_supportedTierListHasBeenSet; }
    inline void SetSupportedTierList(const Aws::Vector<Aws::String>& value) { m_supportedTierListHasBeenSet = true; m_supportedTierList = value; }
    inline void SetSupportedTierList(Aws::Vector<Aws::String>&& value) { m_supportedTierListHasBeenSet = true; m_supportedTierList = std::move(value); }
    inline PlatformDescription& WithSupportedTierList(const Aws::Vector<Aws::String>& value) { SetSupportedTierList(value); return *this;}
    inline PlatformDescription& WithSupportedTierList(Aws::Vector<Aws::String>&& value) { SetSupportedTierList(std::move(value)); return *this;}
    inline PlatformDescription& AddSupportedTierList(const Aws::String& value) { m_supportedTierListHasBeenSet = true; m_supportedTierList.push_back(value); return *this; }
    inline PlatformDescription& AddSupportedTierList(Aws::String&& value) { m_supportedTierListHasBeenSet = true; m_supportedTierList.push_back(std::move(value)); return *this; }
    inline PlatformDescription& AddSupportedTierList(const char* value) { m_supportedTierListHasBeenSet = true; m_supportedTierList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The additions supported by the platform version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedAddonList() const{ return m_supportedAddonList; }
    inline bool SupportedAddonListHasBeenSet() const { return m_supportedAddonListHasBeenSet; }
    inline void SetSupportedAddonList(const Aws::Vector<Aws::String>& value) { m_supportedAddonListHasBeenSet = true; m_supportedAddonList = value; }
    inline void SetSupportedAddonList(Aws::Vector<Aws::String>&& value) { m_supportedAddonListHasBeenSet = true; m_supportedAddonList = std::move(value); }
    inline PlatformDescription& WithSupportedAddonList(const Aws::Vector<Aws::String>& value) { SetSupportedAddonList(value); return *this;}
    inline PlatformDescription& WithSupportedAddonList(Aws::Vector<Aws::String>&& value) { SetSupportedAddonList(std::move(value)); return *this;}
    inline PlatformDescription& AddSupportedAddonList(const Aws::String& value) { m_supportedAddonListHasBeenSet = true; m_supportedAddonList.push_back(value); return *this; }
    inline PlatformDescription& AddSupportedAddonList(Aws::String&& value) { m_supportedAddonListHasBeenSet = true; m_supportedAddonList.push_back(std::move(value)); return *this; }
    inline PlatformDescription& AddSupportedAddonList(const char* value) { m_supportedAddonListHasBeenSet = true; m_supportedAddonList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state of the platform version in its lifecycle.</p> <p>Possible values:
     * <code>Recommended</code> | <code>null</code> </p> <p>If a null value is
     * returned, the platform version isn't the recommended one for its branch. Each
     * platform branch has a single recommended platform version, typically the most
     * recent one.</p>
     */
    inline const Aws::String& GetPlatformLifecycleState() const{ return m_platformLifecycleState; }
    inline bool PlatformLifecycleStateHasBeenSet() const { return m_platformLifecycleStateHasBeenSet; }
    inline void SetPlatformLifecycleState(const Aws::String& value) { m_platformLifecycleStateHasBeenSet = true; m_platformLifecycleState = value; }
    inline void SetPlatformLifecycleState(Aws::String&& value) { m_platformLifecycleStateHasBeenSet = true; m_platformLifecycleState = std::move(value); }
    inline void SetPlatformLifecycleState(const char* value) { m_platformLifecycleStateHasBeenSet = true; m_platformLifecycleState.assign(value); }
    inline PlatformDescription& WithPlatformLifecycleState(const Aws::String& value) { SetPlatformLifecycleState(value); return *this;}
    inline PlatformDescription& WithPlatformLifecycleState(Aws::String&& value) { SetPlatformLifecycleState(std::move(value)); return *this;}
    inline PlatformDescription& WithPlatformLifecycleState(const char* value) { SetPlatformLifecycleState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform branch to which the platform version belongs.</p>
     */
    inline const Aws::String& GetPlatformBranchName() const{ return m_platformBranchName; }
    inline bool PlatformBranchNameHasBeenSet() const { return m_platformBranchNameHasBeenSet; }
    inline void SetPlatformBranchName(const Aws::String& value) { m_platformBranchNameHasBeenSet = true; m_platformBranchName = value; }
    inline void SetPlatformBranchName(Aws::String&& value) { m_platformBranchNameHasBeenSet = true; m_platformBranchName = std::move(value); }
    inline void SetPlatformBranchName(const char* value) { m_platformBranchNameHasBeenSet = true; m_platformBranchName.assign(value); }
    inline PlatformDescription& WithPlatformBranchName(const Aws::String& value) { SetPlatformBranchName(value); return *this;}
    inline PlatformDescription& WithPlatformBranchName(Aws::String&& value) { SetPlatformBranchName(std::move(value)); return *this;}
    inline PlatformDescription& WithPlatformBranchName(const char* value) { SetPlatformBranchName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the platform version's branch in its lifecycle.</p> <p>Possible
     * values: <code>Beta</code> | <code>Supported</code> | <code>Deprecated</code> |
     * <code>Retired</code> </p>
     */
    inline const Aws::String& GetPlatformBranchLifecycleState() const{ return m_platformBranchLifecycleState; }
    inline bool PlatformBranchLifecycleStateHasBeenSet() const { return m_platformBranchLifecycleStateHasBeenSet; }
    inline void SetPlatformBranchLifecycleState(const Aws::String& value) { m_platformBranchLifecycleStateHasBeenSet = true; m_platformBranchLifecycleState = value; }
    inline void SetPlatformBranchLifecycleState(Aws::String&& value) { m_platformBranchLifecycleStateHasBeenSet = true; m_platformBranchLifecycleState = std::move(value); }
    inline void SetPlatformBranchLifecycleState(const char* value) { m_platformBranchLifecycleStateHasBeenSet = true; m_platformBranchLifecycleState.assign(value); }
    inline PlatformDescription& WithPlatformBranchLifecycleState(const Aws::String& value) { SetPlatformBranchLifecycleState(value); return *this;}
    inline PlatformDescription& WithPlatformBranchLifecycleState(Aws::String&& value) { SetPlatformBranchLifecycleState(std::move(value)); return *this;}
    inline PlatformDescription& WithPlatformBranchLifecycleState(const char* value) { SetPlatformBranchLifecycleState(value); return *this;}
    ///@}
  private:

    Aws::String m_platformArn;
    bool m_platformArnHasBeenSet = false;

    Aws::String m_platformOwner;
    bool m_platformOwnerHasBeenSet = false;

    Aws::String m_platformName;
    bool m_platformNameHasBeenSet = false;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet = false;

    Aws::String m_solutionStackName;
    bool m_solutionStackNameHasBeenSet = false;

    PlatformStatus m_platformStatus;
    bool m_platformStatusHasBeenSet = false;

    Aws::Utils::DateTime m_dateCreated;
    bool m_dateCreatedHasBeenSet = false;

    Aws::Utils::DateTime m_dateUpdated;
    bool m_dateUpdatedHasBeenSet = false;

    Aws::String m_platformCategory;
    bool m_platformCategoryHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_maintainer;
    bool m_maintainerHasBeenSet = false;

    Aws::String m_operatingSystemName;
    bool m_operatingSystemNameHasBeenSet = false;

    Aws::String m_operatingSystemVersion;
    bool m_operatingSystemVersionHasBeenSet = false;

    Aws::Vector<PlatformProgrammingLanguage> m_programmingLanguages;
    bool m_programmingLanguagesHasBeenSet = false;

    Aws::Vector<PlatformFramework> m_frameworks;
    bool m_frameworksHasBeenSet = false;

    Aws::Vector<CustomAmi> m_customAmiList;
    bool m_customAmiListHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedTierList;
    bool m_supportedTierListHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedAddonList;
    bool m_supportedAddonListHasBeenSet = false;

    Aws::String m_platformLifecycleState;
    bool m_platformLifecycleStateHasBeenSet = false;

    Aws::String m_platformBranchName;
    bool m_platformBranchNameHasBeenSet = false;

    Aws::String m_platformBranchLifecycleState;
    bool m_platformBranchLifecycleStateHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
