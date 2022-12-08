/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/model/SparkSubmitJobDriver.h>
#include <aws/emr-containers/model/SparkSqlJobDriver.h>
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
   * <p>Specify the driver that the job runs on. Exactly one of the two available job
   * drivers is required, either sparkSqlJobDriver or
   * sparkSubmitJobDriver.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/JobDriver">AWS
   * API Reference</a></p>
   */
  class JobDriver
  {
  public:
    AWS_EMRCONTAINERS_API JobDriver();
    AWS_EMRCONTAINERS_API JobDriver(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API JobDriver& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The job driver parameters specified for spark submit.</p>
     */
    inline const SparkSubmitJobDriver& GetSparkSubmitJobDriver() const{ return m_sparkSubmitJobDriver; }

    /**
     * <p>The job driver parameters specified for spark submit.</p>
     */
    inline bool SparkSubmitJobDriverHasBeenSet() const { return m_sparkSubmitJobDriverHasBeenSet; }

    /**
     * <p>The job driver parameters specified for spark submit.</p>
     */
    inline void SetSparkSubmitJobDriver(const SparkSubmitJobDriver& value) { m_sparkSubmitJobDriverHasBeenSet = true; m_sparkSubmitJobDriver = value; }

    /**
     * <p>The job driver parameters specified for spark submit.</p>
     */
    inline void SetSparkSubmitJobDriver(SparkSubmitJobDriver&& value) { m_sparkSubmitJobDriverHasBeenSet = true; m_sparkSubmitJobDriver = std::move(value); }

    /**
     * <p>The job driver parameters specified for spark submit.</p>
     */
    inline JobDriver& WithSparkSubmitJobDriver(const SparkSubmitJobDriver& value) { SetSparkSubmitJobDriver(value); return *this;}

    /**
     * <p>The job driver parameters specified for spark submit.</p>
     */
    inline JobDriver& WithSparkSubmitJobDriver(SparkSubmitJobDriver&& value) { SetSparkSubmitJobDriver(std::move(value)); return *this;}


    /**
     * <p>The job driver for job type.</p>
     */
    inline const SparkSqlJobDriver& GetSparkSqlJobDriver() const{ return m_sparkSqlJobDriver; }

    /**
     * <p>The job driver for job type.</p>
     */
    inline bool SparkSqlJobDriverHasBeenSet() const { return m_sparkSqlJobDriverHasBeenSet; }

    /**
     * <p>The job driver for job type.</p>
     */
    inline void SetSparkSqlJobDriver(const SparkSqlJobDriver& value) { m_sparkSqlJobDriverHasBeenSet = true; m_sparkSqlJobDriver = value; }

    /**
     * <p>The job driver for job type.</p>
     */
    inline void SetSparkSqlJobDriver(SparkSqlJobDriver&& value) { m_sparkSqlJobDriverHasBeenSet = true; m_sparkSqlJobDriver = std::move(value); }

    /**
     * <p>The job driver for job type.</p>
     */
    inline JobDriver& WithSparkSqlJobDriver(const SparkSqlJobDriver& value) { SetSparkSqlJobDriver(value); return *this;}

    /**
     * <p>The job driver for job type.</p>
     */
    inline JobDriver& WithSparkSqlJobDriver(SparkSqlJobDriver&& value) { SetSparkSqlJobDriver(std::move(value)); return *this;}

  private:

    SparkSubmitJobDriver m_sparkSubmitJobDriver;
    bool m_sparkSubmitJobDriverHasBeenSet = false;

    SparkSqlJobDriver m_sparkSqlJobDriver;
    bool m_sparkSqlJobDriverHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
