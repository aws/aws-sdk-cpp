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
   * <p>The Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/Region">AWS API
   * Reference</a></p>
   */
  class Region
  {
  public:
    AWS_DATAZONE_API Region() = default;
    AWS_DATAZONE_API Region(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Region& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services Region name.</p>
     */
    inline const Aws::String& GetRegionName() const { return m_regionName; }
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
    template<typename RegionNameT = Aws::String>
    void SetRegionName(RegionNameT&& value) { m_regionNameHasBeenSet = true; m_regionName = std::forward<RegionNameT>(value); }
    template<typename RegionNameT = Aws::String>
    Region& WithRegionName(RegionNameT&& value) { SetRegionName(std::forward<RegionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region name path.</p>
     */
    inline const Aws::String& GetRegionNamePath() const { return m_regionNamePath; }
    inline bool RegionNamePathHasBeenSet() const { return m_regionNamePathHasBeenSet; }
    template<typename RegionNamePathT = Aws::String>
    void SetRegionNamePath(RegionNamePathT&& value) { m_regionNamePathHasBeenSet = true; m_regionNamePath = std::forward<RegionNamePathT>(value); }
    template<typename RegionNamePathT = Aws::String>
    Region& WithRegionNamePath(RegionNamePathT&& value) { SetRegionNamePath(std::forward<RegionNamePathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    Aws::String m_regionNamePath;
    bool m_regionNamePathHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
