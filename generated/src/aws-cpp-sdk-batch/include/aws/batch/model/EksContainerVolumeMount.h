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
   * <p>The volume mounts for a container for an Amazon EKS job. For more information
   * about volumes and volume mounts in Kubernetes, see <a
   * href="https://kubernetes.io/docs/concepts/storage/volumes/">Volumes</a> in the
   * <i>Kubernetes documentation</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EksContainerVolumeMount">AWS
   * API Reference</a></p>
   */
  class EksContainerVolumeMount
  {
  public:
    AWS_BATCH_API EksContainerVolumeMount();
    AWS_BATCH_API EksContainerVolumeMount(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EksContainerVolumeMount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name the volume mount. This must match the name of one of the volumes in
     * the pod.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline EksContainerVolumeMount& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline EksContainerVolumeMount& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline EksContainerVolumeMount& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path on the container where the volume is mounted.</p>
     */
    inline const Aws::String& GetMountPath() const{ return m_mountPath; }
    inline bool MountPathHasBeenSet() const { return m_mountPathHasBeenSet; }
    inline void SetMountPath(const Aws::String& value) { m_mountPathHasBeenSet = true; m_mountPath = value; }
    inline void SetMountPath(Aws::String&& value) { m_mountPathHasBeenSet = true; m_mountPath = std::move(value); }
    inline void SetMountPath(const char* value) { m_mountPathHasBeenSet = true; m_mountPath.assign(value); }
    inline EksContainerVolumeMount& WithMountPath(const Aws::String& value) { SetMountPath(value); return *this;}
    inline EksContainerVolumeMount& WithMountPath(Aws::String&& value) { SetMountPath(std::move(value)); return *this;}
    inline EksContainerVolumeMount& WithMountPath(const char* value) { SetMountPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A sub-path inside the referenced volume instead of its root.</p>
     */
    inline const Aws::String& GetSubPath() const{ return m_subPath; }
    inline bool SubPathHasBeenSet() const { return m_subPathHasBeenSet; }
    inline void SetSubPath(const Aws::String& value) { m_subPathHasBeenSet = true; m_subPath = value; }
    inline void SetSubPath(Aws::String&& value) { m_subPathHasBeenSet = true; m_subPath = std::move(value); }
    inline void SetSubPath(const char* value) { m_subPathHasBeenSet = true; m_subPath.assign(value); }
    inline EksContainerVolumeMount& WithSubPath(const Aws::String& value) { SetSubPath(value); return *this;}
    inline EksContainerVolumeMount& WithSubPath(Aws::String&& value) { SetSubPath(std::move(value)); return *this;}
    inline EksContainerVolumeMount& WithSubPath(const char* value) { SetSubPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this value is <code>true</code>, the container has read-only access to the
     * volume. Otherwise, the container can write to the volume. The default value is
     * <code>false</code>.</p>
     */
    inline bool GetReadOnly() const{ return m_readOnly; }
    inline bool ReadOnlyHasBeenSet() const { return m_readOnlyHasBeenSet; }
    inline void SetReadOnly(bool value) { m_readOnlyHasBeenSet = true; m_readOnly = value; }
    inline EksContainerVolumeMount& WithReadOnly(bool value) { SetReadOnly(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_mountPath;
    bool m_mountPathHasBeenSet = false;

    Aws::String m_subPath;
    bool m_subPathHasBeenSet = false;

    bool m_readOnly;
    bool m_readOnlyHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
