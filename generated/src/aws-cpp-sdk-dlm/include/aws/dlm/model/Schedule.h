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
    AWS_DLM_API Schedule();
    AWS_DLM_API Schedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Schedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the schedule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Schedule& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Schedule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Schedule& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Copy all user-defined tags on a source volume to snapshots of the volume
     * created by this policy.</p>
     */
    inline bool GetCopyTags() const{ return m_copyTags; }
    inline bool CopyTagsHasBeenSet() const { return m_copyTagsHasBeenSet; }
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }
    inline Schedule& WithCopyTags(bool value) { SetCopyTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to policy-created resources. These user-defined tags are in
     * addition to the Amazon Web Services-added lifecycle tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTagsToAdd() const{ return m_tagsToAdd; }
    inline bool TagsToAddHasBeenSet() const { return m_tagsToAddHasBeenSet; }
    inline void SetTagsToAdd(const Aws::Vector<Tag>& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd = value; }
    inline void SetTagsToAdd(Aws::Vector<Tag>&& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd = std::move(value); }
    inline Schedule& WithTagsToAdd(const Aws::Vector<Tag>& value) { SetTagsToAdd(value); return *this;}
    inline Schedule& WithTagsToAdd(Aws::Vector<Tag>&& value) { SetTagsToAdd(std::move(value)); return *this;}
    inline Schedule& AddTagsToAdd(const Tag& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd.push_back(value); return *this; }
    inline Schedule& AddTagsToAdd(Tag&& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd.push_back(std::move(value)); return *this; }
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
    inline const Aws::Vector<Tag>& GetVariableTags() const{ return m_variableTags; }
    inline bool VariableTagsHasBeenSet() const { return m_variableTagsHasBeenSet; }
    inline void SetVariableTags(const Aws::Vector<Tag>& value) { m_variableTagsHasBeenSet = true; m_variableTags = value; }
    inline void SetVariableTags(Aws::Vector<Tag>&& value) { m_variableTagsHasBeenSet = true; m_variableTags = std::move(value); }
    inline Schedule& WithVariableTags(const Aws::Vector<Tag>& value) { SetVariableTags(value); return *this;}
    inline Schedule& WithVariableTags(Aws::Vector<Tag>&& value) { SetVariableTags(std::move(value)); return *this;}
    inline Schedule& AddVariableTags(const Tag& value) { m_variableTagsHasBeenSet = true; m_variableTags.push_back(value); return *this; }
    inline Schedule& AddVariableTags(Tag&& value) { m_variableTagsHasBeenSet = true; m_variableTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The creation rule.</p>
     */
    inline const CreateRule& GetCreateRule() const{ return m_createRule; }
    inline bool CreateRuleHasBeenSet() const { return m_createRuleHasBeenSet; }
    inline void SetCreateRule(const CreateRule& value) { m_createRuleHasBeenSet = true; m_createRule = value; }
    inline void SetCreateRule(CreateRule&& value) { m_createRuleHasBeenSet = true; m_createRule = std::move(value); }
    inline Schedule& WithCreateRule(const CreateRule& value) { SetCreateRule(value); return *this;}
    inline Schedule& WithCreateRule(CreateRule&& value) { SetCreateRule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention rule for snapshots or AMIs created by the policy.</p>
     */
    inline const RetainRule& GetRetainRule() const{ return m_retainRule; }
    inline bool RetainRuleHasBeenSet() const { return m_retainRuleHasBeenSet; }
    inline void SetRetainRule(const RetainRule& value) { m_retainRuleHasBeenSet = true; m_retainRule = value; }
    inline void SetRetainRule(RetainRule&& value) { m_retainRuleHasBeenSet = true; m_retainRule = std::move(value); }
    inline Schedule& WithRetainRule(const RetainRule& value) { SetRetainRule(value); return *this;}
    inline Schedule& WithRetainRule(RetainRule&& value) { SetRetainRule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>[Custom snapshot policies only]</b> The rule for enabling fast snapshot
     * restore.</p>
     */
    inline const FastRestoreRule& GetFastRestoreRule() const{ return m_fastRestoreRule; }
    inline bool FastRestoreRuleHasBeenSet() const { return m_fastRestoreRuleHasBeenSet; }
    inline void SetFastRestoreRule(const FastRestoreRule& value) { m_fastRestoreRuleHasBeenSet = true; m_fastRestoreRule = value; }
    inline void SetFastRestoreRule(FastRestoreRule&& value) { m_fastRestoreRuleHasBeenSet = true; m_fastRestoreRule = std::move(value); }
    inline Schedule& WithFastRestoreRule(const FastRestoreRule& value) { SetFastRestoreRule(value); return *this;}
    inline Schedule& WithFastRestoreRule(FastRestoreRule&& value) { SetFastRestoreRule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a rule for copying snapshots or AMIs across Regions.</p> 
     * <p>You can't specify cross-Region copy rules for policies that create snapshots
     * on an Outpost or in a Local Zone. If the policy creates snapshots in a Region,
     * then snapshots can be copied to up to three Regions or Outposts.</p> 
     */
    inline const Aws::Vector<CrossRegionCopyRule>& GetCrossRegionCopyRules() const{ return m_crossRegionCopyRules; }
    inline bool CrossRegionCopyRulesHasBeenSet() const { return m_crossRegionCopyRulesHasBeenSet; }
    inline void SetCrossRegionCopyRules(const Aws::Vector<CrossRegionCopyRule>& value) { m_crossRegionCopyRulesHasBeenSet = true; m_crossRegionCopyRules = value; }
    inline void SetCrossRegionCopyRules(Aws::Vector<CrossRegionCopyRule>&& value) { m_crossRegionCopyRulesHasBeenSet = true; m_crossRegionCopyRules = std::move(value); }
    inline Schedule& WithCrossRegionCopyRules(const Aws::Vector<CrossRegionCopyRule>& value) { SetCrossRegionCopyRules(value); return *this;}
    inline Schedule& WithCrossRegionCopyRules(Aws::Vector<CrossRegionCopyRule>&& value) { SetCrossRegionCopyRules(std::move(value)); return *this;}
    inline Schedule& AddCrossRegionCopyRules(const CrossRegionCopyRule& value) { m_crossRegionCopyRulesHasBeenSet = true; m_crossRegionCopyRules.push_back(value); return *this; }
    inline Schedule& AddCrossRegionCopyRules(CrossRegionCopyRule&& value) { m_crossRegionCopyRulesHasBeenSet = true; m_crossRegionCopyRules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> <b>[Custom snapshot policies only]</b> The rule for sharing snapshots with
     * other Amazon Web Services accounts.</p>
     */
    inline const Aws::Vector<ShareRule>& GetShareRules() const{ return m_shareRules; }
    inline bool ShareRulesHasBeenSet() const { return m_shareRulesHasBeenSet; }
    inline void SetShareRules(const Aws::Vector<ShareRule>& value) { m_shareRulesHasBeenSet = true; m_shareRules = value; }
    inline void SetShareRules(Aws::Vector<ShareRule>&& value) { m_shareRulesHasBeenSet = true; m_shareRules = std::move(value); }
    inline Schedule& WithShareRules(const Aws::Vector<ShareRule>& value) { SetShareRules(value); return *this;}
    inline Schedule& WithShareRules(Aws::Vector<ShareRule>&& value) { SetShareRules(std::move(value)); return *this;}
    inline Schedule& AddShareRules(const ShareRule& value) { m_shareRulesHasBeenSet = true; m_shareRules.push_back(value); return *this; }
    inline Schedule& AddShareRules(ShareRule&& value) { m_shareRulesHasBeenSet = true; m_shareRules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> <b>[Custom AMI policies only]</b> The AMI deprecation rule for the
     * schedule.</p>
     */
    inline const DeprecateRule& GetDeprecateRule() const{ return m_deprecateRule; }
    inline bool DeprecateRuleHasBeenSet() const { return m_deprecateRuleHasBeenSet; }
    inline void SetDeprecateRule(const DeprecateRule& value) { m_deprecateRuleHasBeenSet = true; m_deprecateRule = value; }
    inline void SetDeprecateRule(DeprecateRule&& value) { m_deprecateRuleHasBeenSet = true; m_deprecateRule = std::move(value); }
    inline Schedule& WithDeprecateRule(const DeprecateRule& value) { SetDeprecateRule(value); return *this;}
    inline Schedule& WithDeprecateRule(DeprecateRule&& value) { SetDeprecateRule(std::move(value)); return *this;}
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
    inline const ArchiveRule& GetArchiveRule() const{ return m_archiveRule; }
    inline bool ArchiveRuleHasBeenSet() const { return m_archiveRuleHasBeenSet; }
    inline void SetArchiveRule(const ArchiveRule& value) { m_archiveRuleHasBeenSet = true; m_archiveRule = value; }
    inline void SetArchiveRule(ArchiveRule&& value) { m_archiveRuleHasBeenSet = true; m_archiveRule = std::move(value); }
    inline Schedule& WithArchiveRule(const ArchiveRule& value) { SetArchiveRule(value); return *this;}
    inline Schedule& WithArchiveRule(ArchiveRule&& value) { SetArchiveRule(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_copyTags;
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
