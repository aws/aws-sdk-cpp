/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/controltower/model/EnablementStatusSummary.h>
#include <aws/controltower/model/EnabledBaselineParameterSummary.h>
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
   * <p>Details of the <code>EnabledBaseline</code> resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/EnabledBaselineDetails">AWS
   * API Reference</a></p>
   */
  class EnabledBaselineDetails
  {
  public:
    AWS_CONTROLTOWER_API EnabledBaselineDetails();
    AWS_CONTROLTOWER_API EnabledBaselineDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API EnabledBaselineDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the <code>EnabledBaseline</code> resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline EnabledBaselineDetails& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline EnabledBaselineDetails& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline EnabledBaselineDetails& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific <code>Baseline</code> enabled as part of the
     * <code>EnabledBaseline</code> resource.</p>
     */
    inline const Aws::String& GetBaselineIdentifier() const{ return m_baselineIdentifier; }
    inline bool BaselineIdentifierHasBeenSet() const { return m_baselineIdentifierHasBeenSet; }
    inline void SetBaselineIdentifier(const Aws::String& value) { m_baselineIdentifierHasBeenSet = true; m_baselineIdentifier = value; }
    inline void SetBaselineIdentifier(Aws::String&& value) { m_baselineIdentifierHasBeenSet = true; m_baselineIdentifier = std::move(value); }
    inline void SetBaselineIdentifier(const char* value) { m_baselineIdentifierHasBeenSet = true; m_baselineIdentifier.assign(value); }
    inline EnabledBaselineDetails& WithBaselineIdentifier(const Aws::String& value) { SetBaselineIdentifier(value); return *this;}
    inline EnabledBaselineDetails& WithBaselineIdentifier(Aws::String&& value) { SetBaselineIdentifier(std::move(value)); return *this;}
    inline EnabledBaselineDetails& WithBaselineIdentifier(const char* value) { SetBaselineIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The enabled version of the <code>Baseline</code>.</p>
     */
    inline const Aws::String& GetBaselineVersion() const{ return m_baselineVersion; }
    inline bool BaselineVersionHasBeenSet() const { return m_baselineVersionHasBeenSet; }
    inline void SetBaselineVersion(const Aws::String& value) { m_baselineVersionHasBeenSet = true; m_baselineVersion = value; }
    inline void SetBaselineVersion(Aws::String&& value) { m_baselineVersionHasBeenSet = true; m_baselineVersion = std::move(value); }
    inline void SetBaselineVersion(const char* value) { m_baselineVersionHasBeenSet = true; m_baselineVersion.assign(value); }
    inline EnabledBaselineDetails& WithBaselineVersion(const Aws::String& value) { SetBaselineVersion(value); return *this;}
    inline EnabledBaselineDetails& WithBaselineVersion(Aws::String&& value) { SetBaselineVersion(std::move(value)); return *this;}
    inline EnabledBaselineDetails& WithBaselineVersion(const char* value) { SetBaselineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows the parameters that are applied when enabling this
     * <code>Baseline</code>.</p>
     */
    inline const Aws::Vector<EnabledBaselineParameterSummary>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Vector<EnabledBaselineParameterSummary>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Vector<EnabledBaselineParameterSummary>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline EnabledBaselineDetails& WithParameters(const Aws::Vector<EnabledBaselineParameterSummary>& value) { SetParameters(value); return *this;}
    inline EnabledBaselineDetails& WithParameters(Aws::Vector<EnabledBaselineParameterSummary>&& value) { SetParameters(std::move(value)); return *this;}
    inline EnabledBaselineDetails& AddParameters(const EnabledBaselineParameterSummary& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }
    inline EnabledBaselineDetails& AddParameters(EnabledBaselineParameterSummary&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An ARN that represents the parent <code>EnabledBaseline</code> at the
     * Organizational Unit (OU) level, from which the child
     * <code>EnabledBaseline</code> inherits its configuration. The value is returned
     * by <code>GetEnabledBaseline</code>.</p>
     */
    inline const Aws::String& GetParentIdentifier() const{ return m_parentIdentifier; }
    inline bool ParentIdentifierHasBeenSet() const { return m_parentIdentifierHasBeenSet; }
    inline void SetParentIdentifier(const Aws::String& value) { m_parentIdentifierHasBeenSet = true; m_parentIdentifier = value; }
    inline void SetParentIdentifier(Aws::String&& value) { m_parentIdentifierHasBeenSet = true; m_parentIdentifier = std::move(value); }
    inline void SetParentIdentifier(const char* value) { m_parentIdentifierHasBeenSet = true; m_parentIdentifier.assign(value); }
    inline EnabledBaselineDetails& WithParentIdentifier(const Aws::String& value) { SetParentIdentifier(value); return *this;}
    inline EnabledBaselineDetails& WithParentIdentifier(Aws::String&& value) { SetParentIdentifier(std::move(value)); return *this;}
    inline EnabledBaselineDetails& WithParentIdentifier(const char* value) { SetParentIdentifier(value); return *this;}
    ///@}

    ///@{
    
    inline const EnablementStatusSummary& GetStatusSummary() const{ return m_statusSummary; }
    inline bool StatusSummaryHasBeenSet() const { return m_statusSummaryHasBeenSet; }
    inline void SetStatusSummary(const EnablementStatusSummary& value) { m_statusSummaryHasBeenSet = true; m_statusSummary = value; }
    inline void SetStatusSummary(EnablementStatusSummary&& value) { m_statusSummaryHasBeenSet = true; m_statusSummary = std::move(value); }
    inline EnabledBaselineDetails& WithStatusSummary(const EnablementStatusSummary& value) { SetStatusSummary(value); return *this;}
    inline EnabledBaselineDetails& WithStatusSummary(EnablementStatusSummary&& value) { SetStatusSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target on which to enable the <code>Baseline</code>.</p>
     */
    inline const Aws::String& GetTargetIdentifier() const{ return m_targetIdentifier; }
    inline bool TargetIdentifierHasBeenSet() const { return m_targetIdentifierHasBeenSet; }
    inline void SetTargetIdentifier(const Aws::String& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = value; }
    inline void SetTargetIdentifier(Aws::String&& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = std::move(value); }
    inline void SetTargetIdentifier(const char* value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier.assign(value); }
    inline EnabledBaselineDetails& WithTargetIdentifier(const Aws::String& value) { SetTargetIdentifier(value); return *this;}
    inline EnabledBaselineDetails& WithTargetIdentifier(Aws::String&& value) { SetTargetIdentifier(std::move(value)); return *this;}
    inline EnabledBaselineDetails& WithTargetIdentifier(const char* value) { SetTargetIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_baselineIdentifier;
    bool m_baselineIdentifierHasBeenSet = false;

    Aws::String m_baselineVersion;
    bool m_baselineVersionHasBeenSet = false;

    Aws::Vector<EnabledBaselineParameterSummary> m_parameters;
    bool m_parametersHasBeenSet = false;

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
