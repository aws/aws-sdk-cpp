/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/AccessScope.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>An access policy association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/AssociatedAccessPolicy">AWS
   * API Reference</a></p>
   */
  class AssociatedAccessPolicy
  {
  public:
    AWS_EKS_API AssociatedAccessPolicy();
    AWS_EKS_API AssociatedAccessPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API AssociatedAccessPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the <code>AccessPolicy</code>.</p>
     */
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }

    /**
     * <p>The ARN of the <code>AccessPolicy</code>.</p>
     */
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }

    /**
     * <p>The ARN of the <code>AccessPolicy</code>.</p>
     */
    inline void SetPolicyArn(const Aws::String& value) { m_policyArnHasBeenSet = true; m_policyArn = value; }

    /**
     * <p>The ARN of the <code>AccessPolicy</code>.</p>
     */
    inline void SetPolicyArn(Aws::String&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::move(value); }

    /**
     * <p>The ARN of the <code>AccessPolicy</code>.</p>
     */
    inline void SetPolicyArn(const char* value) { m_policyArnHasBeenSet = true; m_policyArn.assign(value); }

    /**
     * <p>The ARN of the <code>AccessPolicy</code>.</p>
     */
    inline AssociatedAccessPolicy& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}

    /**
     * <p>The ARN of the <code>AccessPolicy</code>.</p>
     */
    inline AssociatedAccessPolicy& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the <code>AccessPolicy</code>.</p>
     */
    inline AssociatedAccessPolicy& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}


    /**
     * <p>The scope of the access policy.</p>
     */
    inline const AccessScope& GetAccessScope() const{ return m_accessScope; }

    /**
     * <p>The scope of the access policy.</p>
     */
    inline bool AccessScopeHasBeenSet() const { return m_accessScopeHasBeenSet; }

    /**
     * <p>The scope of the access policy.</p>
     */
    inline void SetAccessScope(const AccessScope& value) { m_accessScopeHasBeenSet = true; m_accessScope = value; }

    /**
     * <p>The scope of the access policy.</p>
     */
    inline void SetAccessScope(AccessScope&& value) { m_accessScopeHasBeenSet = true; m_accessScope = std::move(value); }

    /**
     * <p>The scope of the access policy.</p>
     */
    inline AssociatedAccessPolicy& WithAccessScope(const AccessScope& value) { SetAccessScope(value); return *this;}

    /**
     * <p>The scope of the access policy.</p>
     */
    inline AssociatedAccessPolicy& WithAccessScope(AccessScope&& value) { SetAccessScope(std::move(value)); return *this;}


    /**
     * <p>The date and time the <code>AccessPolicy</code> was associated with an
     * <code>AccessEntry</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetAssociatedAt() const{ return m_associatedAt; }

    /**
     * <p>The date and time the <code>AccessPolicy</code> was associated with an
     * <code>AccessEntry</code>.</p>
     */
    inline bool AssociatedAtHasBeenSet() const { return m_associatedAtHasBeenSet; }

    /**
     * <p>The date and time the <code>AccessPolicy</code> was associated with an
     * <code>AccessEntry</code>.</p>
     */
    inline void SetAssociatedAt(const Aws::Utils::DateTime& value) { m_associatedAtHasBeenSet = true; m_associatedAt = value; }

    /**
     * <p>The date and time the <code>AccessPolicy</code> was associated with an
     * <code>AccessEntry</code>.</p>
     */
    inline void SetAssociatedAt(Aws::Utils::DateTime&& value) { m_associatedAtHasBeenSet = true; m_associatedAt = std::move(value); }

    /**
     * <p>The date and time the <code>AccessPolicy</code> was associated with an
     * <code>AccessEntry</code>.</p>
     */
    inline AssociatedAccessPolicy& WithAssociatedAt(const Aws::Utils::DateTime& value) { SetAssociatedAt(value); return *this;}

    /**
     * <p>The date and time the <code>AccessPolicy</code> was associated with an
     * <code>AccessEntry</code>.</p>
     */
    inline AssociatedAccessPolicy& WithAssociatedAt(Aws::Utils::DateTime&& value) { SetAssociatedAt(std::move(value)); return *this;}


    /**
     * <p>The Unix epoch timestamp for the last modification to the object.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }

    /**
     * <p>The Unix epoch timestamp for the last modification to the object.</p>
     */
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }

    /**
     * <p>The Unix epoch timestamp for the last modification to the object.</p>
     */
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = value; }

    /**
     * <p>The Unix epoch timestamp for the last modification to the object.</p>
     */
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::move(value); }

    /**
     * <p>The Unix epoch timestamp for the last modification to the object.</p>
     */
    inline AssociatedAccessPolicy& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}

    /**
     * <p>The Unix epoch timestamp for the last modification to the object.</p>
     */
    inline AssociatedAccessPolicy& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}

  private:

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    AccessScope m_accessScope;
    bool m_accessScopeHasBeenSet = false;

    Aws::Utils::DateTime m_associatedAt;
    bool m_associatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt;
    bool m_modifiedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
