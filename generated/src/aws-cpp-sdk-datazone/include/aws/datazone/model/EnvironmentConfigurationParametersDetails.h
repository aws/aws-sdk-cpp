/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/EnvironmentConfigurationParameter.h>
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
   * <p>The details of the environment configuration parameter.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/EnvironmentConfigurationParametersDetails">AWS
   * API Reference</a></p>
   */
  class EnvironmentConfigurationParametersDetails
  {
  public:
    AWS_DATAZONE_API EnvironmentConfigurationParametersDetails() = default;
    AWS_DATAZONE_API EnvironmentConfigurationParametersDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API EnvironmentConfigurationParametersDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The parameter overrides.</p>
     */
    inline const Aws::Vector<EnvironmentConfigurationParameter>& GetParameterOverrides() const { return m_parameterOverrides; }
    inline bool ParameterOverridesHasBeenSet() const { return m_parameterOverridesHasBeenSet; }
    template<typename ParameterOverridesT = Aws::Vector<EnvironmentConfigurationParameter>>
    void SetParameterOverrides(ParameterOverridesT&& value) { m_parameterOverridesHasBeenSet = true; m_parameterOverrides = std::forward<ParameterOverridesT>(value); }
    template<typename ParameterOverridesT = Aws::Vector<EnvironmentConfigurationParameter>>
    EnvironmentConfigurationParametersDetails& WithParameterOverrides(ParameterOverridesT&& value) { SetParameterOverrides(std::forward<ParameterOverridesT>(value)); return *this;}
    template<typename ParameterOverridesT = EnvironmentConfigurationParameter>
    EnvironmentConfigurationParametersDetails& AddParameterOverrides(ParameterOverridesT&& value) { m_parameterOverridesHasBeenSet = true; m_parameterOverrides.emplace_back(std::forward<ParameterOverridesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resolved environment configuration parameters.</p>
     */
    inline const Aws::Vector<EnvironmentConfigurationParameter>& GetResolvedParameters() const { return m_resolvedParameters; }
    inline bool ResolvedParametersHasBeenSet() const { return m_resolvedParametersHasBeenSet; }
    template<typename ResolvedParametersT = Aws::Vector<EnvironmentConfigurationParameter>>
    void SetResolvedParameters(ResolvedParametersT&& value) { m_resolvedParametersHasBeenSet = true; m_resolvedParameters = std::forward<ResolvedParametersT>(value); }
    template<typename ResolvedParametersT = Aws::Vector<EnvironmentConfigurationParameter>>
    EnvironmentConfigurationParametersDetails& WithResolvedParameters(ResolvedParametersT&& value) { SetResolvedParameters(std::forward<ResolvedParametersT>(value)); return *this;}
    template<typename ResolvedParametersT = EnvironmentConfigurationParameter>
    EnvironmentConfigurationParametersDetails& AddResolvedParameters(ResolvedParametersT&& value) { m_resolvedParametersHasBeenSet = true; m_resolvedParameters.emplace_back(std::forward<ResolvedParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Ssm path environment configuration parameters.</p>
     */
    inline const Aws::String& GetSsmPath() const { return m_ssmPath; }
    inline bool SsmPathHasBeenSet() const { return m_ssmPathHasBeenSet; }
    template<typename SsmPathT = Aws::String>
    void SetSsmPath(SsmPathT&& value) { m_ssmPathHasBeenSet = true; m_ssmPath = std::forward<SsmPathT>(value); }
    template<typename SsmPathT = Aws::String>
    EnvironmentConfigurationParametersDetails& WithSsmPath(SsmPathT&& value) { SetSsmPath(std::forward<SsmPathT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EnvironmentConfigurationParameter> m_parameterOverrides;
    bool m_parameterOverridesHasBeenSet = false;

    Aws::Vector<EnvironmentConfigurationParameter> m_resolvedParameters;
    bool m_resolvedParametersHasBeenSet = false;

    Aws::String m_ssmPath;
    bool m_ssmPathHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
