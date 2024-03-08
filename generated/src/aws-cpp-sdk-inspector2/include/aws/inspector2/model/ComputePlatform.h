/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>A compute platform.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ComputePlatform">AWS
   * API Reference</a></p>
   */
  class ComputePlatform
  {
  public:
    AWS_INSPECTOR2_API ComputePlatform();
    AWS_INSPECTOR2_API ComputePlatform(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API ComputePlatform& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The compute platform product.</p>
     */
    inline const Aws::String& GetProduct() const{ return m_product; }

    /**
     * <p>The compute platform product.</p>
     */
    inline bool ProductHasBeenSet() const { return m_productHasBeenSet; }

    /**
     * <p>The compute platform product.</p>
     */
    inline void SetProduct(const Aws::String& value) { m_productHasBeenSet = true; m_product = value; }

    /**
     * <p>The compute platform product.</p>
     */
    inline void SetProduct(Aws::String&& value) { m_productHasBeenSet = true; m_product = std::move(value); }

    /**
     * <p>The compute platform product.</p>
     */
    inline void SetProduct(const char* value) { m_productHasBeenSet = true; m_product.assign(value); }

    /**
     * <p>The compute platform product.</p>
     */
    inline ComputePlatform& WithProduct(const Aws::String& value) { SetProduct(value); return *this;}

    /**
     * <p>The compute platform product.</p>
     */
    inline ComputePlatform& WithProduct(Aws::String&& value) { SetProduct(std::move(value)); return *this;}

    /**
     * <p>The compute platform product.</p>
     */
    inline ComputePlatform& WithProduct(const char* value) { SetProduct(value); return *this;}


    /**
     * <p>The compute platform vendor.</p>
     */
    inline const Aws::String& GetVendor() const{ return m_vendor; }

    /**
     * <p>The compute platform vendor.</p>
     */
    inline bool VendorHasBeenSet() const { return m_vendorHasBeenSet; }

    /**
     * <p>The compute platform vendor.</p>
     */
    inline void SetVendor(const Aws::String& value) { m_vendorHasBeenSet = true; m_vendor = value; }

    /**
     * <p>The compute platform vendor.</p>
     */
    inline void SetVendor(Aws::String&& value) { m_vendorHasBeenSet = true; m_vendor = std::move(value); }

    /**
     * <p>The compute platform vendor.</p>
     */
    inline void SetVendor(const char* value) { m_vendorHasBeenSet = true; m_vendor.assign(value); }

    /**
     * <p>The compute platform vendor.</p>
     */
    inline ComputePlatform& WithVendor(const Aws::String& value) { SetVendor(value); return *this;}

    /**
     * <p>The compute platform vendor.</p>
     */
    inline ComputePlatform& WithVendor(Aws::String&& value) { SetVendor(std::move(value)); return *this;}

    /**
     * <p>The compute platform vendor.</p>
     */
    inline ComputePlatform& WithVendor(const char* value) { SetVendor(value); return *this;}


    /**
     * <p>The compute platform version.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The compute platform version.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The compute platform version.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The compute platform version.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The compute platform version.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The compute platform version.</p>
     */
    inline ComputePlatform& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The compute platform version.</p>
     */
    inline ComputePlatform& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The compute platform version.</p>
     */
    inline ComputePlatform& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_product;
    bool m_productHasBeenSet = false;

    Aws::String m_vendor;
    bool m_vendorHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
