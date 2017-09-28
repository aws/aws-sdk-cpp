/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EC2_API FpgaImageAttribute
  {
  public:
    FpgaImageAttribute();
    FpgaImageAttribute(const Aws::Utils::Xml::XmlNode& xmlNode);
    FpgaImageAttribute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the AFI.</p>
     */
    inline const Aws::String& GetFpgaImageId() const{ return m_fpgaImageId; }

    /**
     * <p>The ID of the AFI.</p>
     */
    inline void SetFpgaImageId(const Aws::String& value) { m_fpgaImageIdHasBeenSet = true; m_fpgaImageId = value; }

    /**
     * <p>The ID of the AFI.</p>
     */
    inline void SetFpgaImageId(Aws::String&& value) { m_fpgaImageIdHasBeenSet = true; m_fpgaImageId = std::move(value); }

    /**
     * <p>The ID of the AFI.</p>
     */
    inline void SetFpgaImageId(const char* value) { m_fpgaImageIdHasBeenSet = true; m_fpgaImageId.assign(value); }

    /**
     * <p>The ID of the AFI.</p>
     */
    inline FpgaImageAttribute& WithFpgaImageId(const Aws::String& value) { SetFpgaImageId(value); return *this;}

    /**
     * <p>The ID of the AFI.</p>
     */
    inline FpgaImageAttribute& WithFpgaImageId(Aws::String&& value) { SetFpgaImageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AFI.</p>
     */
    inline FpgaImageAttribute& WithFpgaImageId(const char* value) { SetFpgaImageId(value); return *this;}


    /**
     * <p>The name of the AFI.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the AFI.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the AFI.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the AFI.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the AFI.</p>
     */
    inline FpgaImageAttribute& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the AFI.</p>
     */
    inline FpgaImageAttribute& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the AFI.</p>
     */
    inline FpgaImageAttribute& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the AFI.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the AFI.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the AFI.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the AFI.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the AFI.</p>
     */
    inline FpgaImageAttribute& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the AFI.</p>
     */
    inline FpgaImageAttribute& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the AFI.</p>
     */
    inline FpgaImageAttribute& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>One or more load permissions.</p>
     */
    inline const Aws::Vector<LoadPermission>& GetLoadPermissions() const{ return m_loadPermissions; }

    /**
     * <p>One or more load permissions.</p>
     */
    inline void SetLoadPermissions(const Aws::Vector<LoadPermission>& value) { m_loadPermissionsHasBeenSet = true; m_loadPermissions = value; }

    /**
     * <p>One or more load permissions.</p>
     */
    inline void SetLoadPermissions(Aws::Vector<LoadPermission>&& value) { m_loadPermissionsHasBeenSet = true; m_loadPermissions = std::move(value); }

    /**
     * <p>One or more load permissions.</p>
     */
    inline FpgaImageAttribute& WithLoadPermissions(const Aws::Vector<LoadPermission>& value) { SetLoadPermissions(value); return *this;}

    /**
     * <p>One or more load permissions.</p>
     */
    inline FpgaImageAttribute& WithLoadPermissions(Aws::Vector<LoadPermission>&& value) { SetLoadPermissions(std::move(value)); return *this;}

    /**
     * <p>One or more load permissions.</p>
     */
    inline FpgaImageAttribute& AddLoadPermissions(const LoadPermission& value) { m_loadPermissionsHasBeenSet = true; m_loadPermissions.push_back(value); return *this; }

    /**
     * <p>One or more load permissions.</p>
     */
    inline FpgaImageAttribute& AddLoadPermissions(LoadPermission&& value) { m_loadPermissionsHasBeenSet = true; m_loadPermissions.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more product codes.</p>
     */
    inline const Aws::Vector<ProductCode>& GetProductCodes() const{ return m_productCodes; }

    /**
     * <p>One or more product codes.</p>
     */
    inline void SetProductCodes(const Aws::Vector<ProductCode>& value) { m_productCodesHasBeenSet = true; m_productCodes = value; }

    /**
     * <p>One or more product codes.</p>
     */
    inline void SetProductCodes(Aws::Vector<ProductCode>&& value) { m_productCodesHasBeenSet = true; m_productCodes = std::move(value); }

    /**
     * <p>One or more product codes.</p>
     */
    inline FpgaImageAttribute& WithProductCodes(const Aws::Vector<ProductCode>& value) { SetProductCodes(value); return *this;}

    /**
     * <p>One or more product codes.</p>
     */
    inline FpgaImageAttribute& WithProductCodes(Aws::Vector<ProductCode>&& value) { SetProductCodes(std::move(value)); return *this;}

    /**
     * <p>One or more product codes.</p>
     */
    inline FpgaImageAttribute& AddProductCodes(const ProductCode& value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(value); return *this; }

    /**
     * <p>One or more product codes.</p>
     */
    inline FpgaImageAttribute& AddProductCodes(ProductCode&& value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_fpgaImageId;
    bool m_fpgaImageIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<LoadPermission> m_loadPermissions;
    bool m_loadPermissionsHasBeenSet;

    Aws::Vector<ProductCode> m_productCodes;
    bool m_productCodesHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
