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


    /**
     * <p>Unique stack identifier.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>Unique stack identifier.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>Unique stack identifier.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>Unique stack identifier.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>Unique stack identifier.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>Unique stack identifier.</p>
     */
    inline StackSummary& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>Unique stack identifier.</p>
     */
    inline StackSummary& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>Unique stack identifier.</p>
     */
    inline StackSummary& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>The name associated with the stack.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name associated with the stack.</p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>The name associated with the stack.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name associated with the stack.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>The name associated with the stack.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name associated with the stack.</p>
     */
    inline StackSummary& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name associated with the stack.</p>
     */
    inline StackSummary& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>The name associated with the stack.</p>
     */
    inline StackSummary& WithStackName(const char* value) { SetStackName(value); return *this;}


    /**
     * <p>The template description of the template used to create the stack.</p>
     */
    inline const Aws::String& GetTemplateDescription() const{ return m_templateDescription; }

    /**
     * <p>The template description of the template used to create the stack.</p>
     */
    inline bool TemplateDescriptionHasBeenSet() const { return m_templateDescriptionHasBeenSet; }

    /**
     * <p>The template description of the template used to create the stack.</p>
     */
    inline void SetTemplateDescription(const Aws::String& value) { m_templateDescriptionHasBeenSet = true; m_templateDescription = value; }

    /**
     * <p>The template description of the template used to create the stack.</p>
     */
    inline void SetTemplateDescription(Aws::String&& value) { m_templateDescriptionHasBeenSet = true; m_templateDescription = std::move(value); }

    /**
     * <p>The template description of the template used to create the stack.</p>
     */
    inline void SetTemplateDescription(const char* value) { m_templateDescriptionHasBeenSet = true; m_templateDescription.assign(value); }

    /**
     * <p>The template description of the template used to create the stack.</p>
     */
    inline StackSummary& WithTemplateDescription(const Aws::String& value) { SetTemplateDescription(value); return *this;}

    /**
     * <p>The template description of the template used to create the stack.</p>
     */
    inline StackSummary& WithTemplateDescription(Aws::String&& value) { SetTemplateDescription(std::move(value)); return *this;}

    /**
     * <p>The template description of the template used to create the stack.</p>
     */
    inline StackSummary& WithTemplateDescription(const char* value) { SetTemplateDescription(value); return *this;}


    /**
     * <p>The time the stack was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the stack was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time the stack was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time the stack was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time the stack was created.</p>
     */
    inline StackSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the stack was created.</p>
     */
    inline StackSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time the stack was last updated. This field will only be returned if the
     * stack has been updated at least once.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The time the stack was last updated. This field will only be returned if the
     * stack has been updated at least once.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The time the stack was last updated. This field will only be returned if the
     * stack has been updated at least once.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The time the stack was last updated. This field will only be returned if the
     * stack has been updated at least once.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The time the stack was last updated. This field will only be returned if the
     * stack has been updated at least once.</p>
     */
    inline StackSummary& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The time the stack was last updated. This field will only be returned if the
     * stack has been updated at least once.</p>
     */
    inline StackSummary& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The time the stack was deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletionTime() const{ return m_deletionTime; }

    /**
     * <p>The time the stack was deleted.</p>
     */
    inline bool DeletionTimeHasBeenSet() const { return m_deletionTimeHasBeenSet; }

    /**
     * <p>The time the stack was deleted.</p>
     */
    inline void SetDeletionTime(const Aws::Utils::DateTime& value) { m_deletionTimeHasBeenSet = true; m_deletionTime = value; }

    /**
     * <p>The time the stack was deleted.</p>
     */
    inline void SetDeletionTime(Aws::Utils::DateTime&& value) { m_deletionTimeHasBeenSet = true; m_deletionTime = std::move(value); }

    /**
     * <p>The time the stack was deleted.</p>
     */
    inline StackSummary& WithDeletionTime(const Aws::Utils::DateTime& value) { SetDeletionTime(value); return *this;}

    /**
     * <p>The time the stack was deleted.</p>
     */
    inline StackSummary& WithDeletionTime(Aws::Utils::DateTime&& value) { SetDeletionTime(std::move(value)); return *this;}


    /**
     * <p>The current status of the stack.</p>
     */
    inline const StackStatus& GetStackStatus() const{ return m_stackStatus; }

    /**
     * <p>The current status of the stack.</p>
     */
    inline bool StackStatusHasBeenSet() const { return m_stackStatusHasBeenSet; }

    /**
     * <p>The current status of the stack.</p>
     */
    inline void SetStackStatus(const StackStatus& value) { m_stackStatusHasBeenSet = true; m_stackStatus = value; }

    /**
     * <p>The current status of the stack.</p>
     */
    inline void SetStackStatus(StackStatus&& value) { m_stackStatusHasBeenSet = true; m_stackStatus = std::move(value); }

    /**
     * <p>The current status of the stack.</p>
     */
    inline StackSummary& WithStackStatus(const StackStatus& value) { SetStackStatus(value); return *this;}

    /**
     * <p>The current status of the stack.</p>
     */
    inline StackSummary& WithStackStatus(StackStatus&& value) { SetStackStatus(std::move(value)); return *this;}


    /**
     * <p>Success/Failure message associated with the stack status.</p>
     */
    inline const Aws::String& GetStackStatusReason() const{ return m_stackStatusReason; }

    /**
     * <p>Success/Failure message associated with the stack status.</p>
     */
    inline bool StackStatusReasonHasBeenSet() const { return m_stackStatusReasonHasBeenSet; }

    /**
     * <p>Success/Failure message associated with the stack status.</p>
     */
    inline void SetStackStatusReason(const Aws::String& value) { m_stackStatusReasonHasBeenSet = true; m_stackStatusReason = value; }

    /**
     * <p>Success/Failure message associated with the stack status.</p>
     */
    inline void SetStackStatusReason(Aws::String&& value) { m_stackStatusReasonHasBeenSet = true; m_stackStatusReason = std::move(value); }

    /**
     * <p>Success/Failure message associated with the stack status.</p>
     */
    inline void SetStackStatusReason(const char* value) { m_stackStatusReasonHasBeenSet = true; m_stackStatusReason.assign(value); }

    /**
     * <p>Success/Failure message associated with the stack status.</p>
     */
    inline StackSummary& WithStackStatusReason(const Aws::String& value) { SetStackStatusReason(value); return *this;}

    /**
     * <p>Success/Failure message associated with the stack status.</p>
     */
    inline StackSummary& WithStackStatusReason(Aws::String&& value) { SetStackStatusReason(std::move(value)); return *this;}

    /**
     * <p>Success/Failure message associated with the stack status.</p>
     */
    inline StackSummary& WithStackStatusReason(const char* value) { SetStackStatusReason(value); return *this;}


    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the direct parent of this stack. For the first level of nested stacks, the
     * root stack is also the parent stack.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline const Aws::String& GetParentId() const{ return m_parentId; }

    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the direct parent of this stack. For the first level of nested stacks, the
     * root stack is also the parent stack.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline bool ParentIdHasBeenSet() const { return m_parentIdHasBeenSet; }

    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the direct parent of this stack. For the first level of nested stacks, the
     * root stack is also the parent stack.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetParentId(const Aws::String& value) { m_parentIdHasBeenSet = true; m_parentId = value; }

    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the direct parent of this stack. For the first level of nested stacks, the
     * root stack is also the parent stack.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetParentId(Aws::String&& value) { m_parentIdHasBeenSet = true; m_parentId = std::move(value); }

    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the direct parent of this stack. For the first level of nested stacks, the
     * root stack is also the parent stack.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetParentId(const char* value) { m_parentIdHasBeenSet = true; m_parentId.assign(value); }

    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the direct parent of this stack. For the first level of nested stacks, the
     * root stack is also the parent stack.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline StackSummary& WithParentId(const Aws::String& value) { SetParentId(value); return *this;}

    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the direct parent of this stack. For the first level of nested stacks, the
     * root stack is also the parent stack.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline StackSummary& WithParentId(Aws::String&& value) { SetParentId(std::move(value)); return *this;}

    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the direct parent of this stack. For the first level of nested stacks, the
     * root stack is also the parent stack.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline StackSummary& WithParentId(const char* value) { SetParentId(value); return *this;}


    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the top-level stack to which the nested stack ultimately belongs.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline const Aws::String& GetRootId() const{ return m_rootId; }

    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the top-level stack to which the nested stack ultimately belongs.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline bool RootIdHasBeenSet() const { return m_rootIdHasBeenSet; }

    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the top-level stack to which the nested stack ultimately belongs.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetRootId(const Aws::String& value) { m_rootIdHasBeenSet = true; m_rootId = value; }

    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the top-level stack to which the nested stack ultimately belongs.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetRootId(Aws::String&& value) { m_rootIdHasBeenSet = true; m_rootId = std::move(value); }

    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the top-level stack to which the nested stack ultimately belongs.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetRootId(const char* value) { m_rootIdHasBeenSet = true; m_rootId.assign(value); }

    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the top-level stack to which the nested stack ultimately belongs.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline StackSummary& WithRootId(const Aws::String& value) { SetRootId(value); return *this;}

    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the top-level stack to which the nested stack ultimately belongs.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline StackSummary& WithRootId(Aws::String&& value) { SetRootId(std::move(value)); return *this;}

    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the top-level stack to which the nested stack ultimately belongs.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline StackSummary& WithRootId(const char* value) { SetRootId(value); return *this;}


    /**
     * <p>Summarizes information about whether a stack's actual configuration differs,
     * or has <i>drifted</i>, from its expected configuration, as defined in the stack
     * template and any values specified as template parameters. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
     * Unregulated Configuration Changes to Stacks and Resources</a>.</p>
     */
    inline const StackDriftInformationSummary& GetDriftInformation() const{ return m_driftInformation; }

    /**
     * <p>Summarizes information about whether a stack's actual configuration differs,
     * or has <i>drifted</i>, from its expected configuration, as defined in the stack
     * template and any values specified as template parameters. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
     * Unregulated Configuration Changes to Stacks and Resources</a>.</p>
     */
    inline bool DriftInformationHasBeenSet() const { return m_driftInformationHasBeenSet; }

    /**
     * <p>Summarizes information about whether a stack's actual configuration differs,
     * or has <i>drifted</i>, from its expected configuration, as defined in the stack
     * template and any values specified as template parameters. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
     * Unregulated Configuration Changes to Stacks and Resources</a>.</p>
     */
    inline void SetDriftInformation(const StackDriftInformationSummary& value) { m_driftInformationHasBeenSet = true; m_driftInformation = value; }

    /**
     * <p>Summarizes information about whether a stack's actual configuration differs,
     * or has <i>drifted</i>, from its expected configuration, as defined in the stack
     * template and any values specified as template parameters. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
     * Unregulated Configuration Changes to Stacks and Resources</a>.</p>
     */
    inline void SetDriftInformation(StackDriftInformationSummary&& value) { m_driftInformationHasBeenSet = true; m_driftInformation = std::move(value); }

    /**
     * <p>Summarizes information about whether a stack's actual configuration differs,
     * or has <i>drifted</i>, from its expected configuration, as defined in the stack
     * template and any values specified as template parameters. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
     * Unregulated Configuration Changes to Stacks and Resources</a>.</p>
     */
    inline StackSummary& WithDriftInformation(const StackDriftInformationSummary& value) { SetDriftInformation(value); return *this;}

    /**
     * <p>Summarizes information about whether a stack's actual configuration differs,
     * or has <i>drifted</i>, from its expected configuration, as defined in the stack
     * template and any values specified as template parameters. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
     * Unregulated Configuration Changes to Stacks and Resources</a>.</p>
     */
    inline StackSummary& WithDriftInformation(StackDriftInformationSummary&& value) { SetDriftInformation(std::move(value)); return *this;}

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
