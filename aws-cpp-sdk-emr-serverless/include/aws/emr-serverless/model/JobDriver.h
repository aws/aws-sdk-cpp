/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/emr-serverless/model/SparkSubmit.h>
#include <aws/emr-serverless/model/Hive.h>
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
namespace EMRServerless
{
namespace Model
{

  /**
   * <p>The driver that the job runs on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/JobDriver">AWS
   * API Reference</a></p>
   */
  class JobDriver
  {
  public:
    AWS_EMRSERVERLESS_API JobDriver();
    AWS_EMRSERVERLESS_API JobDriver(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API JobDriver& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The job driver parameters specified for Spark.</p>
     */
    inline const SparkSubmit& GetSparkSubmit() const{ return m_sparkSubmit; }

    /**
     * <p>The job driver parameters specified for Spark.</p>
     */
    inline bool SparkSubmitHasBeenSet() const { return m_sparkSubmitHasBeenSet; }

    /**
     * <p>The job driver parameters specified for Spark.</p>
     */
    inline void SetSparkSubmit(const SparkSubmit& value) { m_sparkSubmitHasBeenSet = true; m_sparkSubmit = value; }

    /**
     * <p>The job driver parameters specified for Spark.</p>
     */
    inline void SetSparkSubmit(SparkSubmit&& value) { m_sparkSubmitHasBeenSet = true; m_sparkSubmit = std::move(value); }

    /**
     * <p>The job driver parameters specified for Spark.</p>
     */
    inline JobDriver& WithSparkSubmit(const SparkSubmit& value) { SetSparkSubmit(value); return *this;}

    /**
     * <p>The job driver parameters specified for Spark.</p>
     */
    inline JobDriver& WithSparkSubmit(SparkSubmit&& value) { SetSparkSubmit(std::move(value)); return *this;}


    /**
     * <p>The job driver parameters specified for Hive.</p>
     */
    inline const Hive& GetHive() const{ return m_hive; }

    /**
     * <p>The job driver parameters specified for Hive.</p>
     */
    inline bool HiveHasBeenSet() const { return m_hiveHasBeenSet; }

    /**
     * <p>The job driver parameters specified for Hive.</p>
     */
    inline void SetHive(const Hive& value) { m_hiveHasBeenSet = true; m_hive = value; }

    /**
     * <p>The job driver parameters specified for Hive.</p>
     */
    inline void SetHive(Hive&& value) { m_hiveHasBeenSet = true; m_hive = std::move(value); }

    /**
     * <p>The job driver parameters specified for Hive.</p>
     */
    inline JobDriver& WithHive(const Hive& value) { SetHive(value); return *this;}

    /**
     * <p>The job driver parameters specified for Hive.</p>
     */
    inline JobDriver& WithHive(Hive&& value) { SetHive(std::move(value)); return *this;}

  private:

    SparkSubmit m_sparkSubmit;
    bool m_sparkSubmitHasBeenSet = false;

    Hive m_hive;
    bool m_hiveHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
