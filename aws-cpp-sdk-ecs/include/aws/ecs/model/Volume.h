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
#include <aws/ecs/model/HostVolumeProperties.h>

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
   * <p>A data volume used in a task definition.</p>
   */
  class AWS_ECS_API Volume
  {
  public:
    Volume();
    Volume(const Aws::Utils::Json::JsonValue& jsonValue);
    Volume& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * hyphens, and underscores are allowed. This name is referenced in the
     * <code>sourceVolume</code> parameter of container definition
     * <code>mountPoints</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * hyphens, and underscores are allowed. This name is referenced in the
     * <code>sourceVolume</code> parameter of container definition
     * <code>mountPoints</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * hyphens, and underscores are allowed. This name is referenced in the
     * <code>sourceVolume</code> parameter of container definition
     * <code>mountPoints</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * hyphens, and underscores are allowed. This name is referenced in the
     * <code>sourceVolume</code> parameter of container definition
     * <code>mountPoints</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * hyphens, and underscores are allowed. This name is referenced in the
     * <code>sourceVolume</code> parameter of container definition
     * <code>mountPoints</code>.</p>
     */
    inline Volume& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * hyphens, and underscores are allowed. This name is referenced in the
     * <code>sourceVolume</code> parameter of container definition
     * <code>mountPoints</code>.</p>
     */
    inline Volume& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * hyphens, and underscores are allowed. This name is referenced in the
     * <code>sourceVolume</code> parameter of container definition
     * <code>mountPoints</code>.</p>
     */
    inline Volume& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The contents of the <code>host</code> parameter determine whether your data
     * volume persists on the host container instance and where it is stored. If the
     * host parameter is empty, then the Docker daemon assigns a host path for your
     * data volume, but the data is not guaranteed to persist after the containers
     * associated with it stop running.</p>
     */
    inline const HostVolumeProperties& GetHost() const{ return m_host; }

    /**
     * <p>The contents of the <code>host</code> parameter determine whether your data
     * volume persists on the host container instance and where it is stored. If the
     * host parameter is empty, then the Docker daemon assigns a host path for your
     * data volume, but the data is not guaranteed to persist after the containers
     * associated with it stop running.</p>
     */
    inline void SetHost(const HostVolumeProperties& value) { m_hostHasBeenSet = true; m_host = value; }

    /**
     * <p>The contents of the <code>host</code> parameter determine whether your data
     * volume persists on the host container instance and where it is stored. If the
     * host parameter is empty, then the Docker daemon assigns a host path for your
     * data volume, but the data is not guaranteed to persist after the containers
     * associated with it stop running.</p>
     */
    inline void SetHost(HostVolumeProperties&& value) { m_hostHasBeenSet = true; m_host = value; }

    /**
     * <p>The contents of the <code>host</code> parameter determine whether your data
     * volume persists on the host container instance and where it is stored. If the
     * host parameter is empty, then the Docker daemon assigns a host path for your
     * data volume, but the data is not guaranteed to persist after the containers
     * associated with it stop running.</p>
     */
    inline Volume& WithHost(const HostVolumeProperties& value) { SetHost(value); return *this;}

    /**
     * <p>The contents of the <code>host</code> parameter determine whether your data
     * volume persists on the host container instance and where it is stored. If the
     * host parameter is empty, then the Docker daemon assigns a host path for your
     * data volume, but the data is not guaranteed to persist after the containers
     * associated with it stop running.</p>
     */
    inline Volume& WithHost(HostVolumeProperties&& value) { SetHost(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    HostVolumeProperties m_host;
    bool m_hostHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
