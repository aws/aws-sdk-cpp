/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class FpgaImage
  {
  public:
    AWS_EC2_API FpgaImage();
    AWS_EC2_API FpgaImage(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FpgaImage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The FPGA image identifier (AFI ID).</p>
     */
    inline const Aws::String& GetFpgaImageId() const{ return m_fpgaImageId; }
    inline bool FpgaImageIdHasBeenSet() const { return m_fpgaImageIdHasBeenSet; }
    inline void SetFpgaImageId(const Aws::String& value) { m_fpgaImageIdHasBeenSet = true; m_fpgaImageId = value; }
    inline void SetFpgaImageId(Aws::String&& value) { m_fpgaImageIdHasBeenSet = true; m_fpgaImageId = std::move(value); }
    inline void SetFpgaImageId(const char* value) { m_fpgaImageIdHasBeenSet = true; m_fpgaImageId.assign(value); }
    inline FpgaImage& WithFpgaImageId(const Aws::String& value) { SetFpgaImageId(value); return *this;}
    inline FpgaImage& WithFpgaImageId(Aws::String&& value) { SetFpgaImageId(std::move(value)); return *this;}
    inline FpgaImage& WithFpgaImageId(const char* value) { SetFpgaImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The global FPGA image identifier (AGFI ID).</p>
     */
    inline const Aws::String& GetFpgaImageGlobalId() const{ return m_fpgaImageGlobalId; }
    inline bool FpgaImageGlobalIdHasBeenSet() const { return m_fpgaImageGlobalIdHasBeenSet; }
    inline void SetFpgaImageGlobalId(const Aws::String& value) { m_fpgaImageGlobalIdHasBeenSet = true; m_fpgaImageGlobalId = value; }
    inline void SetFpgaImageGlobalId(Aws::String&& value) { m_fpgaImageGlobalIdHasBeenSet = true; m_fpgaImageGlobalId = std::move(value); }
    inline void SetFpgaImageGlobalId(const char* value) { m_fpgaImageGlobalIdHasBeenSet = true; m_fpgaImageGlobalId.assign(value); }
    inline FpgaImage& WithFpgaImageGlobalId(const Aws::String& value) { SetFpgaImageGlobalId(value); return *this;}
    inline FpgaImage& WithFpgaImageGlobalId(Aws::String&& value) { SetFpgaImageGlobalId(std::move(value)); return *this;}
    inline FpgaImage& WithFpgaImageGlobalId(const char* value) { SetFpgaImageGlobalId(value); return *this;}
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
    inline FpgaImage& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline FpgaImage& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline FpgaImage& WithName(const char* value) { SetName(value); return *this;}
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
    inline FpgaImage& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline FpgaImage& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline FpgaImage& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Amazon Web Services Shell that was used to create the
     * bitstream.</p>
     */
    inline const Aws::String& GetShellVersion() const{ return m_shellVersion; }
    inline bool ShellVersionHasBeenSet() const { return m_shellVersionHasBeenSet; }
    inline void SetShellVersion(const Aws::String& value) { m_shellVersionHasBeenSet = true; m_shellVersion = value; }
    inline void SetShellVersion(Aws::String&& value) { m_shellVersionHasBeenSet = true; m_shellVersion = std::move(value); }
    inline void SetShellVersion(const char* value) { m_shellVersionHasBeenSet = true; m_shellVersion.assign(value); }
    inline FpgaImage& WithShellVersion(const Aws::String& value) { SetShellVersion(value); return *this;}
    inline FpgaImage& WithShellVersion(Aws::String&& value) { SetShellVersion(std::move(value)); return *this;}
    inline FpgaImage& WithShellVersion(const char* value) { SetShellVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the PCI bus.</p>
     */
    inline const PciId& GetPciId() const{ return m_pciId; }
    inline bool PciIdHasBeenSet() const { return m_pciIdHasBeenSet; }
    inline void SetPciId(const PciId& value) { m_pciIdHasBeenSet = true; m_pciId = value; }
    inline void SetPciId(PciId&& value) { m_pciIdHasBeenSet = true; m_pciId = std::move(value); }
    inline FpgaImage& WithPciId(const PciId& value) { SetPciId(value); return *this;}
    inline FpgaImage& WithPciId(PciId&& value) { SetPciId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the state of the AFI.</p>
     */
    inline const FpgaImageState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const FpgaImageState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(FpgaImageState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline FpgaImage& WithState(const FpgaImageState& value) { SetState(value); return *this;}
    inline FpgaImage& WithState(FpgaImageState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the AFI was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline FpgaImage& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline FpgaImage& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the most recent update to the AFI.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline FpgaImage& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline FpgaImage& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the AFI.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline FpgaImage& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline FpgaImage& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline FpgaImage& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias of the AFI owner. Possible values include <code>self</code>,
     * <code>amazon</code>, and <code>aws-marketplace</code>.</p>
     */
    inline const Aws::String& GetOwnerAlias() const{ return m_ownerAlias; }
    inline bool OwnerAliasHasBeenSet() const { return m_ownerAliasHasBeenSet; }
    inline void SetOwnerAlias(const Aws::String& value) { m_ownerAliasHasBeenSet = true; m_ownerAlias = value; }
    inline void SetOwnerAlias(Aws::String&& value) { m_ownerAliasHasBeenSet = true; m_ownerAlias = std::move(value); }
    inline void SetOwnerAlias(const char* value) { m_ownerAliasHasBeenSet = true; m_ownerAlias.assign(value); }
    inline FpgaImage& WithOwnerAlias(const Aws::String& value) { SetOwnerAlias(value); return *this;}
    inline FpgaImage& WithOwnerAlias(Aws::String&& value) { SetOwnerAlias(std::move(value)); return *this;}
    inline FpgaImage& WithOwnerAlias(const char* value) { SetOwnerAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product codes for the AFI.</p>
     */
    inline const Aws::Vector<ProductCode>& GetProductCodes() const{ return m_productCodes; }
    inline bool ProductCodesHasBeenSet() const { return m_productCodesHasBeenSet; }
    inline void SetProductCodes(const Aws::Vector<ProductCode>& value) { m_productCodesHasBeenSet = true; m_productCodes = value; }
    inline void SetProductCodes(Aws::Vector<ProductCode>&& value) { m_productCodesHasBeenSet = true; m_productCodes = std::move(value); }
    inline FpgaImage& WithProductCodes(const Aws::Vector<ProductCode>& value) { SetProductCodes(value); return *this;}
    inline FpgaImage& WithProductCodes(Aws::Vector<ProductCode>&& value) { SetProductCodes(std::move(value)); return *this;}
    inline FpgaImage& AddProductCodes(const ProductCode& value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(value); return *this; }
    inline FpgaImage& AddProductCodes(ProductCode&& value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the AFI.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline FpgaImage& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline FpgaImage& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline FpgaImage& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline FpgaImage& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the AFI is public.</p>
     */
    inline bool GetPublic() const{ return m_public; }
    inline bool PublicHasBeenSet() const { return m_publicHasBeenSet; }
    inline void SetPublic(bool value) { m_publicHasBeenSet = true; m_public = value; }
    inline FpgaImage& WithPublic(bool value) { SetPublic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether data retention support is enabled for the AFI.</p>
     */
    inline bool GetDataRetentionSupport() const{ return m_dataRetentionSupport; }
    inline bool DataRetentionSupportHasBeenSet() const { return m_dataRetentionSupportHasBeenSet; }
    inline void SetDataRetentionSupport(bool value) { m_dataRetentionSupportHasBeenSet = true; m_dataRetentionSupport = value; }
    inline FpgaImage& WithDataRetentionSupport(bool value) { SetDataRetentionSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance types supported by the AFI.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceTypes() const{ return m_instanceTypes; }
    inline bool InstanceTypesHasBeenSet() const { return m_instanceTypesHasBeenSet; }
    inline void SetInstanceTypes(const Aws::Vector<Aws::String>& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = value; }
    inline void SetInstanceTypes(Aws::Vector<Aws::String>&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = std::move(value); }
    inline FpgaImage& WithInstanceTypes(const Aws::Vector<Aws::String>& value) { SetInstanceTypes(value); return *this;}
    inline FpgaImage& WithInstanceTypes(Aws::Vector<Aws::String>&& value) { SetInstanceTypes(std::move(value)); return *this;}
    inline FpgaImage& AddInstanceTypes(const Aws::String& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }
    inline FpgaImage& AddInstanceTypes(Aws::String&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(std::move(value)); return *this; }
    inline FpgaImage& AddInstanceTypes(const char* value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_fpgaImageId;
    bool m_fpgaImageIdHasBeenSet = false;

    Aws::String m_fpgaImageGlobalId;
    bool m_fpgaImageGlobalIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_shellVersion;
    bool m_shellVersionHasBeenSet = false;

    PciId m_pciId;
    bool m_pciIdHasBeenSet = false;

    FpgaImageState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_ownerAlias;
    bool m_ownerAliasHasBeenSet = false;

    Aws::Vector<ProductCode> m_productCodes;
    bool m_productCodesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_public;
    bool m_publicHasBeenSet = false;

    bool m_dataRetentionSupport;
    bool m_dataRetentionSupportHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceTypes;
    bool m_instanceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
