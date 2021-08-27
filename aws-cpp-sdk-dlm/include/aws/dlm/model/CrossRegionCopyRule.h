/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dlm/model/CrossRegionCopyRetainRule.h>
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
   * <p>Specifies a rule for cross-Region snapshot copies.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/CrossRegionCopyRule">AWS
   * API Reference</a></p>
   */
  class AWS_DLM_API CrossRegionCopyRule
  {
  public:
    CrossRegionCopyRule();
    CrossRegionCopyRule(Aws::Utils::Json::JsonView jsonValue);
    CrossRegionCopyRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The target Region.</p>
     */
    inline const Aws::String& GetTargetRegion() const{ return m_targetRegion; }

    /**
     * <p>The target Region.</p>
     */
    inline bool TargetRegionHasBeenSet() const { return m_targetRegionHasBeenSet; }

    /**
     * <p>The target Region.</p>
     */
    inline void SetTargetRegion(const Aws::String& value) { m_targetRegionHasBeenSet = true; m_targetRegion = value; }

    /**
     * <p>The target Region.</p>
     */
    inline void SetTargetRegion(Aws::String&& value) { m_targetRegionHasBeenSet = true; m_targetRegion = std::move(value); }

    /**
     * <p>The target Region.</p>
     */
    inline void SetTargetRegion(const char* value) { m_targetRegionHasBeenSet = true; m_targetRegion.assign(value); }

    /**
     * <p>The target Region.</p>
     */
    inline CrossRegionCopyRule& WithTargetRegion(const Aws::String& value) { SetTargetRegion(value); return *this;}

    /**
     * <p>The target Region.</p>
     */
    inline CrossRegionCopyRule& WithTargetRegion(Aws::String&& value) { SetTargetRegion(std::move(value)); return *this;}

    /**
     * <p>The target Region.</p>
     */
    inline CrossRegionCopyRule& WithTargetRegion(const char* value) { SetTargetRegion(value); return *this;}


    /**
     * <p>To encrypt a copy of an unencrypted snapshot if encryption by default is not
     * enabled, enable encryption using this parameter. Copies of encrypted snapshots
     * are encrypted, even if this parameter is false or if encryption by default is
     * not enabled.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>To encrypt a copy of an unencrypted snapshot if encryption by default is not
     * enabled, enable encryption using this parameter. Copies of encrypted snapshots
     * are encrypted, even if this parameter is false or if encryption by default is
     * not enabled.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>To encrypt a copy of an unencrypted snapshot if encryption by default is not
     * enabled, enable encryption using this parameter. Copies of encrypted snapshots
     * are encrypted, even if this parameter is false or if encryption by default is
     * not enabled.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>To encrypt a copy of an unencrypted snapshot if encryption by default is not
     * enabled, enable encryption using this parameter. Copies of encrypted snapshots
     * are encrypted, even if this parameter is false or if encryption by default is
     * not enabled.</p>
     */
    inline CrossRegionCopyRule& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS customer master key (CMK) to
     * use for EBS encryption. If this parameter is not specified, your AWS managed CMK
     * for EBS is used.</p>
     */
    inline const Aws::String& GetCmkArn() const{ return m_cmkArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS customer master key (CMK) to
     * use for EBS encryption. If this parameter is not specified, your AWS managed CMK
     * for EBS is used.</p>
     */
    inline bool CmkArnHasBeenSet() const { return m_cmkArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS customer master key (CMK) to
     * use for EBS encryption. If this parameter is not specified, your AWS managed CMK
     * for EBS is used.</p>
     */
    inline void SetCmkArn(const Aws::String& value) { m_cmkArnHasBeenSet = true; m_cmkArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS customer master key (CMK) to
     * use for EBS encryption. If this parameter is not specified, your AWS managed CMK
     * for EBS is used.</p>
     */
    inline void SetCmkArn(Aws::String&& value) { m_cmkArnHasBeenSet = true; m_cmkArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS customer master key (CMK) to
     * use for EBS encryption. If this parameter is not specified, your AWS managed CMK
     * for EBS is used.</p>
     */
    inline void SetCmkArn(const char* value) { m_cmkArnHasBeenSet = true; m_cmkArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS customer master key (CMK) to
     * use for EBS encryption. If this parameter is not specified, your AWS managed CMK
     * for EBS is used.</p>
     */
    inline CrossRegionCopyRule& WithCmkArn(const Aws::String& value) { SetCmkArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS customer master key (CMK) to
     * use for EBS encryption. If this parameter is not specified, your AWS managed CMK
     * for EBS is used.</p>
     */
    inline CrossRegionCopyRule& WithCmkArn(Aws::String&& value) { SetCmkArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS customer master key (CMK) to
     * use for EBS encryption. If this parameter is not specified, your AWS managed CMK
     * for EBS is used.</p>
     */
    inline CrossRegionCopyRule& WithCmkArn(const char* value) { SetCmkArn(value); return *this;}


    /**
     * <p>Copy all user-defined tags from the source snapshot to the copied
     * snapshot.</p>
     */
    inline bool GetCopyTags() const{ return m_copyTags; }

    /**
     * <p>Copy all user-defined tags from the source snapshot to the copied
     * snapshot.</p>
     */
    inline bool CopyTagsHasBeenSet() const { return m_copyTagsHasBeenSet; }

    /**
     * <p>Copy all user-defined tags from the source snapshot to the copied
     * snapshot.</p>
     */
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }

    /**
     * <p>Copy all user-defined tags from the source snapshot to the copied
     * snapshot.</p>
     */
    inline CrossRegionCopyRule& WithCopyTags(bool value) { SetCopyTags(value); return *this;}


    /**
     * <p>The retention rule.</p>
     */
    inline const CrossRegionCopyRetainRule& GetRetainRule() const{ return m_retainRule; }

    /**
     * <p>The retention rule.</p>
     */
    inline bool RetainRuleHasBeenSet() const { return m_retainRuleHasBeenSet; }

    /**
     * <p>The retention rule.</p>
     */
    inline void SetRetainRule(const CrossRegionCopyRetainRule& value) { m_retainRuleHasBeenSet = true; m_retainRule = value; }

    /**
     * <p>The retention rule.</p>
     */
    inline void SetRetainRule(CrossRegionCopyRetainRule&& value) { m_retainRuleHasBeenSet = true; m_retainRule = std::move(value); }

    /**
     * <p>The retention rule.</p>
     */
    inline CrossRegionCopyRule& WithRetainRule(const CrossRegionCopyRetainRule& value) { SetRetainRule(value); return *this;}

    /**
     * <p>The retention rule.</p>
     */
    inline CrossRegionCopyRule& WithRetainRule(CrossRegionCopyRetainRule&& value) { SetRetainRule(std::move(value)); return *this;}

  private:

    Aws::String m_targetRegion;
    bool m_targetRegionHasBeenSet;

    bool m_encrypted;
    bool m_encryptedHasBeenSet;

    Aws::String m_cmkArn;
    bool m_cmkArnHasBeenSet;

    bool m_copyTags;
    bool m_copyTagsHasBeenSet;

    CrossRegionCopyRetainRule m_retainRule;
    bool m_retainRuleHasBeenSet;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
