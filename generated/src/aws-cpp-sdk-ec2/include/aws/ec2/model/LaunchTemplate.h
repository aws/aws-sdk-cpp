/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/OperatorResponse.h>
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
  class LaunchTemplate
  {
  public:
    AWS_EC2_API LaunchTemplate();
    AWS_EC2_API LaunchTemplate(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LaunchTemplate& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the launch template.</p>
     */
    inline const Aws::String& GetLaunchTemplateId() const{ return m_launchTemplateId; }
    inline bool LaunchTemplateIdHasBeenSet() const { return m_launchTemplateIdHasBeenSet; }
    inline void SetLaunchTemplateId(const Aws::String& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = value; }
    inline void SetLaunchTemplateId(Aws::String&& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = std::move(value); }
    inline void SetLaunchTemplateId(const char* value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId.assign(value); }
    inline LaunchTemplate& WithLaunchTemplateId(const Aws::String& value) { SetLaunchTemplateId(value); return *this;}
    inline LaunchTemplate& WithLaunchTemplateId(Aws::String&& value) { SetLaunchTemplateId(std::move(value)); return *this;}
    inline LaunchTemplate& WithLaunchTemplateId(const char* value) { SetLaunchTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the launch template.</p>
     */
    inline const Aws::String& GetLaunchTemplateName() const{ return m_launchTemplateName; }
    inline bool LaunchTemplateNameHasBeenSet() const { return m_launchTemplateNameHasBeenSet; }
    inline void SetLaunchTemplateName(const Aws::String& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = value; }
    inline void SetLaunchTemplateName(Aws::String&& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = std::move(value); }
    inline void SetLaunchTemplateName(const char* value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName.assign(value); }
    inline LaunchTemplate& WithLaunchTemplateName(const Aws::String& value) { SetLaunchTemplateName(value); return *this;}
    inline LaunchTemplate& WithLaunchTemplateName(Aws::String&& value) { SetLaunchTemplateName(std::move(value)); return *this;}
    inline LaunchTemplate& WithLaunchTemplateName(const char* value) { SetLaunchTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time launch template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline LaunchTemplate& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline LaunchTemplate& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal that created the launch template. </p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline LaunchTemplate& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline LaunchTemplate& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline LaunchTemplate& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the default version of the launch template.</p>
     */
    inline long long GetDefaultVersionNumber() const{ return m_defaultVersionNumber; }
    inline bool DefaultVersionNumberHasBeenSet() const { return m_defaultVersionNumberHasBeenSet; }
    inline void SetDefaultVersionNumber(long long value) { m_defaultVersionNumberHasBeenSet = true; m_defaultVersionNumber = value; }
    inline LaunchTemplate& WithDefaultVersionNumber(long long value) { SetDefaultVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the latest version of the launch template.</p>
     */
    inline long long GetLatestVersionNumber() const{ return m_latestVersionNumber; }
    inline bool LatestVersionNumberHasBeenSet() const { return m_latestVersionNumberHasBeenSet; }
    inline void SetLatestVersionNumber(long long value) { m_latestVersionNumberHasBeenSet = true; m_latestVersionNumber = value; }
    inline LaunchTemplate& WithLatestVersionNumber(long long value) { SetLatestVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the launch template.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline LaunchTemplate& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline LaunchTemplate& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline LaunchTemplate& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline LaunchTemplate& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The entity that manages the launch template.</p>
     */
    inline const OperatorResponse& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const OperatorResponse& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(OperatorResponse&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline LaunchTemplate& WithOperator(const OperatorResponse& value) { SetOperator(value); return *this;}
    inline LaunchTemplate& WithOperator(OperatorResponse&& value) { SetOperator(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_launchTemplateId;
    bool m_launchTemplateIdHasBeenSet = false;

    Aws::String m_launchTemplateName;
    bool m_launchTemplateNameHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    long long m_defaultVersionNumber;
    bool m_defaultVersionNumberHasBeenSet = false;

    long long m_latestVersionNumber;
    bool m_latestVersionNumberHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    OperatorResponse m_operator;
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
