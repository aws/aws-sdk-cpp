/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AllDomainUnitsGrantFilter.h>
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
   * <p>The grant filter for the domain unit. In the current release of Amazon
   * DataZone, the only supported filter is the
   * <code>allDomainUnitsGrantFilter</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DomainUnitGrantFilter">AWS
   * API Reference</a></p>
   */
  class DomainUnitGrantFilter
  {
  public:
    AWS_DATAZONE_API DomainUnitGrantFilter() = default;
    AWS_DATAZONE_API DomainUnitGrantFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API DomainUnitGrantFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies a grant filter containing all domain units.</p>
     */
    inline const AllDomainUnitsGrantFilter& GetAllDomainUnitsGrantFilter() const { return m_allDomainUnitsGrantFilter; }
    inline bool AllDomainUnitsGrantFilterHasBeenSet() const { return m_allDomainUnitsGrantFilterHasBeenSet; }
    template<typename AllDomainUnitsGrantFilterT = AllDomainUnitsGrantFilter>
    void SetAllDomainUnitsGrantFilter(AllDomainUnitsGrantFilterT&& value) { m_allDomainUnitsGrantFilterHasBeenSet = true; m_allDomainUnitsGrantFilter = std::forward<AllDomainUnitsGrantFilterT>(value); }
    template<typename AllDomainUnitsGrantFilterT = AllDomainUnitsGrantFilter>
    DomainUnitGrantFilter& WithAllDomainUnitsGrantFilter(AllDomainUnitsGrantFilterT&& value) { SetAllDomainUnitsGrantFilter(std::forward<AllDomainUnitsGrantFilterT>(value)); return *this;}
    ///@}
  private:

    AllDomainUnitsGrantFilter m_allDomainUnitsGrantFilter;
    bool m_allDomainUnitsGrantFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
