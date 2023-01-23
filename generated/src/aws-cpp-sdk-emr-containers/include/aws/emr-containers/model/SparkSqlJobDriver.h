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
    AWS_EMRCONTAINERS_API SparkSqlJobDriver();
    AWS_EMRCONTAINERS_API SparkSqlJobDriver(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API SparkSqlJobDriver& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The SQL file to be executed.</p>
     */
    inline const Aws::String& GetEntryPoint() const{ return m_entryPoint; }

    /**
     * <p>The SQL file to be executed.</p>
     */
    inline bool EntryPointHasBeenSet() const { return m_entryPointHasBeenSet; }

    /**
     * <p>The SQL file to be executed.</p>
     */
    inline void SetEntryPoint(const Aws::String& value) { m_entryPointHasBeenSet = true; m_entryPoint = value; }

    /**
     * <p>The SQL file to be executed.</p>
     */
    inline void SetEntryPoint(Aws::String&& value) { m_entryPointHasBeenSet = true; m_entryPoint = std::move(value); }

    /**
     * <p>The SQL file to be executed.</p>
     */
    inline void SetEntryPoint(const char* value) { m_entryPointHasBeenSet = true; m_entryPoint.assign(value); }

    /**
     * <p>The SQL file to be executed.</p>
     */
    inline SparkSqlJobDriver& WithEntryPoint(const Aws::String& value) { SetEntryPoint(value); return *this;}

    /**
     * <p>The SQL file to be executed.</p>
     */
    inline SparkSqlJobDriver& WithEntryPoint(Aws::String&& value) { SetEntryPoint(std::move(value)); return *this;}

    /**
     * <p>The SQL file to be executed.</p>
     */
    inline SparkSqlJobDriver& WithEntryPoint(const char* value) { SetEntryPoint(value); return *this;}


    /**
     * <p>The Spark parameters to be included in the Spark SQL command.</p>
     */
    inline const Aws::String& GetSparkSqlParameters() const{ return m_sparkSqlParameters; }

    /**
     * <p>The Spark parameters to be included in the Spark SQL command.</p>
     */
    inline bool SparkSqlParametersHasBeenSet() const { return m_sparkSqlParametersHasBeenSet; }

    /**
     * <p>The Spark parameters to be included in the Spark SQL command.</p>
     */
    inline void SetSparkSqlParameters(const Aws::String& value) { m_sparkSqlParametersHasBeenSet = true; m_sparkSqlParameters = value; }

    /**
     * <p>The Spark parameters to be included in the Spark SQL command.</p>
     */
    inline void SetSparkSqlParameters(Aws::String&& value) { m_sparkSqlParametersHasBeenSet = true; m_sparkSqlParameters = std::move(value); }

    /**
     * <p>The Spark parameters to be included in the Spark SQL command.</p>
     */
    inline void SetSparkSqlParameters(const char* value) { m_sparkSqlParametersHasBeenSet = true; m_sparkSqlParameters.assign(value); }

    /**
     * <p>The Spark parameters to be included in the Spark SQL command.</p>
     */
    inline SparkSqlJobDriver& WithSparkSqlParameters(const Aws::String& value) { SetSparkSqlParameters(value); return *this;}

    /**
     * <p>The Spark parameters to be included in the Spark SQL command.</p>
     */
    inline SparkSqlJobDriver& WithSparkSqlParameters(Aws::String&& value) { SetSparkSqlParameters(std::move(value)); return *this;}

    /**
     * <p>The Spark parameters to be included in the Spark SQL command.</p>
     */
    inline SparkSqlJobDriver& WithSparkSqlParameters(const char* value) { SetSparkSqlParameters(value); return *this;}

  private:

    Aws::String m_entryPoint;
    bool m_entryPointHasBeenSet = false;

    Aws::String m_sparkSqlParameters;
    bool m_sparkSqlParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
