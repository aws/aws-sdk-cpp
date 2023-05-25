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
   * <p> A throughput entry for an Elastic Inference Accelerator type. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastic-inference-2017-07-25/KeyValuePair">AWS
   * API Reference</a></p>
   */
  class KeyValuePair
  {
  public:
    AWS_ELASTICINFERENCE_API KeyValuePair();
    AWS_ELASTICINFERENCE_API KeyValuePair(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICINFERENCE_API KeyValuePair& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The throughput value of the Elastic Inference Accelerator type. It can
     * assume the following values: TFLOPS16bit: the throughput expressed in 16bit
     * TeraFLOPS. TFLOPS32bit: the throughput expressed in 32bit TeraFLOPS. </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p> The throughput value of the Elastic Inference Accelerator type. It can
     * assume the following values: TFLOPS16bit: the throughput expressed in 16bit
     * TeraFLOPS. TFLOPS32bit: the throughput expressed in 32bit TeraFLOPS. </p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p> The throughput value of the Elastic Inference Accelerator type. It can
     * assume the following values: TFLOPS16bit: the throughput expressed in 16bit
     * TeraFLOPS. TFLOPS32bit: the throughput expressed in 32bit TeraFLOPS. </p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p> The throughput value of the Elastic Inference Accelerator type. It can
     * assume the following values: TFLOPS16bit: the throughput expressed in 16bit
     * TeraFLOPS. TFLOPS32bit: the throughput expressed in 32bit TeraFLOPS. </p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p> The throughput value of the Elastic Inference Accelerator type. It can
     * assume the following values: TFLOPS16bit: the throughput expressed in 16bit
     * TeraFLOPS. TFLOPS32bit: the throughput expressed in 32bit TeraFLOPS. </p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p> The throughput value of the Elastic Inference Accelerator type. It can
     * assume the following values: TFLOPS16bit: the throughput expressed in 16bit
     * TeraFLOPS. TFLOPS32bit: the throughput expressed in 32bit TeraFLOPS. </p>
     */
    inline KeyValuePair& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p> The throughput value of the Elastic Inference Accelerator type. It can
     * assume the following values: TFLOPS16bit: the throughput expressed in 16bit
     * TeraFLOPS. TFLOPS32bit: the throughput expressed in 32bit TeraFLOPS. </p>
     */
    inline KeyValuePair& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p> The throughput value of the Elastic Inference Accelerator type. It can
     * assume the following values: TFLOPS16bit: the throughput expressed in 16bit
     * TeraFLOPS. TFLOPS32bit: the throughput expressed in 32bit TeraFLOPS. </p>
     */
    inline KeyValuePair& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p> The throughput value of the Elastic Inference Accelerator type. </p>
     */
    inline int GetValue() const{ return m_value; }

    /**
     * <p> The throughput value of the Elastic Inference Accelerator type. </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p> The throughput value of the Elastic Inference Accelerator type. </p>
     */
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p> The throughput value of the Elastic Inference Accelerator type. </p>
     */
    inline KeyValuePair& WithValue(int value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    int m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticInference
} // namespace Aws
