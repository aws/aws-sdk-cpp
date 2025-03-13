/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/FilterByAssetModel.h>
#include <aws/iottwinmaker/model/FilterByAsset.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>The AWS IoT SiteWise soucre configuration filter.[need held with desc
   * here]</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/IotSiteWiseSourceConfigurationFilter">AWS
   * API Reference</a></p>
   */
  class IotSiteWiseSourceConfigurationFilter
  {
  public:
    AWS_IOTTWINMAKER_API IotSiteWiseSourceConfigurationFilter() = default;
    AWS_IOTTWINMAKER_API IotSiteWiseSourceConfigurationFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API IotSiteWiseSourceConfigurationFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filter by asset model.</p>
     */
    inline const FilterByAssetModel& GetFilterByAssetModel() const { return m_filterByAssetModel; }
    inline bool FilterByAssetModelHasBeenSet() const { return m_filterByAssetModelHasBeenSet; }
    template<typename FilterByAssetModelT = FilterByAssetModel>
    void SetFilterByAssetModel(FilterByAssetModelT&& value) { m_filterByAssetModelHasBeenSet = true; m_filterByAssetModel = std::forward<FilterByAssetModelT>(value); }
    template<typename FilterByAssetModelT = FilterByAssetModel>
    IotSiteWiseSourceConfigurationFilter& WithFilterByAssetModel(FilterByAssetModelT&& value) { SetFilterByAssetModel(std::forward<FilterByAssetModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter by asset.</p>
     */
    inline const FilterByAsset& GetFilterByAsset() const { return m_filterByAsset; }
    inline bool FilterByAssetHasBeenSet() const { return m_filterByAssetHasBeenSet; }
    template<typename FilterByAssetT = FilterByAsset>
    void SetFilterByAsset(FilterByAssetT&& value) { m_filterByAssetHasBeenSet = true; m_filterByAsset = std::forward<FilterByAssetT>(value); }
    template<typename FilterByAssetT = FilterByAsset>
    IotSiteWiseSourceConfigurationFilter& WithFilterByAsset(FilterByAssetT&& value) { SetFilterByAsset(std::forward<FilterByAssetT>(value)); return *this;}
    ///@}
  private:

    FilterByAssetModel m_filterByAssetModel;
    bool m_filterByAssetModelHasBeenSet = false;

    FilterByAsset m_filterByAsset;
    bool m_filterByAssetHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
