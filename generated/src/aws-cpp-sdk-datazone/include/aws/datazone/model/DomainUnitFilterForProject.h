/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The domain unit filter of the project grant filter.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DomainUnitFilterForProject">AWS
   * API Reference</a></p>
   */
  class DomainUnitFilterForProject
  {
  public:
    AWS_DATAZONE_API DomainUnitFilterForProject() = default;
    AWS_DATAZONE_API DomainUnitFilterForProject(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API DomainUnitFilterForProject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The domain unit ID to use in the filter.</p>
     */
    inline const Aws::String& GetDomainUnit() const { return m_domainUnit; }
    inline bool DomainUnitHasBeenSet() const { return m_domainUnitHasBeenSet; }
    template<typename DomainUnitT = Aws::String>
    void SetDomainUnit(DomainUnitT&& value) { m_domainUnitHasBeenSet = true; m_domainUnit = std::forward<DomainUnitT>(value); }
    template<typename DomainUnitT = Aws::String>
    DomainUnitFilterForProject& WithDomainUnit(DomainUnitT&& value) { SetDomainUnit(std::forward<DomainUnitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to include child domain units.</p>
     */
    inline bool GetIncludeChildDomainUnits() const { return m_includeChildDomainUnits; }
    inline bool IncludeChildDomainUnitsHasBeenSet() const { return m_includeChildDomainUnitsHasBeenSet; }
    inline void SetIncludeChildDomainUnits(bool value) { m_includeChildDomainUnitsHasBeenSet = true; m_includeChildDomainUnits = value; }
    inline DomainUnitFilterForProject& WithIncludeChildDomainUnits(bool value) { SetIncludeChildDomainUnits(value); return *this;}
    ///@}
  private:

    Aws::String m_domainUnit;
    bool m_domainUnitHasBeenSet = false;

    bool m_includeChildDomainUnits{false};
    bool m_includeChildDomainUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
