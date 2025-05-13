/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/LookoutEquipmentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutequipment/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

  /**
   */
  class CreateLabelGroupRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API CreateLabelGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLabelGroup"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> Names a group of labels.</p> <p>Data in this field will be retained for
     * service usage. Follow best practices for the security of your data. </p>
     */
    inline const Aws::String& GetLabelGroupName() const { return m_labelGroupName; }
    inline bool LabelGroupNameHasBeenSet() const { return m_labelGroupNameHasBeenSet; }
    template<typename LabelGroupNameT = Aws::String>
    void SetLabelGroupName(LabelGroupNameT&& value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName = std::forward<LabelGroupNameT>(value); }
    template<typename LabelGroupNameT = Aws::String>
    CreateLabelGroupRequest& WithLabelGroupName(LabelGroupNameT&& value) { SetLabelGroupName(std::forward<LabelGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The acceptable fault codes (indicating the type of anomaly associated with
     * the label) that can be used with this label group.</p> <p>Data in this field
     * will be retained for service usage. Follow best practices for the security of
     * your data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFaultCodes() const { return m_faultCodes; }
    inline bool FaultCodesHasBeenSet() const { return m_faultCodesHasBeenSet; }
    template<typename FaultCodesT = Aws::Vector<Aws::String>>
    void SetFaultCodes(FaultCodesT&& value) { m_faultCodesHasBeenSet = true; m_faultCodes = std::forward<FaultCodesT>(value); }
    template<typename FaultCodesT = Aws::Vector<Aws::String>>
    CreateLabelGroupRequest& WithFaultCodes(FaultCodesT&& value) { SetFaultCodes(std::forward<FaultCodesT>(value)); return *this;}
    template<typename FaultCodesT = Aws::String>
    CreateLabelGroupRequest& AddFaultCodes(FaultCodesT&& value) { m_faultCodesHasBeenSet = true; m_faultCodes.emplace_back(std::forward<FaultCodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A unique identifier for the request to create a label group. If you do not
     * set the client request token, Lookout for Equipment generates one. </p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateLabelGroupRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Tags that provide metadata about the label group you are creating. </p>
     * <p>Data in this field will be retained for service usage. Follow best practices
     * for the security of your data.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateLabelGroupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateLabelGroupRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_labelGroupName;
    bool m_labelGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_faultCodes;
    bool m_faultCodesHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
