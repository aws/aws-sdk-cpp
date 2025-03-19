/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Provides information about the Regions that are configured for multi-Region
   * replication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RegionsInfo">AWS API
   * Reference</a></p>
   */
  class RegionsInfo
  {
  public:
    AWS_DIRECTORYSERVICE_API RegionsInfo() = default;
    AWS_DIRECTORYSERVICE_API RegionsInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API RegionsInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Region where the Managed Microsoft AD directory was originally
     * created.</p>
     */
    inline const Aws::String& GetPrimaryRegion() const { return m_primaryRegion; }
    inline bool PrimaryRegionHasBeenSet() const { return m_primaryRegionHasBeenSet; }
    template<typename PrimaryRegionT = Aws::String>
    void SetPrimaryRegion(PrimaryRegionT&& value) { m_primaryRegionHasBeenSet = true; m_primaryRegion = std::forward<PrimaryRegionT>(value); }
    template<typename PrimaryRegionT = Aws::String>
    RegionsInfo& WithPrimaryRegion(PrimaryRegionT&& value) { SetPrimaryRegion(std::forward<PrimaryRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the Regions where the directory has been replicated, excluding the
     * primary Region.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalRegions() const { return m_additionalRegions; }
    inline bool AdditionalRegionsHasBeenSet() const { return m_additionalRegionsHasBeenSet; }
    template<typename AdditionalRegionsT = Aws::Vector<Aws::String>>
    void SetAdditionalRegions(AdditionalRegionsT&& value) { m_additionalRegionsHasBeenSet = true; m_additionalRegions = std::forward<AdditionalRegionsT>(value); }
    template<typename AdditionalRegionsT = Aws::Vector<Aws::String>>
    RegionsInfo& WithAdditionalRegions(AdditionalRegionsT&& value) { SetAdditionalRegions(std::forward<AdditionalRegionsT>(value)); return *this;}
    template<typename AdditionalRegionsT = Aws::String>
    RegionsInfo& AddAdditionalRegions(AdditionalRegionsT&& value) { m_additionalRegionsHasBeenSet = true; m_additionalRegions.emplace_back(std::forward<AdditionalRegionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_primaryRegion;
    bool m_primaryRegionHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalRegions;
    bool m_additionalRegionsHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
