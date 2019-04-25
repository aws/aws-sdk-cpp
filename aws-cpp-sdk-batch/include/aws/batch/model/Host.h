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
   * <p>Determine whether your data volume persists on the host container instance
   * and where it is stored. If this parameter is empty, then the Docker daemon
   * assigns a host path for your data volume, but the data is not guaranteed to
   * persist after the containers associated with it stop running.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/Host">AWS API
   * Reference</a></p>
   */
  class AWS_BATCH_API Host
  {
  public:
    Host();
    Host(Aws::Utils::Json::JsonView jsonValue);
    Host& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path on the host container instance that is presented to the container.
     * If this parameter is empty, then the Docker daemon has assigned a host path for
     * you. If this parameter contains a file location, then the data volume persists
     * at the specified location on the host container instance until you delete it
     * manually. If the source path location does not exist on the host container
     * instance, the Docker daemon creates it. If the location does exist, the contents
     * of the source path folder are exported.</p>
     */
    inline const Aws::String& GetSourcePath() const{ return m_sourcePath; }

    /**
     * <p>The path on the host container instance that is presented to the container.
     * If this parameter is empty, then the Docker daemon has assigned a host path for
     * you. If this parameter contains a file location, then the data volume persists
     * at the specified location on the host container instance until you delete it
     * manually. If the source path location does not exist on the host container
     * instance, the Docker daemon creates it. If the location does exist, the contents
     * of the source path folder are exported.</p>
     */
    inline bool SourcePathHasBeenSet() const { return m_sourcePathHasBeenSet; }

    /**
     * <p>The path on the host container instance that is presented to the container.
     * If this parameter is empty, then the Docker daemon has assigned a host path for
     * you. If this parameter contains a file location, then the data volume persists
     * at the specified location on the host container instance until you delete it
     * manually. If the source path location does not exist on the host container
     * instance, the Docker daemon creates it. If the location does exist, the contents
     * of the source path folder are exported.</p>
     */
    inline void SetSourcePath(const Aws::String& value) { m_sourcePathHasBeenSet = true; m_sourcePath = value; }

    /**
     * <p>The path on the host container instance that is presented to the container.
     * If this parameter is empty, then the Docker daemon has assigned a host path for
     * you. If this parameter contains a file location, then the data volume persists
     * at the specified location on the host container instance until you delete it
     * manually. If the source path location does not exist on the host container
     * instance, the Docker daemon creates it. If the location does exist, the contents
     * of the source path folder are exported.</p>
     */
    inline void SetSourcePath(Aws::String&& value) { m_sourcePathHasBeenSet = true; m_sourcePath = std::move(value); }

    /**
     * <p>The path on the host container instance that is presented to the container.
     * If this parameter is empty, then the Docker daemon has assigned a host path for
     * you. If this parameter contains a file location, then the data volume persists
     * at the specified location on the host container instance until you delete it
     * manually. If the source path location does not exist on the host container
     * instance, the Docker daemon creates it. If the location does exist, the contents
     * of the source path folder are exported.</p>
     */
    inline void SetSourcePath(const char* value) { m_sourcePathHasBeenSet = true; m_sourcePath.assign(value); }

    /**
     * <p>The path on the host container instance that is presented to the container.
     * If this parameter is empty, then the Docker daemon has assigned a host path for
     * you. If this parameter contains a file location, then the data volume persists
     * at the specified location on the host container instance until you delete it
     * manually. If the source path location does not exist on the host container
     * instance, the Docker daemon creates it. If the location does exist, the contents
     * of the source path folder are exported.</p>
     */
    inline Host& WithSourcePath(const Aws::String& value) { SetSourcePath(value); return *this;}

    /**
     * <p>The path on the host container instance that is presented to the container.
     * If this parameter is empty, then the Docker daemon has assigned a host path for
     * you. If this parameter contains a file location, then the data volume persists
     * at the specified location on the host container instance until you delete it
     * manually. If the source path location does not exist on the host container
     * instance, the Docker daemon creates it. If the location does exist, the contents
     * of the source path folder are exported.</p>
     */
    inline Host& WithSourcePath(Aws::String&& value) { SetSourcePath(std::move(value)); return *this;}

    /**
     * <p>The path on the host container instance that is presented to the container.
     * If this parameter is empty, then the Docker daemon has assigned a host path for
     * you. If this parameter contains a file location, then the data volume persists
     * at the specified location on the host container instance until you delete it
     * manually. If the source path location does not exist on the host container
     * instance, the Docker daemon creates it. If the location does exist, the contents
     * of the source path folder are exported.</p>
     */
    inline Host& WithSourcePath(const char* value) { SetSourcePath(value); return *this;}

  private:

    Aws::String m_sourcePath;
    bool m_sourcePathHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
