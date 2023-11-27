/**
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
    inline EnabledControlDetails& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the enabled control.</p>
     */
    inline EnabledControlDetails& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the enabled control.</p>
     */
    inline EnabledControlDetails& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The control identifier of the enabled control. For information on how to find
     * the <code>controlIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline const Aws::String& GetControlIdentifier() const{ return m_controlIdentifier; }

    /**
     * <p>The control identifier of the enabled control. For information on how to find
     * the <code>controlIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline bool ControlIdentifierHasBeenSet() const { return m_controlIdentifierHasBeenSet; }

    /**
     * <p>The control identifier of the enabled control. For information on how to find
     * the <code>controlIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline void SetControlIdentifier(const Aws::String& value) { m_controlIdentifierHasBeenSet = true; m_controlIdentifier = value; }

    /**
     * <p>The control identifier of the enabled control. For information on how to find
     * the <code>controlIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline void SetControlIdentifier(Aws::String&& value) { m_controlIdentifierHasBeenSet = true; m_controlIdentifier = std::move(value); }

    /**
     * <p>The control identifier of the enabled control. For information on how to find
     * the <code>controlIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline void SetControlIdentifier(const char* value) { m_controlIdentifierHasBeenSet = true; m_controlIdentifier.assign(value); }

    /**
     * <p>The control identifier of the enabled control. For information on how to find
     * the <code>controlIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline EnabledControlDetails& WithControlIdentifier(const Aws::String& value) { SetControlIdentifier(value); return *this;}

    /**
     * <p>The control identifier of the enabled control. For information on how to find
     * the <code>controlIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline EnabledControlDetails& WithControlIdentifier(Aws::String&& value) { SetControlIdentifier(std::move(value)); return *this;}

    /**
     * <p>The control identifier of the enabled control. For information on how to find
     * the <code>controlIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline EnabledControlDetails& WithControlIdentifier(const char* value) { SetControlIdentifier(value); return *this;}


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
    inline EnabledControlDetails& WithDriftStatusSummary(const DriftStatusSummary& value) { SetDriftStatusSummary(value); return *this;}

    /**
     * <p>The drift status of the enabled control.</p>
     */
    inline EnabledControlDetails& WithDriftStatusSummary(DriftStatusSummary&& value) { SetDriftStatusSummary(std::move(value)); return *this;}


    /**
     * <p>Array of <code>EnabledControlParameter</code> objects.</p>
     */
    inline const Aws::Vector<EnabledControlParameterSummary>& GetParameters() const{ return m_parameters; }

    /**
     * <p>Array of <code>EnabledControlParameter</code> objects.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>Array of <code>EnabledControlParameter</code> objects.</p>
     */
    inline void SetParameters(const Aws::Vector<EnabledControlParameterSummary>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Array of <code>EnabledControlParameter</code> objects.</p>
     */
    inline void SetParameters(Aws::Vector<EnabledControlParameterSummary>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>Array of <code>EnabledControlParameter</code> objects.</p>
     */
    inline EnabledControlDetails& WithParameters(const Aws::Vector<EnabledControlParameterSummary>& value) { SetParameters(value); return *this;}

    /**
     * <p>Array of <code>EnabledControlParameter</code> objects.</p>
     */
    inline EnabledControlDetails& WithParameters(Aws::Vector<EnabledControlParameterSummary>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>Array of <code>EnabledControlParameter</code> objects.</p>
     */
    inline EnabledControlDetails& AddParameters(const EnabledControlParameterSummary& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>Array of <code>EnabledControlParameter</code> objects.</p>
     */
    inline EnabledControlDetails& AddParameters(EnabledControlParameterSummary&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }


    /**
     * <p>The deployment summary of the enabled control.</p>
     */
    inline const EnablementStatusSummary& GetStatusSummary() const{ return m_statusSummary; }

    /**
     * <p>The deployment summary of the enabled control.</p>
     */
    inline bool StatusSummaryHasBeenSet() const { return m_statusSummaryHasBeenSet; }

    /**
     * <p>The deployment summary of the enabled control.</p>
     */
    inline void SetStatusSummary(const EnablementStatusSummary& value) { m_statusSummaryHasBeenSet = true; m_statusSummary = value; }

    /**
     * <p>The deployment summary of the enabled control.</p>
     */
    inline void SetStatusSummary(EnablementStatusSummary&& value) { m_statusSummaryHasBeenSet = true; m_statusSummary = std::move(value); }

    /**
     * <p>The deployment summary of the enabled control.</p>
     */
    inline EnabledControlDetails& WithStatusSummary(const EnablementStatusSummary& value) { SetStatusSummary(value); return *this;}

    /**
     * <p>The deployment summary of the enabled control.</p>
     */
    inline EnabledControlDetails& WithStatusSummary(EnablementStatusSummary&& value) { SetStatusSummary(std::move(value)); return *this;}


    /**
     * <p>The ARN of the organizational unit. For information on how to find the
     * <code>targetIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline const Aws::String& GetTargetIdentifier() const{ return m_targetIdentifier; }

    /**
     * <p>The ARN of the organizational unit. For information on how to find the
     * <code>targetIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline bool TargetIdentifierHasBeenSet() const { return m_targetIdentifierHasBeenSet; }

    /**
     * <p>The ARN of the organizational unit. For information on how to find the
     * <code>targetIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline void SetTargetIdentifier(const Aws::String& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = value; }

    /**
     * <p>The ARN of the organizational unit. For information on how to find the
     * <code>targetIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline void SetTargetIdentifier(Aws::String&& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = std::move(value); }

    /**
     * <p>The ARN of the organizational unit. For information on how to find the
     * <code>targetIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline void SetTargetIdentifier(const char* value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier.assign(value); }

    /**
     * <p>The ARN of the organizational unit. For information on how to find the
     * <code>targetIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline EnabledControlDetails& WithTargetIdentifier(const Aws::String& value) { SetTargetIdentifier(value); return *this;}

    /**
     * <p>The ARN of the organizational unit. For information on how to find the
     * <code>targetIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline EnabledControlDetails& WithTargetIdentifier(Aws::String&& value) { SetTargetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ARN of the organizational unit. For information on how to find the
     * <code>targetIdentifier</code>, see <a
     * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
     * overview page</a>.</p>
     */
    inline EnabledControlDetails& WithTargetIdentifier(const char* value) { SetTargetIdentifier(value); return *this;}


    /**
     * <p>Target Amazon Web Services Regions for the enabled control.</p>
     */
    inline const Aws::Vector<Region>& GetTargetRegions() const{ return m_targetRegions; }

    /**
     * <p>Target Amazon Web Services Regions for the enabled control.</p>
     */
    inline bool TargetRegionsHasBeenSet() const { return m_targetRegionsHasBeenSet; }

    /**
     * <p>Target Amazon Web Services Regions for the enabled control.</p>
     */
    inline void SetTargetRegions(const Aws::Vector<Region>& value) { m_targetRegionsHasBeenSet = true; m_targetRegions = value; }

    /**
     * <p>Target Amazon Web Services Regions for the enabled control.</p>
     */
    inline void SetTargetRegions(Aws::Vector<Region>&& value) { m_targetRegionsHasBeenSet = true; m_targetRegions = std::move(value); }

    /**
     * <p>Target Amazon Web Services Regions for the enabled control.</p>
     */
    inline EnabledControlDetails& WithTargetRegions(const Aws::Vector<Region>& value) { SetTargetRegions(value); return *this;}

    /**
     * <p>Target Amazon Web Services Regions for the enabled control.</p>
     */
    inline EnabledControlDetails& WithTargetRegions(Aws::Vector<Region>&& value) { SetTargetRegions(std::move(value)); return *this;}

    /**
     * <p>Target Amazon Web Services Regions for the enabled control.</p>
     */
    inline EnabledControlDetails& AddTargetRegions(const Region& value) { m_targetRegionsHasBeenSet = true; m_targetRegions.push_back(value); return *this; }

    /**
     * <p>Target Amazon Web Services Regions for the enabled control.</p>
     */
    inline EnabledControlDetails& AddTargetRegions(Region&& value) { m_targetRegionsHasBeenSet = true; m_targetRegions.push_back(std::move(value)); return *this; }

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
