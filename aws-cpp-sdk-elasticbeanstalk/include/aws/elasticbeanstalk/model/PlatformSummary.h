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
   * <p>Detailed information about a platform.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/PlatformSummary">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API PlatformSummary
  {
  public:
    PlatformSummary();
    PlatformSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    PlatformSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline PlatformSummary& WithPlatformArn(const Aws::String& value) { SetPlatformArn(value); return *this;}

    /**
     * <p>The ARN of the platform.</p>
     */
    inline PlatformSummary& WithPlatformArn(Aws::String&& value) { SetPlatformArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the platform.</p>
     */
    inline PlatformSummary& WithPlatformArn(const char* value) { SetPlatformArn(value); return *this;}


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
    inline PlatformSummary& WithPlatformOwner(const Aws::String& value) { SetPlatformOwner(value); return *this;}

    /**
     * <p>The AWS account ID of the person who created the platform.</p>
     */
    inline PlatformSummary& WithPlatformOwner(Aws::String&& value) { SetPlatformOwner(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID of the person who created the platform.</p>
     */
    inline PlatformSummary& WithPlatformOwner(const char* value) { SetPlatformOwner(value); return *this;}


    /**
     * <p>The status of the platform. You can create an environment from the platform
     * once it is ready.</p>
     */
    inline const PlatformStatus& GetPlatformStatus() const{ return m_platformStatus; }

    /**
     * <p>The status of the platform. You can create an environment from the platform
     * once it is ready.</p>
     */
    inline bool PlatformStatusHasBeenSet() const { return m_platformStatusHasBeenSet; }

    /**
     * <p>The status of the platform. You can create an environment from the platform
     * once it is ready.</p>
     */
    inline void SetPlatformStatus(const PlatformStatus& value) { m_platformStatusHasBeenSet = true; m_platformStatus = value; }

    /**
     * <p>The status of the platform. You can create an environment from the platform
     * once it is ready.</p>
     */
    inline void SetPlatformStatus(PlatformStatus&& value) { m_platformStatusHasBeenSet = true; m_platformStatus = std::move(value); }

    /**
     * <p>The status of the platform. You can create an environment from the platform
     * once it is ready.</p>
     */
    inline PlatformSummary& WithPlatformStatus(const PlatformStatus& value) { SetPlatformStatus(value); return *this;}

    /**
     * <p>The status of the platform. You can create an environment from the platform
     * once it is ready.</p>
     */
    inline PlatformSummary& WithPlatformStatus(PlatformStatus&& value) { SetPlatformStatus(std::move(value)); return *this;}


    /**
     * <p>The category of platform.</p>
     */
    inline const Aws::String& GetPlatformCategory() const{ return m_platformCategory; }

    /**
     * <p>The category of platform.</p>
     */
    inline bool PlatformCategoryHasBeenSet() const { return m_platformCategoryHasBeenSet; }

    /**
     * <p>The category of platform.</p>
     */
    inline void SetPlatformCategory(const Aws::String& value) { m_platformCategoryHasBeenSet = true; m_platformCategory = value; }

    /**
     * <p>The category of platform.</p>
     */
    inline void SetPlatformCategory(Aws::String&& value) { m_platformCategoryHasBeenSet = true; m_platformCategory = std::move(value); }

    /**
     * <p>The category of platform.</p>
     */
    inline void SetPlatformCategory(const char* value) { m_platformCategoryHasBeenSet = true; m_platformCategory.assign(value); }

    /**
     * <p>The category of platform.</p>
     */
    inline PlatformSummary& WithPlatformCategory(const Aws::String& value) { SetPlatformCategory(value); return *this;}

    /**
     * <p>The category of platform.</p>
     */
    inline PlatformSummary& WithPlatformCategory(Aws::String&& value) { SetPlatformCategory(std::move(value)); return *this;}

    /**
     * <p>The category of platform.</p>
     */
    inline PlatformSummary& WithPlatformCategory(const char* value) { SetPlatformCategory(value); return *this;}


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
    inline PlatformSummary& WithOperatingSystemName(const Aws::String& value) { SetOperatingSystemName(value); return *this;}

    /**
     * <p>The operating system used by the platform.</p>
     */
    inline PlatformSummary& WithOperatingSystemName(Aws::String&& value) { SetOperatingSystemName(std::move(value)); return *this;}

    /**
     * <p>The operating system used by the platform.</p>
     */
    inline PlatformSummary& WithOperatingSystemName(const char* value) { SetOperatingSystemName(value); return *this;}


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
    inline PlatformSummary& WithOperatingSystemVersion(const Aws::String& value) { SetOperatingSystemVersion(value); return *this;}

    /**
     * <p>The version of the operating system used by the platform.</p>
     */
    inline PlatformSummary& WithOperatingSystemVersion(Aws::String&& value) { SetOperatingSystemVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the operating system used by the platform.</p>
     */
    inline PlatformSummary& WithOperatingSystemVersion(const char* value) { SetOperatingSystemVersion(value); return *this;}


    /**
     * <p>The tiers in which the platform runs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedTierList() const{ return m_supportedTierList; }

    /**
     * <p>The tiers in which the platform runs.</p>
     */
    inline bool SupportedTierListHasBeenSet() const { return m_supportedTierListHasBeenSet; }

    /**
     * <p>The tiers in which the platform runs.</p>
     */
    inline void SetSupportedTierList(const Aws::Vector<Aws::String>& value) { m_supportedTierListHasBeenSet = true; m_supportedTierList = value; }

    /**
     * <p>The tiers in which the platform runs.</p>
     */
    inline void SetSupportedTierList(Aws::Vector<Aws::String>&& value) { m_supportedTierListHasBeenSet = true; m_supportedTierList = std::move(value); }

    /**
     * <p>The tiers in which the platform runs.</p>
     */
    inline PlatformSummary& WithSupportedTierList(const Aws::Vector<Aws::String>& value) { SetSupportedTierList(value); return *this;}

    /**
     * <p>The tiers in which the platform runs.</p>
     */
    inline PlatformSummary& WithSupportedTierList(Aws::Vector<Aws::String>&& value) { SetSupportedTierList(std::move(value)); return *this;}

    /**
     * <p>The tiers in which the platform runs.</p>
     */
    inline PlatformSummary& AddSupportedTierList(const Aws::String& value) { m_supportedTierListHasBeenSet = true; m_supportedTierList.push_back(value); return *this; }

    /**
     * <p>The tiers in which the platform runs.</p>
     */
    inline PlatformSummary& AddSupportedTierList(Aws::String&& value) { m_supportedTierListHasBeenSet = true; m_supportedTierList.push_back(std::move(value)); return *this; }

    /**
     * <p>The tiers in which the platform runs.</p>
     */
    inline PlatformSummary& AddSupportedTierList(const char* value) { m_supportedTierListHasBeenSet = true; m_supportedTierList.push_back(value); return *this; }


    /**
     * <p>The additions associated with the platform.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedAddonList() const{ return m_supportedAddonList; }

    /**
     * <p>The additions associated with the platform.</p>
     */
    inline bool SupportedAddonListHasBeenSet() const { return m_supportedAddonListHasBeenSet; }

    /**
     * <p>The additions associated with the platform.</p>
     */
    inline void SetSupportedAddonList(const Aws::Vector<Aws::String>& value) { m_supportedAddonListHasBeenSet = true; m_supportedAddonList = value; }

    /**
     * <p>The additions associated with the platform.</p>
     */
    inline void SetSupportedAddonList(Aws::Vector<Aws::String>&& value) { m_supportedAddonListHasBeenSet = true; m_supportedAddonList = std::move(value); }

    /**
     * <p>The additions associated with the platform.</p>
     */
    inline PlatformSummary& WithSupportedAddonList(const Aws::Vector<Aws::String>& value) { SetSupportedAddonList(value); return *this;}

    /**
     * <p>The additions associated with the platform.</p>
     */
    inline PlatformSummary& WithSupportedAddonList(Aws::Vector<Aws::String>&& value) { SetSupportedAddonList(std::move(value)); return *this;}

    /**
     * <p>The additions associated with the platform.</p>
     */
    inline PlatformSummary& AddSupportedAddonList(const Aws::String& value) { m_supportedAddonListHasBeenSet = true; m_supportedAddonList.push_back(value); return *this; }

    /**
     * <p>The additions associated with the platform.</p>
     */
    inline PlatformSummary& AddSupportedAddonList(Aws::String&& value) { m_supportedAddonListHasBeenSet = true; m_supportedAddonList.push_back(std::move(value)); return *this; }

    /**
     * <p>The additions associated with the platform.</p>
     */
    inline PlatformSummary& AddSupportedAddonList(const char* value) { m_supportedAddonListHasBeenSet = true; m_supportedAddonList.push_back(value); return *this; }

  private:

    Aws::String m_platformArn;
    bool m_platformArnHasBeenSet;

    Aws::String m_platformOwner;
    bool m_platformOwnerHasBeenSet;

    PlatformStatus m_platformStatus;
    bool m_platformStatusHasBeenSet;

    Aws::String m_platformCategory;
    bool m_platformCategoryHasBeenSet;

    Aws::String m_operatingSystemName;
    bool m_operatingSystemNameHasBeenSet;

    Aws::String m_operatingSystemVersion;
    bool m_operatingSystemVersionHasBeenSet;

    Aws::Vector<Aws::String> m_supportedTierList;
    bool m_supportedTierListHasBeenSet;

    Aws::Vector<Aws::String> m_supportedAddonList;
    bool m_supportedAddonListHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
