/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>Details on a container instance bind mount host volume.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/HostVolumeProperties">AWS
   * API Reference</a></p>
   */
  class HostVolumeProperties
  {
  public:
    AWS_ECS_API HostVolumeProperties();
    AWS_ECS_API HostVolumeProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API HostVolumeProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>When the <code>host</code> parameter is used, specify a
     * <code>sourcePath</code> to declare the path on the host container instance
     * that's presented to the container. If this parameter is empty, then the Docker
     * daemon has assigned a host path for you. If the <code>host</code> parameter
     * contains a <code>sourcePath</code> file location, then the data volume persists
     * at the specified location on the host container instance until you delete it
     * manually. If the <code>sourcePath</code> value doesn't exist on the host
     * container instance, the Docker daemon creates it. If the location does exist,
     * the contents of the source path folder are exported.</p> <p>If you're using the
     * Fargate launch type, the <code>sourcePath</code> parameter is not supported.</p>
     */
    inline const Aws::String& GetSourcePath() const{ return m_sourcePath; }

    /**
     * <p>When the <code>host</code> parameter is used, specify a
     * <code>sourcePath</code> to declare the path on the host container instance
     * that's presented to the container. If this parameter is empty, then the Docker
     * daemon has assigned a host path for you. If the <code>host</code> parameter
     * contains a <code>sourcePath</code> file location, then the data volume persists
     * at the specified location on the host container instance until you delete it
     * manually. If the <code>sourcePath</code> value doesn't exist on the host
     * container instance, the Docker daemon creates it. If the location does exist,
     * the contents of the source path folder are exported.</p> <p>If you're using the
     * Fargate launch type, the <code>sourcePath</code> parameter is not supported.</p>
     */
    inline bool SourcePathHasBeenSet() const { return m_sourcePathHasBeenSet; }

    /**
     * <p>When the <code>host</code> parameter is used, specify a
     * <code>sourcePath</code> to declare the path on the host container instance
     * that's presented to the container. If this parameter is empty, then the Docker
     * daemon has assigned a host path for you. If the <code>host</code> parameter
     * contains a <code>sourcePath</code> file location, then the data volume persists
     * at the specified location on the host container instance until you delete it
     * manually. If the <code>sourcePath</code> value doesn't exist on the host
     * container instance, the Docker daemon creates it. If the location does exist,
     * the contents of the source path folder are exported.</p> <p>If you're using the
     * Fargate launch type, the <code>sourcePath</code> parameter is not supported.</p>
     */
    inline void SetSourcePath(const Aws::String& value) { m_sourcePathHasBeenSet = true; m_sourcePath = value; }

    /**
     * <p>When the <code>host</code> parameter is used, specify a
     * <code>sourcePath</code> to declare the path on the host container instance
     * that's presented to the container. If this parameter is empty, then the Docker
     * daemon has assigned a host path for you. If the <code>host</code> parameter
     * contains a <code>sourcePath</code> file location, then the data volume persists
     * at the specified location on the host container instance until you delete it
     * manually. If the <code>sourcePath</code> value doesn't exist on the host
     * container instance, the Docker daemon creates it. If the location does exist,
     * the contents of the source path folder are exported.</p> <p>If you're using the
     * Fargate launch type, the <code>sourcePath</code> parameter is not supported.</p>
     */
    inline void SetSourcePath(Aws::String&& value) { m_sourcePathHasBeenSet = true; m_sourcePath = std::move(value); }

    /**
     * <p>When the <code>host</code> parameter is used, specify a
     * <code>sourcePath</code> to declare the path on the host container instance
     * that's presented to the container. If this parameter is empty, then the Docker
     * daemon has assigned a host path for you. If the <code>host</code> parameter
     * contains a <code>sourcePath</code> file location, then the data volume persists
     * at the specified location on the host container instance until you delete it
     * manually. If the <code>sourcePath</code> value doesn't exist on the host
     * container instance, the Docker daemon creates it. If the location does exist,
     * the contents of the source path folder are exported.</p> <p>If you're using the
     * Fargate launch type, the <code>sourcePath</code> parameter is not supported.</p>
     */
    inline void SetSourcePath(const char* value) { m_sourcePathHasBeenSet = true; m_sourcePath.assign(value); }

    /**
     * <p>When the <code>host</code> parameter is used, specify a
     * <code>sourcePath</code> to declare the path on the host container instance
     * that's presented to the container. If this parameter is empty, then the Docker
     * daemon has assigned a host path for you. If the <code>host</code> parameter
     * contains a <code>sourcePath</code> file location, then the data volume persists
     * at the specified location on the host container instance until you delete it
     * manually. If the <code>sourcePath</code> value doesn't exist on the host
     * container instance, the Docker daemon creates it. If the location does exist,
     * the contents of the source path folder are exported.</p> <p>If you're using the
     * Fargate launch type, the <code>sourcePath</code> parameter is not supported.</p>
     */
    inline HostVolumeProperties& WithSourcePath(const Aws::String& value) { SetSourcePath(value); return *this;}

    /**
     * <p>When the <code>host</code> parameter is used, specify a
     * <code>sourcePath</code> to declare the path on the host container instance
     * that's presented to the container. If this parameter is empty, then the Docker
     * daemon has assigned a host path for you. If the <code>host</code> parameter
     * contains a <code>sourcePath</code> file location, then the data volume persists
     * at the specified location on the host container instance until you delete it
     * manually. If the <code>sourcePath</code> value doesn't exist on the host
     * container instance, the Docker daemon creates it. If the location does exist,
     * the contents of the source path folder are exported.</p> <p>If you're using the
     * Fargate launch type, the <code>sourcePath</code> parameter is not supported.</p>
     */
    inline HostVolumeProperties& WithSourcePath(Aws::String&& value) { SetSourcePath(std::move(value)); return *this;}

    /**
     * <p>When the <code>host</code> parameter is used, specify a
     * <code>sourcePath</code> to declare the path on the host container instance
     * that's presented to the container. If this parameter is empty, then the Docker
     * daemon has assigned a host path for you. If the <code>host</code> parameter
     * contains a <code>sourcePath</code> file location, then the data volume persists
     * at the specified location on the host container instance until you delete it
     * manually. If the <code>sourcePath</code> value doesn't exist on the host
     * container instance, the Docker daemon creates it. If the location does exist,
     * the contents of the source path folder are exported.</p> <p>If you're using the
     * Fargate launch type, the <code>sourcePath</code> parameter is not supported.</p>
     */
    inline HostVolumeProperties& WithSourcePath(const char* value) { SetSourcePath(value); return *this;}

  private:

    Aws::String m_sourcePath;
    bool m_sourcePathHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
