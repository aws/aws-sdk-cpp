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
    AWS_ELASTICBEANSTALK_API PlatformSummary();
    AWS_ELASTICBEANSTALK_API PlatformSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API PlatformSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline PlatformSummary& WithPlatformArn(const Aws::String& value) { SetPlatformArn(value); return *this;}
    inline PlatformSummary& WithPlatformArn(Aws::String&& value) { SetPlatformArn(std::move(value)); return *this;}
    inline PlatformSummary& WithPlatformArn(const char* value) { SetPlatformArn(value); return *this;}
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
    inline PlatformSummary& WithPlatformOwner(const Aws::String& value) { SetPlatformOwner(value); return *this;}
    inline PlatformSummary& WithPlatformOwner(Aws::String&& value) { SetPlatformOwner(std::move(value)); return *this;}
    inline PlatformSummary& WithPlatformOwner(const char* value) { SetPlatformOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the platform version. You can create an environment from the
     * platform version once it is ready.</p>
     */
    inline const PlatformStatus& GetPlatformStatus() const{ return m_platformStatus; }
    inline bool PlatformStatusHasBeenSet() const { return m_platformStatusHasBeenSet; }
    inline void SetPlatformStatus(const PlatformStatus& value) { m_platformStatusHasBeenSet = true; m_platformStatus = value; }
    inline void SetPlatformStatus(PlatformStatus&& value) { m_platformStatusHasBeenSet = true; m_platformStatus = std::move(value); }
    inline PlatformSummary& WithPlatformStatus(const PlatformStatus& value) { SetPlatformStatus(value); return *this;}
    inline PlatformSummary& WithPlatformStatus(PlatformStatus&& value) { SetPlatformStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of platform version.</p>
     */
    inline const Aws::String& GetPlatformCategory() const{ return m_platformCategory; }
    inline bool PlatformCategoryHasBeenSet() const { return m_platformCategoryHasBeenSet; }
    inline void SetPlatformCategory(const Aws::String& value) { m_platformCategoryHasBeenSet = true; m_platformCategory = value; }
    inline void SetPlatformCategory(Aws::String&& value) { m_platformCategoryHasBeenSet = true; m_platformCategory = std::move(value); }
    inline void SetPlatformCategory(const char* value) { m_platformCategoryHasBeenSet = true; m_platformCategory.assign(value); }
    inline PlatformSummary& WithPlatformCategory(const Aws::String& value) { SetPlatformCategory(value); return *this;}
    inline PlatformSummary& WithPlatformCategory(Aws::String&& value) { SetPlatformCategory(std::move(value)); return *this;}
    inline PlatformSummary& WithPlatformCategory(const char* value) { SetPlatformCategory(value); return *this;}
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
    inline PlatformSummary& WithOperatingSystemName(const Aws::String& value) { SetOperatingSystemName(value); return *this;}
    inline PlatformSummary& WithOperatingSystemName(Aws::String&& value) { SetOperatingSystemName(std::move(value)); return *this;}
    inline PlatformSummary& WithOperatingSystemName(const char* value) { SetOperatingSystemName(value); return *this;}
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
    inline PlatformSummary& WithOperatingSystemVersion(const Aws::String& value) { SetOperatingSystemVersion(value); return *this;}
    inline PlatformSummary& WithOperatingSystemVersion(Aws::String&& value) { SetOperatingSystemVersion(std::move(value)); return *this;}
    inline PlatformSummary& WithOperatingSystemVersion(const char* value) { SetOperatingSystemVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tiers in which the platform version runs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedTierList() const{ return m_supportedTierList; }
    inline bool SupportedTierListHasBeenSet() const { return m_supportedTierListHasBeenSet; }
    inline void SetSupportedTierList(const Aws::Vector<Aws::String>& value) { m_supportedTierListHasBeenSet = true; m_supportedTierList = value; }
    inline void SetSupportedTierList(Aws::Vector<Aws::String>&& value) { m_supportedTierListHasBeenSet = true; m_supportedTierList = std::move(value); }
    inline PlatformSummary& WithSupportedTierList(const Aws::Vector<Aws::String>& value) { SetSupportedTierList(value); return *this;}
    inline PlatformSummary& WithSupportedTierList(Aws::Vector<Aws::String>&& value) { SetSupportedTierList(std::move(value)); return *this;}
    inline PlatformSummary& AddSupportedTierList(const Aws::String& value) { m_supportedTierListHasBeenSet = true; m_supportedTierList.push_back(value); return *this; }
    inline PlatformSummary& AddSupportedTierList(Aws::String&& value) { m_supportedTierListHasBeenSet = true; m_supportedTierList.push_back(std::move(value)); return *this; }
    inline PlatformSummary& AddSupportedTierList(const char* value) { m_supportedTierListHasBeenSet = true; m_supportedTierList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The additions associated with the platform version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedAddonList() const{ return m_supportedAddonList; }
    inline bool SupportedAddonListHasBeenSet() const { return m_supportedAddonListHasBeenSet; }
    inline void SetSupportedAddonList(const Aws::Vector<Aws::String>& value) { m_supportedAddonListHasBeenSet = true; m_supportedAddonList = value; }
    inline void SetSupportedAddonList(Aws::Vector<Aws::String>&& value) { m_supportedAddonListHasBeenSet = true; m_supportedAddonList = std::move(value); }
    inline PlatformSummary& WithSupportedAddonList(const Aws::Vector<Aws::String>& value) { SetSupportedAddonList(value); return *this;}
    inline PlatformSummary& WithSupportedAddonList(Aws::Vector<Aws::String>&& value) { SetSupportedAddonList(std::move(value)); return *this;}
    inline PlatformSummary& AddSupportedAddonList(const Aws::String& value) { m_supportedAddonListHasBeenSet = true; m_supportedAddonList.push_back(value); return *this; }
    inline PlatformSummary& AddSupportedAddonList(Aws::String&& value) { m_supportedAddonListHasBeenSet = true; m_supportedAddonList.push_back(std::move(value)); return *this; }
    inline PlatformSummary& AddSupportedAddonList(const char* value) { m_supportedAddonListHasBeenSet = true; m_supportedAddonList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state of the platform version in its lifecycle.</p> <p>Possible values:
     * <code>recommended</code> | empty</p> <p>If an empty value is returned, the
     * platform version is supported but isn't the recommended one for its branch.</p>
     */
    inline const Aws::String& GetPlatformLifecycleState() const{ return m_platformLifecycleState; }
    inline bool PlatformLifecycleStateHasBeenSet() const { return m_platformLifecycleStateHasBeenSet; }
    inline void SetPlatformLifecycleState(const Aws::String& value) { m_platformLifecycleStateHasBeenSet = true; m_platformLifecycleState = value; }
    inline void SetPlatformLifecycleState(Aws::String&& value) { m_platformLifecycleStateHasBeenSet = true; m_platformLifecycleState = std::move(value); }
    inline void SetPlatformLifecycleState(const char* value) { m_platformLifecycleStateHasBeenSet = true; m_platformLifecycleState.assign(value); }
    inline PlatformSummary& WithPlatformLifecycleState(const Aws::String& value) { SetPlatformLifecycleState(value); return *this;}
    inline PlatformSummary& WithPlatformLifecycleState(Aws::String&& value) { SetPlatformLifecycleState(std::move(value)); return *this;}
    inline PlatformSummary& WithPlatformLifecycleState(const char* value) { SetPlatformLifecycleState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version string of the platform version.</p>
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }
    inline PlatformSummary& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}
    inline PlatformSummary& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}
    inline PlatformSummary& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}
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
    inline PlatformSummary& WithPlatformBranchName(const Aws::String& value) { SetPlatformBranchName(value); return *this;}
    inline PlatformSummary& WithPlatformBranchName(Aws::String&& value) { SetPlatformBranchName(std::move(value)); return *this;}
    inline PlatformSummary& WithPlatformBranchName(const char* value) { SetPlatformBranchName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the platform version's branch in its lifecycle.</p> <p>Possible
     * values: <code>beta</code> | <code>supported</code> | <code>deprecated</code> |
     * <code>retired</code> </p>
     */
    inline const Aws::String& GetPlatformBranchLifecycleState() const{ return m_platformBranchLifecycleState; }
    inline bool PlatformBranchLifecycleStateHasBeenSet() const { return m_platformBranchLifecycleStateHasBeenSet; }
    inline void SetPlatformBranchLifecycleState(const Aws::String& value) { m_platformBranchLifecycleStateHasBeenSet = true; m_platformBranchLifecycleState = value; }
    inline void SetPlatformBranchLifecycleState(Aws::String&& value) { m_platformBranchLifecycleStateHasBeenSet = true; m_platformBranchLifecycleState = std::move(value); }
    inline void SetPlatformBranchLifecycleState(const char* value) { m_platformBranchLifecycleStateHasBeenSet = true; m_platformBranchLifecycleState.assign(value); }
    inline PlatformSummary& WithPlatformBranchLifecycleState(const Aws::String& value) { SetPlatformBranchLifecycleState(value); return *this;}
    inline PlatformSummary& WithPlatformBranchLifecycleState(Aws::String&& value) { SetPlatformBranchLifecycleState(std::move(value)); return *this;}
    inline PlatformSummary& WithPlatformBranchLifecycleState(const char* value) { SetPlatformBranchLifecycleState(value); return *this;}
    ///@}
  private:

    Aws::String m_platformArn;
    bool m_platformArnHasBeenSet = false;

    Aws::String m_platformOwner;
    bool m_platformOwnerHasBeenSet = false;

    PlatformStatus m_platformStatus;
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
