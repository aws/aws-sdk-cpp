﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dlm/model/CrossRegionCopyRetainRule.h>
#include <aws/dlm/model/CrossRegionCopyDeprecateRule.h>
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
   * <p> <b>[Custom snapshot and AMI policies only]</b> Specifies a cross-Region copy
   * rule for a snapshot and AMI policies.</p>  <p>To specify a cross-Region
   * copy action for event-based polices, use <a
   * href="https://docs.aws.amazon.com/dlm/latest/APIReference/API_CrossRegionCopyAction.html">CrossRegionCopyAction</a>.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/CrossRegionCopyRule">AWS
   * API Reference</a></p>
   */
  class CrossRegionCopyRule
  {
  public:
    AWS_DLM_API CrossRegionCopyRule();
    AWS_DLM_API CrossRegionCopyRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API CrossRegionCopyRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     *  <p>Use this parameter for AMI policies only. For snapshot policies, use
     * <b>Target</b> instead. For snapshot policies created before the <b>Target</b>
     * parameter was introduced, this parameter indicates the target Region for
     * snapshot copies.</p> <p/>  <p> <b>[Custom AMI policies only]</b> The
     * target Region or the Amazon Resource Name (ARN) of the target Outpost for the
     * snapshot copies.</p>
     */
    inline const Aws::String& GetTargetRegion() const{ return m_targetRegion; }
    inline bool TargetRegionHasBeenSet() const { return m_targetRegionHasBeenSet; }
    inline void SetTargetRegion(const Aws::String& value) { m_targetRegionHasBeenSet = true; m_targetRegion = value; }
    inline void SetTargetRegion(Aws::String&& value) { m_targetRegionHasBeenSet = true; m_targetRegion = std::move(value); }
    inline void SetTargetRegion(const char* value) { m_targetRegionHasBeenSet = true; m_targetRegion.assign(value); }
    inline CrossRegionCopyRule& WithTargetRegion(const Aws::String& value) { SetTargetRegion(value); return *this;}
    inline CrossRegionCopyRule& WithTargetRegion(Aws::String&& value) { SetTargetRegion(std::move(value)); return *this;}
    inline CrossRegionCopyRule& WithTargetRegion(const char* value) { SetTargetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     *  <p>Use this parameter for snapshot policies only. For AMI policies, use
     * <b>TargetRegion</b> instead.</p>  <p> <b>[Custom snapshot policies
     * only]</b> The target Region or the Amazon Resource Name (ARN) of the target
     * Outpost for the snapshot copies.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }
    inline CrossRegionCopyRule& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}
    inline CrossRegionCopyRule& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}
    inline CrossRegionCopyRule& WithTarget(const char* value) { SetTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>To encrypt a copy of an unencrypted snapshot if encryption by default is not
     * enabled, enable encryption using this parameter. Copies of encrypted snapshots
     * are encrypted, even if this parameter is false or if encryption by default is
     * not enabled.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline CrossRegionCopyRule& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to use for EBS encryption. If
     * this parameter is not specified, the default KMS key for the account is
     * used.</p>
     */
    inline const Aws::String& GetCmkArn() const{ return m_cmkArn; }
    inline bool CmkArnHasBeenSet() const { return m_cmkArnHasBeenSet; }
    inline void SetCmkArn(const Aws::String& value) { m_cmkArnHasBeenSet = true; m_cmkArn = value; }
    inline void SetCmkArn(Aws::String&& value) { m_cmkArnHasBeenSet = true; m_cmkArn = std::move(value); }
    inline void SetCmkArn(const char* value) { m_cmkArnHasBeenSet = true; m_cmkArn.assign(value); }
    inline CrossRegionCopyRule& WithCmkArn(const Aws::String& value) { SetCmkArn(value); return *this;}
    inline CrossRegionCopyRule& WithCmkArn(Aws::String&& value) { SetCmkArn(std::move(value)); return *this;}
    inline CrossRegionCopyRule& WithCmkArn(const char* value) { SetCmkArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to copy all user-defined tags from the source snapshot or
     * AMI to the cross-Region copy.</p>
     */
    inline bool GetCopyTags() const{ return m_copyTags; }
    inline bool CopyTagsHasBeenSet() const { return m_copyTagsHasBeenSet; }
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }
    inline CrossRegionCopyRule& WithCopyTags(bool value) { SetCopyTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention rule that indicates how long the cross-Region snapshot or AMI
     * copies are to be retained in the destination Region.</p>
     */
    inline const CrossRegionCopyRetainRule& GetRetainRule() const{ return m_retainRule; }
    inline bool RetainRuleHasBeenSet() const { return m_retainRuleHasBeenSet; }
    inline void SetRetainRule(const CrossRegionCopyRetainRule& value) { m_retainRuleHasBeenSet = true; m_retainRule = value; }
    inline void SetRetainRule(CrossRegionCopyRetainRule&& value) { m_retainRuleHasBeenSet = true; m_retainRule = std::move(value); }
    inline CrossRegionCopyRule& WithRetainRule(const CrossRegionCopyRetainRule& value) { SetRetainRule(value); return *this;}
    inline CrossRegionCopyRule& WithRetainRule(CrossRegionCopyRetainRule&& value) { SetRetainRule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>[Custom AMI policies only]</b> The AMI deprecation rule for cross-Region
     * AMI copies created by the rule.</p>
     */
    inline const CrossRegionCopyDeprecateRule& GetDeprecateRule() const{ return m_deprecateRule; }
    inline bool DeprecateRuleHasBeenSet() const { return m_deprecateRuleHasBeenSet; }
    inline void SetDeprecateRule(const CrossRegionCopyDeprecateRule& value) { m_deprecateRuleHasBeenSet = true; m_deprecateRule = value; }
    inline void SetDeprecateRule(CrossRegionCopyDeprecateRule&& value) { m_deprecateRuleHasBeenSet = true; m_deprecateRule = std::move(value); }
    inline CrossRegionCopyRule& WithDeprecateRule(const CrossRegionCopyDeprecateRule& value) { SetDeprecateRule(value); return *this;}
    inline CrossRegionCopyRule& WithDeprecateRule(CrossRegionCopyDeprecateRule&& value) { SetDeprecateRule(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetRegion;
    bool m_targetRegionHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;

    Aws::String m_cmkArn;
    bool m_cmkArnHasBeenSet = false;

    bool m_copyTags;
    bool m_copyTagsHasBeenSet = false;

    CrossRegionCopyRetainRule m_retainRule;
    bool m_retainRuleHasBeenSet = false;

    CrossRegionCopyDeprecateRule m_deprecateRule;
    bool m_deprecateRuleHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
