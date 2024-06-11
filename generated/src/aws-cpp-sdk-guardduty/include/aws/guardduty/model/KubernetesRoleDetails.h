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
    AWS_GUARDDUTY_API KubernetesRoleDetails();
    AWS_GUARDDUTY_API KubernetesRoleDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API KubernetesRoleDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The kind of role. For this API, the value of <code>kind</code> will be
     * <code>Role</code>.</p>
     */
    inline const Aws::String& GetKind() const{ return m_kind; }
    inline bool KindHasBeenSet() const { return m_kindHasBeenSet; }
    inline void SetKind(const Aws::String& value) { m_kindHasBeenSet = true; m_kind = value; }
    inline void SetKind(Aws::String&& value) { m_kindHasBeenSet = true; m_kind = std::move(value); }
    inline void SetKind(const char* value) { m_kindHasBeenSet = true; m_kind.assign(value); }
    inline KubernetesRoleDetails& WithKind(const Aws::String& value) { SetKind(value); return *this;}
    inline KubernetesRoleDetails& WithKind(Aws::String&& value) { SetKind(std::move(value)); return *this;}
    inline KubernetesRoleDetails& WithKind(const char* value) { SetKind(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Kubernetes role.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline KubernetesRoleDetails& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline KubernetesRoleDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline KubernetesRoleDetails& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Kubernetes role name.</p>
     */
    inline const Aws::String& GetUid() const{ return m_uid; }
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
    inline void SetUid(const Aws::String& value) { m_uidHasBeenSet = true; m_uid = value; }
    inline void SetUid(Aws::String&& value) { m_uidHasBeenSet = true; m_uid = std::move(value); }
    inline void SetUid(const char* value) { m_uidHasBeenSet = true; m_uid.assign(value); }
    inline KubernetesRoleDetails& WithUid(const Aws::String& value) { SetUid(value); return *this;}
    inline KubernetesRoleDetails& WithUid(Aws::String&& value) { SetUid(std::move(value)); return *this;}
    inline KubernetesRoleDetails& WithUid(const char* value) { SetUid(value); return *this;}
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
