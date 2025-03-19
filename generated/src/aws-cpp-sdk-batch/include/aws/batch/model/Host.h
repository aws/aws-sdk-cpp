/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * and where it's stored. If this parameter is empty, then the Docker daemon
   * assigns a host path for your data volume. However, the data isn't guaranteed to
   * persist after the containers that are associated with it stop
   * running.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/Host">AWS API
   * Reference</a></p>
   */
  class Host
  {
  public:
    AWS_BATCH_API Host() = default;
    AWS_BATCH_API Host(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Host& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path on the host container instance that's presented to the container. If
     * this parameter is empty, then the Docker daemon has assigned a host path for
     * you. If this parameter contains a file location, then the data volume persists
     * at the specified location on the host container instance until you delete it
     * manually. If the source path location doesn't exist on the host container
     * instance, the Docker daemon creates it. If the location does exist, the contents
     * of the source path folder are exported.</p>  <p>This parameter isn't
     * applicable to jobs that run on Fargate resources. Don't provide this for these
     * jobs.</p> 
     */
    inline const Aws::String& GetSourcePath() const { return m_sourcePath; }
    inline bool SourcePathHasBeenSet() const { return m_sourcePathHasBeenSet; }
    template<typename SourcePathT = Aws::String>
    void SetSourcePath(SourcePathT&& value) { m_sourcePathHasBeenSet = true; m_sourcePath = std::forward<SourcePathT>(value); }
    template<typename SourcePathT = Aws::String>
    Host& WithSourcePath(SourcePathT&& value) { SetSourcePath(std::forward<SourcePathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourcePath;
    bool m_sourcePathHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
