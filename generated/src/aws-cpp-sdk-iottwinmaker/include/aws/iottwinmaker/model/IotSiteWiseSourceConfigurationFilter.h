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
    AWS_IOTTWINMAKER_API IotSiteWiseSourceConfigurationFilter();
    AWS_IOTTWINMAKER_API IotSiteWiseSourceConfigurationFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API IotSiteWiseSourceConfigurationFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Filter by asset model.</p>
     */
    inline const FilterByAssetModel& GetFilterByAssetModel() const{ return m_filterByAssetModel; }

    /**
     * <p>Filter by asset model.</p>
     */
    inline bool FilterByAssetModelHasBeenSet() const { return m_filterByAssetModelHasBeenSet; }

    /**
     * <p>Filter by asset model.</p>
     */
    inline void SetFilterByAssetModel(const FilterByAssetModel& value) { m_filterByAssetModelHasBeenSet = true; m_filterByAssetModel = value; }

    /**
     * <p>Filter by asset model.</p>
     */
    inline void SetFilterByAssetModel(FilterByAssetModel&& value) { m_filterByAssetModelHasBeenSet = true; m_filterByAssetModel = std::move(value); }

    /**
     * <p>Filter by asset model.</p>
     */
    inline IotSiteWiseSourceConfigurationFilter& WithFilterByAssetModel(const FilterByAssetModel& value) { SetFilterByAssetModel(value); return *this;}

    /**
     * <p>Filter by asset model.</p>
     */
    inline IotSiteWiseSourceConfigurationFilter& WithFilterByAssetModel(FilterByAssetModel&& value) { SetFilterByAssetModel(std::move(value)); return *this;}


    /**
     * <p>Filter by asset.</p>
     */
    inline const FilterByAsset& GetFilterByAsset() const{ return m_filterByAsset; }

    /**
     * <p>Filter by asset.</p>
     */
    inline bool FilterByAssetHasBeenSet() const { return m_filterByAssetHasBeenSet; }

    /**
     * <p>Filter by asset.</p>
     */
    inline void SetFilterByAsset(const FilterByAsset& value) { m_filterByAssetHasBeenSet = true; m_filterByAsset = value; }

    /**
     * <p>Filter by asset.</p>
     */
    inline void SetFilterByAsset(FilterByAsset&& value) { m_filterByAssetHasBeenSet = true; m_filterByAsset = std::move(value); }

    /**
     * <p>Filter by asset.</p>
     */
    inline IotSiteWiseSourceConfigurationFilter& WithFilterByAsset(const FilterByAsset& value) { SetFilterByAsset(value); return *this;}

    /**
     * <p>Filter by asset.</p>
     */
    inline IotSiteWiseSourceConfigurationFilter& WithFilterByAsset(FilterByAsset&& value) { SetFilterByAsset(std::move(value)); return *this;}

  private:

    FilterByAssetModel m_filterByAssetModel;
    bool m_filterByAssetModelHasBeenSet = false;

    FilterByAsset m_filterByAsset;
    bool m_filterByAssetHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
