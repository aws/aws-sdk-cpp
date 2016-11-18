/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ECS
{
namespace Model
{

  /**
   * <p>Details on a container instance host volume.</p>
   */
  class AWS_ECS_API HostVolumeProperties
  {
  public:
    HostVolumeProperties();
    HostVolumeProperties(const Aws::Utils::Json::JsonValue& jsonValue);
    HostVolumeProperties& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The path on the host container instance that is presented to the container.
     * If this parameter is empty, then the Docker daemon has assigned a host path for
     * you. If the <code>host</code> parameter contains a <code>sourcePath</code> file
     * location, then the data volume persists at the specified location on the host
     * container instance until you delete it manually. If the <code>sourcePath</code>
     * value does not exist on the host container instance, the Docker daemon creates
     * it. If the location does exist, the contents of the source path folder are
     * exported.</p>
     */
    inline const Aws::String& GetSourcePath() const{ return m_sourcePath; }

    /**
     * <p>The path on the host container instance that is presented to the container.
     * If this parameter is empty, then the Docker daemon has assigned a host path for
     * you. If the <code>host</code> parameter contains a <code>sourcePath</code> file
     * location, then the data volume persists at the specified location on the host
     * container instance until you delete it manually. If the <code>sourcePath</code>
     * value does not exist on the host container instance, the Docker daemon creates
     * it. If the location does exist, the contents of the source path folder are
     * exported.</p>
     */
    inline void SetSourcePath(const Aws::String& value) { m_sourcePathHasBeenSet = true; m_sourcePath = value; }

    /**
     * <p>The path on the host container instance that is presented to the container.
     * If this parameter is empty, then the Docker daemon has assigned a host path for
     * you. If the <code>host</code> parameter contains a <code>sourcePath</code> file
     * location, then the data volume persists at the specified location on the host
     * container instance until you delete it manually. If the <code>sourcePath</code>
     * value does not exist on the host container instance, the Docker daemon creates
     * it. If the location does exist, the contents of the source path folder are
     * exported.</p>
     */
    inline void SetSourcePath(Aws::String&& value) { m_sourcePathHasBeenSet = true; m_sourcePath = value; }

    /**
     * <p>The path on the host container instance that is presented to the container.
     * If this parameter is empty, then the Docker daemon has assigned a host path for
     * you. If the <code>host</code> parameter contains a <code>sourcePath</code> file
     * location, then the data volume persists at the specified location on the host
     * container instance until you delete it manually. If the <code>sourcePath</code>
     * value does not exist on the host container instance, the Docker daemon creates
     * it. If the location does exist, the contents of the source path folder are
     * exported.</p>
     */
    inline void SetSourcePath(const char* value) { m_sourcePathHasBeenSet = true; m_sourcePath.assign(value); }

    /**
     * <p>The path on the host container instance that is presented to the container.
     * If this parameter is empty, then the Docker daemon has assigned a host path for
     * you. If the <code>host</code> parameter contains a <code>sourcePath</code> file
     * location, then the data volume persists at the specified location on the host
     * container instance until you delete it manually. If the <code>sourcePath</code>
     * value does not exist on the host container instance, the Docker daemon creates
     * it. If the location does exist, the contents of the source path folder are
     * exported.</p>
     */
    inline HostVolumeProperties& WithSourcePath(const Aws::String& value) { SetSourcePath(value); return *this;}

    /**
     * <p>The path on the host container instance that is presented to the container.
     * If this parameter is empty, then the Docker daemon has assigned a host path for
     * you. If the <code>host</code> parameter contains a <code>sourcePath</code> file
     * location, then the data volume persists at the specified location on the host
     * container instance until you delete it manually. If the <code>sourcePath</code>
     * value does not exist on the host container instance, the Docker daemon creates
     * it. If the location does exist, the contents of the source path folder are
     * exported.</p>
     */
    inline HostVolumeProperties& WithSourcePath(Aws::String&& value) { SetSourcePath(value); return *this;}

    /**
     * <p>The path on the host container instance that is presented to the container.
     * If this parameter is empty, then the Docker daemon has assigned a host path for
     * you. If the <code>host</code> parameter contains a <code>sourcePath</code> file
     * location, then the data volume persists at the specified location on the host
     * container instance until you delete it manually. If the <code>sourcePath</code>
     * value does not exist on the host container instance, the Docker daemon creates
     * it. If the location does exist, the contents of the source path folder are
     * exported.</p>
     */
    inline HostVolumeProperties& WithSourcePath(const char* value) { SetSourcePath(value); return *this;}

  private:
    Aws::String m_sourcePath;
    bool m_sourcePathHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
