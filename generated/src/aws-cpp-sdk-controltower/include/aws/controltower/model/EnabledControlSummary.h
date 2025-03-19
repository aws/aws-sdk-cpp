/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controltower/model/DriftStatusSummary.h>
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
   * <p>Returns a summary of information about an enabled control.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/EnabledControlSummary">AWS
   * API Reference</a></p>
   */
  class EnabledControlSummary
  {
  public:
    AWS_CONTROLTOWER_API EnabledControlSummary() = default;
    AWS_CONTROLTOWER_API EnabledControlSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API EnabledControlSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the enabled control.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    EnabledControlSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>controlIdentifier</code> of the enabled control.</p>
     */
    inline const Aws::String& GetControlIdentifier() const { return m_controlIdentifier; }
    inline bool ControlIdentifierHasBeenSet() const { return m_controlIdentifierHasBeenSet; }
    template<typename ControlIdentifierT = Aws::String>
    void SetControlIdentifier(ControlIdentifierT&& value) { m_controlIdentifierHasBeenSet = true; m_controlIdentifier = std::forward<ControlIdentifierT>(value); }
    template<typename ControlIdentifierT = Aws::String>
    EnabledControlSummary& WithControlIdentifier(ControlIdentifierT&& value) { SetControlIdentifier(std::forward<ControlIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The drift status of the enabled control.</p>
     */
    inline const DriftStatusSummary& GetDriftStatusSummary() const { return m_driftStatusSummary; }
    inline bool DriftStatusSummaryHasBeenSet() const { return m_driftStatusSummaryHasBeenSet; }
    template<typename DriftStatusSummaryT = DriftStatusSummary>
    void SetDriftStatusSummary(DriftStatusSummaryT&& value) { m_driftStatusSummaryHasBeenSet = true; m_driftStatusSummary = std::forward<DriftStatusSummaryT>(value); }
    template<typename DriftStatusSummaryT = DriftStatusSummary>
    EnabledControlSummary& WithDriftStatusSummary(DriftStatusSummaryT&& value) { SetDriftStatusSummary(std::forward<DriftStatusSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description of the status of the enabled control.</p>
     */
    inline const EnablementStatusSummary& GetStatusSummary() const { return m_statusSummary; }
    inline bool StatusSummaryHasBeenSet() const { return m_statusSummaryHasBeenSet; }
    template<typename StatusSummaryT = EnablementStatusSummary>
    void SetStatusSummary(StatusSummaryT&& value) { m_statusSummaryHasBeenSet = true; m_statusSummary = std::forward<StatusSummaryT>(value); }
    template<typename StatusSummaryT = EnablementStatusSummary>
    EnabledControlSummary& WithStatusSummary(StatusSummaryT&& value) { SetStatusSummary(std::forward<StatusSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the organizational unit.</p>
     */
    inline const Aws::String& GetTargetIdentifier() const { return m_targetIdentifier; }
    inline bool TargetIdentifierHasBeenSet() const { return m_targetIdentifierHasBeenSet; }
    template<typename TargetIdentifierT = Aws::String>
    void SetTargetIdentifier(TargetIdentifierT&& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = std::forward<TargetIdentifierT>(value); }
    template<typename TargetIdentifierT = Aws::String>
    EnabledControlSummary& WithTargetIdentifier(TargetIdentifierT&& value) { SetTargetIdentifier(std::forward<TargetIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_controlIdentifier;
    bool m_controlIdentifierHasBeenSet = false;

    DriftStatusSummary m_driftStatusSummary;
    bool m_driftStatusSummaryHasBeenSet = false;

    EnablementStatusSummary m_statusSummary;
    bool m_statusSummaryHasBeenSet = false;

    Aws::String m_targetIdentifier;
    bool m_targetIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
