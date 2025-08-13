/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/EnvironmentResolvedAccount.h>
#include <aws/datazone/model/EnvironmentParameter.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The environment configuration user parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/EnvironmentConfigurationUserParameter">AWS
   * API Reference</a></p>
   */
  class EnvironmentConfigurationUserParameter
  {
  public:
    AWS_DATAZONE_API EnvironmentConfigurationUserParameter() = default;
    AWS_DATAZONE_API EnvironmentConfigurationUserParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API EnvironmentConfigurationUserParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The environment configuration name.</p>
     */
    inline const Aws::String& GetEnvironmentConfigurationName() const { return m_environmentConfigurationName; }
    inline bool EnvironmentConfigurationNameHasBeenSet() const { return m_environmentConfigurationNameHasBeenSet; }
    template<typename EnvironmentConfigurationNameT = Aws::String>
    void SetEnvironmentConfigurationName(EnvironmentConfigurationNameT&& value) { m_environmentConfigurationNameHasBeenSet = true; m_environmentConfigurationName = std::forward<EnvironmentConfigurationNameT>(value); }
    template<typename EnvironmentConfigurationNameT = Aws::String>
    EnvironmentConfigurationUserParameter& WithEnvironmentConfigurationName(EnvironmentConfigurationNameT&& value) { SetEnvironmentConfigurationName(std::forward<EnvironmentConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    EnvironmentConfigurationUserParameter& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment parameters.</p>
     */
    inline const Aws::Vector<EnvironmentParameter>& GetEnvironmentParameters() const { return m_environmentParameters; }
    inline bool EnvironmentParametersHasBeenSet() const { return m_environmentParametersHasBeenSet; }
    template<typename EnvironmentParametersT = Aws::Vector<EnvironmentParameter>>
    void SetEnvironmentParameters(EnvironmentParametersT&& value) { m_environmentParametersHasBeenSet = true; m_environmentParameters = std::forward<EnvironmentParametersT>(value); }
    template<typename EnvironmentParametersT = Aws::Vector<EnvironmentParameter>>
    EnvironmentConfigurationUserParameter& WithEnvironmentParameters(EnvironmentParametersT&& value) { SetEnvironmentParameters(std::forward<EnvironmentParametersT>(value)); return *this;}
    template<typename EnvironmentParametersT = EnvironmentParameter>
    EnvironmentConfigurationUserParameter& AddEnvironmentParameters(EnvironmentParametersT&& value) { m_environmentParametersHasBeenSet = true; m_environmentParameters.emplace_back(std::forward<EnvironmentParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the account/Region that is to be used during project creation for a
     * particular blueprint.</p>
     */
    inline const EnvironmentResolvedAccount& GetEnvironmentResolvedAccount() const { return m_environmentResolvedAccount; }
    inline bool EnvironmentResolvedAccountHasBeenSet() const { return m_environmentResolvedAccountHasBeenSet; }
    template<typename EnvironmentResolvedAccountT = EnvironmentResolvedAccount>
    void SetEnvironmentResolvedAccount(EnvironmentResolvedAccountT&& value) { m_environmentResolvedAccountHasBeenSet = true; m_environmentResolvedAccount = std::forward<EnvironmentResolvedAccountT>(value); }
    template<typename EnvironmentResolvedAccountT = EnvironmentResolvedAccount>
    EnvironmentConfigurationUserParameter& WithEnvironmentResolvedAccount(EnvironmentResolvedAccountT&& value) { SetEnvironmentResolvedAccount(std::forward<EnvironmentResolvedAccountT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_environmentConfigurationName;
    bool m_environmentConfigurationNameHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::Vector<EnvironmentParameter> m_environmentParameters;
    bool m_environmentParametersHasBeenSet = false;

    EnvironmentResolvedAccount m_environmentResolvedAccount;
    bool m_environmentResolvedAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
