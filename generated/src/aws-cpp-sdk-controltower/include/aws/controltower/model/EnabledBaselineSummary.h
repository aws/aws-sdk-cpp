/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controltower/model/EnabledBaselineDriftStatusSummary.h>
#include <aws/controltower/model/EnablementStatusSummary.h>
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
namespace ControlTower
{
namespace Model
{

  /**
   * <p>Returns a summary of information about an <code>EnabledBaseline</code>
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/EnabledBaselineSummary">AWS
   * API Reference</a></p>
   */
  class EnabledBaselineSummary
  {
  public:
    AWS_CONTROLTOWER_API EnabledBaselineSummary() = default;
    AWS_CONTROLTOWER_API EnabledBaselineSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API EnabledBaselineSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the <code>EnabledBaseline</code> resource</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    EnabledBaselineSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific baseline that is enabled as part of the
     * <code>EnabledBaseline</code> resource.</p>
     */
    inline const Aws::String& GetBaselineIdentifier() const { return m_baselineIdentifier; }
    inline bool BaselineIdentifierHasBeenSet() const { return m_baselineIdentifierHasBeenSet; }
    template<typename BaselineIdentifierT = Aws::String>
    void SetBaselineIdentifier(BaselineIdentifierT&& value) { m_baselineIdentifierHasBeenSet = true; m_baselineIdentifier = std::forward<BaselineIdentifierT>(value); }
    template<typename BaselineIdentifierT = Aws::String>
    EnabledBaselineSummary& WithBaselineIdentifier(BaselineIdentifierT&& value) { SetBaselineIdentifier(std::forward<BaselineIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The enabled version of the baseline.</p>
     */
    inline const Aws::String& GetBaselineVersion() const { return m_baselineVersion; }
    inline bool BaselineVersionHasBeenSet() const { return m_baselineVersionHasBeenSet; }
    template<typename BaselineVersionT = Aws::String>
    void SetBaselineVersion(BaselineVersionT&& value) { m_baselineVersionHasBeenSet = true; m_baselineVersion = std::forward<BaselineVersionT>(value); }
    template<typename BaselineVersionT = Aws::String>
    EnabledBaselineSummary& WithBaselineVersion(BaselineVersionT&& value) { SetBaselineVersion(std::forward<BaselineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The drift status of the enabled baseline.</p>
     */
    inline const EnabledBaselineDriftStatusSummary& GetDriftStatusSummary() const { return m_driftStatusSummary; }
    inline bool DriftStatusSummaryHasBeenSet() const { return m_driftStatusSummaryHasBeenSet; }
    template<typename DriftStatusSummaryT = EnabledBaselineDriftStatusSummary>
    void SetDriftStatusSummary(DriftStatusSummaryT&& value) { m_driftStatusSummaryHasBeenSet = true; m_driftStatusSummary = std::forward<DriftStatusSummaryT>(value); }
    template<typename DriftStatusSummaryT = EnabledBaselineDriftStatusSummary>
    EnabledBaselineSummary& WithDriftStatusSummary(DriftStatusSummaryT&& value) { SetDriftStatusSummary(std::forward<DriftStatusSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ARN that represents an object returned by
     * <code>ListEnabledBaseline</code>, to describe an enabled baseline.</p>
     */
    inline const Aws::String& GetParentIdentifier() const { return m_parentIdentifier; }
    inline bool ParentIdentifierHasBeenSet() const { return m_parentIdentifierHasBeenSet; }
    template<typename ParentIdentifierT = Aws::String>
    void SetParentIdentifier(ParentIdentifierT&& value) { m_parentIdentifierHasBeenSet = true; m_parentIdentifier = std::forward<ParentIdentifierT>(value); }
    template<typename ParentIdentifierT = Aws::String>
    EnabledBaselineSummary& WithParentIdentifier(ParentIdentifierT&& value) { SetParentIdentifier(std::forward<ParentIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const EnablementStatusSummary& GetStatusSummary() const { return m_statusSummary; }
    inline bool StatusSummaryHasBeenSet() const { return m_statusSummaryHasBeenSet; }
    template<typename StatusSummaryT = EnablementStatusSummary>
    void SetStatusSummary(StatusSummaryT&& value) { m_statusSummaryHasBeenSet = true; m_statusSummary = std::forward<StatusSummaryT>(value); }
    template<typename StatusSummaryT = EnablementStatusSummary>
    EnabledBaselineSummary& WithStatusSummary(StatusSummaryT&& value) { SetStatusSummary(std::forward<StatusSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target upon which the baseline is enabled.</p>
     */
    inline const Aws::String& GetTargetIdentifier() const { return m_targetIdentifier; }
    inline bool TargetIdentifierHasBeenSet() const { return m_targetIdentifierHasBeenSet; }
    template<typename TargetIdentifierT = Aws::String>
    void SetTargetIdentifier(TargetIdentifierT&& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = std::forward<TargetIdentifierT>(value); }
    template<typename TargetIdentifierT = Aws::String>
    EnabledBaselineSummary& WithTargetIdentifier(TargetIdentifierT&& value) { SetTargetIdentifier(std::forward<TargetIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_baselineIdentifier;
    bool m_baselineIdentifierHasBeenSet = false;

    Aws::String m_baselineVersion;
    bool m_baselineVersionHasBeenSet = false;

    EnabledBaselineDriftStatusSummary m_driftStatusSummary;
    bool m_driftStatusSummaryHasBeenSet = false;

    Aws::String m_parentIdentifier;
    bool m_parentIdentifierHasBeenSet = false;

    EnablementStatusSummary m_statusSummary;
    bool m_statusSummaryHasBeenSet = false;

    Aws::String m_targetIdentifier;
    bool m_targetIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
