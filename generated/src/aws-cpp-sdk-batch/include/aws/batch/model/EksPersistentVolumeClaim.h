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
   * <p>A <code>persistentVolumeClaim</code> volume is used to mount a <a
   * href="https://kubernetes.io/docs/concepts/storage/persistent-volumes/">PersistentVolume</a>
   * into a Pod. PersistentVolumeClaims are a way for users to "claim" durable
   * storage without knowing the details of the particular cloud environment. See the
   * information about <a
   * href="https://kubernetes.io/docs/concepts/storage/persistent-volumes/">PersistentVolumes</a>
   * in the <i>Kubernetes documentation</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EksPersistentVolumeClaim">AWS
   * API Reference</a></p>
   */
  class EksPersistentVolumeClaim
  {
  public:
    AWS_BATCH_API EksPersistentVolumeClaim() = default;
    AWS_BATCH_API EksPersistentVolumeClaim(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EksPersistentVolumeClaim& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the <code>persistentVolumeClaim</code> bounded to a
     * <code>persistentVolume</code>. For more information, see <a
     * href="https://kubernetes.io/docs/concepts/storage/persistent-volumes/#persistentvolumeclaims">
     * Persistent Volume Claims</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline const Aws::String& GetClaimName() const { return m_claimName; }
    inline bool ClaimNameHasBeenSet() const { return m_claimNameHasBeenSet; }
    template<typename ClaimNameT = Aws::String>
    void SetClaimName(ClaimNameT&& value) { m_claimNameHasBeenSet = true; m_claimName = std::forward<ClaimNameT>(value); }
    template<typename ClaimNameT = Aws::String>
    EksPersistentVolumeClaim& WithClaimName(ClaimNameT&& value) { SetClaimName(std::forward<ClaimNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional boolean value indicating if the mount is read only. Default is
     * false. For more information, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/#read-only-mounts">
     * Read Only Mounts</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline bool GetReadOnly() const { return m_readOnly; }
    inline bool ReadOnlyHasBeenSet() const { return m_readOnlyHasBeenSet; }
    inline void SetReadOnly(bool value) { m_readOnlyHasBeenSet = true; m_readOnly = value; }
    inline EksPersistentVolumeClaim& WithReadOnly(bool value) { SetReadOnly(value); return *this;}
    ///@}
  private:

    Aws::String m_claimName;
    bool m_claimNameHasBeenSet = false;

    bool m_readOnly{false};
    bool m_readOnlyHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
