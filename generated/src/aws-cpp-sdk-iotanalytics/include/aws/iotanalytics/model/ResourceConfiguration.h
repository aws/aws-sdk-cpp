/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/model/ComputeType.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>The configuration of the resource used to execute the
   * <code>containerAction</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ResourceConfiguration">AWS
   * API Reference</a></p>
   */
  class ResourceConfiguration
  {
  public:
    AWS_IOTANALYTICS_API ResourceConfiguration();
    AWS_IOTANALYTICS_API ResourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API ResourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the compute resource used to execute the
     * <code>containerAction</code>. Possible values are: <code>ACU_1</code> (vCPU=4,
     * memory=16 GiB) or <code>ACU_2</code> (vCPU=8, memory=32 GiB).</p>
     */
    inline const ComputeType& GetComputeType() const{ return m_computeType; }

    /**
     * <p>The type of the compute resource used to execute the
     * <code>containerAction</code>. Possible values are: <code>ACU_1</code> (vCPU=4,
     * memory=16 GiB) or <code>ACU_2</code> (vCPU=8, memory=32 GiB).</p>
     */
    inline bool ComputeTypeHasBeenSet() const { return m_computeTypeHasBeenSet; }

    /**
     * <p>The type of the compute resource used to execute the
     * <code>containerAction</code>. Possible values are: <code>ACU_1</code> (vCPU=4,
     * memory=16 GiB) or <code>ACU_2</code> (vCPU=8, memory=32 GiB).</p>
     */
    inline void SetComputeType(const ComputeType& value) { m_computeTypeHasBeenSet = true; m_computeType = value; }

    /**
     * <p>The type of the compute resource used to execute the
     * <code>containerAction</code>. Possible values are: <code>ACU_1</code> (vCPU=4,
     * memory=16 GiB) or <code>ACU_2</code> (vCPU=8, memory=32 GiB).</p>
     */
    inline void SetComputeType(ComputeType&& value) { m_computeTypeHasBeenSet = true; m_computeType = std::move(value); }

    /**
     * <p>The type of the compute resource used to execute the
     * <code>containerAction</code>. Possible values are: <code>ACU_1</code> (vCPU=4,
     * memory=16 GiB) or <code>ACU_2</code> (vCPU=8, memory=32 GiB).</p>
     */
    inline ResourceConfiguration& WithComputeType(const ComputeType& value) { SetComputeType(value); return *this;}

    /**
     * <p>The type of the compute resource used to execute the
     * <code>containerAction</code>. Possible values are: <code>ACU_1</code> (vCPU=4,
     * memory=16 GiB) or <code>ACU_2</code> (vCPU=8, memory=32 GiB).</p>
     */
    inline ResourceConfiguration& WithComputeType(ComputeType&& value) { SetComputeType(std::move(value)); return *this;}


    /**
     * <p>The size, in GB, of the persistent storage available to the resource instance
     * used to execute the <code>containerAction</code> (min: 1, max: 50).</p>
     */
    inline int GetVolumeSizeInGB() const{ return m_volumeSizeInGB; }

    /**
     * <p>The size, in GB, of the persistent storage available to the resource instance
     * used to execute the <code>containerAction</code> (min: 1, max: 50).</p>
     */
    inline bool VolumeSizeInGBHasBeenSet() const { return m_volumeSizeInGBHasBeenSet; }

    /**
     * <p>The size, in GB, of the persistent storage available to the resource instance
     * used to execute the <code>containerAction</code> (min: 1, max: 50).</p>
     */
    inline void SetVolumeSizeInGB(int value) { m_volumeSizeInGBHasBeenSet = true; m_volumeSizeInGB = value; }

    /**
     * <p>The size, in GB, of the persistent storage available to the resource instance
     * used to execute the <code>containerAction</code> (min: 1, max: 50).</p>
     */
    inline ResourceConfiguration& WithVolumeSizeInGB(int value) { SetVolumeSizeInGB(value); return *this;}

  private:

    ComputeType m_computeType;
    bool m_computeTypeHasBeenSet = false;

    int m_volumeSizeInGB;
    bool m_volumeSizeInGBHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
