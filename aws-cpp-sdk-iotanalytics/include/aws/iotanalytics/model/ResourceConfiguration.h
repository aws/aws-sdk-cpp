/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * "containerAction".</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ResourceConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_IOTANALYTICS_API ResourceConfiguration
  {
  public:
    ResourceConfiguration();
    ResourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ResourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the compute resource used to execute the "containerAction".
     * Possible values are: ACU_1 (vCPU=4, memory=16GiB) or ACU_2 (vCPU=8,
     * memory=32GiB).</p>
     */
    inline const ComputeType& GetComputeType() const{ return m_computeType; }

    /**
     * <p>The type of the compute resource used to execute the "containerAction".
     * Possible values are: ACU_1 (vCPU=4, memory=16GiB) or ACU_2 (vCPU=8,
     * memory=32GiB).</p>
     */
    inline bool ComputeTypeHasBeenSet() const { return m_computeTypeHasBeenSet; }

    /**
     * <p>The type of the compute resource used to execute the "containerAction".
     * Possible values are: ACU_1 (vCPU=4, memory=16GiB) or ACU_2 (vCPU=8,
     * memory=32GiB).</p>
     */
    inline void SetComputeType(const ComputeType& value) { m_computeTypeHasBeenSet = true; m_computeType = value; }

    /**
     * <p>The type of the compute resource used to execute the "containerAction".
     * Possible values are: ACU_1 (vCPU=4, memory=16GiB) or ACU_2 (vCPU=8,
     * memory=32GiB).</p>
     */
    inline void SetComputeType(ComputeType&& value) { m_computeTypeHasBeenSet = true; m_computeType = std::move(value); }

    /**
     * <p>The type of the compute resource used to execute the "containerAction".
     * Possible values are: ACU_1 (vCPU=4, memory=16GiB) or ACU_2 (vCPU=8,
     * memory=32GiB).</p>
     */
    inline ResourceConfiguration& WithComputeType(const ComputeType& value) { SetComputeType(value); return *this;}

    /**
     * <p>The type of the compute resource used to execute the "containerAction".
     * Possible values are: ACU_1 (vCPU=4, memory=16GiB) or ACU_2 (vCPU=8,
     * memory=32GiB).</p>
     */
    inline ResourceConfiguration& WithComputeType(ComputeType&& value) { SetComputeType(std::move(value)); return *this;}


    /**
     * <p>The size (in GB) of the persistent storage available to the resource instance
     * used to execute the "containerAction" (min: 1, max: 50).</p>
     */
    inline int GetVolumeSizeInGB() const{ return m_volumeSizeInGB; }

    /**
     * <p>The size (in GB) of the persistent storage available to the resource instance
     * used to execute the "containerAction" (min: 1, max: 50).</p>
     */
    inline bool VolumeSizeInGBHasBeenSet() const { return m_volumeSizeInGBHasBeenSet; }

    /**
     * <p>The size (in GB) of the persistent storage available to the resource instance
     * used to execute the "containerAction" (min: 1, max: 50).</p>
     */
    inline void SetVolumeSizeInGB(int value) { m_volumeSizeInGBHasBeenSet = true; m_volumeSizeInGB = value; }

    /**
     * <p>The size (in GB) of the persistent storage available to the resource instance
     * used to execute the "containerAction" (min: 1, max: 50).</p>
     */
    inline ResourceConfiguration& WithVolumeSizeInGB(int value) { SetVolumeSizeInGB(value); return *this;}

  private:

    ComputeType m_computeType;
    bool m_computeTypeHasBeenSet;

    int m_volumeSizeInGB;
    bool m_volumeSizeInGBHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
