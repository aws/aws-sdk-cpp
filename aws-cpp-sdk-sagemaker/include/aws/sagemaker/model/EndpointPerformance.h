/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/InferenceMetrics.h>
#include <aws/sagemaker/model/EndpointInfo.h>
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
   * <p>The performance results from running an Inference Recommender job on an
   * existing endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EndpointPerformance">AWS
   * API Reference</a></p>
   */
  class EndpointPerformance
  {
  public:
    AWS_SAGEMAKER_API EndpointPerformance();
    AWS_SAGEMAKER_API EndpointPerformance(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EndpointPerformance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The metrics for an existing endpoint.</p>
     */
    inline const InferenceMetrics& GetMetrics() const{ return m_metrics; }

    /**
     * <p>The metrics for an existing endpoint.</p>
     */
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }

    /**
     * <p>The metrics for an existing endpoint.</p>
     */
    inline void SetMetrics(const InferenceMetrics& value) { m_metricsHasBeenSet = true; m_metrics = value; }

    /**
     * <p>The metrics for an existing endpoint.</p>
     */
    inline void SetMetrics(InferenceMetrics&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }

    /**
     * <p>The metrics for an existing endpoint.</p>
     */
    inline EndpointPerformance& WithMetrics(const InferenceMetrics& value) { SetMetrics(value); return *this;}

    /**
     * <p>The metrics for an existing endpoint.</p>
     */
    inline EndpointPerformance& WithMetrics(InferenceMetrics&& value) { SetMetrics(std::move(value)); return *this;}


    
    inline const EndpointInfo& GetEndpointInfo() const{ return m_endpointInfo; }

    
    inline bool EndpointInfoHasBeenSet() const { return m_endpointInfoHasBeenSet; }

    
    inline void SetEndpointInfo(const EndpointInfo& value) { m_endpointInfoHasBeenSet = true; m_endpointInfo = value; }

    
    inline void SetEndpointInfo(EndpointInfo&& value) { m_endpointInfoHasBeenSet = true; m_endpointInfo = std::move(value); }

    
    inline EndpointPerformance& WithEndpointInfo(const EndpointInfo& value) { SetEndpointInfo(value); return *this;}

    
    inline EndpointPerformance& WithEndpointInfo(EndpointInfo&& value) { SetEndpointInfo(std::move(value)); return *this;}

  private:

    InferenceMetrics m_metrics;
    bool m_metricsHasBeenSet = false;

    EndpointInfo m_endpointInfo;
    bool m_endpointInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
