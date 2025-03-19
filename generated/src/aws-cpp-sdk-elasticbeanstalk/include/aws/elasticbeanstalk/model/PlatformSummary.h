/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/PlatformStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Summary information about a platform version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/PlatformSummary">AWS
   * API Reference</a></p>
   */
  class PlatformSummary
  {
  public:
    AWS_ELASTICBEANSTALK_API PlatformSummary() = default;
    AWS_ELASTICBEANSTALK_API PlatformSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API PlatformSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    PlatformSummary& WithPlatformArn(PlatformArnT&& value) { SetPlatformArn(std::forward<PlatformArnT>(value)); return *this;}
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
    PlatformSummary& WithPlatformOwner(PlatformOwnerT&& value) { SetPlatformOwner(std::forward<PlatformOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the platform version. You can create an environment from the
     * platform version once it is ready.</p>
     */
    inline PlatformStatus GetPlatformStatus() const { return m_platformStatus; }
    inline bool PlatformStatusHasBeenSet() const { return m_platformStatusHasBeenSet; }
    inline void SetPlatformStatus(PlatformStatus value) { m_platformStatusHasBeenSet = true; m_platformStatus = value; }
    inline PlatformSummary& WithPlatformStatus(PlatformStatus value) { SetPlatformStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of platform version.</p>
     */
    inline const Aws::String& GetPlatformCategory() const { return m_platformCategory; }
    inline bool PlatformCategoryHasBeenSet() const { return m_platformCategoryHasBeenSet; }
    template<typename PlatformCategoryT = Aws::String>
    void SetPlatformCategory(PlatformCategoryT&& value) { m_platformCategoryHasBeenSet = true; m_platformCategory = std::forward<PlatformCategoryT>(value); }
    template<typename PlatformCategoryT = Aws::String>
    PlatformSummary& WithPlatformCategory(PlatformCategoryT&& value) { SetPlatformCategory(std::forward<PlatformCategoryT>(value)); return *this;}
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
    PlatformSummary& WithOperatingSystemName(OperatingSystemNameT&& value) { SetOperatingSystemName(std::forward<OperatingSystemNameT>(value)); return *this;}
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
    PlatformSummary& WithOperatingSystemVersion(OperatingSystemVersionT&& value) { SetOperatingSystemVersion(std::forward<OperatingSystemVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tiers in which the platform version runs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedTierList() const { return m_supportedTierList; }
    inline bool SupportedTierListHasBeenSet() const { return m_supportedTierListHasBeenSet; }
    template<typename SupportedTierListT = Aws::Vector<Aws::String>>
    void SetSupportedTierList(SupportedTierListT&& value) { m_supportedTierListHasBeenSet = true; m_supportedTierList = std::forward<SupportedTierListT>(value); }
    template<typename SupportedTierListT = Aws::Vector<Aws::String>>
    PlatformSummary& WithSupportedTierList(SupportedTierListT&& value) { SetSupportedTierList(std::forward<SupportedTierListT>(value)); return *this;}
    template<typename SupportedTierListT = Aws::String>
    PlatformSummary& AddSupportedTierList(SupportedTierListT&& value) { m_supportedTierListHasBeenSet = true; m_supportedTierList.emplace_back(std::forward<SupportedTierListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The additions associated with the platform version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedAddonList() const { return m_supportedAddonList; }
    inline bool SupportedAddonListHasBeenSet() const { return m_supportedAddonListHasBeenSet; }
    template<typename SupportedAddonListT = Aws::Vector<Aws::String>>
    void SetSupportedAddonList(SupportedAddonListT&& value) { m_supportedAddonListHasBeenSet = true; m_supportedAddonList = std::forward<SupportedAddonListT>(value); }
    template<typename SupportedAddonListT = Aws::Vector<Aws::String>>
    PlatformSummary& WithSupportedAddonList(SupportedAddonListT&& value) { SetSupportedAddonList(std::forward<SupportedAddonListT>(value)); return *this;}
    template<typename SupportedAddonListT = Aws::String>
    PlatformSummary& AddSupportedAddonList(SupportedAddonListT&& value) { m_supportedAddonListHasBeenSet = true; m_supportedAddonList.emplace_back(std::forward<SupportedAddonListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state of the platform version in its lifecycle.</p> <p>Possible values:
     * <code>recommended</code> | empty</p> <p>If an empty value is returned, the
     * platform version is supported but isn't the recommended one for its branch.</p>
     */
    inline const Aws::String& GetPlatformLifecycleState() const { return m_platformLifecycleState; }
    inline bool PlatformLifecycleStateHasBeenSet() const { return m_platformLifecycleStateHasBeenSet; }
    template<typename PlatformLifecycleStateT = Aws::String>
    void SetPlatformLifecycleState(PlatformLifecycleStateT&& value) { m_platformLifecycleStateHasBeenSet = true; m_platformLifecycleState = std::forward<PlatformLifecycleStateT>(value); }
    template<typename PlatformLifecycleStateT = Aws::String>
    PlatformSummary& WithPlatformLifecycleState(PlatformLifecycleStateT&& value) { SetPlatformLifecycleState(std::forward<PlatformLifecycleStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version string of the platform version.</p>
     */
    inline const Aws::String& GetPlatformVersion() const { return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    template<typename PlatformVersionT = Aws::String>
    void SetPlatformVersion(PlatformVersionT&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::forward<PlatformVersionT>(value); }
    template<typename PlatformVersionT = Aws::String>
    PlatformSummary& WithPlatformVersion(PlatformVersionT&& value) { SetPlatformVersion(std::forward<PlatformVersionT>(value)); return *this;}
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
    PlatformSummary& WithPlatformBranchName(PlatformBranchNameT&& value) { SetPlatformBranchName(std::forward<PlatformBranchNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the platform version's branch in its lifecycle.</p> <p>Possible
     * values: <code>beta</code> | <code>supported</code> | <code>deprecated</code> |
     * <code>retired</code> </p>
     */
    inline const Aws::String& GetPlatformBranchLifecycleState() const { return m_platformBranchLifecycleState; }
    inline bool PlatformBranchLifecycleStateHasBeenSet() const { return m_platformBranchLifecycleStateHasBeenSet; }
    template<typename PlatformBranchLifecycleStateT = Aws::String>
    void SetPlatformBranchLifecycleState(PlatformBranchLifecycleStateT&& value) { m_platformBranchLifecycleStateHasBeenSet = true; m_platformBranchLifecycleState = std::forward<PlatformBranchLifecycleStateT>(value); }
    template<typename PlatformBranchLifecycleStateT = Aws::String>
    PlatformSummary& WithPlatformBranchLifecycleState(PlatformBranchLifecycleStateT&& value) { SetPlatformBranchLifecycleState(std::forward<PlatformBranchLifecycleStateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_platformArn;
    bool m_platformArnHasBeenSet = false;

    Aws::String m_platformOwner;
    bool m_platformOwnerHasBeenSet = false;

    PlatformStatus m_platformStatus{PlatformStatus::NOT_SET};
    bool m_platformStatusHasBeenSet = false;

    Aws::String m_platformCategory;
    bool m_platformCategoryHasBeenSet = false;

    Aws::String m_operatingSystemName;
    bool m_operatingSystemNameHasBeenSet = false;

    Aws::String m_operatingSystemVersion;
    bool m_operatingSystemVersionHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedTierList;
    bool m_supportedTierListHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedAddonList;
    bool m_supportedAddonListHasBeenSet = false;

    Aws::String m_platformLifecycleState;
    bool m_platformLifecycleStateHasBeenSet = false;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet = false;

    Aws::String m_platformBranchName;
    bool m_platformBranchNameHasBeenSet = false;

    Aws::String m_platformBranchLifecycleState;
    bool m_platformBranchLifecycleStateHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
