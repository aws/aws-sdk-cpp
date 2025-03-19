/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>Defines the Amazon Web Services Regions that the specified Firewall Manager
   * administrator can manage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/RegionScope">AWS API
   * Reference</a></p>
   */
  class RegionScope
  {
  public:
    AWS_FMS_API RegionScope() = default;
    AWS_FMS_API RegionScope(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API RegionScope& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services Regions that the specified Firewall Manager
     * administrator can perform actions in.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    void SetRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions = std::forward<RegionsT>(value); }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    RegionScope& WithRegions(RegionsT&& value) { SetRegions(std::forward<RegionsT>(value)); return *this;}
    template<typename RegionsT = Aws::String>
    RegionScope& AddRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions.emplace_back(std::forward<RegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Allows the specified Firewall Manager administrator to manage all Amazon Web
     * Services Regions.</p>
     */
    inline bool GetAllRegionsEnabled() const { return m_allRegionsEnabled; }
    inline bool AllRegionsEnabledHasBeenSet() const { return m_allRegionsEnabledHasBeenSet; }
    inline void SetAllRegionsEnabled(bool value) { m_allRegionsEnabledHasBeenSet = true; m_allRegionsEnabled = value; }
    inline RegionScope& WithAllRegionsEnabled(bool value) { SetAllRegionsEnabled(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;

    bool m_allRegionsEnabled{false};
    bool m_allRegionsEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
