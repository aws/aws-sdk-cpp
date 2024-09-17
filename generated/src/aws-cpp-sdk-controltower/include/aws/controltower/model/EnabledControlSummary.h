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
    AWS_CONTROLTOWER_API EnabledControlSummary();
    AWS_CONTROLTOWER_API EnabledControlSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API EnabledControlSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the enabled control.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline EnabledControlSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline EnabledControlSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline EnabledControlSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>controlIdentifier</code> of the enabled control.</p>
     */
    inline const Aws::String& GetControlIdentifier() const{ return m_controlIdentifier; }
    inline bool ControlIdentifierHasBeenSet() const { return m_controlIdentifierHasBeenSet; }
    inline void SetControlIdentifier(const Aws::String& value) { m_controlIdentifierHasBeenSet = true; m_controlIdentifier = value; }
    inline void SetControlIdentifier(Aws::String&& value) { m_controlIdentifierHasBeenSet = true; m_controlIdentifier = std::move(value); }
    inline void SetControlIdentifier(const char* value) { m_controlIdentifierHasBeenSet = true; m_controlIdentifier.assign(value); }
    inline EnabledControlSummary& WithControlIdentifier(const Aws::String& value) { SetControlIdentifier(value); return *this;}
    inline EnabledControlSummary& WithControlIdentifier(Aws::String&& value) { SetControlIdentifier(std::move(value)); return *this;}
    inline EnabledControlSummary& WithControlIdentifier(const char* value) { SetControlIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The drift status of the enabled control.</p>
     */
    inline const DriftStatusSummary& GetDriftStatusSummary() const{ return m_driftStatusSummary; }
    inline bool DriftStatusSummaryHasBeenSet() const { return m_driftStatusSummaryHasBeenSet; }
    inline void SetDriftStatusSummary(const DriftStatusSummary& value) { m_driftStatusSummaryHasBeenSet = true; m_driftStatusSummary = value; }
    inline void SetDriftStatusSummary(DriftStatusSummary&& value) { m_driftStatusSummaryHasBeenSet = true; m_driftStatusSummary = std::move(value); }
    inline EnabledControlSummary& WithDriftStatusSummary(const DriftStatusSummary& value) { SetDriftStatusSummary(value); return *this;}
    inline EnabledControlSummary& WithDriftStatusSummary(DriftStatusSummary&& value) { SetDriftStatusSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description of the status of the enabled control.</p>
     */
    inline const EnablementStatusSummary& GetStatusSummary() const{ return m_statusSummary; }
    inline bool StatusSummaryHasBeenSet() const { return m_statusSummaryHasBeenSet; }
    inline void SetStatusSummary(const EnablementStatusSummary& value) { m_statusSummaryHasBeenSet = true; m_statusSummary = value; }
    inline void SetStatusSummary(EnablementStatusSummary&& value) { m_statusSummaryHasBeenSet = true; m_statusSummary = std::move(value); }
    inline EnabledControlSummary& WithStatusSummary(const EnablementStatusSummary& value) { SetStatusSummary(value); return *this;}
    inline EnabledControlSummary& WithStatusSummary(EnablementStatusSummary&& value) { SetStatusSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the organizational unit.</p>
     */
    inline const Aws::String& GetTargetIdentifier() const{ return m_targetIdentifier; }
    inline bool TargetIdentifierHasBeenSet() const { return m_targetIdentifierHasBeenSet; }
    inline void SetTargetIdentifier(const Aws::String& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = value; }
    inline void SetTargetIdentifier(Aws::String&& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = std::move(value); }
    inline void SetTargetIdentifier(const char* value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier.assign(value); }
    inline EnabledControlSummary& WithTargetIdentifier(const Aws::String& value) { SetTargetIdentifier(value); return *this;}
    inline EnabledControlSummary& WithTargetIdentifier(Aws::String&& value) { SetTargetIdentifier(std::move(value)); return *this;}
    inline EnabledControlSummary& WithTargetIdentifier(const char* value) { SetTargetIdentifier(value); return *this;}
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
