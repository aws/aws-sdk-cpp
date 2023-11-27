/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks-auth/EKSAuth_EXPORTS.h>
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
namespace EKSAuth
{
namespace Model
{

  /**
   * <p>An object containing the name of the Kubernetes service account inside the
   * cluster to associate the IAM credentials with.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-auth-2023-11-26/Subject">AWS
   * API Reference</a></p>
   */
  class Subject
  {
  public:
    AWS_EKSAUTH_API Subject();
    AWS_EKSAUTH_API Subject(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKSAUTH_API Subject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKSAUTH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Kubernetes namespace inside the cluster to create the
     * association in. The service account and the pods that use the service account
     * must be in this namespace.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The name of the Kubernetes namespace inside the cluster to create the
     * association in. The service account and the pods that use the service account
     * must be in this namespace.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The name of the Kubernetes namespace inside the cluster to create the
     * association in. The service account and the pods that use the service account
     * must be in this namespace.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The name of the Kubernetes namespace inside the cluster to create the
     * association in. The service account and the pods that use the service account
     * must be in this namespace.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The name of the Kubernetes namespace inside the cluster to create the
     * association in. The service account and the pods that use the service account
     * must be in this namespace.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The name of the Kubernetes namespace inside the cluster to create the
     * association in. The service account and the pods that use the service account
     * must be in this namespace.</p>
     */
    inline Subject& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The name of the Kubernetes namespace inside the cluster to create the
     * association in. The service account and the pods that use the service account
     * must be in this namespace.</p>
     */
    inline Subject& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The name of the Kubernetes namespace inside the cluster to create the
     * association in. The service account and the pods that use the service account
     * must be in this namespace.</p>
     */
    inline Subject& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The name of the Kubernetes service account inside the cluster to associate
     * the IAM credentials with.</p>
     */
    inline const Aws::String& GetServiceAccount() const{ return m_serviceAccount; }

    /**
     * <p>The name of the Kubernetes service account inside the cluster to associate
     * the IAM credentials with.</p>
     */
    inline bool ServiceAccountHasBeenSet() const { return m_serviceAccountHasBeenSet; }

    /**
     * <p>The name of the Kubernetes service account inside the cluster to associate
     * the IAM credentials with.</p>
     */
    inline void SetServiceAccount(const Aws::String& value) { m_serviceAccountHasBeenSet = true; m_serviceAccount = value; }

    /**
     * <p>The name of the Kubernetes service account inside the cluster to associate
     * the IAM credentials with.</p>
     */
    inline void SetServiceAccount(Aws::String&& value) { m_serviceAccountHasBeenSet = true; m_serviceAccount = std::move(value); }

    /**
     * <p>The name of the Kubernetes service account inside the cluster to associate
     * the IAM credentials with.</p>
     */
    inline void SetServiceAccount(const char* value) { m_serviceAccountHasBeenSet = true; m_serviceAccount.assign(value); }

    /**
     * <p>The name of the Kubernetes service account inside the cluster to associate
     * the IAM credentials with.</p>
     */
    inline Subject& WithServiceAccount(const Aws::String& value) { SetServiceAccount(value); return *this;}

    /**
     * <p>The name of the Kubernetes service account inside the cluster to associate
     * the IAM credentials with.</p>
     */
    inline Subject& WithServiceAccount(Aws::String&& value) { SetServiceAccount(std::move(value)); return *this;}

    /**
     * <p>The name of the Kubernetes service account inside the cluster to associate
     * the IAM credentials with.</p>
     */
    inline Subject& WithServiceAccount(const char* value) { SetServiceAccount(value); return *this;}

  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_serviceAccount;
    bool m_serviceAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace EKSAuth
} // namespace Aws
