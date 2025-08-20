/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/PolicyGrantDetail.h>
#include <aws/datazone/model/PolicyGrantPrincipal.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>A member of the policy grant list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/PolicyGrantMember">AWS
   * API Reference</a></p>
   */
  class PolicyGrantMember
  {
  public:
    AWS_DATAZONE_API PolicyGrantMember() = default;
    AWS_DATAZONE_API PolicyGrantMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API PolicyGrantMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the timestamp at which policy grant member was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    PolicyGrantMember& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the user who created the policy grant member.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    PolicyGrantMember& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the policy grant member.</p>
     */
    inline const PolicyGrantDetail& GetDetail() const { return m_detail; }
    inline bool DetailHasBeenSet() const { return m_detailHasBeenSet; }
    template<typename DetailT = PolicyGrantDetail>
    void SetDetail(DetailT&& value) { m_detailHasBeenSet = true; m_detail = std::forward<DetailT>(value); }
    template<typename DetailT = PolicyGrantDetail>
    PolicyGrantMember& WithDetail(DetailT&& value) { SetDetail(std::forward<DetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the policy grant.</p>
     */
    inline const Aws::String& GetGrantId() const { return m_grantId; }
    inline bool GrantIdHasBeenSet() const { return m_grantIdHasBeenSet; }
    template<typename GrantIdT = Aws::String>
    void SetGrantId(GrantIdT&& value) { m_grantIdHasBeenSet = true; m_grantId = std::forward<GrantIdT>(value); }
    template<typename GrantIdT = Aws::String>
    PolicyGrantMember& WithGrantId(GrantIdT&& value) { SetGrantId(std::forward<GrantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal of the policy grant member.</p>
     */
    inline const PolicyGrantPrincipal& GetPrincipal() const { return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    template<typename PrincipalT = PolicyGrantPrincipal>
    void SetPrincipal(PrincipalT&& value) { m_principalHasBeenSet = true; m_principal = std::forward<PrincipalT>(value); }
    template<typename PrincipalT = PolicyGrantPrincipal>
    PolicyGrantMember& WithPrincipal(PrincipalT&& value) { SetPrincipal(std::forward<PrincipalT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    PolicyGrantDetail m_detail;
    bool m_detailHasBeenSet = false;

    Aws::String m_grantId;
    bool m_grantIdHasBeenSet = false;

    PolicyGrantPrincipal m_principal;
    bool m_principalHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
