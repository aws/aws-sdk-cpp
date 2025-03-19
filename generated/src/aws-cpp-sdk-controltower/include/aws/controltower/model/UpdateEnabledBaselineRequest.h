/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/ControlTowerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/controltower/model/EnabledBaselineParameter.h>
#include <utility>

namespace Aws
{
namespace ControlTower
{
namespace Model
{

  /**
   */
  class UpdateEnabledBaselineRequest : public ControlTowerRequest
  {
  public:
    AWS_CONTROLTOWER_API UpdateEnabledBaselineRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEnabledBaseline"; }

    AWS_CONTROLTOWER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies the new <code>Baseline</code> version, to which the
     * <code>EnabledBaseline</code> should be updated.</p>
     */
    inline const Aws::String& GetBaselineVersion() const { return m_baselineVersion; }
    inline bool BaselineVersionHasBeenSet() const { return m_baselineVersionHasBeenSet; }
    template<typename BaselineVersionT = Aws::String>
    void SetBaselineVersion(BaselineVersionT&& value) { m_baselineVersionHasBeenSet = true; m_baselineVersion = std::forward<BaselineVersionT>(value); }
    template<typename BaselineVersionT = Aws::String>
    UpdateEnabledBaselineRequest& WithBaselineVersion(BaselineVersionT&& value) { SetBaselineVersion(std::forward<BaselineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>EnabledBaseline</code> resource to be updated.</p>
     */
    inline const Aws::String& GetEnabledBaselineIdentifier() const { return m_enabledBaselineIdentifier; }
    inline bool EnabledBaselineIdentifierHasBeenSet() const { return m_enabledBaselineIdentifierHasBeenSet; }
    template<typename EnabledBaselineIdentifierT = Aws::String>
    void SetEnabledBaselineIdentifier(EnabledBaselineIdentifierT&& value) { m_enabledBaselineIdentifierHasBeenSet = true; m_enabledBaselineIdentifier = std::forward<EnabledBaselineIdentifierT>(value); }
    template<typename EnabledBaselineIdentifierT = Aws::String>
    UpdateEnabledBaselineRequest& WithEnabledBaselineIdentifier(EnabledBaselineIdentifierT&& value) { SetEnabledBaselineIdentifier(std::forward<EnabledBaselineIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters to apply when making an update.</p>
     */
    inline const Aws::Vector<EnabledBaselineParameter>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Vector<EnabledBaselineParameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<EnabledBaselineParameter>>
    UpdateEnabledBaselineRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = EnabledBaselineParameter>
    UpdateEnabledBaselineRequest& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_baselineVersion;
    bool m_baselineVersionHasBeenSet = false;

    Aws::String m_enabledBaselineIdentifier;
    bool m_enabledBaselineIdentifierHasBeenSet = false;

    Aws::Vector<EnabledBaselineParameter> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
