/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastic-inference/ElasticInference_EXPORTS.h>
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
namespace ElasticInference
{
namespace Model
{

  /**
   * <p> The health details of an Elastic Inference Accelerator. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastic-inference-2017-07-25/ElasticInferenceAcceleratorHealth">AWS
   * API Reference</a></p>
   */
  class ElasticInferenceAcceleratorHealth
  {
  public:
    AWS_ELASTICINFERENCE_API ElasticInferenceAcceleratorHealth();
    AWS_ELASTICINFERENCE_API ElasticInferenceAcceleratorHealth(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICINFERENCE_API ElasticInferenceAcceleratorHealth& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The health status of the Elastic Inference Accelerator. </p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p> The health status of the Elastic Inference Accelerator. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The health status of the Elastic Inference Accelerator. </p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The health status of the Elastic Inference Accelerator. </p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The health status of the Elastic Inference Accelerator. </p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p> The health status of the Elastic Inference Accelerator. </p>
     */
    inline ElasticInferenceAcceleratorHealth& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p> The health status of the Elastic Inference Accelerator. </p>
     */
    inline ElasticInferenceAcceleratorHealth& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p> The health status of the Elastic Inference Accelerator. </p>
     */
    inline ElasticInferenceAcceleratorHealth& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticInference
} // namespace Aws
