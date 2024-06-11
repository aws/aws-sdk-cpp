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
    AWS_EC2_API FpgaImageAttribute();
    AWS_EC2_API FpgaImageAttribute(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FpgaImageAttribute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the AFI.</p>
     */
    inline const Aws::String& GetFpgaImageId() const{ return m_fpgaImageId; }
    inline bool FpgaImageIdHasBeenSet() const { return m_fpgaImageIdHasBeenSet; }
    inline void SetFpgaImageId(const Aws::String& value) { m_fpgaImageIdHasBeenSet = true; m_fpgaImageId = value; }
    inline void SetFpgaImageId(Aws::String&& value) { m_fpgaImageIdHasBeenSet = true; m_fpgaImageId = std::move(value); }
    inline void SetFpgaImageId(const char* value) { m_fpgaImageIdHasBeenSet = true; m_fpgaImageId.assign(value); }
    inline FpgaImageAttribute& WithFpgaImageId(const Aws::String& value) { SetFpgaImageId(value); return *this;}
    inline FpgaImageAttribute& WithFpgaImageId(Aws::String&& value) { SetFpgaImageId(std::move(value)); return *this;}
    inline FpgaImageAttribute& WithFpgaImageId(const char* value) { SetFpgaImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the AFI.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline FpgaImageAttribute& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline FpgaImageAttribute& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline FpgaImageAttribute& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the AFI.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline FpgaImageAttribute& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline FpgaImageAttribute& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline FpgaImageAttribute& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The load permissions.</p>
     */
    inline const Aws::Vector<LoadPermission>& GetLoadPermissions() const{ return m_loadPermissions; }
    inline bool LoadPermissionsHasBeenSet() const { return m_loadPermissionsHasBeenSet; }
    inline void SetLoadPermissions(const Aws::Vector<LoadPermission>& value) { m_loadPermissionsHasBeenSet = true; m_loadPermissions = value; }
    inline void SetLoadPermissions(Aws::Vector<LoadPermission>&& value) { m_loadPermissionsHasBeenSet = true; m_loadPermissions = std::move(value); }
    inline FpgaImageAttribute& WithLoadPermissions(const Aws::Vector<LoadPermission>& value) { SetLoadPermissions(value); return *this;}
    inline FpgaImageAttribute& WithLoadPermissions(Aws::Vector<LoadPermission>&& value) { SetLoadPermissions(std::move(value)); return *this;}
    inline FpgaImageAttribute& AddLoadPermissions(const LoadPermission& value) { m_loadPermissionsHasBeenSet = true; m_loadPermissions.push_back(value); return *this; }
    inline FpgaImageAttribute& AddLoadPermissions(LoadPermission&& value) { m_loadPermissionsHasBeenSet = true; m_loadPermissions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The product codes.</p>
     */
    inline const Aws::Vector<ProductCode>& GetProductCodes() const{ return m_productCodes; }
    inline bool ProductCodesHasBeenSet() const { return m_productCodesHasBeenSet; }
    inline void SetProductCodes(const Aws::Vector<ProductCode>& value) { m_productCodesHasBeenSet = true; m_productCodes = value; }
    inline void SetProductCodes(Aws::Vector<ProductCode>&& value) { m_productCodesHasBeenSet = true; m_productCodes = std::move(value); }
    inline FpgaImageAttribute& WithProductCodes(const Aws::Vector<ProductCode>& value) { SetProductCodes(value); return *this;}
    inline FpgaImageAttribute& WithProductCodes(Aws::Vector<ProductCode>&& value) { SetProductCodes(std::move(value)); return *this;}
    inline FpgaImageAttribute& AddProductCodes(const ProductCode& value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(value); return *this; }
    inline FpgaImageAttribute& AddProductCodes(ProductCode&& value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(std::move(value)); return *this; }
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
