/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dlm/model/EncryptionConfiguration.h>
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
   * <p> <b>[Event-based policies only]</b> Specifies a cross-Region copy action for
   * event-based policies.</p>  <p>To specify a cross-Region copy rule for
   * snapshot and AMI policies, use <a>CrossRegionCopyRule</a>.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/CrossRegionCopyAction">AWS
   * API Reference</a></p>
   */
  class CrossRegionCopyAction
  {
  public:
    AWS_DLM_API CrossRegionCopyAction();
    AWS_DLM_API CrossRegionCopyAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API CrossRegionCopyAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The target Region.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p>The target Region.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The target Region.</p>
     */
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The target Region.</p>
     */
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The target Region.</p>
     */
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

    /**
     * <p>The target Region.</p>
     */
    inline CrossRegionCopyAction& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>The target Region.</p>
     */
    inline CrossRegionCopyAction& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p>The target Region.</p>
     */
    inline CrossRegionCopyAction& WithTarget(const char* value) { SetTarget(value); return *this;}


    /**
     * <p>The encryption settings for the copied snapshot.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }

    /**
     * <p>The encryption settings for the copied snapshot.</p>
     */
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }

    /**
     * <p>The encryption settings for the copied snapshot.</p>
     */
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }

    /**
     * <p>The encryption settings for the copied snapshot.</p>
     */
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }

    /**
     * <p>The encryption settings for the copied snapshot.</p>
     */
    inline CrossRegionCopyAction& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}

    /**
     * <p>The encryption settings for the copied snapshot.</p>
     */
    inline CrossRegionCopyAction& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}


    
    inline const CrossRegionCopyRetainRule& GetRetainRule() const{ return m_retainRule; }

    
    inline bool RetainRuleHasBeenSet() const { return m_retainRuleHasBeenSet; }

    
    inline void SetRetainRule(const CrossRegionCopyRetainRule& value) { m_retainRuleHasBeenSet = true; m_retainRule = value; }

    
    inline void SetRetainRule(CrossRegionCopyRetainRule&& value) { m_retainRuleHasBeenSet = true; m_retainRule = std::move(value); }

    
    inline CrossRegionCopyAction& WithRetainRule(const CrossRegionCopyRetainRule& value) { SetRetainRule(value); return *this;}

    
    inline CrossRegionCopyAction& WithRetainRule(CrossRegionCopyRetainRule&& value) { SetRetainRule(std::move(value)); return *this;}

  private:

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    CrossRegionCopyRetainRule m_retainRule;
    bool m_retainRuleHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
