/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
   * <p>Configures the behavior of the client used by SageMaker to interact with the
   * model container during asynchronous inference.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AsyncInferenceClientConfig">AWS
   * API Reference</a></p>
   */
  class AsyncInferenceClientConfig
  {
  public:
    AWS_SAGEMAKER_API AsyncInferenceClientConfig();
    AWS_SAGEMAKER_API AsyncInferenceClientConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AsyncInferenceClientConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of concurrent requests sent by the SageMaker client to the
     * model container. If no value is provided, SageMaker chooses an optimal
     * value.</p>
     */
    inline int GetMaxConcurrentInvocationsPerInstance() const{ return m_maxConcurrentInvocationsPerInstance; }

    /**
     * <p>The maximum number of concurrent requests sent by the SageMaker client to the
     * model container. If no value is provided, SageMaker chooses an optimal
     * value.</p>
     */
    inline bool MaxConcurrentInvocationsPerInstanceHasBeenSet() const { return m_maxConcurrentInvocationsPerInstanceHasBeenSet; }

    /**
     * <p>The maximum number of concurrent requests sent by the SageMaker client to the
     * model container. If no value is provided, SageMaker chooses an optimal
     * value.</p>
     */
    inline void SetMaxConcurrentInvocationsPerInstance(int value) { m_maxConcurrentInvocationsPerInstanceHasBeenSet = true; m_maxConcurrentInvocationsPerInstance = value; }

    /**
     * <p>The maximum number of concurrent requests sent by the SageMaker client to the
     * model container. If no value is provided, SageMaker chooses an optimal
     * value.</p>
     */
    inline AsyncInferenceClientConfig& WithMaxConcurrentInvocationsPerInstance(int value) { SetMaxConcurrentInvocationsPerInstance(value); return *this;}

  private:

    int m_maxConcurrentInvocationsPerInstance;
    bool m_maxConcurrentInvocationsPerInstanceHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
