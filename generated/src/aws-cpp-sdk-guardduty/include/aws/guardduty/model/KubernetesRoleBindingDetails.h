/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the role binding that grants the permission
   * defined in a Kubernetes role.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/KubernetesRoleBindingDetails">AWS
   * API Reference</a></p>
   */
  class KubernetesRoleBindingDetails
  {
  public:
    AWS_GUARDDUTY_API KubernetesRoleBindingDetails() = default;
    AWS_GUARDDUTY_API KubernetesRoleBindingDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API KubernetesRoleBindingDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The kind of the role. For role binding, this value will be
     * <code>RoleBinding</code>.</p>
     */
    inline const Aws::String& GetKind() const { return m_kind; }
    inline bool KindHasBeenSet() const { return m_kindHasBeenSet; }
    template<typename KindT = Aws::String>
    void SetKind(KindT&& value) { m_kindHasBeenSet = true; m_kind = std::forward<KindT>(value); }
    template<typename KindT = Aws::String>
    KubernetesRoleBindingDetails& WithKind(KindT&& value) { SetKind(std::forward<KindT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>RoleBinding</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    KubernetesRoleBindingDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the role binding.</p>
     */
    inline const Aws::String& GetUid() const { return m_uid; }
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
    template<typename UidT = Aws::String>
    void SetUid(UidT&& value) { m_uidHasBeenSet = true; m_uid = std::forward<UidT>(value); }
    template<typename UidT = Aws::String>
    KubernetesRoleBindingDetails& WithUid(UidT&& value) { SetUid(std::forward<UidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the role being referenced. This must match the name of the
     * <code>Role</code> or <code>ClusterRole</code> that you want to bind to.</p>
     */
    inline const Aws::String& GetRoleRefName() const { return m_roleRefName; }
    inline bool RoleRefNameHasBeenSet() const { return m_roleRefNameHasBeenSet; }
    template<typename RoleRefNameT = Aws::String>
    void SetRoleRefName(RoleRefNameT&& value) { m_roleRefNameHasBeenSet = true; m_roleRefName = std::forward<RoleRefNameT>(value); }
    template<typename RoleRefNameT = Aws::String>
    KubernetesRoleBindingDetails& WithRoleRefName(RoleRefNameT&& value) { SetRoleRefName(std::forward<RoleRefNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the role being referenced. This could be either <code>Role</code>
     * or <code>ClusterRole</code>.</p>
     */
    inline const Aws::String& GetRoleRefKind() const { return m_roleRefKind; }
    inline bool RoleRefKindHasBeenSet() const { return m_roleRefKindHasBeenSet; }
    template<typename RoleRefKindT = Aws::String>
    void SetRoleRefKind(RoleRefKindT&& value) { m_roleRefKindHasBeenSet = true; m_roleRefKind = std::forward<RoleRefKindT>(value); }
    template<typename RoleRefKindT = Aws::String>
    KubernetesRoleBindingDetails& WithRoleRefKind(RoleRefKindT&& value) { SetRoleRefKind(std::forward<RoleRefKindT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_kind;
    bool m_kindHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_uid;
    bool m_uidHasBeenSet = false;

    Aws::String m_roleRefName;
    bool m_roleRefNameHasBeenSet = false;

    Aws::String m_roleRefKind;
    bool m_roleRefKindHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
