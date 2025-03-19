/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/EksHostPath.h>
#include <aws/batch/model/EksEmptyDir.h>
#include <aws/batch/model/EksSecret.h>
#include <aws/batch/model/EksPersistentVolumeClaim.h>
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
   * <p>Specifies an Amazon EKS volume for a job definition.</p><p><h3>See Also:</h3>
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EksVolume">AWS
   * API Reference</a></p>
   */
  class EksVolume
  {
  public:
    AWS_BATCH_API EksVolume() = default;
    AWS_BATCH_API EksVolume(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EksVolume& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the volume. The name must be allowed as a DNS subdomain name. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/overview/working-with-objects/names/#dns-subdomain-names">DNS
     * subdomain names</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    EksVolume& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the configuration of a Kubernetes <code>hostPath</code> volume. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/#hostpath">hostPath</a>
     * in the <i>Kubernetes documentation</i>.</p>
     */
    inline const EksHostPath& GetHostPath() const { return m_hostPath; }
    inline bool HostPathHasBeenSet() const { return m_hostPathHasBeenSet; }
    template<typename HostPathT = EksHostPath>
    void SetHostPath(HostPathT&& value) { m_hostPathHasBeenSet = true; m_hostPath = std::forward<HostPathT>(value); }
    template<typename HostPathT = EksHostPath>
    EksVolume& WithHostPath(HostPathT&& value) { SetHostPath(std::forward<HostPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the configuration of a Kubernetes <code>emptyDir</code> volume. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/#emptydir">emptyDir</a>
     * in the <i>Kubernetes documentation</i>.</p>
     */
    inline const EksEmptyDir& GetEmptyDir() const { return m_emptyDir; }
    inline bool EmptyDirHasBeenSet() const { return m_emptyDirHasBeenSet; }
    template<typename EmptyDirT = EksEmptyDir>
    void SetEmptyDir(EmptyDirT&& value) { m_emptyDirHasBeenSet = true; m_emptyDir = std::forward<EmptyDirT>(value); }
    template<typename EmptyDirT = EksEmptyDir>
    EksVolume& WithEmptyDir(EmptyDirT&& value) { SetEmptyDir(std::forward<EmptyDirT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the configuration of a Kubernetes <code>secret</code> volume. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/#secret">secret</a> in
     * the <i>Kubernetes documentation</i>.</p>
     */
    inline const EksSecret& GetSecret() const { return m_secret; }
    inline bool SecretHasBeenSet() const { return m_secretHasBeenSet; }
    template<typename SecretT = EksSecret>
    void SetSecret(SecretT&& value) { m_secretHasBeenSet = true; m_secret = std::forward<SecretT>(value); }
    template<typename SecretT = EksSecret>
    EksVolume& WithSecret(SecretT&& value) { SetSecret(std::forward<SecretT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the configuration of a Kubernetes
     * <code>persistentVolumeClaim</code> bounded to a <code>persistentVolume</code>.
     * For more information, see <a
     * href="https://kubernetes.io/docs/concepts/storage/persistent-volumes/#persistentvolumeclaims">
     * Persistent Volume Claims</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline const EksPersistentVolumeClaim& GetPersistentVolumeClaim() const { return m_persistentVolumeClaim; }
    inline bool PersistentVolumeClaimHasBeenSet() const { return m_persistentVolumeClaimHasBeenSet; }
    template<typename PersistentVolumeClaimT = EksPersistentVolumeClaim>
    void SetPersistentVolumeClaim(PersistentVolumeClaimT&& value) { m_persistentVolumeClaimHasBeenSet = true; m_persistentVolumeClaim = std::forward<PersistentVolumeClaimT>(value); }
    template<typename PersistentVolumeClaimT = EksPersistentVolumeClaim>
    EksVolume& WithPersistentVolumeClaim(PersistentVolumeClaimT&& value) { SetPersistentVolumeClaim(std::forward<PersistentVolumeClaimT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    EksHostPath m_hostPath;
    bool m_hostPathHasBeenSet = false;

    EksEmptyDir m_emptyDir;
    bool m_emptyDirHasBeenSet = false;

    EksSecret m_secret;
    bool m_secretHasBeenSet = false;

    EksPersistentVolumeClaim m_persistentVolumeClaim;
    bool m_persistentVolumeClaimHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
