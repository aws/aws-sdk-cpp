﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>

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
   * <p>The grant details of the override domain unit owners policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/OverrideDomainUnitOwnersPolicyGrantDetail">AWS
   * API Reference</a></p>
   */
  class OverrideDomainUnitOwnersPolicyGrantDetail
  {
  public:
    AWS_DATAZONE_API OverrideDomainUnitOwnersPolicyGrantDetail() = default;
    AWS_DATAZONE_API OverrideDomainUnitOwnersPolicyGrantDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API OverrideDomainUnitOwnersPolicyGrantDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether the policy is inherited by child domain units.</p>
     */
    inline bool GetIncludeChildDomainUnits() const { return m_includeChildDomainUnits; }
    inline bool IncludeChildDomainUnitsHasBeenSet() const { return m_includeChildDomainUnitsHasBeenSet; }
    inline void SetIncludeChildDomainUnits(bool value) { m_includeChildDomainUnitsHasBeenSet = true; m_includeChildDomainUnits = value; }
    inline OverrideDomainUnitOwnersPolicyGrantDetail& WithIncludeChildDomainUnits(bool value) { SetIncludeChildDomainUnits(value); return *this;}
    ///@}
  private:

    bool m_includeChildDomainUnits{false};
    bool m_includeChildDomainUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
