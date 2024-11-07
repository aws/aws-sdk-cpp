/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/ProtectedQuerySQLParameters.h>
#include <aws/cleanroomsml/model/ComputeConfiguration.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>Provides information necessary to perform the protected query.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ProtectedQueryInputParameters">AWS
   * API Reference</a></p>
   */
  class ProtectedQueryInputParameters
  {
  public:
    AWS_CLEANROOMSML_API ProtectedQueryInputParameters();
    AWS_CLEANROOMSML_API ProtectedQueryInputParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API ProtectedQueryInputParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ProtectedQuerySQLParameters& GetSqlParameters() const{ return m_sqlParameters; }
    inline bool SqlParametersHasBeenSet() const { return m_sqlParametersHasBeenSet; }
    inline void SetSqlParameters(const ProtectedQuerySQLParameters& value) { m_sqlParametersHasBeenSet = true; m_sqlParameters = value; }
    inline void SetSqlParameters(ProtectedQuerySQLParameters&& value) { m_sqlParametersHasBeenSet = true; m_sqlParameters = std::move(value); }
    inline ProtectedQueryInputParameters& WithSqlParameters(const ProtectedQuerySQLParameters& value) { SetSqlParameters(value); return *this;}
    inline ProtectedQueryInputParameters& WithSqlParameters(ProtectedQuerySQLParameters&& value) { SetSqlParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides configuration information for the workers that will perform the
     * protected query.</p>
     */
    inline const ComputeConfiguration& GetComputeConfiguration() const{ return m_computeConfiguration; }
    inline bool ComputeConfigurationHasBeenSet() const { return m_computeConfigurationHasBeenSet; }
    inline void SetComputeConfiguration(const ComputeConfiguration& value) { m_computeConfigurationHasBeenSet = true; m_computeConfiguration = value; }
    inline void SetComputeConfiguration(ComputeConfiguration&& value) { m_computeConfigurationHasBeenSet = true; m_computeConfiguration = std::move(value); }
    inline ProtectedQueryInputParameters& WithComputeConfiguration(const ComputeConfiguration& value) { SetComputeConfiguration(value); return *this;}
    inline ProtectedQueryInputParameters& WithComputeConfiguration(ComputeConfiguration&& value) { SetComputeConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    ProtectedQuerySQLParameters m_sqlParameters;
    bool m_sqlParametersHasBeenSet = false;

    ComputeConfiguration m_computeConfiguration;
    bool m_computeConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
