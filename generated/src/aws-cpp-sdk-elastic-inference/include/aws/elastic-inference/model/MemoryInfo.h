/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastic-inference/ElasticInference_EXPORTS.h>

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
   * <p> The memory information of an Elastic Inference Accelerator type.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastic-inference-2017-07-25/MemoryInfo">AWS
   * API Reference</a></p>
   */
  class MemoryInfo
  {
  public:
    AWS_ELASTICINFERENCE_API MemoryInfo();
    AWS_ELASTICINFERENCE_API MemoryInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICINFERENCE_API MemoryInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The size in mebibytes of the Elastic Inference Accelerator type. </p>
     */
    inline int GetSizeInMiB() const{ return m_sizeInMiB; }

    /**
     * <p> The size in mebibytes of the Elastic Inference Accelerator type. </p>
     */
    inline bool SizeInMiBHasBeenSet() const { return m_sizeInMiBHasBeenSet; }

    /**
     * <p> The size in mebibytes of the Elastic Inference Accelerator type. </p>
     */
    inline void SetSizeInMiB(int value) { m_sizeInMiBHasBeenSet = true; m_sizeInMiB = value; }

    /**
     * <p> The size in mebibytes of the Elastic Inference Accelerator type. </p>
     */
    inline MemoryInfo& WithSizeInMiB(int value) { SetSizeInMiB(value); return *this;}

  private:

    int m_sizeInMiB;
    bool m_sizeInMiBHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticInference
} // namespace Aws
