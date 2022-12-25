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
   * <p>Specifies the serverless configuration for an endpoint variant.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProductionVariantServerlessConfig">AWS
   * API Reference</a></p>
   */
  class ProductionVariantServerlessConfig
  {
  public:
    AWS_SAGEMAKER_API ProductionVariantServerlessConfig();
    AWS_SAGEMAKER_API ProductionVariantServerlessConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProductionVariantServerlessConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The memory size of your serverless endpoint. Valid values are in 1 GB
     * increments: 1024 MB, 2048 MB, 3072 MB, 4096 MB, 5120 MB, or 6144 MB.</p>
     */
    inline int GetMemorySizeInMB() const{ return m_memorySizeInMB; }

    /**
     * <p>The memory size of your serverless endpoint. Valid values are in 1 GB
     * increments: 1024 MB, 2048 MB, 3072 MB, 4096 MB, 5120 MB, or 6144 MB.</p>
     */
    inline bool MemorySizeInMBHasBeenSet() const { return m_memorySizeInMBHasBeenSet; }

    /**
     * <p>The memory size of your serverless endpoint. Valid values are in 1 GB
     * increments: 1024 MB, 2048 MB, 3072 MB, 4096 MB, 5120 MB, or 6144 MB.</p>
     */
    inline void SetMemorySizeInMB(int value) { m_memorySizeInMBHasBeenSet = true; m_memorySizeInMB = value; }

    /**
     * <p>The memory size of your serverless endpoint. Valid values are in 1 GB
     * increments: 1024 MB, 2048 MB, 3072 MB, 4096 MB, 5120 MB, or 6144 MB.</p>
     */
    inline ProductionVariantServerlessConfig& WithMemorySizeInMB(int value) { SetMemorySizeInMB(value); return *this;}


    /**
     * <p>The maximum number of concurrent invocations your serverless endpoint can
     * process.</p>
     */
    inline int GetMaxConcurrency() const{ return m_maxConcurrency; }

    /**
     * <p>The maximum number of concurrent invocations your serverless endpoint can
     * process.</p>
     */
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }

    /**
     * <p>The maximum number of concurrent invocations your serverless endpoint can
     * process.</p>
     */
    inline void SetMaxConcurrency(int value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = value; }

    /**
     * <p>The maximum number of concurrent invocations your serverless endpoint can
     * process.</p>
     */
    inline ProductionVariantServerlessConfig& WithMaxConcurrency(int value) { SetMaxConcurrency(value); return *this;}

  private:

    int m_memorySizeInMB;
    bool m_memorySizeInMBHasBeenSet = false;

    int m_maxConcurrency;
    bool m_maxConcurrencyHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
