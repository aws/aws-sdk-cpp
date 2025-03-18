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
    AWS_EC2_API FpgaImage() = default;
    AWS_EC2_API FpgaImage(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FpgaImage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The FPGA image identifier (AFI ID).</p>
     */
    inline const Aws::String& GetFpgaImageId() const { return m_fpgaImageId; }
    inline bool FpgaImageIdHasBeenSet() const { return m_fpgaImageIdHasBeenSet; }
    template<typename FpgaImageIdT = Aws::String>
    void SetFpgaImageId(FpgaImageIdT&& value) { m_fpgaImageIdHasBeenSet = true; m_fpgaImageId = std::forward<FpgaImageIdT>(value); }
    template<typename FpgaImageIdT = Aws::String>
    FpgaImage& WithFpgaImageId(FpgaImageIdT&& value) { SetFpgaImageId(std::forward<FpgaImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The global FPGA image identifier (AGFI ID).</p>
     */
    inline const Aws::String& GetFpgaImageGlobalId() const { return m_fpgaImageGlobalId; }
    inline bool FpgaImageGlobalIdHasBeenSet() const { return m_fpgaImageGlobalIdHasBeenSet; }
    template<typename FpgaImageGlobalIdT = Aws::String>
    void SetFpgaImageGlobalId(FpgaImageGlobalIdT&& value) { m_fpgaImageGlobalIdHasBeenSet = true; m_fpgaImageGlobalId = std::forward<FpgaImageGlobalIdT>(value); }
    template<typename FpgaImageGlobalIdT = Aws::String>
    FpgaImage& WithFpgaImageGlobalId(FpgaImageGlobalIdT&& value) { SetFpgaImageGlobalId(std::forward<FpgaImageGlobalIdT>(value)); return *this;}
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
    FpgaImage& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    FpgaImage& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Amazon Web Services Shell that was used to create the
     * bitstream.</p>
     */
    inline const Aws::String& GetShellVersion() const { return m_shellVersion; }
    inline bool ShellVersionHasBeenSet() const { return m_shellVersionHasBeenSet; }
    template<typename ShellVersionT = Aws::String>
    void SetShellVersion(ShellVersionT&& value) { m_shellVersionHasBeenSet = true; m_shellVersion = std::forward<ShellVersionT>(value); }
    template<typename ShellVersionT = Aws::String>
    FpgaImage& WithShellVersion(ShellVersionT&& value) { SetShellVersion(std::forward<ShellVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the PCI bus.</p>
     */
    inline const PciId& GetPciId() const { return m_pciId; }
    inline bool PciIdHasBeenSet() const { return m_pciIdHasBeenSet; }
    template<typename PciIdT = PciId>
    void SetPciId(PciIdT&& value) { m_pciIdHasBeenSet = true; m_pciId = std::forward<PciIdT>(value); }
    template<typename PciIdT = PciId>
    FpgaImage& WithPciId(PciIdT&& value) { SetPciId(std::forward<PciIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the state of the AFI.</p>
     */
    inline const FpgaImageState& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = FpgaImageState>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = FpgaImageState>
    FpgaImage& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the AFI was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    FpgaImage& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the most recent update to the AFI.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    FpgaImage& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the AFI.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    FpgaImage& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias of the AFI owner. Possible values include <code>self</code>,
     * <code>amazon</code>, and <code>aws-marketplace</code>.</p>
     */
    inline const Aws::String& GetOwnerAlias() const { return m_ownerAlias; }
    inline bool OwnerAliasHasBeenSet() const { return m_ownerAliasHasBeenSet; }
    template<typename OwnerAliasT = Aws::String>
    void SetOwnerAlias(OwnerAliasT&& value) { m_ownerAliasHasBeenSet = true; m_ownerAlias = std::forward<OwnerAliasT>(value); }
    template<typename OwnerAliasT = Aws::String>
    FpgaImage& WithOwnerAlias(OwnerAliasT&& value) { SetOwnerAlias(std::forward<OwnerAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product codes for the AFI.</p>
     */
    inline const Aws::Vector<ProductCode>& GetProductCodes() const { return m_productCodes; }
    inline bool ProductCodesHasBeenSet() const { return m_productCodesHasBeenSet; }
    template<typename ProductCodesT = Aws::Vector<ProductCode>>
    void SetProductCodes(ProductCodesT&& value) { m_productCodesHasBeenSet = true; m_productCodes = std::forward<ProductCodesT>(value); }
    template<typename ProductCodesT = Aws::Vector<ProductCode>>
    FpgaImage& WithProductCodes(ProductCodesT&& value) { SetProductCodes(std::forward<ProductCodesT>(value)); return *this;}
    template<typename ProductCodesT = ProductCode>
    FpgaImage& AddProductCodes(ProductCodesT&& value) { m_productCodesHasBeenSet = true; m_productCodes.emplace_back(std::forward<ProductCodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the AFI.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    FpgaImage& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    FpgaImage& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the AFI is public.</p>
     */
    inline bool GetPublic() const { return m_public; }
    inline bool PublicHasBeenSet() const { return m_publicHasBeenSet; }
    inline void SetPublic(bool value) { m_publicHasBeenSet = true; m_public = value; }
    inline FpgaImage& WithPublic(bool value) { SetPublic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether data retention support is enabled for the AFI.</p>
     */
    inline bool GetDataRetentionSupport() const { return m_dataRetentionSupport; }
    inline bool DataRetentionSupportHasBeenSet() const { return m_dataRetentionSupportHasBeenSet; }
    inline void SetDataRetentionSupport(bool value) { m_dataRetentionSupportHasBeenSet = true; m_dataRetentionSupport = value; }
    inline FpgaImage& WithDataRetentionSupport(bool value) { SetDataRetentionSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance types supported by the AFI.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceTypes() const { return m_instanceTypes; }
    inline bool InstanceTypesHasBeenSet() const { return m_instanceTypesHasBeenSet; }
    template<typename InstanceTypesT = Aws::Vector<Aws::String>>
    void SetInstanceTypes(InstanceTypesT&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = std::forward<InstanceTypesT>(value); }
    template<typename InstanceTypesT = Aws::Vector<Aws::String>>
    FpgaImage& WithInstanceTypes(InstanceTypesT&& value) { SetInstanceTypes(std::forward<InstanceTypesT>(value)); return *this;}
    template<typename InstanceTypesT = Aws::String>
    FpgaImage& AddInstanceTypes(InstanceTypesT&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.emplace_back(std::forward<InstanceTypesT>(value)); return *this; }
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

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_ownerAlias;
    bool m_ownerAliasHasBeenSet = false;

    Aws::Vector<ProductCode> m_productCodes;
    bool m_productCodesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_public{false};
    bool m_publicHasBeenSet = false;

    bool m_dataRetentionSupport{false};
    bool m_dataRetentionSupportHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceTypes;
    bool m_instanceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
