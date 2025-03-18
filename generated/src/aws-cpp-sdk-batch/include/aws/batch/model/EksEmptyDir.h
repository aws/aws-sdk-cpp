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
   * <p>Specifies the configuration of a Kubernetes <code>emptyDir</code> volume. An
   * <code>emptyDir</code> volume is first created when a pod is assigned to a node.
   * It exists as long as that pod is running on that node. The <code>emptyDir</code>
   * volume is initially empty. All containers in the pod can read and write the
   * files in the <code>emptyDir</code> volume. However, the <code>emptyDir</code>
   * volume can be mounted at the same or different paths in each container. When a
   * pod is removed from a node for any reason, the data in the <code>emptyDir</code>
   * is deleted permanently. For more information, see <a
   * href="https://kubernetes.io/docs/concepts/storage/volumes/#emptydir">emptyDir</a>
   * in the <i>Kubernetes documentation</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EksEmptyDir">AWS
   * API Reference</a></p>
   */
  class EksEmptyDir
  {
  public:
    AWS_BATCH_API EksEmptyDir() = default;
    AWS_BATCH_API EksEmptyDir(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EksEmptyDir& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The medium to store the volume. The default value is an empty string, which
     * uses the storage of the node.</p> <dl> <dt>""</dt> <dd> <p> <b>(Default)</b> Use
     * the disk storage of the node.</p> </dd> <dt>"Memory"</dt> <dd> <p>Use the
     * <code>tmpfs</code> volume that's backed by the RAM of the node. Contents of the
     * volume are lost when the node reboots, and any storage on the volume counts
     * against the container's memory limit.</p> </dd> </dl>
     */
    inline const Aws::String& GetMedium() const { return m_medium; }
    inline bool MediumHasBeenSet() const { return m_mediumHasBeenSet; }
    template<typename MediumT = Aws::String>
    void SetMedium(MediumT&& value) { m_mediumHasBeenSet = true; m_medium = std::forward<MediumT>(value); }
    template<typename MediumT = Aws::String>
    EksEmptyDir& WithMedium(MediumT&& value) { SetMedium(std::forward<MediumT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum size of the volume. By default, there's no maximum size
     * defined.</p>
     */
    inline const Aws::String& GetSizeLimit() const { return m_sizeLimit; }
    inline bool SizeLimitHasBeenSet() const { return m_sizeLimitHasBeenSet; }
    template<typename SizeLimitT = Aws::String>
    void SetSizeLimit(SizeLimitT&& value) { m_sizeLimitHasBeenSet = true; m_sizeLimit = std::forward<SizeLimitT>(value); }
    template<typename SizeLimitT = Aws::String>
    EksEmptyDir& WithSizeLimit(SizeLimitT&& value) { SetSizeLimit(std::forward<SizeLimitT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_medium;
    bool m_mediumHasBeenSet = false;

    Aws::String m_sizeLimit;
    bool m_sizeLimitHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
