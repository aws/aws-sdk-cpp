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
   * snapshot and AMI policies, use <a
   * href="https://docs.aws.amazon.com/dlm/latest/APIReference/API_CrossRegionCopyRule.html">CrossRegionCopyRule</a>.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/CrossRegionCopyAction">AWS
   * API Reference</a></p>
   */
  class CrossRegionCopyAction
  {
  public:
    AWS_DLM_API CrossRegionCopyAction() = default;
    AWS_DLM_API CrossRegionCopyAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API CrossRegionCopyAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The target Region.</p>
     */
    inline const Aws::String& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = Aws::String>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = Aws::String>
    CrossRegionCopyAction& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption settings for the copied snapshot.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    CrossRegionCopyAction& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CrossRegionCopyRetainRule& GetRetainRule() const { return m_retainRule; }
    inline bool RetainRuleHasBeenSet() const { return m_retainRuleHasBeenSet; }
    template<typename RetainRuleT = CrossRegionCopyRetainRule>
    void SetRetainRule(RetainRuleT&& value) { m_retainRuleHasBeenSet = true; m_retainRule = std::forward<RetainRuleT>(value); }
    template<typename RetainRuleT = CrossRegionCopyRetainRule>
    CrossRegionCopyAction& WithRetainRule(RetainRuleT&& value) { SetRetainRule(std::forward<RetainRuleT>(value)); return *this;}
    ///@}
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
