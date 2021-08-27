/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/MetricsSource.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Contains bias metrics for a model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Bias">AWS API
   * Reference</a></p>
   */
  class AWS_SAGEMAKER_API Bias
  {
  public:
    Bias();
    Bias(Aws::Utils::Json::JsonView jsonValue);
    Bias& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The bias report for a model</p>
     */
    inline const MetricsSource& GetReport() const{ return m_report; }

    /**
     * <p>The bias report for a model</p>
     */
    inline bool ReportHasBeenSet() const { return m_reportHasBeenSet; }

    /**
     * <p>The bias report for a model</p>
     */
    inline void SetReport(const MetricsSource& value) { m_reportHasBeenSet = true; m_report = value; }

    /**
     * <p>The bias report for a model</p>
     */
    inline void SetReport(MetricsSource&& value) { m_reportHasBeenSet = true; m_report = std::move(value); }

    /**
     * <p>The bias report for a model</p>
     */
    inline Bias& WithReport(const MetricsSource& value) { SetReport(value); return *this;}

    /**
     * <p>The bias report for a model</p>
     */
    inline Bias& WithReport(MetricsSource&& value) { SetReport(std::move(value)); return *this;}

  private:

    MetricsSource m_report;
    bool m_reportHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
