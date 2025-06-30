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
    AWS_CLOUDFORMATION_API StackSummary() = default;
    AWS_CLOUDFORMATION_API StackSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API StackSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Unique stack identifier.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    StackSummary& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name associated with the stack.</p>
     */
    inline const Aws::String& GetStackName() const { return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    template<typename StackNameT = Aws::String>
    void SetStackName(StackNameT&& value) { m_stackNameHasBeenSet = true; m_stackName = std::forward<StackNameT>(value); }
    template<typename StackNameT = Aws::String>
    StackSummary& WithStackName(StackNameT&& value) { SetStackName(std::forward<StackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The template description of the template used to create the stack.</p>
     */
    inline const Aws::String& GetTemplateDescription() const { return m_templateDescription; }
    inline bool TemplateDescriptionHasBeenSet() const { return m_templateDescriptionHasBeenSet; }
    template<typename TemplateDescriptionT = Aws::String>
    void SetTemplateDescription(TemplateDescriptionT&& value) { m_templateDescriptionHasBeenSet = true; m_templateDescription = std::forward<TemplateDescriptionT>(value); }
    template<typename TemplateDescriptionT = Aws::String>
    StackSummary& WithTemplateDescription(TemplateDescriptionT&& value) { SetTemplateDescription(std::forward<TemplateDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the stack was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    StackSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the stack was last updated. This field will only be returned if the
     * stack has been updated at least once.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    StackSummary& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the stack was deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletionTime() const { return m_deletionTime; }
    inline bool DeletionTimeHasBeenSet() const { return m_deletionTimeHasBeenSet; }
    template<typename DeletionTimeT = Aws::Utils::DateTime>
    void SetDeletionTime(DeletionTimeT&& value) { m_deletionTimeHasBeenSet = true; m_deletionTime = std::forward<DeletionTimeT>(value); }
    template<typename DeletionTimeT = Aws::Utils::DateTime>
    StackSummary& WithDeletionTime(DeletionTimeT&& value) { SetDeletionTime(std::forward<DeletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the stack.</p>
     */
    inline StackStatus GetStackStatus() const { return m_stackStatus; }
    inline bool StackStatusHasBeenSet() const { return m_stackStatusHasBeenSet; }
    inline void SetStackStatus(StackStatus value) { m_stackStatusHasBeenSet = true; m_stackStatus = value; }
    inline StackSummary& WithStackStatus(StackStatus value) { SetStackStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Success/Failure message associated with the stack status.</p>
     */
    inline const Aws::String& GetStackStatusReason() const { return m_stackStatusReason; }
    inline bool StackStatusReasonHasBeenSet() const { return m_stackStatusReasonHasBeenSet; }
    template<typename StackStatusReasonT = Aws::String>
    void SetStackStatusReason(StackStatusReasonT&& value) { m_stackStatusReasonHasBeenSet = true; m_stackStatusReason = std::forward<StackStatusReasonT>(value); }
    template<typename StackStatusReasonT = Aws::String>
    StackSummary& WithStackStatusReason(StackStatusReasonT&& value) { SetStackStatusReason(std::forward<StackStatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For nested stacks, the stack ID of the direct parent of this stack. For the
     * first level of nested stacks, the root stack is also the parent stack.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Nested
     * stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline const Aws::String& GetParentId() const { return m_parentId; }
    inline bool ParentIdHasBeenSet() const { return m_parentIdHasBeenSet; }
    template<typename ParentIdT = Aws::String>
    void SetParentId(ParentIdT&& value) { m_parentIdHasBeenSet = true; m_parentId = std::forward<ParentIdT>(value); }
    template<typename ParentIdT = Aws::String>
    StackSummary& WithParentId(ParentIdT&& value) { SetParentId(std::forward<ParentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For nested stacks, the stack ID of the top-level stack to which the nested
     * stack ultimately belongs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Nested
     * stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline const Aws::String& GetRootId() const { return m_rootId; }
    inline bool RootIdHasBeenSet() const { return m_rootIdHasBeenSet; }
    template<typename RootIdT = Aws::String>
    void SetRootId(RootIdT&& value) { m_rootIdHasBeenSet = true; m_rootId = std::forward<RootIdT>(value); }
    template<typename RootIdT = Aws::String>
    StackSummary& WithRootId(RootIdT&& value) { SetRootId(std::forward<RootIdT>(value)); return *this;}
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
    inline const StackDriftInformationSummary& GetDriftInformation() const { return m_driftInformation; }
    inline bool DriftInformationHasBeenSet() const { return m_driftInformationHasBeenSet; }
    template<typename DriftInformationT = StackDriftInformationSummary>
    void SetDriftInformation(DriftInformationT&& value) { m_driftInformationHasBeenSet = true; m_driftInformation = std::forward<DriftInformationT>(value); }
    template<typename DriftInformationT = StackDriftInformationSummary>
    StackSummary& WithDriftInformation(DriftInformationT&& value) { SetDriftInformation(std::forward<DriftInformationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_templateDescription;
    bool m_templateDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_deletionTime{};
    bool m_deletionTimeHasBeenSet = false;

    StackStatus m_stackStatus{StackStatus::NOT_SET};
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
