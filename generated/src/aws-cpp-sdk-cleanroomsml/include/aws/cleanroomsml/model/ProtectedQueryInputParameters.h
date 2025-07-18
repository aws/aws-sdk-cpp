/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/ProtectedQuerySQLParameters.h>
#include <aws/cleanroomsml/model/ComputeConfiguration.h>
#include <aws/cleanroomsml/model/ResultFormat.h>
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
    AWS_CLEANROOMSML_API ProtectedQueryInputParameters() = default;
    AWS_CLEANROOMSML_API ProtectedQueryInputParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API ProtectedQueryInputParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ProtectedQuerySQLParameters& GetSqlParameters() const { return m_sqlParameters; }
    inline bool SqlParametersHasBeenSet() const { return m_sqlParametersHasBeenSet; }
    template<typename SqlParametersT = ProtectedQuerySQLParameters>
    void SetSqlParameters(SqlParametersT&& value) { m_sqlParametersHasBeenSet = true; m_sqlParameters = std::forward<SqlParametersT>(value); }
    template<typename SqlParametersT = ProtectedQuerySQLParameters>
    ProtectedQueryInputParameters& WithSqlParameters(SqlParametersT&& value) { SetSqlParameters(std::forward<SqlParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides configuration information for the workers that will perform the
     * protected query.</p>
     */
    inline const ComputeConfiguration& GetComputeConfiguration() const { return m_computeConfiguration; }
    inline bool ComputeConfigurationHasBeenSet() const { return m_computeConfigurationHasBeenSet; }
    template<typename ComputeConfigurationT = ComputeConfiguration>
    void SetComputeConfiguration(ComputeConfigurationT&& value) { m_computeConfigurationHasBeenSet = true; m_computeConfiguration = std::forward<ComputeConfigurationT>(value); }
    template<typename ComputeConfigurationT = ComputeConfiguration>
    ProtectedQueryInputParameters& WithComputeConfiguration(ComputeConfigurationT&& value) { SetComputeConfiguration(std::forward<ComputeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format in which the query results should be returned. If not specified,
     * defaults to <code>CSV</code>. </p>
     */
    inline ResultFormat GetResultFormat() const { return m_resultFormat; }
    inline bool ResultFormatHasBeenSet() const { return m_resultFormatHasBeenSet; }
    inline void SetResultFormat(ResultFormat value) { m_resultFormatHasBeenSet = true; m_resultFormat = value; }
    inline ProtectedQueryInputParameters& WithResultFormat(ResultFormat value) { SetResultFormat(value); return *this;}
    ///@}
  private:

    ProtectedQuerySQLParameters m_sqlParameters;
    bool m_sqlParametersHasBeenSet = false;

    ComputeConfiguration m_computeConfiguration;
    bool m_computeConfigurationHasBeenSet = false;

    ResultFormat m_resultFormat{ResultFormat::NOT_SET};
    bool m_resultFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
