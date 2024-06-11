/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/ExternalMetricStatusCode.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p> Describes Compute Optimizer's integration status with your chosen external
   * metric provider. For example, Datadog. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ExternalMetricStatus">AWS
   * API Reference</a></p>
   */
  class ExternalMetricStatus
  {
  public:
    AWS_COMPUTEOPTIMIZER_API ExternalMetricStatus();
    AWS_COMPUTEOPTIMIZER_API ExternalMetricStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API ExternalMetricStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The status code for Compute Optimizer's integration with an external metrics
     * provider. </p>
     */
    inline const ExternalMetricStatusCode& GetStatusCode() const{ return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(const ExternalMetricStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline void SetStatusCode(ExternalMetricStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }
    inline ExternalMetricStatus& WithStatusCode(const ExternalMetricStatusCode& value) { SetStatusCode(value); return *this;}
    inline ExternalMetricStatus& WithStatusCode(ExternalMetricStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The reason for Compute Optimizer's integration status with your external
     * metric provider. </p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline ExternalMetricStatus& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline ExternalMetricStatus& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline ExternalMetricStatus& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}
  private:

    ExternalMetricStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
