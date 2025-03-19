/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dlm/model/CreateRule.h>
#include <aws/dlm/model/RetainRule.h>
#include <aws/dlm/model/FastRestoreRule.h>
#include <aws/dlm/model/DeprecateRule.h>
#include <aws/dlm/model/ArchiveRule.h>
#include <aws/dlm/model/Tag.h>
#include <aws/dlm/model/CrossRegionCopyRule.h>
#include <aws/dlm/model/ShareRule.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DLM
{
namespace Model
{

  /**
   * <p> <b>[Custom snapshot and AMI policies only]</b> Specifies a schedule for a
   * snapshot or AMI lifecycle policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/Schedule">AWS API
   * Reference</a></p>
   */
  class Schedule
  {
  public:
    AWS_DLM_API Schedule() = default;
    AWS_DLM_API Schedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Schedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the schedule.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Schedule& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Copy all user-defined tags on a source volume to snapshots of the volume
     * created by this policy.</p>
     */
    inline bool GetCopyTags() const { return m_copyTags; }
    inline bool CopyTagsHasBeenSet() const { return m_copyTagsHasBeenSet; }
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }
    inline Schedule& WithCopyTags(bool value) { SetCopyTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to policy-created resources. These user-defined tags are in
     * addition to the Amazon Web Services-added lifecycle tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTagsToAdd() const { return m_tagsToAdd; }
    inline bool TagsToAddHasBeenSet() const { return m_tagsToAddHasBeenSet; }
    template<typename TagsToAddT = Aws::Vector<Tag>>
    void SetTagsToAdd(TagsToAddT&& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd = std::forward<TagsToAddT>(value); }
    template<typename TagsToAddT = Aws::Vector<Tag>>
    Schedule& WithTagsToAdd(TagsToAddT&& value) { SetTagsToAdd(std::forward<TagsToAddT>(value)); return *this;}
    template<typename TagsToAddT = Tag>
    Schedule& AddTagsToAdd(TagsToAddT&& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd.emplace_back(std::forward<TagsToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> <b>[AMI policies and snapshot policies that target instances only]</b> A
     * collection of key/value pairs with values determined dynamically when the policy
     * is executed. Keys may be any valid Amazon EC2 tag key. Values must be in one of
     * the two following formats: <code>$(instance-id)</code> or
     * <code>$(timestamp)</code>. Variable tags are only valid for EBS Snapshot
     * Management – Instance policies.</p>
     */
    inline const Aws::Vector<Tag>& GetVariableTags() const { return m_variableTags; }
    inline bool VariableTagsHasBeenSet() const { return m_variableTagsHasBeenSet; }
    template<typename VariableTagsT = Aws::Vector<Tag>>
    void SetVariableTags(VariableTagsT&& value) { m_variableTagsHasBeenSet = true; m_variableTags = std::forward<VariableTagsT>(value); }
    template<typename VariableTagsT = Aws::Vector<Tag>>
    Schedule& WithVariableTags(VariableTagsT&& value) { SetVariableTags(std::forward<VariableTagsT>(value)); return *this;}
    template<typename VariableTagsT = Tag>
    Schedule& AddVariableTags(VariableTagsT&& value) { m_variableTagsHasBeenSet = true; m_variableTags.emplace_back(std::forward<VariableTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The creation rule.</p>
     */
    inline const CreateRule& GetCreateRule() const { return m_createRule; }
    inline bool CreateRuleHasBeenSet() const { return m_createRuleHasBeenSet; }
    template<typename CreateRuleT = CreateRule>
    void SetCreateRule(CreateRuleT&& value) { m_createRuleHasBeenSet = true; m_createRule = std::forward<CreateRuleT>(value); }
    template<typename CreateRuleT = CreateRule>
    Schedule& WithCreateRule(CreateRuleT&& value) { SetCreateRule(std::forward<CreateRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention rule for snapshots or AMIs created by the policy.</p>
     */
    inline const RetainRule& GetRetainRule() const { return m_retainRule; }
    inline bool RetainRuleHasBeenSet() const { return m_retainRuleHasBeenSet; }
    template<typename RetainRuleT = RetainRule>
    void SetRetainRule(RetainRuleT&& value) { m_retainRuleHasBeenSet = true; m_retainRule = std::forward<RetainRuleT>(value); }
    template<typename RetainRuleT = RetainRule>
    Schedule& WithRetainRule(RetainRuleT&& value) { SetRetainRule(std::forward<RetainRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>[Custom snapshot policies only]</b> The rule for enabling fast snapshot
     * restore.</p>
     */
    inline const FastRestoreRule& GetFastRestoreRule() const { return m_fastRestoreRule; }
    inline bool FastRestoreRuleHasBeenSet() const { return m_fastRestoreRuleHasBeenSet; }
    template<typename FastRestoreRuleT = FastRestoreRule>
    void SetFastRestoreRule(FastRestoreRuleT&& value) { m_fastRestoreRuleHasBeenSet = true; m_fastRestoreRule = std::forward<FastRestoreRuleT>(value); }
    template<typename FastRestoreRuleT = FastRestoreRule>
    Schedule& WithFastRestoreRule(FastRestoreRuleT&& value) { SetFastRestoreRule(std::forward<FastRestoreRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a rule for copying snapshots or AMIs across Regions.</p> 
     * <p>You can't specify cross-Region copy rules for policies that create snapshots
     * on an Outpost or in a Local Zone. If the policy creates snapshots in a Region,
     * then snapshots can be copied to up to three Regions or Outposts.</p> 
     */
    inline const Aws::Vector<CrossRegionCopyRule>& GetCrossRegionCopyRules() const { return m_crossRegionCopyRules; }
    inline bool CrossRegionCopyRulesHasBeenSet() const { return m_crossRegionCopyRulesHasBeenSet; }
    template<typename CrossRegionCopyRulesT = Aws::Vector<CrossRegionCopyRule>>
    void SetCrossRegionCopyRules(CrossRegionCopyRulesT&& value) { m_crossRegionCopyRulesHasBeenSet = true; m_crossRegionCopyRules = std::forward<CrossRegionCopyRulesT>(value); }
    template<typename CrossRegionCopyRulesT = Aws::Vector<CrossRegionCopyRule>>
    Schedule& WithCrossRegionCopyRules(CrossRegionCopyRulesT&& value) { SetCrossRegionCopyRules(std::forward<CrossRegionCopyRulesT>(value)); return *this;}
    template<typename CrossRegionCopyRulesT = CrossRegionCopyRule>
    Schedule& AddCrossRegionCopyRules(CrossRegionCopyRulesT&& value) { m_crossRegionCopyRulesHasBeenSet = true; m_crossRegionCopyRules.emplace_back(std::forward<CrossRegionCopyRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> <b>[Custom snapshot policies only]</b> The rule for sharing snapshots with
     * other Amazon Web Services accounts.</p>
     */
    inline const Aws::Vector<ShareRule>& GetShareRules() const { return m_shareRules; }
    inline bool ShareRulesHasBeenSet() const { return m_shareRulesHasBeenSet; }
    template<typename ShareRulesT = Aws::Vector<ShareRule>>
    void SetShareRules(ShareRulesT&& value) { m_shareRulesHasBeenSet = true; m_shareRules = std::forward<ShareRulesT>(value); }
    template<typename ShareRulesT = Aws::Vector<ShareRule>>
    Schedule& WithShareRules(ShareRulesT&& value) { SetShareRules(std::forward<ShareRulesT>(value)); return *this;}
    template<typename ShareRulesT = ShareRule>
    Schedule& AddShareRules(ShareRulesT&& value) { m_shareRulesHasBeenSet = true; m_shareRules.emplace_back(std::forward<ShareRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> <b>[Custom AMI policies only]</b> The AMI deprecation rule for the
     * schedule.</p>
     */
    inline const DeprecateRule& GetDeprecateRule() const { return m_deprecateRule; }
    inline bool DeprecateRuleHasBeenSet() const { return m_deprecateRuleHasBeenSet; }
    template<typename DeprecateRuleT = DeprecateRule>
    void SetDeprecateRule(DeprecateRuleT&& value) { m_deprecateRuleHasBeenSet = true; m_deprecateRule = std::forward<DeprecateRuleT>(value); }
    template<typename DeprecateRuleT = DeprecateRule>
    Schedule& WithDeprecateRule(DeprecateRuleT&& value) { SetDeprecateRule(std::forward<DeprecateRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>[Custom snapshot policies that target volumes only]</b> The snapshot
     * archiving rule for the schedule. When you specify an archiving rule, snapshots
     * are automatically moved from the standard tier to the archive tier once the
     * schedule's retention threshold is met. Snapshots are then retained in the
     * archive tier for the archive retention period that you specify. </p> <p>For more
     * information about using snapshot archiving, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshot-ami-policy.html#dlm-archive">Considerations
     * for snapshot lifecycle policies</a>.</p>
     */
    inline const ArchiveRule& GetArchiveRule() const { return m_archiveRule; }
    inline bool ArchiveRuleHasBeenSet() const { return m_archiveRuleHasBeenSet; }
    template<typename ArchiveRuleT = ArchiveRule>
    void SetArchiveRule(ArchiveRuleT&& value) { m_archiveRuleHasBeenSet = true; m_archiveRule = std::forward<ArchiveRuleT>(value); }
    template<typename ArchiveRuleT = ArchiveRule>
    Schedule& WithArchiveRule(ArchiveRuleT&& value) { SetArchiveRule(std::forward<ArchiveRuleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_copyTags{false};
    bool m_copyTagsHasBeenSet = false;

    Aws::Vector<Tag> m_tagsToAdd;
    bool m_tagsToAddHasBeenSet = false;

    Aws::Vector<Tag> m_variableTags;
    bool m_variableTagsHasBeenSet = false;

    CreateRule m_createRule;
    bool m_createRuleHasBeenSet = false;

    RetainRule m_retainRule;
    bool m_retainRuleHasBeenSet = false;

    FastRestoreRule m_fastRestoreRule;
    bool m_fastRestoreRuleHasBeenSet = false;

    Aws::Vector<CrossRegionCopyRule> m_crossRegionCopyRules;
    bool m_crossRegionCopyRulesHasBeenSet = false;

    Aws::Vector<ShareRule> m_shareRules;
    bool m_shareRulesHasBeenSet = false;

    DeprecateRule m_deprecateRule;
    bool m_deprecateRuleHasBeenSet = false;

    ArchiveRule m_archiveRule;
    bool m_archiveRuleHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
