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
    AWS_BATCH_API EksHostPath();
    AWS_BATCH_API EksHostPath(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EksHostPath& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path of the file or directory on the host to mount into containers on the
     * pod.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path of the file or directory on the host to mount into containers on the
     * pod.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path of the file or directory on the host to mount into containers on the
     * pod.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path of the file or directory on the host to mount into containers on the
     * pod.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path of the file or directory on the host to mount into containers on the
     * pod.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path of the file or directory on the host to mount into containers on the
     * pod.</p>
     */
    inline EksHostPath& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path of the file or directory on the host to mount into containers on the
     * pod.</p>
     */
    inline EksHostPath& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path of the file or directory on the host to mount into containers on the
     * pod.</p>
     */
    inline EksHostPath& WithPath(const char* value) { SetPath(value); return *this;}

  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
