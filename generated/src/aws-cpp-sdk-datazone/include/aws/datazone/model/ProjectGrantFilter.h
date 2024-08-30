/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/DomainUnitFilterForProject.h>
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
   * <p>The project grant filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ProjectGrantFilter">AWS
   * API Reference</a></p>
   */
  class ProjectGrantFilter
  {
  public:
    AWS_DATAZONE_API ProjectGrantFilter();
    AWS_DATAZONE_API ProjectGrantFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API ProjectGrantFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The domain unit filter of the project grant filter.</p>
     */
    inline const DomainUnitFilterForProject& GetDomainUnitFilter() const{ return m_domainUnitFilter; }
    inline bool DomainUnitFilterHasBeenSet() const { return m_domainUnitFilterHasBeenSet; }
    inline void SetDomainUnitFilter(const DomainUnitFilterForProject& value) { m_domainUnitFilterHasBeenSet = true; m_domainUnitFilter = value; }
    inline void SetDomainUnitFilter(DomainUnitFilterForProject&& value) { m_domainUnitFilterHasBeenSet = true; m_domainUnitFilter = std::move(value); }
    inline ProjectGrantFilter& WithDomainUnitFilter(const DomainUnitFilterForProject& value) { SetDomainUnitFilter(value); return *this;}
    inline ProjectGrantFilter& WithDomainUnitFilter(DomainUnitFilterForProject&& value) { SetDomainUnitFilter(std::move(value)); return *this;}
    ///@}
  private:

    DomainUnitFilterForProject m_domainUnitFilter;
    bool m_domainUnitFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
