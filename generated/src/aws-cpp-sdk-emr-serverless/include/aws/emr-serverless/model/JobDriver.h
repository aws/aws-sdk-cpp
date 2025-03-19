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
    AWS_EMRSERVERLESS_API JobDriver() = default;
    AWS_EMRSERVERLESS_API JobDriver(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API JobDriver& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The job driver parameters specified for Spark.</p>
     */
    inline const SparkSubmit& GetSparkSubmit() const { return m_sparkSubmit; }
    inline bool SparkSubmitHasBeenSet() const { return m_sparkSubmitHasBeenSet; }
    template<typename SparkSubmitT = SparkSubmit>
    void SetSparkSubmit(SparkSubmitT&& value) { m_sparkSubmitHasBeenSet = true; m_sparkSubmit = std::forward<SparkSubmitT>(value); }
    template<typename SparkSubmitT = SparkSubmit>
    JobDriver& WithSparkSubmit(SparkSubmitT&& value) { SetSparkSubmit(std::forward<SparkSubmitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job driver parameters specified for Hive.</p>
     */
    inline const Hive& GetHive() const { return m_hive; }
    inline bool HiveHasBeenSet() const { return m_hiveHasBeenSet; }
    template<typename HiveT = Hive>
    void SetHive(HiveT&& value) { m_hiveHasBeenSet = true; m_hive = std::forward<HiveT>(value); }
    template<typename HiveT = Hive>
    JobDriver& WithHive(HiveT&& value) { SetHive(std::forward<HiveT>(value)); return *this;}
    ///@}
  private:

    SparkSubmit m_sparkSubmit;
    bool m_sparkSubmitHasBeenSet = false;

    Hive m_hive;
    bool m_hiveHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
