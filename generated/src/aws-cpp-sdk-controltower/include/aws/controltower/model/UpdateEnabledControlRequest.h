/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/ControlTowerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/controltower/model/EnabledControlParameter.h>
#include <utility>

namespace Aws
{
namespace ControlTower
{
namespace Model
{

  /**
   */
  class UpdateEnabledControlRequest : public ControlTowerRequest
  {
  public:
    AWS_CONTROLTOWER_API UpdateEnabledControlRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEnabledControl"; }

    AWS_CONTROLTOWER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The ARN of the enabled control that will be updated. </p>
     */
    inline const Aws::String& GetEnabledControlIdentifier() const { return m_enabledControlIdentifier; }
    inline bool EnabledControlIdentifierHasBeenSet() const { return m_enabledControlIdentifierHasBeenSet; }
    template<typename EnabledControlIdentifierT = Aws::String>
    void SetEnabledControlIdentifier(EnabledControlIdentifierT&& value) { m_enabledControlIdentifierHasBeenSet = true; m_enabledControlIdentifier = std::forward<EnabledControlIdentifierT>(value); }
    template<typename EnabledControlIdentifierT = Aws::String>
    UpdateEnabledControlRequest& WithEnabledControlIdentifier(EnabledControlIdentifierT&& value) { SetEnabledControlIdentifier(std::forward<EnabledControlIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key/value pair, where <code>Key</code> is of type <code>String</code> and
     * <code>Value</code> is of type <code>Document</code>.</p>
     */
    inline const Aws::Vector<EnabledControlParameter>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Vector<EnabledControlParameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<EnabledControlParameter>>
    UpdateEnabledControlRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = EnabledControlParameter>
    UpdateEnabledControlRequest& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_enabledControlIdentifier;
    bool m_enabledControlIdentifierHasBeenSet = false;

    Aws::Vector<EnabledControlParameter> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
