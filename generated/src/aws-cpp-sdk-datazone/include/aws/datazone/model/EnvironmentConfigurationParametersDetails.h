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
    AWS_DATAZONE_API EnvironmentConfigurationParametersDetails();
    AWS_DATAZONE_API EnvironmentConfigurationParametersDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API EnvironmentConfigurationParametersDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The parameter overrides.</p>
     */
    inline const Aws::Vector<EnvironmentConfigurationParameter>& GetParameterOverrides() const{ return m_parameterOverrides; }
    inline bool ParameterOverridesHasBeenSet() const { return m_parameterOverridesHasBeenSet; }
    inline void SetParameterOverrides(const Aws::Vector<EnvironmentConfigurationParameter>& value) { m_parameterOverridesHasBeenSet = true; m_parameterOverrides = value; }
    inline void SetParameterOverrides(Aws::Vector<EnvironmentConfigurationParameter>&& value) { m_parameterOverridesHasBeenSet = true; m_parameterOverrides = std::move(value); }
    inline EnvironmentConfigurationParametersDetails& WithParameterOverrides(const Aws::Vector<EnvironmentConfigurationParameter>& value) { SetParameterOverrides(value); return *this;}
    inline EnvironmentConfigurationParametersDetails& WithParameterOverrides(Aws::Vector<EnvironmentConfigurationParameter>&& value) { SetParameterOverrides(std::move(value)); return *this;}
    inline EnvironmentConfigurationParametersDetails& AddParameterOverrides(const EnvironmentConfigurationParameter& value) { m_parameterOverridesHasBeenSet = true; m_parameterOverrides.push_back(value); return *this; }
    inline EnvironmentConfigurationParametersDetails& AddParameterOverrides(EnvironmentConfigurationParameter&& value) { m_parameterOverridesHasBeenSet = true; m_parameterOverrides.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resolved environment configuration parameters.</p>
     */
    inline const Aws::Vector<EnvironmentConfigurationParameter>& GetResolvedParameters() const{ return m_resolvedParameters; }
    inline bool ResolvedParametersHasBeenSet() const { return m_resolvedParametersHasBeenSet; }
    inline void SetResolvedParameters(const Aws::Vector<EnvironmentConfigurationParameter>& value) { m_resolvedParametersHasBeenSet = true; m_resolvedParameters = value; }
    inline void SetResolvedParameters(Aws::Vector<EnvironmentConfigurationParameter>&& value) { m_resolvedParametersHasBeenSet = true; m_resolvedParameters = std::move(value); }
    inline EnvironmentConfigurationParametersDetails& WithResolvedParameters(const Aws::Vector<EnvironmentConfigurationParameter>& value) { SetResolvedParameters(value); return *this;}
    inline EnvironmentConfigurationParametersDetails& WithResolvedParameters(Aws::Vector<EnvironmentConfigurationParameter>&& value) { SetResolvedParameters(std::move(value)); return *this;}
    inline EnvironmentConfigurationParametersDetails& AddResolvedParameters(const EnvironmentConfigurationParameter& value) { m_resolvedParametersHasBeenSet = true; m_resolvedParameters.push_back(value); return *this; }
    inline EnvironmentConfigurationParametersDetails& AddResolvedParameters(EnvironmentConfigurationParameter&& value) { m_resolvedParametersHasBeenSet = true; m_resolvedParameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Ssm path environment configuration parameters.</p>
     */
    inline const Aws::String& GetSsmPath() const{ return m_ssmPath; }
    inline bool SsmPathHasBeenSet() const { return m_ssmPathHasBeenSet; }
    inline void SetSsmPath(const Aws::String& value) { m_ssmPathHasBeenSet = true; m_ssmPath = value; }
    inline void SetSsmPath(Aws::String&& value) { m_ssmPathHasBeenSet = true; m_ssmPath = std::move(value); }
    inline void SetSsmPath(const char* value) { m_ssmPathHasBeenSet = true; m_ssmPath.assign(value); }
    inline EnvironmentConfigurationParametersDetails& WithSsmPath(const Aws::String& value) { SetSsmPath(value); return *this;}
    inline EnvironmentConfigurationParametersDetails& WithSsmPath(Aws::String&& value) { SetSsmPath(std::move(value)); return *this;}
    inline EnvironmentConfigurationParametersDetails& WithSsmPath(const char* value) { SetSsmPath(value); return *this;}
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
