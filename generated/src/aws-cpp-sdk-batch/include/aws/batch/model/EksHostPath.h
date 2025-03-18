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
   * <p>Specifies the configuration of a Kubernetes <code>hostPath</code> volume. A
   * <code>hostPath</code> volume mounts an existing file or directory from the host
   * node's filesystem into your pod. For more information, see <a
   * href="https://kubernetes.io/docs/concepts/storage/volumes/#hostpath">hostPath</a>
   * in the <i>Kubernetes documentation</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EksHostPath">AWS
   * API Reference</a></p>
   */
  class EksHostPath
  {
  public:
    AWS_BATCH_API EksHostPath() = default;
    AWS_BATCH_API EksHostPath(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EksHostPath& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path of the file or directory on the host to mount into containers on the
     * pod.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    EksHostPath& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
