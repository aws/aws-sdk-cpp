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


    /**
     * <p>The ARN of the enabled control.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the enabled control.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the enabled control.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the enabled control.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the enabled control.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the enabled control.</p>
     */
    inline EnabledControlSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the enabled control.</p>
     */
    inline EnabledControlSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the enabled control.</p>
     */
    inline EnabledControlSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The <code>controlIdentifier</code> of the enabled control.</p>
     */
    inline const Aws::String& GetControlIdentifier() const{ return m_controlIdentifier; }

    /**
     * <p>The <code>controlIdentifier</code> of the enabled control.</p>
     */
    inline bool ControlIdentifierHasBeenSet() const { return m_controlIdentifierHasBeenSet; }

    /**
     * <p>The <code>controlIdentifier</code> of the enabled control.</p>
     */
    inline void SetControlIdentifier(const Aws::String& value) { m_controlIdentifierHasBeenSet = true; m_controlIdentifier = value; }

    /**
     * <p>The <code>controlIdentifier</code> of the enabled control.</p>
     */
    inline void SetControlIdentifier(Aws::String&& value) { m_controlIdentifierHasBeenSet = true; m_controlIdentifier = std::move(value); }

    /**
     * <p>The <code>controlIdentifier</code> of the enabled control.</p>
     */
    inline void SetControlIdentifier(const char* value) { m_controlIdentifierHasBeenSet = true; m_controlIdentifier.assign(value); }

    /**
     * <p>The <code>controlIdentifier</code> of the enabled control.</p>
     */
    inline EnabledControlSummary& WithControlIdentifier(const Aws::String& value) { SetControlIdentifier(value); return *this;}

    /**
     * <p>The <code>controlIdentifier</code> of the enabled control.</p>
     */
    inline EnabledControlSummary& WithControlIdentifier(Aws::String&& value) { SetControlIdentifier(std::move(value)); return *this;}

    /**
     * <p>The <code>controlIdentifier</code> of the enabled control.</p>
     */
    inline EnabledControlSummary& WithControlIdentifier(const char* value) { SetControlIdentifier(value); return *this;}


    /**
     * <p>The drift status of the enabled control.</p>
     */
    inline const DriftStatusSummary& GetDriftStatusSummary() const{ return m_driftStatusSummary; }

    /**
     * <p>The drift status of the enabled control.</p>
     */
    inline bool DriftStatusSummaryHasBeenSet() const { return m_driftStatusSummaryHasBeenSet; }

    /**
     * <p>The drift status of the enabled control.</p>
     */
    inline void SetDriftStatusSummary(const DriftStatusSummary& value) { m_driftStatusSummaryHasBeenSet = true; m_driftStatusSummary = value; }

    /**
     * <p>The drift status of the enabled control.</p>
     */
    inline void SetDriftStatusSummary(DriftStatusSummary&& value) { m_driftStatusSummaryHasBeenSet = true; m_driftStatusSummary = std::move(value); }

    /**
     * <p>The drift status of the enabled control.</p>
     */
    inline EnabledControlSummary& WithDriftStatusSummary(const DriftStatusSummary& value) { SetDriftStatusSummary(value); return *this;}

    /**
     * <p>The drift status of the enabled control.</p>
     */
    inline EnabledControlSummary& WithDriftStatusSummary(DriftStatusSummary&& value) { SetDriftStatusSummary(std::move(value)); return *this;}


    /**
     * <p>A short description of the status of the enabled control.</p>
     */
    inline const EnablementStatusSummary& GetStatusSummary() const{ return m_statusSummary; }

    /**
     * <p>A short description of the status of the enabled control.</p>
     */
    inline bool StatusSummaryHasBeenSet() const { return m_statusSummaryHasBeenSet; }

    /**
     * <p>A short description of the status of the enabled control.</p>
     */
    inline void SetStatusSummary(const EnablementStatusSummary& value) { m_statusSummaryHasBeenSet = true; m_statusSummary = value; }

    /**
     * <p>A short description of the status of the enabled control.</p>
     */
    inline void SetStatusSummary(EnablementStatusSummary&& value) { m_statusSummaryHasBeenSet = true; m_statusSummary = std::move(value); }

    /**
     * <p>A short description of the status of the enabled control.</p>
     */
    inline EnabledControlSummary& WithStatusSummary(const EnablementStatusSummary& value) { SetStatusSummary(value); return *this;}

    /**
     * <p>A short description of the status of the enabled control.</p>
     */
    inline EnabledControlSummary& WithStatusSummary(EnablementStatusSummary&& value) { SetStatusSummary(std::move(value)); return *this;}


    /**
     * <p>The ARN of the organizational unit.</p>
     */
    inline const Aws::String& GetTargetIdentifier() const{ return m_targetIdentifier; }

    /**
     * <p>The ARN of the organizational unit.</p>
     */
    inline bool TargetIdentifierHasBeenSet() const { return m_targetIdentifierHasBeenSet; }

    /**
     * <p>The ARN of the organizational unit.</p>
     */
    inline void SetTargetIdentifier(const Aws::String& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = value; }

    /**
     * <p>The ARN of the organizational unit.</p>
     */
    inline void SetTargetIdentifier(Aws::String&& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = std::move(value); }

    /**
     * <p>The ARN of the organizational unit.</p>
     */
    inline void SetTargetIdentifier(const char* value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier.assign(value); }

    /**
     * <p>The ARN of the organizational unit.</p>
     */
    inline EnabledControlSummary& WithTargetIdentifier(const Aws::String& value) { SetTargetIdentifier(value); return *this;}

    /**
     * <p>The ARN of the organizational unit.</p>
     */
    inline EnabledControlSummary& WithTargetIdentifier(Aws::String&& value) { SetTargetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ARN of the organizational unit.</p>
     */
    inline EnabledControlSummary& WithTargetIdentifier(const char* value) { SetTargetIdentifier(value); return *this;}

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
