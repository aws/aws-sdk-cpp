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
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/Host.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>A data volume used in a job's container properties.</p><p><h3>See Also:</h3> 
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/Volume">AWS API
   * Reference</a></p>
   */
  class AWS_BATCH_API Volume
  {
  public:
    Volume();
    Volume(Aws::Utils::Json::JsonView jsonValue);
    Volume& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The contents of the <code>host</code> parameter determine whether your data
     * volume persists on the host container instance and where it is stored. If the
     * host parameter is empty, then the Docker daemon assigns a host path for your
     * data volume. However, the data is not guaranteed to persist after the containers
     * associated with it stop running.</p>
     */
    inline const Host& GetHost() const{ return m_host; }

    /**
     * <p>The contents of the <code>host</code> parameter determine whether your data
     * volume persists on the host container instance and where it is stored. If the
     * host parameter is empty, then the Docker daemon assigns a host path for your
     * data volume. However, the data is not guaranteed to persist after the containers
     * associated with it stop running.</p>
     */
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }

    /**
     * <p>The contents of the <code>host</code> parameter determine whether your data
     * volume persists on the host container instance and where it is stored. If the
     * host parameter is empty, then the Docker daemon assigns a host path for your
     * data volume. However, the data is not guaranteed to persist after the containers
     * associated with it stop running.</p>
     */
    inline void SetHost(const Host& value) { m_hostHasBeenSet = true; m_host = value; }

    /**
     * <p>The contents of the <code>host</code> parameter determine whether your data
     * volume persists on the host container instance and where it is stored. If the
     * host parameter is empty, then the Docker daemon assigns a host path for your
     * data volume. However, the data is not guaranteed to persist after the containers
     * associated with it stop running.</p>
     */
    inline void SetHost(Host&& value) { m_hostHasBeenSet = true; m_host = std::move(value); }

    /**
     * <p>The contents of the <code>host</code> parameter determine whether your data
     * volume persists on the host container instance and where it is stored. If the
     * host parameter is empty, then the Docker daemon assigns a host path for your
     * data volume. However, the data is not guaranteed to persist after the containers
     * associated with it stop running.</p>
     */
    inline Volume& WithHost(const Host& value) { SetHost(value); return *this;}

    /**
     * <p>The contents of the <code>host</code> parameter determine whether your data
     * volume persists on the host container instance and where it is stored. If the
     * host parameter is empty, then the Docker daemon assigns a host path for your
     * data volume. However, the data is not guaranteed to persist after the containers
     * associated with it stop running.</p>
     */
    inline Volume& WithHost(Host&& value) { SetHost(std::move(value)); return *this;}


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
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

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
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

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
    inline Volume& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * hyphens, and underscores are allowed. This name is referenced in the
     * <code>sourceVolume</code> parameter of container definition
     * <code>mountPoints</code>.</p>
     */
    inline Volume& WithName(const char* value) { SetName(value); return *this;}

  private:

    Host m_host;
    bool m_hostHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
