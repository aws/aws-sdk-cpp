/**
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
    AWS_ELASTICBEANSTALK_API PlatformDescription() = default;
    AWS_ELASTICBEANSTALK_API PlatformDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API PlatformDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ARN of the platform version.</p>
     */
    inline const Aws::String& GetPlatformArn() const { return m_platformArn; }
    inline bool PlatformArnHasBeenSet() const { return m_platformArnHasBeenSet; }
    template<typename PlatformArnT = Aws::String>
    void SetPlatformArn(PlatformArnT&& value) { m_platformArnHasBeenSet = true; m_platformArn = std::forward<PlatformArnT>(value); }
    template<typename PlatformArnT = Aws::String>
    PlatformDescription& WithPlatformArn(PlatformArnT&& value) { SetPlatformArn(std::forward<PlatformArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS account ID of the person who created the platform version.</p>
     */
    inline const Aws::String& GetPlatformOwner() const { return m_platformOwner; }
    inline bool PlatformOwnerHasBeenSet() const { return m_platformOwnerHasBeenSet; }
    template<typename PlatformOwnerT = Aws::String>
    void SetPlatformOwner(PlatformOwnerT&& value) { m_platformOwnerHasBeenSet = true; m_platformOwner = std::forward<PlatformOwnerT>(value); }
    template<typename PlatformOwnerT = Aws::String>
    PlatformDescription& WithPlatformOwner(PlatformOwnerT&& value) { SetPlatformOwner(std::forward<PlatformOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the platform version.</p>
     */
    inline const Aws::String& GetPlatformName() const { return m_platformName; }
    inline bool PlatformNameHasBeenSet() const { return m_platformNameHasBeenSet; }
    template<typename PlatformNameT = Aws::String>
    void SetPlatformName(PlatformNameT&& value) { m_platformNameHasBeenSet = true; m_platformName = std::forward<PlatformNameT>(value); }
    template<typename PlatformNameT = Aws::String>
    PlatformDescription& WithPlatformName(PlatformNameT&& value) { SetPlatformName(std::forward<PlatformNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the platform version.</p>
     */
    inline const Aws::String& GetPlatformVersion() const { return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    template<typename PlatformVersionT = Aws::String>
    void SetPlatformVersion(PlatformVersionT&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::forward<PlatformVersionT>(value); }
    template<typename PlatformVersionT = Aws::String>
    PlatformDescription& WithPlatformVersion(PlatformVersionT&& value) { SetPlatformVersion(std::forward<PlatformVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the solution stack used by the platform version.</p>
     */
    inline const Aws::String& GetSolutionStackName() const { return m_solutionStackName; }
    inline bool SolutionStackNameHasBeenSet() const { return m_solutionStackNameHasBeenSet; }
    template<typename SolutionStackNameT = Aws::String>
    void SetSolutionStackName(SolutionStackNameT&& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = std::forward<SolutionStackNameT>(value); }
    template<typename SolutionStackNameT = Aws::String>
    PlatformDescription& WithSolutionStackName(SolutionStackNameT&& value) { SetSolutionStackName(std::forward<SolutionStackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the platform version.</p>
     */
    inline PlatformStatus GetPlatformStatus() const { return m_platformStatus; }
    inline bool PlatformStatusHasBeenSet() const { return m_platformStatusHasBeenSet; }
    inline void SetPlatformStatus(PlatformStatus value) { m_platformStatusHasBeenSet = true; m_platformStatus = value; }
    inline PlatformDescription& WithPlatformStatus(PlatformStatus value) { SetPlatformStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the platform version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const { return m_dateCreated; }
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }
    template<typename DateCreatedT = Aws::Utils::DateTime>
    void SetDateCreated(DateCreatedT&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::forward<DateCreatedT>(value); }
    template<typename DateCreatedT = Aws::Utils::DateTime>
    PlatformDescription& WithDateCreated(DateCreatedT&& value) { SetDateCreated(std::forward<DateCreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the platform version was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetDateUpdated() const { return m_dateUpdated; }
    inline bool DateUpdatedHasBeenSet() const { return m_dateUpdatedHasBeenSet; }
    template<typename DateUpdatedT = Aws::Utils::DateTime>
    void SetDateUpdated(DateUpdatedT&& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = std::forward<DateUpdatedT>(value); }
    template<typename DateUpdatedT = Aws::Utils::DateTime>
    PlatformDescription& WithDateUpdated(DateUpdatedT&& value) { SetDateUpdated(std::forward<DateUpdatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of the platform version.</p>
     */
    inline const Aws::String& GetPlatformCategory() const { return m_platformCategory; }
    inline bool PlatformCategoryHasBeenSet() const { return m_platformCategoryHasBeenSet; }
    template<typename PlatformCategoryT = Aws::String>
    void SetPlatformCategory(PlatformCategoryT&& value) { m_platformCategoryHasBeenSet = true; m_platformCategory = std::forward<PlatformCategoryT>(value); }
    template<typename PlatformCategoryT = Aws::String>
    PlatformDescription& WithPlatformCategory(PlatformCategoryT&& value) { SetPlatformCategory(std::forward<PlatformCategoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the platform version.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PlatformDescription& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the maintainer of the platform version.</p>
     */
    inline const Aws::String& GetMaintainer() const { return m_maintainer; }
    inline bool MaintainerHasBeenSet() const { return m_maintainerHasBeenSet; }
    template<typename MaintainerT = Aws::String>
    void SetMaintainer(MaintainerT&& value) { m_maintainerHasBeenSet = true; m_maintainer = std::forward<MaintainerT>(value); }
    template<typename MaintainerT = Aws::String>
    PlatformDescription& WithMaintainer(MaintainerT&& value) { SetMaintainer(std::forward<MaintainerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system used by the platform version.</p>
     */
    inline const Aws::String& GetOperatingSystemName() const { return m_operatingSystemName; }
    inline bool OperatingSystemNameHasBeenSet() const { return m_operatingSystemNameHasBeenSet; }
    template<typename OperatingSystemNameT = Aws::String>
    void SetOperatingSystemName(OperatingSystemNameT&& value) { m_operatingSystemNameHasBeenSet = true; m_operatingSystemName = std::forward<OperatingSystemNameT>(value); }
    template<typename OperatingSystemNameT = Aws::String>
    PlatformDescription& WithOperatingSystemName(OperatingSystemNameT&& value) { SetOperatingSystemName(std::forward<OperatingSystemNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the operating system used by the platform version.</p>
     */
    inline const Aws::String& GetOperatingSystemVersion() const { return m_operatingSystemVersion; }
    inline bool OperatingSystemVersionHasBeenSet() const { return m_operatingSystemVersionHasBeenSet; }
    template<typename OperatingSystemVersionT = Aws::String>
    void SetOperatingSystemVersion(OperatingSystemVersionT&& value) { m_operatingSystemVersionHasBeenSet = true; m_operatingSystemVersion = std::forward<OperatingSystemVersionT>(value); }
    template<typename OperatingSystemVersionT = Aws::String>
    PlatformDescription& WithOperatingSystemVersion(OperatingSystemVersionT&& value) { SetOperatingSystemVersion(std::forward<OperatingSystemVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The programming languages supported by the platform version.</p>
     */
    inline const Aws::Vector<PlatformProgrammingLanguage>& GetProgrammingLanguages() const { return m_programmingLanguages; }
    inline bool ProgrammingLanguagesHasBeenSet() const { return m_programmingLanguagesHasBeenSet; }
    template<typename ProgrammingLanguagesT = Aws::Vector<PlatformProgrammingLanguage>>
    void SetProgrammingLanguages(ProgrammingLanguagesT&& value) { m_programmingLanguagesHasBeenSet = true; m_programmingLanguages = std::forward<ProgrammingLanguagesT>(value); }
    template<typename ProgrammingLanguagesT = Aws::Vector<PlatformProgrammingLanguage>>
    PlatformDescription& WithProgrammingLanguages(ProgrammingLanguagesT&& value) { SetProgrammingLanguages(std::forward<ProgrammingLanguagesT>(value)); return *this;}
    template<typename ProgrammingLanguagesT = PlatformProgrammingLanguage>
    PlatformDescription& AddProgrammingLanguages(ProgrammingLanguagesT&& value) { m_programmingLanguagesHasBeenSet = true; m_programmingLanguages.emplace_back(std::forward<ProgrammingLanguagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The frameworks supported by the platform version.</p>
     */
    inline const Aws::Vector<PlatformFramework>& GetFrameworks() const { return m_frameworks; }
    inline bool FrameworksHasBeenSet() const { return m_frameworksHasBeenSet; }
    template<typename FrameworksT = Aws::Vector<PlatformFramework>>
    void SetFrameworks(FrameworksT&& value) { m_frameworksHasBeenSet = true; m_frameworks = std::forward<FrameworksT>(value); }
    template<typename FrameworksT = Aws::Vector<PlatformFramework>>
    PlatformDescription& WithFrameworks(FrameworksT&& value) { SetFrameworks(std::forward<FrameworksT>(value)); return *this;}
    template<typename FrameworksT = PlatformFramework>
    PlatformDescription& AddFrameworks(FrameworksT&& value) { m_frameworksHasBeenSet = true; m_frameworks.emplace_back(std::forward<FrameworksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The custom AMIs supported by the platform version.</p>
     */
    inline const Aws::Vector<CustomAmi>& GetCustomAmiList() const { return m_customAmiList; }
    inline bool CustomAmiListHasBeenSet() const { return m_customAmiListHasBeenSet; }
    template<typename CustomAmiListT = Aws::Vector<CustomAmi>>
    void SetCustomAmiList(CustomAmiListT&& value) { m_customAmiListHasBeenSet = true; m_customAmiList = std::forward<CustomAmiListT>(value); }
    template<typename CustomAmiListT = Aws::Vector<CustomAmi>>
    PlatformDescription& WithCustomAmiList(CustomAmiListT&& value) { SetCustomAmiList(std::forward<CustomAmiListT>(value)); return *this;}
    template<typename CustomAmiListT = CustomAmi>
    PlatformDescription& AddCustomAmiList(CustomAmiListT&& value) { m_customAmiListHasBeenSet = true; m_customAmiList.emplace_back(std::forward<CustomAmiListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tiers supported by the platform version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedTierList() const { return m_supportedTierList; }
    inline bool SupportedTierListHasBeenSet() const { return m_supportedTierListHasBeenSet; }
    template<typename SupportedTierListT = Aws::Vector<Aws::String>>
    void SetSupportedTierList(SupportedTierListT&& value) { m_supportedTierListHasBeenSet = true; m_supportedTierList = std::forward<SupportedTierListT>(value); }
    template<typename SupportedTierListT = Aws::Vector<Aws::String>>
    PlatformDescription& WithSupportedTierList(SupportedTierListT&& value) { SetSupportedTierList(std::forward<SupportedTierListT>(value)); return *this;}
    template<typename SupportedTierListT = Aws::String>
    PlatformDescription& AddSupportedTierList(SupportedTierListT&& value) { m_supportedTierListHasBeenSet = true; m_supportedTierList.emplace_back(std::forward<SupportedTierListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The additions supported by the platform version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedAddonList() const { return m_supportedAddonList; }
    inline bool SupportedAddonListHasBeenSet() const { return m_supportedAddonListHasBeenSet; }
    template<typename SupportedAddonListT = Aws::Vector<Aws::String>>
    void SetSupportedAddonList(SupportedAddonListT&& value) { m_supportedAddonListHasBeenSet = true; m_supportedAddonList = std::forward<SupportedAddonListT>(value); }
    template<typename SupportedAddonListT = Aws::Vector<Aws::String>>
    PlatformDescription& WithSupportedAddonList(SupportedAddonListT&& value) { SetSupportedAddonList(std::forward<SupportedAddonListT>(value)); return *this;}
    template<typename SupportedAddonListT = Aws::String>
    PlatformDescription& AddSupportedAddonList(SupportedAddonListT&& value) { m_supportedAddonListHasBeenSet = true; m_supportedAddonList.emplace_back(std::forward<SupportedAddonListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state of the platform version in its lifecycle.</p> <p>Possible values:
     * <code>Recommended</code> | <code>null</code> </p> <p>If a null value is
     * returned, the platform version isn't the recommended one for its branch. Each
     * platform branch has a single recommended platform version, typically the most
     * recent one.</p>
     */
    inline const Aws::String& GetPlatformLifecycleState() const { return m_platformLifecycleState; }
    inline bool PlatformLifecycleStateHasBeenSet() const { return m_platformLifecycleStateHasBeenSet; }
    template<typename PlatformLifecycleStateT = Aws::String>
    void SetPlatformLifecycleState(PlatformLifecycleStateT&& value) { m_platformLifecycleStateHasBeenSet = true; m_platformLifecycleState = std::forward<PlatformLifecycleStateT>(value); }
    template<typename PlatformLifecycleStateT = Aws::String>
    PlatformDescription& WithPlatformLifecycleState(PlatformLifecycleStateT&& value) { SetPlatformLifecycleState(std::forward<PlatformLifecycleStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform branch to which the platform version belongs.</p>
     */
    inline const Aws::String& GetPlatformBranchName() const { return m_platformBranchName; }
    inline bool PlatformBranchNameHasBeenSet() const { return m_platformBranchNameHasBeenSet; }
    template<typename PlatformBranchNameT = Aws::String>
    void SetPlatformBranchName(PlatformBranchNameT&& value) { m_platformBranchNameHasBeenSet = true; m_platformBranchName = std::forward<PlatformBranchNameT>(value); }
    template<typename PlatformBranchNameT = Aws::String>
    PlatformDescription& WithPlatformBranchName(PlatformBranchNameT&& value) { SetPlatformBranchName(std::forward<PlatformBranchNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the platform version's branch in its lifecycle.</p> <p>Possible
     * values: <code>Beta</code> | <code>Supported</code> | <code>Deprecated</code> |
     * <code>Retired</code> </p>
     */
    inline const Aws::String& GetPlatformBranchLifecycleState() const { return m_platformBranchLifecycleState; }
    inline bool PlatformBranchLifecycleStateHasBeenSet() const { return m_platformBranchLifecycleStateHasBeenSet; }
    template<typename PlatformBranchLifecycleStateT = Aws::String>
    void SetPlatformBranchLifecycleState(PlatformBranchLifecycleStateT&& value) { m_platformBranchLifecycleStateHasBeenSet = true; m_platformBranchLifecycleState = std::forward<PlatformBranchLifecycleStateT>(value); }
    template<typename PlatformBranchLifecycleStateT = Aws::String>
    PlatformDescription& WithPlatformBranchLifecycleState(PlatformBranchLifecycleStateT&& value) { SetPlatformBranchLifecycleState(std::forward<PlatformBranchLifecycleStateT>(value)); return *this;}
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

    PlatformStatus m_platformStatus{PlatformStatus::NOT_SET};
    bool m_platformStatusHasBeenSet = false;

    Aws::Utils::DateTime m_dateCreated{};
    bool m_dateCreatedHasBeenSet = false;

    Aws::Utils::DateTime m_dateUpdated{};
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
