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
    AWS_CONTROLTOWER_API UpdateEnabledBaselineRequest();

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
    inline const Aws::String& GetBaselineVersion() const{ return m_baselineVersion; }
    inline bool BaselineVersionHasBeenSet() const { return m_baselineVersionHasBeenSet; }
    inline void SetBaselineVersion(const Aws::String& value) { m_baselineVersionHasBeenSet = true; m_baselineVersion = value; }
    inline void SetBaselineVersion(Aws::String&& value) { m_baselineVersionHasBeenSet = true; m_baselineVersion = std::move(value); }
    inline void SetBaselineVersion(const char* value) { m_baselineVersionHasBeenSet = true; m_baselineVersion.assign(value); }
    inline UpdateEnabledBaselineRequest& WithBaselineVersion(const Aws::String& value) { SetBaselineVersion(value); return *this;}
    inline UpdateEnabledBaselineRequest& WithBaselineVersion(Aws::String&& value) { SetBaselineVersion(std::move(value)); return *this;}
    inline UpdateEnabledBaselineRequest& WithBaselineVersion(const char* value) { SetBaselineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>EnabledBaseline</code> resource to be updated.</p>
     */
    inline const Aws::String& GetEnabledBaselineIdentifier() const{ return m_enabledBaselineIdentifier; }
    inline bool EnabledBaselineIdentifierHasBeenSet() const { return m_enabledBaselineIdentifierHasBeenSet; }
    inline void SetEnabledBaselineIdentifier(const Aws::String& value) { m_enabledBaselineIdentifierHasBeenSet = true; m_enabledBaselineIdentifier = value; }
    inline void SetEnabledBaselineIdentifier(Aws::String&& value) { m_enabledBaselineIdentifierHasBeenSet = true; m_enabledBaselineIdentifier = std::move(value); }
    inline void SetEnabledBaselineIdentifier(const char* value) { m_enabledBaselineIdentifierHasBeenSet = true; m_enabledBaselineIdentifier.assign(value); }
    inline UpdateEnabledBaselineRequest& WithEnabledBaselineIdentifier(const Aws::String& value) { SetEnabledBaselineIdentifier(value); return *this;}
    inline UpdateEnabledBaselineRequest& WithEnabledBaselineIdentifier(Aws::String&& value) { SetEnabledBaselineIdentifier(std::move(value)); return *this;}
    inline UpdateEnabledBaselineRequest& WithEnabledBaselineIdentifier(const char* value) { SetEnabledBaselineIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters to apply when making an update.</p>
     */
    inline const Aws::Vector<EnabledBaselineParameter>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Vector<EnabledBaselineParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Vector<EnabledBaselineParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline UpdateEnabledBaselineRequest& WithParameters(const Aws::Vector<EnabledBaselineParameter>& value) { SetParameters(value); return *this;}
    inline UpdateEnabledBaselineRequest& WithParameters(Aws::Vector<EnabledBaselineParameter>&& value) { SetParameters(std::move(value)); return *this;}
    inline UpdateEnabledBaselineRequest& AddParameters(const EnabledBaselineParameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }
    inline UpdateEnabledBaselineRequest& AddParameters(EnabledBaselineParameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }
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
