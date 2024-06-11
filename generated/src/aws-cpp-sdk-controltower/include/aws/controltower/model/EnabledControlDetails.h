﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controltower/model/DriftStatusSummary.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/controltower/model/EnablementStatusSummary.h>
#include <aws/controltower/model/EnabledControlParameterSummary.h>
#include <aws/controltower/model/Region.h>
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
   * <p>Information about the enabled control.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/EnabledControlDetails">AWS
   * API Reference</a></p>
   */
  class EnabledControlDetails
  {
  public:
    AWS_CONTROLTOWER_API EnabledControlDetails();
    AWS_CONTROLTOWER_API EnabledControlDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API EnabledControlDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline EnabledControlDetails& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline EnabledControlDetails& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline EnabledControlDetails& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The control identifier of the enabled control. For information on how to find
     * the <code>controlIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline const Aws::String& GetControlIdentifier() const{ return m_controlIdentifier; }
    inline bool ControlIdentifierHasBeenSet() const { return m_controlIdentifierHasBeenSet; }
    inline void SetControlIdentifier(const Aws::String& value) { m_controlIdentifierHasBeenSet = true; m_controlIdentifier = value; }
    inline void SetControlIdentifier(Aws::String&& value) { m_controlIdentifierHasBeenSet = true; m_controlIdentifier = std::move(value); }
    inline void SetControlIdentifier(const char* value) { m_controlIdentifierHasBeenSet = true; m_controlIdentifier.assign(value); }
    inline EnabledControlDetails& WithControlIdentifier(const Aws::String& value) { SetControlIdentifier(value); return *this;}
    inline EnabledControlDetails& WithControlIdentifier(Aws::String&& value) { SetControlIdentifier(std::move(value)); return *this;}
    inline EnabledControlDetails& WithControlIdentifier(const char* value) { SetControlIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The drift status of the enabled control.</p>
     */
    inline const DriftStatusSummary& GetDriftStatusSummary() const{ return m_driftStatusSummary; }
    inline bool DriftStatusSummaryHasBeenSet() const { return m_driftStatusSummaryHasBeenSet; }
    inline void SetDriftStatusSummary(const DriftStatusSummary& value) { m_driftStatusSummaryHasBeenSet = true; m_driftStatusSummary = value; }
    inline void SetDriftStatusSummary(DriftStatusSummary&& value) { m_driftStatusSummaryHasBeenSet = true; m_driftStatusSummary = std::move(value); }
    inline EnabledControlDetails& WithDriftStatusSummary(const DriftStatusSummary& value) { SetDriftStatusSummary(value); return *this;}
    inline EnabledControlDetails& WithDriftStatusSummary(DriftStatusSummary&& value) { SetDriftStatusSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Array of <code>EnabledControlParameter</code> objects.</p>
     */
    inline const Aws::Vector<EnabledControlParameterSummary>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Vector<EnabledControlParameterSummary>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Vector<EnabledControlParameterSummary>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline EnabledControlDetails& WithParameters(const Aws::Vector<EnabledControlParameterSummary>& value) { SetParameters(value); return *this;}
    inline EnabledControlDetails& WithParameters(Aws::Vector<EnabledControlParameterSummary>&& value) { SetParameters(std::move(value)); return *this;}
    inline EnabledControlDetails& AddParameters(const EnabledControlParameterSummary& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }
    inline EnabledControlDetails& AddParameters(EnabledControlParameterSummary&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The deployment summary of the enabled control.</p>
     */
    inline const EnablementStatusSummary& GetStatusSummary() const{ return m_statusSummary; }
    inline bool StatusSummaryHasBeenSet() const { return m_statusSummaryHasBeenSet; }
    inline void SetStatusSummary(const EnablementStatusSummary& value) { m_statusSummaryHasBeenSet = true; m_statusSummary = value; }
    inline void SetStatusSummary(EnablementStatusSummary&& value) { m_statusSummaryHasBeenSet = true; m_statusSummary = std::move(value); }
    inline EnabledControlDetails& WithStatusSummary(const EnablementStatusSummary& value) { SetStatusSummary(value); return *this;}
    inline EnabledControlDetails& WithStatusSummary(EnablementStatusSummary&& value) { SetStatusSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the organizational unit. For information on how to find the
     * <code>targetIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline const Aws::String& GetTargetIdentifier() const{ return m_targetIdentifier; }
    inline bool TargetIdentifierHasBeenSet() const { return m_targetIdentifierHasBeenSet; }
    inline void SetTargetIdentifier(const Aws::String& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = value; }
    inline void SetTargetIdentifier(Aws::String&& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = std::move(value); }
    inline void SetTargetIdentifier(const char* value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier.assign(value); }
    inline EnabledControlDetails& WithTargetIdentifier(const Aws::String& value) { SetTargetIdentifier(value); return *this;}
    inline EnabledControlDetails& WithTargetIdentifier(Aws::String&& value) { SetTargetIdentifier(std::move(value)); return *this;}
    inline EnabledControlDetails& WithTargetIdentifier(const char* value) { SetTargetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Target Amazon Web Services Regions for the enabled control.</p>
     */
    inline const Aws::Vector<Region>& GetTargetRegions() const{ return m_targetRegions; }
    inline bool TargetRegionsHasBeenSet() const { return m_targetRegionsHasBeenSet; }
    inline void SetTargetRegions(const Aws::Vector<Region>& value) { m_targetRegionsHasBeenSet = true; m_targetRegions = value; }
    inline void SetTargetRegions(Aws::Vector<Region>&& value) { m_targetRegionsHasBeenSet = true; m_targetRegions = std::move(value); }
    inline EnabledControlDetails& WithTargetRegions(const Aws::Vector<Region>& value) { SetTargetRegions(value); return *this;}
    inline EnabledControlDetails& WithTargetRegions(Aws::Vector<Region>&& value) { SetTargetRegions(std::move(value)); return *this;}
    inline EnabledControlDetails& AddTargetRegions(const Region& value) { m_targetRegionsHasBeenSet = true; m_targetRegions.push_back(value); return *this; }
    inline EnabledControlDetails& AddTargetRegions(Region&& value) { m_targetRegionsHasBeenSet = true; m_targetRegions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_controlIdentifier;
    bool m_controlIdentifierHasBeenSet = false;

    DriftStatusSummary m_driftStatusSummary;
    bool m_driftStatusSummaryHasBeenSet = false;

    Aws::Vector<EnabledControlParameterSummary> m_parameters;
    bool m_parametersHasBeenSet = false;

    EnablementStatusSummary m_statusSummary;
    bool m_statusSummaryHasBeenSet = false;

    Aws::String m_targetIdentifier;
    bool m_targetIdentifierHasBeenSet = false;

    Aws::Vector<Region> m_targetRegions;
    bool m_targetRegionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
