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
    AWS_INSPECTOR2_API ComputePlatform() = default;
    AWS_INSPECTOR2_API ComputePlatform(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API ComputePlatform& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The compute platform vendor.</p>
     */
    inline const Aws::String& GetVendor() const { return m_vendor; }
    inline bool VendorHasBeenSet() const { return m_vendorHasBeenSet; }
    template<typename VendorT = Aws::String>
    void SetVendor(VendorT&& value) { m_vendorHasBeenSet = true; m_vendor = std::forward<VendorT>(value); }
    template<typename VendorT = Aws::String>
    ComputePlatform& WithVendor(VendorT&& value) { SetVendor(std::forward<VendorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute platform product.</p>
     */
    inline const Aws::String& GetProduct() const { return m_product; }
    inline bool ProductHasBeenSet() const { return m_productHasBeenSet; }
    template<typename ProductT = Aws::String>
    void SetProduct(ProductT&& value) { m_productHasBeenSet = true; m_product = std::forward<ProductT>(value); }
    template<typename ProductT = Aws::String>
    ComputePlatform& WithProduct(ProductT&& value) { SetProduct(std::forward<ProductT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute platform version.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    ComputePlatform& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vendor;
    bool m_vendorHasBeenSet = false;

    Aws::String m_product;
    bool m_productHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
