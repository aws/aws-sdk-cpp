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
    AWS_EKS_API AssociatedAccessPolicy() = default;
    AWS_EKS_API AssociatedAccessPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API AssociatedAccessPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the <code>AccessPolicy</code>.</p>
     */
    inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
    template<typename PolicyArnT = Aws::String>
    void SetPolicyArn(PolicyArnT&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::forward<PolicyArnT>(value); }
    template<typename PolicyArnT = Aws::String>
    AssociatedAccessPolicy& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scope of the access policy.</p>
     */
    inline const AccessScope& GetAccessScope() const { return m_accessScope; }
    inline bool AccessScopeHasBeenSet() const { return m_accessScopeHasBeenSet; }
    template<typename AccessScopeT = AccessScope>
    void SetAccessScope(AccessScopeT&& value) { m_accessScopeHasBeenSet = true; m_accessScope = std::forward<AccessScopeT>(value); }
    template<typename AccessScopeT = AccessScope>
    AssociatedAccessPolicy& WithAccessScope(AccessScopeT&& value) { SetAccessScope(std::forward<AccessScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the <code>AccessPolicy</code> was associated with an
     * <code>AccessEntry</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetAssociatedAt() const { return m_associatedAt; }
    inline bool AssociatedAtHasBeenSet() const { return m_associatedAtHasBeenSet; }
    template<typename AssociatedAtT = Aws::Utils::DateTime>
    void SetAssociatedAt(AssociatedAtT&& value) { m_associatedAtHasBeenSet = true; m_associatedAt = std::forward<AssociatedAtT>(value); }
    template<typename AssociatedAtT = Aws::Utils::DateTime>
    AssociatedAccessPolicy& WithAssociatedAt(AssociatedAtT&& value) { SetAssociatedAt(std::forward<AssociatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix epoch timestamp for the last modification to the object.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    void SetModifiedAt(ModifiedAtT&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::forward<ModifiedAtT>(value); }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    AssociatedAccessPolicy& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    AccessScope m_accessScope;
    bool m_accessScopeHasBeenSet = false;

    Aws::Utils::DateTime m_associatedAt{};
    bool m_associatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
    bool m_modifiedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
