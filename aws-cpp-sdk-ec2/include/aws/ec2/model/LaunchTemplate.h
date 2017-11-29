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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Tag.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a launch template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplate">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API LaunchTemplate
  {
  public:
    LaunchTemplate();
    LaunchTemplate(const Aws::Utils::Xml::XmlNode& xmlNode);
    LaunchTemplate& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the launch template.</p>
     */
    inline const Aws::String& GetLaunchTemplateId() const{ return m_launchTemplateId; }

    /**
     * <p>The ID of the launch template.</p>
     */
    inline void SetLaunchTemplateId(const Aws::String& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = value; }

    /**
     * <p>The ID of the launch template.</p>
     */
    inline void SetLaunchTemplateId(Aws::String&& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = std::move(value); }

    /**
     * <p>The ID of the launch template.</p>
     */
    inline void SetLaunchTemplateId(const char* value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId.assign(value); }

    /**
     * <p>The ID of the launch template.</p>
     */
    inline LaunchTemplate& WithLaunchTemplateId(const Aws::String& value) { SetLaunchTemplateId(value); return *this;}

    /**
     * <p>The ID of the launch template.</p>
     */
    inline LaunchTemplate& WithLaunchTemplateId(Aws::String&& value) { SetLaunchTemplateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the launch template.</p>
     */
    inline LaunchTemplate& WithLaunchTemplateId(const char* value) { SetLaunchTemplateId(value); return *this;}


    /**
     * <p>The name of the launch template.</p>
     */
    inline const Aws::String& GetLaunchTemplateName() const{ return m_launchTemplateName; }

    /**
     * <p>The name of the launch template.</p>
     */
    inline void SetLaunchTemplateName(const Aws::String& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = value; }

    /**
     * <p>The name of the launch template.</p>
     */
    inline void SetLaunchTemplateName(Aws::String&& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = std::move(value); }

    /**
     * <p>The name of the launch template.</p>
     */
    inline void SetLaunchTemplateName(const char* value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName.assign(value); }

    /**
     * <p>The name of the launch template.</p>
     */
    inline LaunchTemplate& WithLaunchTemplateName(const Aws::String& value) { SetLaunchTemplateName(value); return *this;}

    /**
     * <p>The name of the launch template.</p>
     */
    inline LaunchTemplate& WithLaunchTemplateName(Aws::String&& value) { SetLaunchTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the launch template.</p>
     */
    inline LaunchTemplate& WithLaunchTemplateName(const char* value) { SetLaunchTemplateName(value); return *this;}


    /**
     * <p>The time launch template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time launch template was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time launch template was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time launch template was created.</p>
     */
    inline LaunchTemplate& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time launch template was created.</p>
     */
    inline LaunchTemplate& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The principal that created the launch template. </p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The principal that created the launch template. </p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The principal that created the launch template. </p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The principal that created the launch template. </p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The principal that created the launch template. </p>
     */
    inline LaunchTemplate& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The principal that created the launch template. </p>
     */
    inline LaunchTemplate& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The principal that created the launch template. </p>
     */
    inline LaunchTemplate& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The version number of the default version of the launch template.</p>
     */
    inline long long GetDefaultVersionNumber() const{ return m_defaultVersionNumber; }

    /**
     * <p>The version number of the default version of the launch template.</p>
     */
    inline void SetDefaultVersionNumber(long long value) { m_defaultVersionNumberHasBeenSet = true; m_defaultVersionNumber = value; }

    /**
     * <p>The version number of the default version of the launch template.</p>
     */
    inline LaunchTemplate& WithDefaultVersionNumber(long long value) { SetDefaultVersionNumber(value); return *this;}


    /**
     * <p>The version number of the latest version of the launch template.</p>
     */
    inline long long GetLatestVersionNumber() const{ return m_latestVersionNumber; }

    /**
     * <p>The version number of the latest version of the launch template.</p>
     */
    inline void SetLatestVersionNumber(long long value) { m_latestVersionNumberHasBeenSet = true; m_latestVersionNumber = value; }

    /**
     * <p>The version number of the latest version of the launch template.</p>
     */
    inline LaunchTemplate& WithLatestVersionNumber(long long value) { SetLatestVersionNumber(value); return *this;}


    /**
     * <p>The tags for the launch template.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the launch template.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the launch template.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the launch template.</p>
     */
    inline LaunchTemplate& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the launch template.</p>
     */
    inline LaunchTemplate& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the launch template.</p>
     */
    inline LaunchTemplate& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags for the launch template.</p>
     */
    inline LaunchTemplate& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_launchTemplateId;
    bool m_launchTemplateIdHasBeenSet;

    Aws::String m_launchTemplateName;
    bool m_launchTemplateNameHasBeenSet;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet;

    long long m_defaultVersionNumber;
    bool m_defaultVersionNumberHasBeenSet;

    long long m_latestVersionNumber;
    bool m_latestVersionNumberHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
