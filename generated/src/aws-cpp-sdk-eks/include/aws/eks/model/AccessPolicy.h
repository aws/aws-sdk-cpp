/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>An access policy includes permissions that allow Amazon EKS to authorize an
   * IAM principal to work with Kubernetes objects on your cluster. The policies are
   * managed by Amazon EKS, but they're not IAM policies. You can't view the
   * permissions in the policies using the API. The permissions for many of the
   * policies are similar to the Kubernetes <code>cluster-admin</code>,
   * <code>admin</code>, <code>edit</code>, and <code>view</code> cluster roles. For
   * more information about these cluster roles, see <a
   * href="https://kubernetes.io/docs/reference/access-authn-authz/rbac/#user-facing-roles">User-facing
   * roles</a> in the Kubernetes documentation. To view the contents of the policies,
   * see <a
   * href="https://docs.aws.amazon.com/eks/latest/userguide/access-policies.html#access-policy-permissions">Access
   * policy permissions</a> in the <i>Amazon EKS User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/AccessPolicy">AWS
   * API Reference</a></p>
   */
  class AccessPolicy
  {
  public:
    AWS_EKS_API AccessPolicy();
    AWS_EKS_API AccessPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API AccessPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the access policy.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the access policy.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the access policy.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the access policy.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the access policy.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the access policy.</p>
     */
    inline AccessPolicy& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the access policy.</p>
     */
    inline AccessPolicy& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the access policy.</p>
     */
    inline AccessPolicy& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the access policy.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the access policy.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the access policy.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the access policy.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the access policy.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the access policy.</p>
     */
    inline AccessPolicy& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the access policy.</p>
     */
    inline AccessPolicy& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the access policy.</p>
     */
    inline AccessPolicy& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
