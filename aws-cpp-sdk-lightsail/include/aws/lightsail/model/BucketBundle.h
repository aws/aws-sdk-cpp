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


    /**
     * <p>The ID of the bundle.</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }

    /**
     * <p>The ID of the bundle.</p>
     */
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }

    /**
     * <p>The ID of the bundle.</p>
     */
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }

    /**
     * <p>The ID of the bundle.</p>
     */
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }

    /**
     * <p>The ID of the bundle.</p>
     */
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }

    /**
     * <p>The ID of the bundle.</p>
     */
    inline BucketBundle& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}

    /**
     * <p>The ID of the bundle.</p>
     */
    inline BucketBundle& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}

    /**
     * <p>The ID of the bundle.</p>
     */
    inline BucketBundle& WithBundleId(const char* value) { SetBundleId(value); return *this;}


    /**
     * <p>The name of the bundle.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the bundle.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the bundle.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the bundle.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the bundle.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the bundle.</p>
     */
    inline BucketBundle& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the bundle.</p>
     */
    inline BucketBundle& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the bundle.</p>
     */
    inline BucketBundle& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The monthly price of the bundle, in US dollars.</p>
     */
    inline double GetPrice() const{ return m_price; }

    /**
     * <p>The monthly price of the bundle, in US dollars.</p>
     */
    inline bool PriceHasBeenSet() const { return m_priceHasBeenSet; }

    /**
     * <p>The monthly price of the bundle, in US dollars.</p>
     */
    inline void SetPrice(double value) { m_priceHasBeenSet = true; m_price = value; }

    /**
     * <p>The monthly price of the bundle, in US dollars.</p>
     */
    inline BucketBundle& WithPrice(double value) { SetPrice(value); return *this;}


    /**
     * <p>The storage size of the bundle, in GB.</p>
     */
    inline int GetStoragePerMonthInGb() const{ return m_storagePerMonthInGb; }

    /**
     * <p>The storage size of the bundle, in GB.</p>
     */
    inline bool StoragePerMonthInGbHasBeenSet() const { return m_storagePerMonthInGbHasBeenSet; }

    /**
     * <p>The storage size of the bundle, in GB.</p>
     */
    inline void SetStoragePerMonthInGb(int value) { m_storagePerMonthInGbHasBeenSet = true; m_storagePerMonthInGb = value; }

    /**
     * <p>The storage size of the bundle, in GB.</p>
     */
    inline BucketBundle& WithStoragePerMonthInGb(int value) { SetStoragePerMonthInGb(value); return *this;}


    /**
     * <p>The monthly network transfer quota of the bundle.</p>
     */
    inline int GetTransferPerMonthInGb() const{ return m_transferPerMonthInGb; }

    /**
     * <p>The monthly network transfer quota of the bundle.</p>
     */
    inline bool TransferPerMonthInGbHasBeenSet() const { return m_transferPerMonthInGbHasBeenSet; }

    /**
     * <p>The monthly network transfer quota of the bundle.</p>
     */
    inline void SetTransferPerMonthInGb(int value) { m_transferPerMonthInGbHasBeenSet = true; m_transferPerMonthInGb = value; }

    /**
     * <p>The monthly network transfer quota of the bundle.</p>
     */
    inline BucketBundle& WithTransferPerMonthInGb(int value) { SetTransferPerMonthInGb(value); return *this;}


    /**
     * <p>Indicates whether the bundle is active. Use for a new or existing bucket.</p>
     */
    inline bool GetIsActive() const{ return m_isActive; }

    /**
     * <p>Indicates whether the bundle is active. Use for a new or existing bucket.</p>
     */
    inline bool IsActiveHasBeenSet() const { return m_isActiveHasBeenSet; }

    /**
     * <p>Indicates whether the bundle is active. Use for a new or existing bucket.</p>
     */
    inline void SetIsActive(bool value) { m_isActiveHasBeenSet = true; m_isActive = value; }

    /**
     * <p>Indicates whether the bundle is active. Use for a new or existing bucket.</p>
     */
    inline BucketBundle& WithIsActive(bool value) { SetIsActive(value); return *this;}

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
