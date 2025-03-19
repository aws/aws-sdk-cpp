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
    AWS_EMRCONTAINERS_API JobDriver() = default;
    AWS_EMRCONTAINERS_API JobDriver(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API JobDriver& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The job driver parameters specified for spark submit.</p>
     */
    inline const SparkSubmitJobDriver& GetSparkSubmitJobDriver() const { return m_sparkSubmitJobDriver; }
    inline bool SparkSubmitJobDriverHasBeenSet() const { return m_sparkSubmitJobDriverHasBeenSet; }
    template<typename SparkSubmitJobDriverT = SparkSubmitJobDriver>
    void SetSparkSubmitJobDriver(SparkSubmitJobDriverT&& value) { m_sparkSubmitJobDriverHasBeenSet = true; m_sparkSubmitJobDriver = std::forward<SparkSubmitJobDriverT>(value); }
    template<typename SparkSubmitJobDriverT = SparkSubmitJobDriver>
    JobDriver& WithSparkSubmitJobDriver(SparkSubmitJobDriverT&& value) { SetSparkSubmitJobDriver(std::forward<SparkSubmitJobDriverT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job driver for job type.</p>
     */
    inline const SparkSqlJobDriver& GetSparkSqlJobDriver() const { return m_sparkSqlJobDriver; }
    inline bool SparkSqlJobDriverHasBeenSet() const { return m_sparkSqlJobDriverHasBeenSet; }
    template<typename SparkSqlJobDriverT = SparkSqlJobDriver>
    void SetSparkSqlJobDriver(SparkSqlJobDriverT&& value) { m_sparkSqlJobDriverHasBeenSet = true; m_sparkSqlJobDriver = std::forward<SparkSqlJobDriverT>(value); }
    template<typename SparkSqlJobDriverT = SparkSqlJobDriver>
    JobDriver& WithSparkSqlJobDriver(SparkSqlJobDriverT&& value) { SetSparkSqlJobDriver(std::forward<SparkSqlJobDriverT>(value)); return *this;}
    ///@}
  private:

    SparkSubmitJobDriver m_sparkSubmitJobDriver;
    bool m_sparkSubmitJobDriverHasBeenSet = false;

    SparkSqlJobDriver m_sparkSqlJobDriver;
    bool m_sparkSqlJobDriverHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
