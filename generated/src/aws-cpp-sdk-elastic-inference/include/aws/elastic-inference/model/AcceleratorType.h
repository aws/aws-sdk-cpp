/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastic-inference/ElasticInference_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elastic-inference/model/MemoryInfo.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elastic-inference/model/KeyValuePair.h>
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
   * <p> The details of an Elastic Inference Accelerator type. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastic-inference-2017-07-25/AcceleratorType">AWS
   * API Reference</a></p>
   */
  class AcceleratorType
  {
  public:
    AWS_ELASTICINFERENCE_API AcceleratorType();
    AWS_ELASTICINFERENCE_API AcceleratorType(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICINFERENCE_API AcceleratorType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the Elastic Inference Accelerator type. </p>
     */
    inline const Aws::String& GetAcceleratorTypeName() const{ return m_acceleratorTypeName; }

    /**
     * <p> The name of the Elastic Inference Accelerator type. </p>
     */
    inline bool AcceleratorTypeNameHasBeenSet() const { return m_acceleratorTypeNameHasBeenSet; }

    /**
     * <p> The name of the Elastic Inference Accelerator type. </p>
     */
    inline void SetAcceleratorTypeName(const Aws::String& value) { m_acceleratorTypeNameHasBeenSet = true; m_acceleratorTypeName = value; }

    /**
     * <p> The name of the Elastic Inference Accelerator type. </p>
     */
    inline void SetAcceleratorTypeName(Aws::String&& value) { m_acceleratorTypeNameHasBeenSet = true; m_acceleratorTypeName = std::move(value); }

    /**
     * <p> The name of the Elastic Inference Accelerator type. </p>
     */
    inline void SetAcceleratorTypeName(const char* value) { m_acceleratorTypeNameHasBeenSet = true; m_acceleratorTypeName.assign(value); }

    /**
     * <p> The name of the Elastic Inference Accelerator type. </p>
     */
    inline AcceleratorType& WithAcceleratorTypeName(const Aws::String& value) { SetAcceleratorTypeName(value); return *this;}

    /**
     * <p> The name of the Elastic Inference Accelerator type. </p>
     */
    inline AcceleratorType& WithAcceleratorTypeName(Aws::String&& value) { SetAcceleratorTypeName(std::move(value)); return *this;}

    /**
     * <p> The name of the Elastic Inference Accelerator type. </p>
     */
    inline AcceleratorType& WithAcceleratorTypeName(const char* value) { SetAcceleratorTypeName(value); return *this;}


    /**
     * <p> The memory information of the Elastic Inference Accelerator type. </p>
     */
    inline const MemoryInfo& GetMemoryInfo() const{ return m_memoryInfo; }

    /**
     * <p> The memory information of the Elastic Inference Accelerator type. </p>
     */
    inline bool MemoryInfoHasBeenSet() const { return m_memoryInfoHasBeenSet; }

    /**
     * <p> The memory information of the Elastic Inference Accelerator type. </p>
     */
    inline void SetMemoryInfo(const MemoryInfo& value) { m_memoryInfoHasBeenSet = true; m_memoryInfo = value; }

    /**
     * <p> The memory information of the Elastic Inference Accelerator type. </p>
     */
    inline void SetMemoryInfo(MemoryInfo&& value) { m_memoryInfoHasBeenSet = true; m_memoryInfo = std::move(value); }

    /**
     * <p> The memory information of the Elastic Inference Accelerator type. </p>
     */
    inline AcceleratorType& WithMemoryInfo(const MemoryInfo& value) { SetMemoryInfo(value); return *this;}

    /**
     * <p> The memory information of the Elastic Inference Accelerator type. </p>
     */
    inline AcceleratorType& WithMemoryInfo(MemoryInfo&& value) { SetMemoryInfo(std::move(value)); return *this;}


    /**
     * <p> The throughput information of the Elastic Inference Accelerator type. </p>
     */
    inline const Aws::Vector<KeyValuePair>& GetThroughputInfo() const{ return m_throughputInfo; }

    /**
     * <p> The throughput information of the Elastic Inference Accelerator type. </p>
     */
    inline bool ThroughputInfoHasBeenSet() const { return m_throughputInfoHasBeenSet; }

    /**
     * <p> The throughput information of the Elastic Inference Accelerator type. </p>
     */
    inline void SetThroughputInfo(const Aws::Vector<KeyValuePair>& value) { m_throughputInfoHasBeenSet = true; m_throughputInfo = value; }

    /**
     * <p> The throughput information of the Elastic Inference Accelerator type. </p>
     */
    inline void SetThroughputInfo(Aws::Vector<KeyValuePair>&& value) { m_throughputInfoHasBeenSet = true; m_throughputInfo = std::move(value); }

    /**
     * <p> The throughput information of the Elastic Inference Accelerator type. </p>
     */
    inline AcceleratorType& WithThroughputInfo(const Aws::Vector<KeyValuePair>& value) { SetThroughputInfo(value); return *this;}

    /**
     * <p> The throughput information of the Elastic Inference Accelerator type. </p>
     */
    inline AcceleratorType& WithThroughputInfo(Aws::Vector<KeyValuePair>&& value) { SetThroughputInfo(std::move(value)); return *this;}

    /**
     * <p> The throughput information of the Elastic Inference Accelerator type. </p>
     */
    inline AcceleratorType& AddThroughputInfo(const KeyValuePair& value) { m_throughputInfoHasBeenSet = true; m_throughputInfo.push_back(value); return *this; }

    /**
     * <p> The throughput information of the Elastic Inference Accelerator type. </p>
     */
    inline AcceleratorType& AddThroughputInfo(KeyValuePair&& value) { m_throughputInfoHasBeenSet = true; m_throughputInfo.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_acceleratorTypeName;
    bool m_acceleratorTypeNameHasBeenSet = false;

    MemoryInfo m_memoryInfo;
    bool m_memoryInfoHasBeenSet = false;

    Aws::Vector<KeyValuePair> m_throughputInfo;
    bool m_throughputInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticInference
} // namespace Aws
