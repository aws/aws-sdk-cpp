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
   * <p>Information about the Kubernetes role name and role type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/KubernetesRoleDetails">AWS
   * API Reference</a></p>
   */
  class KubernetesRoleDetails
  {
  public:
    AWS_GUARDDUTY_API KubernetesRoleDetails() = default;
    AWS_GUARDDUTY_API KubernetesRoleDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API KubernetesRoleDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The kind of role. For this API, the value of <code>kind</code> will be
     * <code>Role</code>.</p>
     */
    inline const Aws::String& GetKind() const { return m_kind; }
    inline bool KindHasBeenSet() const { return m_kindHasBeenSet; }
    template<typename KindT = Aws::String>
    void SetKind(KindT&& value) { m_kindHasBeenSet = true; m_kind = std::forward<KindT>(value); }
    template<typename KindT = Aws::String>
    KubernetesRoleDetails& WithKind(KindT&& value) { SetKind(std::forward<KindT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Kubernetes role.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    KubernetesRoleDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Kubernetes role name.</p>
     */
    inline const Aws::String& GetUid() const { return m_uid; }
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
    template<typename UidT = Aws::String>
    void SetUid(UidT&& value) { m_uidHasBeenSet = true; m_uid = std::forward<UidT>(value); }
    template<typename UidT = Aws::String>
    KubernetesRoleDetails& WithUid(UidT&& value) { SetUid(std::forward<UidT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_kind;
    bool m_kindHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_uid;
    bool m_uidHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
