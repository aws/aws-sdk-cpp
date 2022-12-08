/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/CatalogItemStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/outposts/model/EC2Capacity.h>
#include <aws/outposts/model/SupportedStorageEnum.h>
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
namespace Outposts
{
namespace Model
{

  /**
   * <p> Information about a catalog item. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/CatalogItem">AWS
   * API Reference</a></p>
   */
  class CatalogItem
  {
  public:
    AWS_OUTPOSTS_API CatalogItem();
    AWS_OUTPOSTS_API CatalogItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API CatalogItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The ID of the catalog item. </p>
     */
    inline const Aws::String& GetCatalogItemId() const{ return m_catalogItemId; }

    /**
     * <p> The ID of the catalog item. </p>
     */
    inline bool CatalogItemIdHasBeenSet() const { return m_catalogItemIdHasBeenSet; }

    /**
     * <p> The ID of the catalog item. </p>
     */
    inline void SetCatalogItemId(const Aws::String& value) { m_catalogItemIdHasBeenSet = true; m_catalogItemId = value; }

    /**
     * <p> The ID of the catalog item. </p>
     */
    inline void SetCatalogItemId(Aws::String&& value) { m_catalogItemIdHasBeenSet = true; m_catalogItemId = std::move(value); }

    /**
     * <p> The ID of the catalog item. </p>
     */
    inline void SetCatalogItemId(const char* value) { m_catalogItemIdHasBeenSet = true; m_catalogItemId.assign(value); }

    /**
     * <p> The ID of the catalog item. </p>
     */
    inline CatalogItem& WithCatalogItemId(const Aws::String& value) { SetCatalogItemId(value); return *this;}

    /**
     * <p> The ID of the catalog item. </p>
     */
    inline CatalogItem& WithCatalogItemId(Aws::String&& value) { SetCatalogItemId(std::move(value)); return *this;}

    /**
     * <p> The ID of the catalog item. </p>
     */
    inline CatalogItem& WithCatalogItemId(const char* value) { SetCatalogItemId(value); return *this;}


    /**
     * <p> The status of a catalog item. </p>
     */
    inline const CatalogItemStatus& GetItemStatus() const{ return m_itemStatus; }

    /**
     * <p> The status of a catalog item. </p>
     */
    inline bool ItemStatusHasBeenSet() const { return m_itemStatusHasBeenSet; }

    /**
     * <p> The status of a catalog item. </p>
     */
    inline void SetItemStatus(const CatalogItemStatus& value) { m_itemStatusHasBeenSet = true; m_itemStatus = value; }

    /**
     * <p> The status of a catalog item. </p>
     */
    inline void SetItemStatus(CatalogItemStatus&& value) { m_itemStatusHasBeenSet = true; m_itemStatus = std::move(value); }

    /**
     * <p> The status of a catalog item. </p>
     */
    inline CatalogItem& WithItemStatus(const CatalogItemStatus& value) { SetItemStatus(value); return *this;}

    /**
     * <p> The status of a catalog item. </p>
     */
    inline CatalogItem& WithItemStatus(CatalogItemStatus&& value) { SetItemStatus(std::move(value)); return *this;}


    /**
     * <p> Information about the EC2 capacity of an item. </p>
     */
    inline const Aws::Vector<EC2Capacity>& GetEC2Capacities() const{ return m_eC2Capacities; }

    /**
     * <p> Information about the EC2 capacity of an item. </p>
     */
    inline bool EC2CapacitiesHasBeenSet() const { return m_eC2CapacitiesHasBeenSet; }

    /**
     * <p> Information about the EC2 capacity of an item. </p>
     */
    inline void SetEC2Capacities(const Aws::Vector<EC2Capacity>& value) { m_eC2CapacitiesHasBeenSet = true; m_eC2Capacities = value; }

    /**
     * <p> Information about the EC2 capacity of an item. </p>
     */
    inline void SetEC2Capacities(Aws::Vector<EC2Capacity>&& value) { m_eC2CapacitiesHasBeenSet = true; m_eC2Capacities = std::move(value); }

    /**
     * <p> Information about the EC2 capacity of an item. </p>
     */
    inline CatalogItem& WithEC2Capacities(const Aws::Vector<EC2Capacity>& value) { SetEC2Capacities(value); return *this;}

    /**
     * <p> Information about the EC2 capacity of an item. </p>
     */
    inline CatalogItem& WithEC2Capacities(Aws::Vector<EC2Capacity>&& value) { SetEC2Capacities(std::move(value)); return *this;}

    /**
     * <p> Information about the EC2 capacity of an item. </p>
     */
    inline CatalogItem& AddEC2Capacities(const EC2Capacity& value) { m_eC2CapacitiesHasBeenSet = true; m_eC2Capacities.push_back(value); return *this; }

    /**
     * <p> Information about the EC2 capacity of an item. </p>
     */
    inline CatalogItem& AddEC2Capacities(EC2Capacity&& value) { m_eC2CapacitiesHasBeenSet = true; m_eC2Capacities.push_back(std::move(value)); return *this; }


    /**
     * <p> Information about the power draw of an item. </p>
     */
    inline double GetPowerKva() const{ return m_powerKva; }

    /**
     * <p> Information about the power draw of an item. </p>
     */
    inline bool PowerKvaHasBeenSet() const { return m_powerKvaHasBeenSet; }

    /**
     * <p> Information about the power draw of an item. </p>
     */
    inline void SetPowerKva(double value) { m_powerKvaHasBeenSet = true; m_powerKva = value; }

    /**
     * <p> Information about the power draw of an item. </p>
     */
    inline CatalogItem& WithPowerKva(double value) { SetPowerKva(value); return *this;}


    /**
     * <p> The weight of the item in pounds. </p>
     */
    inline int GetWeightLbs() const{ return m_weightLbs; }

    /**
     * <p> The weight of the item in pounds. </p>
     */
    inline bool WeightLbsHasBeenSet() const { return m_weightLbsHasBeenSet; }

    /**
     * <p> The weight of the item in pounds. </p>
     */
    inline void SetWeightLbs(int value) { m_weightLbsHasBeenSet = true; m_weightLbs = value; }

    /**
     * <p> The weight of the item in pounds. </p>
     */
    inline CatalogItem& WithWeightLbs(int value) { SetWeightLbs(value); return *this;}


    /**
     * <p> The uplink speed this catalog item requires for the connection to the
     * Region. </p>
     */
    inline const Aws::Vector<int>& GetSupportedUplinkGbps() const{ return m_supportedUplinkGbps; }

    /**
     * <p> The uplink speed this catalog item requires for the connection to the
     * Region. </p>
     */
    inline bool SupportedUplinkGbpsHasBeenSet() const { return m_supportedUplinkGbpsHasBeenSet; }

    /**
     * <p> The uplink speed this catalog item requires for the connection to the
     * Region. </p>
     */
    inline void SetSupportedUplinkGbps(const Aws::Vector<int>& value) { m_supportedUplinkGbpsHasBeenSet = true; m_supportedUplinkGbps = value; }

    /**
     * <p> The uplink speed this catalog item requires for the connection to the
     * Region. </p>
     */
    inline void SetSupportedUplinkGbps(Aws::Vector<int>&& value) { m_supportedUplinkGbpsHasBeenSet = true; m_supportedUplinkGbps = std::move(value); }

    /**
     * <p> The uplink speed this catalog item requires for the connection to the
     * Region. </p>
     */
    inline CatalogItem& WithSupportedUplinkGbps(const Aws::Vector<int>& value) { SetSupportedUplinkGbps(value); return *this;}

    /**
     * <p> The uplink speed this catalog item requires for the connection to the
     * Region. </p>
     */
    inline CatalogItem& WithSupportedUplinkGbps(Aws::Vector<int>&& value) { SetSupportedUplinkGbps(std::move(value)); return *this;}

    /**
     * <p> The uplink speed this catalog item requires for the connection to the
     * Region. </p>
     */
    inline CatalogItem& AddSupportedUplinkGbps(int value) { m_supportedUplinkGbpsHasBeenSet = true; m_supportedUplinkGbps.push_back(value); return *this; }


    /**
     * <p> The supported storage options for the catalog item. </p>
     */
    inline const Aws::Vector<SupportedStorageEnum>& GetSupportedStorage() const{ return m_supportedStorage; }

    /**
     * <p> The supported storage options for the catalog item. </p>
     */
    inline bool SupportedStorageHasBeenSet() const { return m_supportedStorageHasBeenSet; }

    /**
     * <p> The supported storage options for the catalog item. </p>
     */
    inline void SetSupportedStorage(const Aws::Vector<SupportedStorageEnum>& value) { m_supportedStorageHasBeenSet = true; m_supportedStorage = value; }

    /**
     * <p> The supported storage options for the catalog item. </p>
     */
    inline void SetSupportedStorage(Aws::Vector<SupportedStorageEnum>&& value) { m_supportedStorageHasBeenSet = true; m_supportedStorage = std::move(value); }

    /**
     * <p> The supported storage options for the catalog item. </p>
     */
    inline CatalogItem& WithSupportedStorage(const Aws::Vector<SupportedStorageEnum>& value) { SetSupportedStorage(value); return *this;}

    /**
     * <p> The supported storage options for the catalog item. </p>
     */
    inline CatalogItem& WithSupportedStorage(Aws::Vector<SupportedStorageEnum>&& value) { SetSupportedStorage(std::move(value)); return *this;}

    /**
     * <p> The supported storage options for the catalog item. </p>
     */
    inline CatalogItem& AddSupportedStorage(const SupportedStorageEnum& value) { m_supportedStorageHasBeenSet = true; m_supportedStorage.push_back(value); return *this; }

    /**
     * <p> The supported storage options for the catalog item. </p>
     */
    inline CatalogItem& AddSupportedStorage(SupportedStorageEnum&& value) { m_supportedStorageHasBeenSet = true; m_supportedStorage.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_catalogItemId;
    bool m_catalogItemIdHasBeenSet = false;

    CatalogItemStatus m_itemStatus;
    bool m_itemStatusHasBeenSet = false;

    Aws::Vector<EC2Capacity> m_eC2Capacities;
    bool m_eC2CapacitiesHasBeenSet = false;

    double m_powerKva;
    bool m_powerKvaHasBeenSet = false;

    int m_weightLbs;
    bool m_weightLbsHasBeenSet = false;

    Aws::Vector<int> m_supportedUplinkGbps;
    bool m_supportedUplinkGbpsHasBeenSet = false;

    Aws::Vector<SupportedStorageEnum> m_supportedStorage;
    bool m_supportedStorageHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
