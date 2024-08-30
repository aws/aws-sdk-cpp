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
    AWS_DATAZONE_API DomainUnitFilterForProject();
    AWS_DATAZONE_API DomainUnitFilterForProject(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API DomainUnitFilterForProject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The domain unit ID to use in the filter.</p>
     */
    inline const Aws::String& GetDomainUnit() const{ return m_domainUnit; }
    inline bool DomainUnitHasBeenSet() const { return m_domainUnitHasBeenSet; }
    inline void SetDomainUnit(const Aws::String& value) { m_domainUnitHasBeenSet = true; m_domainUnit = value; }
    inline void SetDomainUnit(Aws::String&& value) { m_domainUnitHasBeenSet = true; m_domainUnit = std::move(value); }
    inline void SetDomainUnit(const char* value) { m_domainUnitHasBeenSet = true; m_domainUnit.assign(value); }
    inline DomainUnitFilterForProject& WithDomainUnit(const Aws::String& value) { SetDomainUnit(value); return *this;}
    inline DomainUnitFilterForProject& WithDomainUnit(Aws::String&& value) { SetDomainUnit(std::move(value)); return *this;}
    inline DomainUnitFilterForProject& WithDomainUnit(const char* value) { SetDomainUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to include child domain units.</p>
     */
    inline bool GetIncludeChildDomainUnits() const{ return m_includeChildDomainUnits; }
    inline bool IncludeChildDomainUnitsHasBeenSet() const { return m_includeChildDomainUnitsHasBeenSet; }
    inline void SetIncludeChildDomainUnits(bool value) { m_includeChildDomainUnitsHasBeenSet = true; m_includeChildDomainUnits = value; }
    inline DomainUnitFilterForProject& WithIncludeChildDomainUnits(bool value) { SetIncludeChildDomainUnits(value); return *this;}
    ///@}
  private:

    Aws::String m_domainUnit;
    bool m_domainUnitHasBeenSet = false;

    bool m_includeChildDomainUnits;
    bool m_includeChildDomainUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
