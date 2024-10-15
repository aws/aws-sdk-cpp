/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudformation/model/StackStatus.h>
#include <aws/cloudformation/model/StackDriftInformationSummary.h>
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
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The StackSummary Data Type</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackSummary">AWS
   * API Reference</a></p>
   */
  class StackSummary
  {
  public:
    AWS_CLOUDFORMATION_API StackSummary();
    AWS_CLOUDFORMATION_API StackSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API StackSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Unique stack identifier.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }
    inline StackSummary& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}
    inline StackSummary& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}
    inline StackSummary& WithStackId(const char* value) { SetStackId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name associated with the stack.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }
    inline StackSummary& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}
    inline StackSummary& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}
    inline StackSummary& WithStackName(const char* value) { SetStackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The template description of the template used to create the stack.</p>
     */
    inline const Aws::String& GetTemplateDescription() const{ return m_templateDescription; }
    inline bool TemplateDescriptionHasBeenSet() const { return m_templateDescriptionHasBeenSet; }
    inline void SetTemplateDescription(const Aws::String& value) { m_templateDescriptionHasBeenSet = true; m_templateDescription = value; }
    inline void SetTemplateDescription(Aws::String&& value) { m_templateDescriptionHasBeenSet = true; m_templateDescription = std::move(value); }
    inline void SetTemplateDescription(const char* value) { m_templateDescriptionHasBeenSet = true; m_templateDescription.assign(value); }
    inline StackSummary& WithTemplateDescription(const Aws::String& value) { SetTemplateDescription(value); return *this;}
    inline StackSummary& WithTemplateDescription(Aws::String&& value) { SetTemplateDescription(std::move(value)); return *this;}
    inline StackSummary& WithTemplateDescription(const char* value) { SetTemplateDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the stack was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline StackSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline StackSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the stack was last updated. This field will only be returned if the
     * stack has been updated at least once.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline StackSummary& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline StackSummary& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the stack was deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletionTime() const{ return m_deletionTime; }
    inline bool DeletionTimeHasBeenSet() const { return m_deletionTimeHasBeenSet; }
    inline void SetDeletionTime(const Aws::Utils::DateTime& value) { m_deletionTimeHasBeenSet = true; m_deletionTime = value; }
    inline void SetDeletionTime(Aws::Utils::DateTime&& value) { m_deletionTimeHasBeenSet = true; m_deletionTime = std::move(value); }
    inline StackSummary& WithDeletionTime(const Aws::Utils::DateTime& value) { SetDeletionTime(value); return *this;}
    inline StackSummary& WithDeletionTime(Aws::Utils::DateTime&& value) { SetDeletionTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the stack.</p>
     */
    inline const StackStatus& GetStackStatus() const{ return m_stackStatus; }
    inline bool StackStatusHasBeenSet() const { return m_stackStatusHasBeenSet; }
    inline void SetStackStatus(const StackStatus& value) { m_stackStatusHasBeenSet = true; m_stackStatus = value; }
    inline void SetStackStatus(StackStatus&& value) { m_stackStatusHasBeenSet = true; m_stackStatus = std::move(value); }
    inline StackSummary& WithStackStatus(const StackStatus& value) { SetStackStatus(value); return *this;}
    inline StackSummary& WithStackStatus(StackStatus&& value) { SetStackStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Success/Failure message associated with the stack status.</p>
     */
    inline const Aws::String& GetStackStatusReason() const{ return m_stackStatusReason; }
    inline bool StackStatusReasonHasBeenSet() const { return m_stackStatusReasonHasBeenSet; }
    inline void SetStackStatusReason(const Aws::String& value) { m_stackStatusReasonHasBeenSet = true; m_stackStatusReason = value; }
    inline void SetStackStatusReason(Aws::String&& value) { m_stackStatusReasonHasBeenSet = true; m_stackStatusReason = std::move(value); }
    inline void SetStackStatusReason(const char* value) { m_stackStatusReasonHasBeenSet = true; m_stackStatusReason.assign(value); }
    inline StackSummary& WithStackStatusReason(const Aws::String& value) { SetStackStatusReason(value); return *this;}
    inline StackSummary& WithStackStatusReason(Aws::String&& value) { SetStackStatusReason(std::move(value)); return *this;}
    inline StackSummary& WithStackStatusReason(const char* value) { SetStackStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the direct parent of this stack. For the first level of nested stacks, the
     * root stack is also the parent stack.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Embed
     * stacks within other stacks using nested stacks</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetParentId() const{ return m_parentId; }
    inline bool ParentIdHasBeenSet() const { return m_parentIdHasBeenSet; }
    inline void SetParentId(const Aws::String& value) { m_parentIdHasBeenSet = true; m_parentId = value; }
    inline void SetParentId(Aws::String&& value) { m_parentIdHasBeenSet = true; m_parentId = std::move(value); }
    inline void SetParentId(const char* value) { m_parentIdHasBeenSet = true; m_parentId.assign(value); }
    inline StackSummary& WithParentId(const Aws::String& value) { SetParentId(value); return *this;}
    inline StackSummary& WithParentId(Aws::String&& value) { SetParentId(std::move(value)); return *this;}
    inline StackSummary& WithParentId(const char* value) { SetParentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the top-level stack to which the nested stack ultimately belongs.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Embed
     * stacks within other stacks using nested stacks</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetRootId() const{ return m_rootId; }
    inline bool RootIdHasBeenSet() const { return m_rootIdHasBeenSet; }
    inline void SetRootId(const Aws::String& value) { m_rootIdHasBeenSet = true; m_rootId = value; }
    inline void SetRootId(Aws::String&& value) { m_rootIdHasBeenSet = true; m_rootId = std::move(value); }
    inline void SetRootId(const char* value) { m_rootIdHasBeenSet = true; m_rootId.assign(value); }
    inline StackSummary& WithRootId(const Aws::String& value) { SetRootId(value); return *this;}
    inline StackSummary& WithRootId(Aws::String&& value) { SetRootId(std::move(value)); return *this;}
    inline StackSummary& WithRootId(const char* value) { SetRootId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summarizes information about whether a stack's actual configuration differs,
     * or has <i>drifted</i>, from its expected configuration, as defined in the stack
     * template and any values specified as template parameters. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detect
     * unmanaged configuration changes to stacks and resources with drift
     * detection</a>.</p>
     */
    inline const StackDriftInformationSummary& GetDriftInformation() const{ return m_driftInformation; }
    inline bool DriftInformationHasBeenSet() const { return m_driftInformationHasBeenSet; }
    inline void SetDriftInformation(const StackDriftInformationSummary& value) { m_driftInformationHasBeenSet = true; m_driftInformation = value; }
    inline void SetDriftInformation(StackDriftInformationSummary&& value) { m_driftInformationHasBeenSet = true; m_driftInformation = std::move(value); }
    inline StackSummary& WithDriftInformation(const StackDriftInformationSummary& value) { SetDriftInformation(value); return *this;}
    inline StackSummary& WithDriftInformation(StackDriftInformationSummary&& value) { SetDriftInformation(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_templateDescription;
    bool m_templateDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_deletionTime;
    bool m_deletionTimeHasBeenSet = false;

    StackStatus m_stackStatus;
    bool m_stackStatusHasBeenSet = false;

    Aws::String m_stackStatusReason;
    bool m_stackStatusReasonHasBeenSet = false;

    Aws::String m_parentId;
    bool m_parentIdHasBeenSet = false;

    Aws::String m_rootId;
    bool m_rootIdHasBeenSet = false;

    StackDriftInformationSummary m_driftInformation;
    bool m_driftInformationHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
