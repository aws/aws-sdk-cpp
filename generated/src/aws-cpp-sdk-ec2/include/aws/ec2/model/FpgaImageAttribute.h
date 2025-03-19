/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/LoadPermission.h>
#include <aws/ec2/model/ProductCode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes an Amazon FPGA image (AFI) attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FpgaImageAttribute">AWS
   * API Reference</a></p>
   */
  class FpgaImageAttribute
  {
  public:
    AWS_EC2_API FpgaImageAttribute() = default;
    AWS_EC2_API FpgaImageAttribute(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FpgaImageAttribute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the AFI.</p>
     */
    inline const Aws::String& GetFpgaImageId() const { return m_fpgaImageId; }
    inline bool FpgaImageIdHasBeenSet() const { return m_fpgaImageIdHasBeenSet; }
    template<typename FpgaImageIdT = Aws::String>
    void SetFpgaImageId(FpgaImageIdT&& value) { m_fpgaImageIdHasBeenSet = true; m_fpgaImageId = std::forward<FpgaImageIdT>(value); }
    template<typename FpgaImageIdT = Aws::String>
    FpgaImageAttribute& WithFpgaImageId(FpgaImageIdT&& value) { SetFpgaImageId(std::forward<FpgaImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the AFI.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    FpgaImageAttribute& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the AFI.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    FpgaImageAttribute& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The load permissions.</p>
     */
    inline const Aws::Vector<LoadPermission>& GetLoadPermissions() const { return m_loadPermissions; }
    inline bool LoadPermissionsHasBeenSet() const { return m_loadPermissionsHasBeenSet; }
    template<typename LoadPermissionsT = Aws::Vector<LoadPermission>>
    void SetLoadPermissions(LoadPermissionsT&& value) { m_loadPermissionsHasBeenSet = true; m_loadPermissions = std::forward<LoadPermissionsT>(value); }
    template<typename LoadPermissionsT = Aws::Vector<LoadPermission>>
    FpgaImageAttribute& WithLoadPermissions(LoadPermissionsT&& value) { SetLoadPermissions(std::forward<LoadPermissionsT>(value)); return *this;}
    template<typename LoadPermissionsT = LoadPermission>
    FpgaImageAttribute& AddLoadPermissions(LoadPermissionsT&& value) { m_loadPermissionsHasBeenSet = true; m_loadPermissions.emplace_back(std::forward<LoadPermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The product codes.</p>
     */
    inline const Aws::Vector<ProductCode>& GetProductCodes() const { return m_productCodes; }
    inline bool ProductCodesHasBeenSet() const { return m_productCodesHasBeenSet; }
    template<typename ProductCodesT = Aws::Vector<ProductCode>>
    void SetProductCodes(ProductCodesT&& value) { m_productCodesHasBeenSet = true; m_productCodes = std::forward<ProductCodesT>(value); }
    template<typename ProductCodesT = Aws::Vector<ProductCode>>
    FpgaImageAttribute& WithProductCodes(ProductCodesT&& value) { SetProductCodes(std::forward<ProductCodesT>(value)); return *this;}
    template<typename ProductCodesT = ProductCode>
    FpgaImageAttribute& AddProductCodes(ProductCodesT&& value) { m_productCodesHasBeenSet = true; m_productCodes.emplace_back(std::forward<ProductCodesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_fpgaImageId;
    bool m_fpgaImageIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<LoadPermission> m_loadPermissions;
    bool m_loadPermissionsHasBeenSet = false;

    Aws::Vector<ProductCode> m_productCodes;
    bool m_productCodesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
