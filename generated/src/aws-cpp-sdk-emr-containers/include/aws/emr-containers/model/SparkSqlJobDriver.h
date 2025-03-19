/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EMRContainers
{
namespace Model
{

  /**
   * <p>The job driver for job type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/SparkSqlJobDriver">AWS
   * API Reference</a></p>
   */
  class SparkSqlJobDriver
  {
  public:
    AWS_EMRCONTAINERS_API SparkSqlJobDriver() = default;
    AWS_EMRCONTAINERS_API SparkSqlJobDriver(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API SparkSqlJobDriver& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The SQL file to be executed.</p>
     */
    inline const Aws::String& GetEntryPoint() const { return m_entryPoint; }
    inline bool EntryPointHasBeenSet() const { return m_entryPointHasBeenSet; }
    template<typename EntryPointT = Aws::String>
    void SetEntryPoint(EntryPointT&& value) { m_entryPointHasBeenSet = true; m_entryPoint = std::forward<EntryPointT>(value); }
    template<typename EntryPointT = Aws::String>
    SparkSqlJobDriver& WithEntryPoint(EntryPointT&& value) { SetEntryPoint(std::forward<EntryPointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Spark parameters to be included in the Spark SQL command.</p>
     */
    inline const Aws::String& GetSparkSqlParameters() const { return m_sparkSqlParameters; }
    inline bool SparkSqlParametersHasBeenSet() const { return m_sparkSqlParametersHasBeenSet; }
    template<typename SparkSqlParametersT = Aws::String>
    void SetSparkSqlParameters(SparkSqlParametersT&& value) { m_sparkSqlParametersHasBeenSet = true; m_sparkSqlParameters = std::forward<SparkSqlParametersT>(value); }
    template<typename SparkSqlParametersT = Aws::String>
    SparkSqlJobDriver& WithSparkSqlParameters(SparkSqlParametersT&& value) { SetSparkSqlParameters(std::forward<SparkSqlParametersT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_entryPoint;
    bool m_entryPointHasBeenSet = false;

    Aws::String m_sparkSqlParameters;
    bool m_sparkSqlParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
