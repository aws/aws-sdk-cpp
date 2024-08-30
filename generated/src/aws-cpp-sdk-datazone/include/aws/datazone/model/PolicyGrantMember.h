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
    AWS_DATAZONE_API PolicyGrantMember();
    AWS_DATAZONE_API PolicyGrantMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API PolicyGrantMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the timestamp at which policy grant member was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline PolicyGrantMember& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline PolicyGrantMember& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the user who created the policy grant member.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline PolicyGrantMember& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline PolicyGrantMember& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline PolicyGrantMember& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the policy grant member.</p>
     */
    inline const PolicyGrantDetail& GetDetail() const{ return m_detail; }
    inline bool DetailHasBeenSet() const { return m_detailHasBeenSet; }
    inline void SetDetail(const PolicyGrantDetail& value) { m_detailHasBeenSet = true; m_detail = value; }
    inline void SetDetail(PolicyGrantDetail&& value) { m_detailHasBeenSet = true; m_detail = std::move(value); }
    inline PolicyGrantMember& WithDetail(const PolicyGrantDetail& value) { SetDetail(value); return *this;}
    inline PolicyGrantMember& WithDetail(PolicyGrantDetail&& value) { SetDetail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal of the policy grant member.</p>
     */
    inline const PolicyGrantPrincipal& GetPrincipal() const{ return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    inline void SetPrincipal(const PolicyGrantPrincipal& value) { m_principalHasBeenSet = true; m_principal = value; }
    inline void SetPrincipal(PolicyGrantPrincipal&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }
    inline PolicyGrantMember& WithPrincipal(const PolicyGrantPrincipal& value) { SetPrincipal(value); return *this;}
    inline PolicyGrantMember& WithPrincipal(PolicyGrantPrincipal&& value) { SetPrincipal(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    PolicyGrantDetail m_detail;
    bool m_detailHasBeenSet = false;

    PolicyGrantPrincipal m_principal;
    bool m_principalHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
