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
    AWS_BATCH_API EksVolume();
    AWS_BATCH_API EksVolume(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EksVolume& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the volume. The name must be allowed as a DNS subdomain name. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/overview/working-with-objects/names/#dns-subdomain-names">DNS
     * subdomain names</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the volume. The name must be allowed as a DNS subdomain name. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/overview/working-with-objects/names/#dns-subdomain-names">DNS
     * subdomain names</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the volume. The name must be allowed as a DNS subdomain name. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/overview/working-with-objects/names/#dns-subdomain-names">DNS
     * subdomain names</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the volume. The name must be allowed as a DNS subdomain name. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/overview/working-with-objects/names/#dns-subdomain-names">DNS
     * subdomain names</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the volume. The name must be allowed as a DNS subdomain name. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/overview/working-with-objects/names/#dns-subdomain-names">DNS
     * subdomain names</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the volume. The name must be allowed as a DNS subdomain name. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/overview/working-with-objects/names/#dns-subdomain-names">DNS
     * subdomain names</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline EksVolume& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the volume. The name must be allowed as a DNS subdomain name. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/overview/working-with-objects/names/#dns-subdomain-names">DNS
     * subdomain names</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline EksVolume& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the volume. The name must be allowed as a DNS subdomain name. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/overview/working-with-objects/names/#dns-subdomain-names">DNS
     * subdomain names</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline EksVolume& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies the configuration of a Kubernetes <code>hostPath</code> volume. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/#hostpath">hostPath</a>
     * in the <i>Kubernetes documentation</i>.</p>
     */
    inline const EksHostPath& GetHostPath() const{ return m_hostPath; }

    /**
     * <p>Specifies the configuration of a Kubernetes <code>hostPath</code> volume. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/#hostpath">hostPath</a>
     * in the <i>Kubernetes documentation</i>.</p>
     */
    inline bool HostPathHasBeenSet() const { return m_hostPathHasBeenSet; }

    /**
     * <p>Specifies the configuration of a Kubernetes <code>hostPath</code> volume. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/#hostpath">hostPath</a>
     * in the <i>Kubernetes documentation</i>.</p>
     */
    inline void SetHostPath(const EksHostPath& value) { m_hostPathHasBeenSet = true; m_hostPath = value; }

    /**
     * <p>Specifies the configuration of a Kubernetes <code>hostPath</code> volume. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/#hostpath">hostPath</a>
     * in the <i>Kubernetes documentation</i>.</p>
     */
    inline void SetHostPath(EksHostPath&& value) { m_hostPathHasBeenSet = true; m_hostPath = std::move(value); }

    /**
     * <p>Specifies the configuration of a Kubernetes <code>hostPath</code> volume. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/#hostpath">hostPath</a>
     * in the <i>Kubernetes documentation</i>.</p>
     */
    inline EksVolume& WithHostPath(const EksHostPath& value) { SetHostPath(value); return *this;}

    /**
     * <p>Specifies the configuration of a Kubernetes <code>hostPath</code> volume. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/#hostpath">hostPath</a>
     * in the <i>Kubernetes documentation</i>.</p>
     */
    inline EksVolume& WithHostPath(EksHostPath&& value) { SetHostPath(std::move(value)); return *this;}


    /**
     * <p>Specifies the configuration of a Kubernetes <code>emptyDir</code> volume. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/#emptydir">emptyDir</a>
     * in the <i>Kubernetes documentation</i>.</p>
     */
    inline const EksEmptyDir& GetEmptyDir() const{ return m_emptyDir; }

    /**
     * <p>Specifies the configuration of a Kubernetes <code>emptyDir</code> volume. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/#emptydir">emptyDir</a>
     * in the <i>Kubernetes documentation</i>.</p>
     */
    inline bool EmptyDirHasBeenSet() const { return m_emptyDirHasBeenSet; }

    /**
     * <p>Specifies the configuration of a Kubernetes <code>emptyDir</code> volume. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/#emptydir">emptyDir</a>
     * in the <i>Kubernetes documentation</i>.</p>
     */
    inline void SetEmptyDir(const EksEmptyDir& value) { m_emptyDirHasBeenSet = true; m_emptyDir = value; }

    /**
     * <p>Specifies the configuration of a Kubernetes <code>emptyDir</code> volume. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/#emptydir">emptyDir</a>
     * in the <i>Kubernetes documentation</i>.</p>
     */
    inline void SetEmptyDir(EksEmptyDir&& value) { m_emptyDirHasBeenSet = true; m_emptyDir = std::move(value); }

    /**
     * <p>Specifies the configuration of a Kubernetes <code>emptyDir</code> volume. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/#emptydir">emptyDir</a>
     * in the <i>Kubernetes documentation</i>.</p>
     */
    inline EksVolume& WithEmptyDir(const EksEmptyDir& value) { SetEmptyDir(value); return *this;}

    /**
     * <p>Specifies the configuration of a Kubernetes <code>emptyDir</code> volume. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/#emptydir">emptyDir</a>
     * in the <i>Kubernetes documentation</i>.</p>
     */
    inline EksVolume& WithEmptyDir(EksEmptyDir&& value) { SetEmptyDir(std::move(value)); return *this;}


    /**
     * <p>Specifies the configuration of a Kubernetes <code>secret</code> volume. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/#secret">secret</a> in
     * the <i>Kubernetes documentation</i>.</p>
     */
    inline const EksSecret& GetSecret() const{ return m_secret; }

    /**
     * <p>Specifies the configuration of a Kubernetes <code>secret</code> volume. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/#secret">secret</a> in
     * the <i>Kubernetes documentation</i>.</p>
     */
    inline bool SecretHasBeenSet() const { return m_secretHasBeenSet; }

    /**
     * <p>Specifies the configuration of a Kubernetes <code>secret</code> volume. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/#secret">secret</a> in
     * the <i>Kubernetes documentation</i>.</p>
     */
    inline void SetSecret(const EksSecret& value) { m_secretHasBeenSet = true; m_secret = value; }

    /**
     * <p>Specifies the configuration of a Kubernetes <code>secret</code> volume. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/#secret">secret</a> in
     * the <i>Kubernetes documentation</i>.</p>
     */
    inline void SetSecret(EksSecret&& value) { m_secretHasBeenSet = true; m_secret = std::move(value); }

    /**
     * <p>Specifies the configuration of a Kubernetes <code>secret</code> volume. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/#secret">secret</a> in
     * the <i>Kubernetes documentation</i>.</p>
     */
    inline EksVolume& WithSecret(const EksSecret& value) { SetSecret(value); return *this;}

    /**
     * <p>Specifies the configuration of a Kubernetes <code>secret</code> volume. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/#secret">secret</a> in
     * the <i>Kubernetes documentation</i>.</p>
     */
    inline EksVolume& WithSecret(EksSecret&& value) { SetSecret(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    EksHostPath m_hostPath;
    bool m_hostPathHasBeenSet = false;

    EksEmptyDir m_emptyDir;
    bool m_emptyDirHasBeenSet = false;

    EksSecret m_secret;
    bool m_secretHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
