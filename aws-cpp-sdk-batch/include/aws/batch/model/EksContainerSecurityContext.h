/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>

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
   * <p>The security context for a job. For more information, see <a
   * href="https://kubernetes.io/docs/tasks/configure-pod-container/security-context/">Configure
   * a security context for a pod or container</a> in the <i>Kubernetes
   * documentation</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EksContainerSecurityContext">AWS
   * API Reference</a></p>
   */
  class EksContainerSecurityContext
  {
  public:
    AWS_BATCH_API EksContainerSecurityContext();
    AWS_BATCH_API EksContainerSecurityContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EksContainerSecurityContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>When this parameter is specified, the container is run as the specified user
     * ID (<code>uid</code>). If this parameter isn't specified, the default is the
     * user that's specified in the image metadata. This parameter maps to
     * <code>RunAsUser</code> and <code>MustRanAs</code> policy in the <a
     * href="https://kubernetes.io/docs/concepts/security/pod-security-policy/#users-and-groups">Users
     * and groups pod security policies</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline long long GetRunAsUser() const{ return m_runAsUser; }

    /**
     * <p>When this parameter is specified, the container is run as the specified user
     * ID (<code>uid</code>). If this parameter isn't specified, the default is the
     * user that's specified in the image metadata. This parameter maps to
     * <code>RunAsUser</code> and <code>MustRanAs</code> policy in the <a
     * href="https://kubernetes.io/docs/concepts/security/pod-security-policy/#users-and-groups">Users
     * and groups pod security policies</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline bool RunAsUserHasBeenSet() const { return m_runAsUserHasBeenSet; }

    /**
     * <p>When this parameter is specified, the container is run as the specified user
     * ID (<code>uid</code>). If this parameter isn't specified, the default is the
     * user that's specified in the image metadata. This parameter maps to
     * <code>RunAsUser</code> and <code>MustRanAs</code> policy in the <a
     * href="https://kubernetes.io/docs/concepts/security/pod-security-policy/#users-and-groups">Users
     * and groups pod security policies</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline void SetRunAsUser(long long value) { m_runAsUserHasBeenSet = true; m_runAsUser = value; }

    /**
     * <p>When this parameter is specified, the container is run as the specified user
     * ID (<code>uid</code>). If this parameter isn't specified, the default is the
     * user that's specified in the image metadata. This parameter maps to
     * <code>RunAsUser</code> and <code>MustRanAs</code> policy in the <a
     * href="https://kubernetes.io/docs/concepts/security/pod-security-policy/#users-and-groups">Users
     * and groups pod security policies</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline EksContainerSecurityContext& WithRunAsUser(long long value) { SetRunAsUser(value); return *this;}


    /**
     * <p>When this parameter is specified, the container is run as the specified group
     * ID (<code>gid</code>). If this parameter isn't specified, the default is the
     * group that's specified in the image metadata. This parameter maps to
     * <code>RunAsGroup</code> and <code>MustRunAs</code> policy in the <a
     * href="https://kubernetes.io/docs/concepts/security/pod-security-policy/#users-and-groups">Users
     * and groups pod security policies</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline long long GetRunAsGroup() const{ return m_runAsGroup; }

    /**
     * <p>When this parameter is specified, the container is run as the specified group
     * ID (<code>gid</code>). If this parameter isn't specified, the default is the
     * group that's specified in the image metadata. This parameter maps to
     * <code>RunAsGroup</code> and <code>MustRunAs</code> policy in the <a
     * href="https://kubernetes.io/docs/concepts/security/pod-security-policy/#users-and-groups">Users
     * and groups pod security policies</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline bool RunAsGroupHasBeenSet() const { return m_runAsGroupHasBeenSet; }

    /**
     * <p>When this parameter is specified, the container is run as the specified group
     * ID (<code>gid</code>). If this parameter isn't specified, the default is the
     * group that's specified in the image metadata. This parameter maps to
     * <code>RunAsGroup</code> and <code>MustRunAs</code> policy in the <a
     * href="https://kubernetes.io/docs/concepts/security/pod-security-policy/#users-and-groups">Users
     * and groups pod security policies</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline void SetRunAsGroup(long long value) { m_runAsGroupHasBeenSet = true; m_runAsGroup = value; }

    /**
     * <p>When this parameter is specified, the container is run as the specified group
     * ID (<code>gid</code>). If this parameter isn't specified, the default is the
     * group that's specified in the image metadata. This parameter maps to
     * <code>RunAsGroup</code> and <code>MustRunAs</code> policy in the <a
     * href="https://kubernetes.io/docs/concepts/security/pod-security-policy/#users-and-groups">Users
     * and groups pod security policies</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline EksContainerSecurityContext& WithRunAsGroup(long long value) { SetRunAsGroup(value); return *this;}


    /**
     * <p>When this parameter is <code>true</code>, the container is given elevated
     * permissions on the host container instance. The level of permissions are similar
     * to the <code>root</code> user permissions. The default value is
     * <code>false</code>. This parameter maps to <code>privileged</code> policy in the
     * <a
     * href="https://kubernetes.io/docs/concepts/security/pod-security-policy/#privileged">Privileged
     * pod security policies</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline bool GetPrivileged() const{ return m_privileged; }

    /**
     * <p>When this parameter is <code>true</code>, the container is given elevated
     * permissions on the host container instance. The level of permissions are similar
     * to the <code>root</code> user permissions. The default value is
     * <code>false</code>. This parameter maps to <code>privileged</code> policy in the
     * <a
     * href="https://kubernetes.io/docs/concepts/security/pod-security-policy/#privileged">Privileged
     * pod security policies</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline bool PrivilegedHasBeenSet() const { return m_privilegedHasBeenSet; }

    /**
     * <p>When this parameter is <code>true</code>, the container is given elevated
     * permissions on the host container instance. The level of permissions are similar
     * to the <code>root</code> user permissions. The default value is
     * <code>false</code>. This parameter maps to <code>privileged</code> policy in the
     * <a
     * href="https://kubernetes.io/docs/concepts/security/pod-security-policy/#privileged">Privileged
     * pod security policies</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline void SetPrivileged(bool value) { m_privilegedHasBeenSet = true; m_privileged = value; }

    /**
     * <p>When this parameter is <code>true</code>, the container is given elevated
     * permissions on the host container instance. The level of permissions are similar
     * to the <code>root</code> user permissions. The default value is
     * <code>false</code>. This parameter maps to <code>privileged</code> policy in the
     * <a
     * href="https://kubernetes.io/docs/concepts/security/pod-security-policy/#privileged">Privileged
     * pod security policies</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline EksContainerSecurityContext& WithPrivileged(bool value) { SetPrivileged(value); return *this;}


    /**
     * <p>When this parameter is <code>true</code>, the container is given read-only
     * access to its root file system. The default value is <code>false</code>. This
     * parameter maps to <code>ReadOnlyRootFilesystem</code> policy in the <a
     * href="https://kubernetes.io/docs/concepts/security/pod-security-policy/#volumes-and-file-systems">Volumes
     * and file systems pod security policies</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline bool GetReadOnlyRootFilesystem() const{ return m_readOnlyRootFilesystem; }

    /**
     * <p>When this parameter is <code>true</code>, the container is given read-only
     * access to its root file system. The default value is <code>false</code>. This
     * parameter maps to <code>ReadOnlyRootFilesystem</code> policy in the <a
     * href="https://kubernetes.io/docs/concepts/security/pod-security-policy/#volumes-and-file-systems">Volumes
     * and file systems pod security policies</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline bool ReadOnlyRootFilesystemHasBeenSet() const { return m_readOnlyRootFilesystemHasBeenSet; }

    /**
     * <p>When this parameter is <code>true</code>, the container is given read-only
     * access to its root file system. The default value is <code>false</code>. This
     * parameter maps to <code>ReadOnlyRootFilesystem</code> policy in the <a
     * href="https://kubernetes.io/docs/concepts/security/pod-security-policy/#volumes-and-file-systems">Volumes
     * and file systems pod security policies</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline void SetReadOnlyRootFilesystem(bool value) { m_readOnlyRootFilesystemHasBeenSet = true; m_readOnlyRootFilesystem = value; }

    /**
     * <p>When this parameter is <code>true</code>, the container is given read-only
     * access to its root file system. The default value is <code>false</code>. This
     * parameter maps to <code>ReadOnlyRootFilesystem</code> policy in the <a
     * href="https://kubernetes.io/docs/concepts/security/pod-security-policy/#volumes-and-file-systems">Volumes
     * and file systems pod security policies</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline EksContainerSecurityContext& WithReadOnlyRootFilesystem(bool value) { SetReadOnlyRootFilesystem(value); return *this;}


    /**
     * <p>When this parameter is specified, the container is run as a user with a
     * <code>uid</code> other than 0. If this parameter isn't specified, so such rule
     * is enforced. This parameter maps to <code>RunAsUser</code> and
     * <code>MustRunAsNonRoot</code> policy in the <a
     * href="https://kubernetes.io/docs/concepts/security/pod-security-policy/#users-and-groups">Users
     * and groups pod security policies</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline bool GetRunAsNonRoot() const{ return m_runAsNonRoot; }

    /**
     * <p>When this parameter is specified, the container is run as a user with a
     * <code>uid</code> other than 0. If this parameter isn't specified, so such rule
     * is enforced. This parameter maps to <code>RunAsUser</code> and
     * <code>MustRunAsNonRoot</code> policy in the <a
     * href="https://kubernetes.io/docs/concepts/security/pod-security-policy/#users-and-groups">Users
     * and groups pod security policies</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline bool RunAsNonRootHasBeenSet() const { return m_runAsNonRootHasBeenSet; }

    /**
     * <p>When this parameter is specified, the container is run as a user with a
     * <code>uid</code> other than 0. If this parameter isn't specified, so such rule
     * is enforced. This parameter maps to <code>RunAsUser</code> and
     * <code>MustRunAsNonRoot</code> policy in the <a
     * href="https://kubernetes.io/docs/concepts/security/pod-security-policy/#users-and-groups">Users
     * and groups pod security policies</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline void SetRunAsNonRoot(bool value) { m_runAsNonRootHasBeenSet = true; m_runAsNonRoot = value; }

    /**
     * <p>When this parameter is specified, the container is run as a user with a
     * <code>uid</code> other than 0. If this parameter isn't specified, so such rule
     * is enforced. This parameter maps to <code>RunAsUser</code> and
     * <code>MustRunAsNonRoot</code> policy in the <a
     * href="https://kubernetes.io/docs/concepts/security/pod-security-policy/#users-and-groups">Users
     * and groups pod security policies</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline EksContainerSecurityContext& WithRunAsNonRoot(bool value) { SetRunAsNonRoot(value); return *this;}

  private:

    long long m_runAsUser;
    bool m_runAsUserHasBeenSet = false;

    long long m_runAsGroup;
    bool m_runAsGroupHasBeenSet = false;

    bool m_privileged;
    bool m_privilegedHasBeenSet = false;

    bool m_readOnlyRootFilesystem;
    bool m_readOnlyRootFilesystemHasBeenSet = false;

    bool m_runAsNonRoot;
    bool m_runAsNonRootHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
