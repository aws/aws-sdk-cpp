/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the specifications of a bundle that can be applied to an Amazon
   * Lightsail bucket.</p> <p>A bucket bundle specifies the monthly cost, storage
   * space, and data transfer quota for a bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/BucketBundle">AWS
   * API Reference</a></p>
   */
  class BucketBundle
  {
  public:
    AWS_LIGHTSAIL_API BucketBundle();
    AWS_LIGHTSAIL_API BucketBundle(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API BucketBundle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the bundle.</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }
    inline BucketBundle& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}
    inline BucketBundle& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}
    inline BucketBundle& WithBundleId(const char* value) { SetBundleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the bundle.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline BucketBundle& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline BucketBundle& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline BucketBundle& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The monthly price of the bundle, in US dollars.</p>
     */
    inline double GetPrice() const{ return m_price; }
    inline bool PriceHasBeenSet() const { return m_priceHasBeenSet; }
    inline void SetPrice(double value) { m_priceHasBeenSet = true; m_price = value; }
    inline BucketBundle& WithPrice(double value) { SetPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage size of the bundle, in GB.</p>
     */
    inline int GetStoragePerMonthInGb() const{ return m_storagePerMonthInGb; }
    inline bool StoragePerMonthInGbHasBeenSet() const { return m_storagePerMonthInGbHasBeenSet; }
    inline void SetStoragePerMonthInGb(int value) { m_storagePerMonthInGbHasBeenSet = true; m_storagePerMonthInGb = value; }
    inline BucketBundle& WithStoragePerMonthInGb(int value) { SetStoragePerMonthInGb(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The monthly network transfer quota of the bundle.</p>
     */
    inline int GetTransferPerMonthInGb() const{ return m_transferPerMonthInGb; }
    inline bool TransferPerMonthInGbHasBeenSet() const { return m_transferPerMonthInGbHasBeenSet; }
    inline void SetTransferPerMonthInGb(int value) { m_transferPerMonthInGbHasBeenSet = true; m_transferPerMonthInGb = value; }
    inline BucketBundle& WithTransferPerMonthInGb(int value) { SetTransferPerMonthInGb(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the bundle is active. Use for a new or existing bucket.</p>
     */
    inline bool GetIsActive() const{ return m_isActive; }
    inline bool IsActiveHasBeenSet() const { return m_isActiveHasBeenSet; }
    inline void SetIsActive(bool value) { m_isActiveHasBeenSet = true; m_isActive = value; }
    inline BucketBundle& WithIsActive(bool value) { SetIsActive(value); return *this;}
    ///@}
  private:

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    double m_price;
    bool m_priceHasBeenSet = false;

    int m_storagePerMonthInGb;
    bool m_storagePerMonthInGbHasBeenSet = false;

    int m_transferPerMonthInGb;
    bool m_transferPerMonthInGbHasBeenSet = false;

    bool m_isActive;
    bool m_isActiveHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
