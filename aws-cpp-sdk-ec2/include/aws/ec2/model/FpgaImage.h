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
#include <aws/ec2/model/PciId.h>
#include <aws/ec2/model/FpgaImageState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ProductCode.h>
#include <aws/ec2/model/Tag.h>
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
   * <p>Describes an Amazon FPGA image (AFI).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FpgaImage">AWS API
   * Reference</a></p>
   */
  class AWS_EC2_API FpgaImage
  {
  public:
    FpgaImage();
    FpgaImage(const Aws::Utils::Xml::XmlNode& xmlNode);
    FpgaImage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The FPGA image identifier (AFI ID).</p>
     */
    inline const Aws::String& GetFpgaImageId() const{ return m_fpgaImageId; }

    /**
     * <p>The FPGA image identifier (AFI ID).</p>
     */
    inline void SetFpgaImageId(const Aws::String& value) { m_fpgaImageIdHasBeenSet = true; m_fpgaImageId = value; }

    /**
     * <p>The FPGA image identifier (AFI ID).</p>
     */
    inline void SetFpgaImageId(Aws::String&& value) { m_fpgaImageIdHasBeenSet = true; m_fpgaImageId = std::move(value); }

    /**
     * <p>The FPGA image identifier (AFI ID).</p>
     */
    inline void SetFpgaImageId(const char* value) { m_fpgaImageIdHasBeenSet = true; m_fpgaImageId.assign(value); }

    /**
     * <p>The FPGA image identifier (AFI ID).</p>
     */
    inline FpgaImage& WithFpgaImageId(const Aws::String& value) { SetFpgaImageId(value); return *this;}

    /**
     * <p>The FPGA image identifier (AFI ID).</p>
     */
    inline FpgaImage& WithFpgaImageId(Aws::String&& value) { SetFpgaImageId(std::move(value)); return *this;}

    /**
     * <p>The FPGA image identifier (AFI ID).</p>
     */
    inline FpgaImage& WithFpgaImageId(const char* value) { SetFpgaImageId(value); return *this;}


    /**
     * <p>The global FPGA image identifier (AGFI ID).</p>
     */
    inline const Aws::String& GetFpgaImageGlobalId() const{ return m_fpgaImageGlobalId; }

    /**
     * <p>The global FPGA image identifier (AGFI ID).</p>
     */
    inline void SetFpgaImageGlobalId(const Aws::String& value) { m_fpgaImageGlobalIdHasBeenSet = true; m_fpgaImageGlobalId = value; }

    /**
     * <p>The global FPGA image identifier (AGFI ID).</p>
     */
    inline void SetFpgaImageGlobalId(Aws::String&& value) { m_fpgaImageGlobalIdHasBeenSet = true; m_fpgaImageGlobalId = std::move(value); }

    /**
     * <p>The global FPGA image identifier (AGFI ID).</p>
     */
    inline void SetFpgaImageGlobalId(const char* value) { m_fpgaImageGlobalIdHasBeenSet = true; m_fpgaImageGlobalId.assign(value); }

    /**
     * <p>The global FPGA image identifier (AGFI ID).</p>
     */
    inline FpgaImage& WithFpgaImageGlobalId(const Aws::String& value) { SetFpgaImageGlobalId(value); return *this;}

    /**
     * <p>The global FPGA image identifier (AGFI ID).</p>
     */
    inline FpgaImage& WithFpgaImageGlobalId(Aws::String&& value) { SetFpgaImageGlobalId(std::move(value)); return *this;}

    /**
     * <p>The global FPGA image identifier (AGFI ID).</p>
     */
    inline FpgaImage& WithFpgaImageGlobalId(const char* value) { SetFpgaImageGlobalId(value); return *this;}


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
    inline FpgaImage& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the AFI.</p>
     */
    inline FpgaImage& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the AFI.</p>
     */
    inline FpgaImage& WithName(const char* value) { SetName(value); return *this;}


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
    inline FpgaImage& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the AFI.</p>
     */
    inline FpgaImage& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the AFI.</p>
     */
    inline FpgaImage& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The version of the AWS Shell that was used to create the bitstream.</p>
     */
    inline const Aws::String& GetShellVersion() const{ return m_shellVersion; }

    /**
     * <p>The version of the AWS Shell that was used to create the bitstream.</p>
     */
    inline void SetShellVersion(const Aws::String& value) { m_shellVersionHasBeenSet = true; m_shellVersion = value; }

    /**
     * <p>The version of the AWS Shell that was used to create the bitstream.</p>
     */
    inline void SetShellVersion(Aws::String&& value) { m_shellVersionHasBeenSet = true; m_shellVersion = std::move(value); }

    /**
     * <p>The version of the AWS Shell that was used to create the bitstream.</p>
     */
    inline void SetShellVersion(const char* value) { m_shellVersionHasBeenSet = true; m_shellVersion.assign(value); }

    /**
     * <p>The version of the AWS Shell that was used to create the bitstream.</p>
     */
    inline FpgaImage& WithShellVersion(const Aws::String& value) { SetShellVersion(value); return *this;}

    /**
     * <p>The version of the AWS Shell that was used to create the bitstream.</p>
     */
    inline FpgaImage& WithShellVersion(Aws::String&& value) { SetShellVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the AWS Shell that was used to create the bitstream.</p>
     */
    inline FpgaImage& WithShellVersion(const char* value) { SetShellVersion(value); return *this;}


    /**
     * <p>Information about the PCI bus.</p>
     */
    inline const PciId& GetPciId() const{ return m_pciId; }

    /**
     * <p>Information about the PCI bus.</p>
     */
    inline void SetPciId(const PciId& value) { m_pciIdHasBeenSet = true; m_pciId = value; }

    /**
     * <p>Information about the PCI bus.</p>
     */
    inline void SetPciId(PciId&& value) { m_pciIdHasBeenSet = true; m_pciId = std::move(value); }

    /**
     * <p>Information about the PCI bus.</p>
     */
    inline FpgaImage& WithPciId(const PciId& value) { SetPciId(value); return *this;}

    /**
     * <p>Information about the PCI bus.</p>
     */
    inline FpgaImage& WithPciId(PciId&& value) { SetPciId(std::move(value)); return *this;}


    /**
     * <p>Information about the state of the AFI.</p>
     */
    inline const FpgaImageState& GetState() const{ return m_state; }

    /**
     * <p>Information about the state of the AFI.</p>
     */
    inline void SetState(const FpgaImageState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Information about the state of the AFI.</p>
     */
    inline void SetState(FpgaImageState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Information about the state of the AFI.</p>
     */
    inline FpgaImage& WithState(const FpgaImageState& value) { SetState(value); return *this;}

    /**
     * <p>Information about the state of the AFI.</p>
     */
    inline FpgaImage& WithState(FpgaImageState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The date and time the AFI was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The date and time the AFI was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The date and time the AFI was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The date and time the AFI was created.</p>
     */
    inline FpgaImage& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The date and time the AFI was created.</p>
     */
    inline FpgaImage& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The time of the most recent update to the AFI.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The time of the most recent update to the AFI.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p>The time of the most recent update to the AFI.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p>The time of the most recent update to the AFI.</p>
     */
    inline FpgaImage& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The time of the most recent update to the AFI.</p>
     */
    inline FpgaImage& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}


    /**
     * <p>The AWS account ID of the AFI owner.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The AWS account ID of the AFI owner.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The AWS account ID of the AFI owner.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The AWS account ID of the AFI owner.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The AWS account ID of the AFI owner.</p>
     */
    inline FpgaImage& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The AWS account ID of the AFI owner.</p>
     */
    inline FpgaImage& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID of the AFI owner.</p>
     */
    inline FpgaImage& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The alias of the AFI owner. Possible values include <code>self</code>,
     * <code>amazon</code>, and <code>aws-marketplace</code>.</p>
     */
    inline const Aws::String& GetOwnerAlias() const{ return m_ownerAlias; }

    /**
     * <p>The alias of the AFI owner. Possible values include <code>self</code>,
     * <code>amazon</code>, and <code>aws-marketplace</code>.</p>
     */
    inline void SetOwnerAlias(const Aws::String& value) { m_ownerAliasHasBeenSet = true; m_ownerAlias = value; }

    /**
     * <p>The alias of the AFI owner. Possible values include <code>self</code>,
     * <code>amazon</code>, and <code>aws-marketplace</code>.</p>
     */
    inline void SetOwnerAlias(Aws::String&& value) { m_ownerAliasHasBeenSet = true; m_ownerAlias = std::move(value); }

    /**
     * <p>The alias of the AFI owner. Possible values include <code>self</code>,
     * <code>amazon</code>, and <code>aws-marketplace</code>.</p>
     */
    inline void SetOwnerAlias(const char* value) { m_ownerAliasHasBeenSet = true; m_ownerAlias.assign(value); }

    /**
     * <p>The alias of the AFI owner. Possible values include <code>self</code>,
     * <code>amazon</code>, and <code>aws-marketplace</code>.</p>
     */
    inline FpgaImage& WithOwnerAlias(const Aws::String& value) { SetOwnerAlias(value); return *this;}

    /**
     * <p>The alias of the AFI owner. Possible values include <code>self</code>,
     * <code>amazon</code>, and <code>aws-marketplace</code>.</p>
     */
    inline FpgaImage& WithOwnerAlias(Aws::String&& value) { SetOwnerAlias(std::move(value)); return *this;}

    /**
     * <p>The alias of the AFI owner. Possible values include <code>self</code>,
     * <code>amazon</code>, and <code>aws-marketplace</code>.</p>
     */
    inline FpgaImage& WithOwnerAlias(const char* value) { SetOwnerAlias(value); return *this;}


    /**
     * <p>The product codes for the AFI.</p>
     */
    inline const Aws::Vector<ProductCode>& GetProductCodes() const{ return m_productCodes; }

    /**
     * <p>The product codes for the AFI.</p>
     */
    inline void SetProductCodes(const Aws::Vector<ProductCode>& value) { m_productCodesHasBeenSet = true; m_productCodes = value; }

    /**
     * <p>The product codes for the AFI.</p>
     */
    inline void SetProductCodes(Aws::Vector<ProductCode>&& value) { m_productCodesHasBeenSet = true; m_productCodes = std::move(value); }

    /**
     * <p>The product codes for the AFI.</p>
     */
    inline FpgaImage& WithProductCodes(const Aws::Vector<ProductCode>& value) { SetProductCodes(value); return *this;}

    /**
     * <p>The product codes for the AFI.</p>
     */
    inline FpgaImage& WithProductCodes(Aws::Vector<ProductCode>&& value) { SetProductCodes(std::move(value)); return *this;}

    /**
     * <p>The product codes for the AFI.</p>
     */
    inline FpgaImage& AddProductCodes(const ProductCode& value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(value); return *this; }

    /**
     * <p>The product codes for the AFI.</p>
     */
    inline FpgaImage& AddProductCodes(ProductCode&& value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(std::move(value)); return *this; }


    /**
     * <p>Any tags assigned to the AFI.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the AFI.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the AFI.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the AFI.</p>
     */
    inline FpgaImage& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the AFI.</p>
     */
    inline FpgaImage& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the AFI.</p>
     */
    inline FpgaImage& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the AFI.</p>
     */
    inline FpgaImage& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether the AFI is public.</p>
     */
    inline bool GetPublic() const{ return m_public; }

    /**
     * <p>Indicates whether the AFI is public.</p>
     */
    inline void SetPublic(bool value) { m_publicHasBeenSet = true; m_public = value; }

    /**
     * <p>Indicates whether the AFI is public.</p>
     */
    inline FpgaImage& WithPublic(bool value) { SetPublic(value); return *this;}

  private:

    Aws::String m_fpgaImageId;
    bool m_fpgaImageIdHasBeenSet;

    Aws::String m_fpgaImageGlobalId;
    bool m_fpgaImageGlobalIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_shellVersion;
    bool m_shellVersionHasBeenSet;

    PciId m_pciId;
    bool m_pciIdHasBeenSet;

    FpgaImageState m_state;
    bool m_stateHasBeenSet;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet;

    Aws::String m_ownerAlias;
    bool m_ownerAliasHasBeenSet;

    Aws::Vector<ProductCode> m_productCodes;
    bool m_productCodesHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    bool m_public;
    bool m_publicHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
