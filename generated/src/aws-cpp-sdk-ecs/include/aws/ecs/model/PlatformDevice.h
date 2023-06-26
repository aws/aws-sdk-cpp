/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/PlatformDeviceType.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The devices that are available on the container instance. The only supported
   * device type is a GPU.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/PlatformDevice">AWS
   * API Reference</a></p>
   */
  class PlatformDevice
  {
  public:
    AWS_ECS_API PlatformDevice();
    AWS_ECS_API PlatformDevice(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API PlatformDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID for the GPUs on the container instance. The available GPU IDs can also
     * be obtained on the container instance in the
     * <code>/var/lib/ecs/gpu/nvidia_gpu_info.json</code> file.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID for the GPUs on the container instance. The available GPU IDs can also
     * be obtained on the container instance in the
     * <code>/var/lib/ecs/gpu/nvidia_gpu_info.json</code> file.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID for the GPUs on the container instance. The available GPU IDs can also
     * be obtained on the container instance in the
     * <code>/var/lib/ecs/gpu/nvidia_gpu_info.json</code> file.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID for the GPUs on the container instance. The available GPU IDs can also
     * be obtained on the container instance in the
     * <code>/var/lib/ecs/gpu/nvidia_gpu_info.json</code> file.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID for the GPUs on the container instance. The available GPU IDs can also
     * be obtained on the container instance in the
     * <code>/var/lib/ecs/gpu/nvidia_gpu_info.json</code> file.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID for the GPUs on the container instance. The available GPU IDs can also
     * be obtained on the container instance in the
     * <code>/var/lib/ecs/gpu/nvidia_gpu_info.json</code> file.</p>
     */
    inline PlatformDevice& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID for the GPUs on the container instance. The available GPU IDs can also
     * be obtained on the container instance in the
     * <code>/var/lib/ecs/gpu/nvidia_gpu_info.json</code> file.</p>
     */
    inline PlatformDevice& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID for the GPUs on the container instance. The available GPU IDs can also
     * be obtained on the container instance in the
     * <code>/var/lib/ecs/gpu/nvidia_gpu_info.json</code> file.</p>
     */
    inline PlatformDevice& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The type of device that's available on the container instance. The only
     * supported value is <code>GPU</code>.</p>
     */
    inline const PlatformDeviceType& GetType() const{ return m_type; }

    /**
     * <p>The type of device that's available on the container instance. The only
     * supported value is <code>GPU</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of device that's available on the container instance. The only
     * supported value is <code>GPU</code>.</p>
     */
    inline void SetType(const PlatformDeviceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of device that's available on the container instance. The only
     * supported value is <code>GPU</code>.</p>
     */
    inline void SetType(PlatformDeviceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of device that's available on the container instance. The only
     * supported value is <code>GPU</code>.</p>
     */
    inline PlatformDevice& WithType(const PlatformDeviceType& value) { SetType(value); return *this;}

    /**
     * <p>The type of device that's available on the container instance. The only
     * supported value is <code>GPU</code>.</p>
     */
    inline PlatformDevice& WithType(PlatformDeviceType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    PlatformDeviceType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
