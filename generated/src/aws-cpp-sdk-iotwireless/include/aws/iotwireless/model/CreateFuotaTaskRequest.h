/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/LoRaWANFuotaTask.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class CreateFuotaTaskRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API CreateFuotaTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFuotaTask"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateFuotaTaskRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateFuotaTaskRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateFuotaTaskRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LoRaWANFuotaTask& GetLoRaWAN() const { return m_loRaWAN; }
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }
    template<typename LoRaWANT = LoRaWANFuotaTask>
    void SetLoRaWAN(LoRaWANT&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::forward<LoRaWANT>(value); }
    template<typename LoRaWANT = LoRaWANFuotaTask>
    CreateFuotaTaskRequest& WithLoRaWAN(LoRaWANT&& value) { SetLoRaWAN(std::forward<LoRaWANT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetFirmwareUpdateImage() const { return m_firmwareUpdateImage; }
    inline bool FirmwareUpdateImageHasBeenSet() const { return m_firmwareUpdateImageHasBeenSet; }
    template<typename FirmwareUpdateImageT = Aws::String>
    void SetFirmwareUpdateImage(FirmwareUpdateImageT&& value) { m_firmwareUpdateImageHasBeenSet = true; m_firmwareUpdateImage = std::forward<FirmwareUpdateImageT>(value); }
    template<typename FirmwareUpdateImageT = Aws::String>
    CreateFuotaTaskRequest& WithFirmwareUpdateImage(FirmwareUpdateImageT&& value) { SetFirmwareUpdateImage(std::forward<FirmwareUpdateImageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetFirmwareUpdateRole() const { return m_firmwareUpdateRole; }
    inline bool FirmwareUpdateRoleHasBeenSet() const { return m_firmwareUpdateRoleHasBeenSet; }
    template<typename FirmwareUpdateRoleT = Aws::String>
    void SetFirmwareUpdateRole(FirmwareUpdateRoleT&& value) { m_firmwareUpdateRoleHasBeenSet = true; m_firmwareUpdateRole = std::forward<FirmwareUpdateRoleT>(value); }
    template<typename FirmwareUpdateRoleT = Aws::String>
    CreateFuotaTaskRequest& WithFirmwareUpdateRole(FirmwareUpdateRoleT&& value) { SetFirmwareUpdateRole(std::forward<FirmwareUpdateRoleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateFuotaTaskRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateFuotaTaskRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline int GetRedundancyPercent() const { return m_redundancyPercent; }
    inline bool RedundancyPercentHasBeenSet() const { return m_redundancyPercentHasBeenSet; }
    inline void SetRedundancyPercent(int value) { m_redundancyPercentHasBeenSet = true; m_redundancyPercent = value; }
    inline CreateFuotaTaskRequest& WithRedundancyPercent(int value) { SetRedundancyPercent(value); return *this;}
    ///@}

    ///@{
    
    inline int GetFragmentSizeBytes() const { return m_fragmentSizeBytes; }
    inline bool FragmentSizeBytesHasBeenSet() const { return m_fragmentSizeBytesHasBeenSet; }
    inline void SetFragmentSizeBytes(int value) { m_fragmentSizeBytesHasBeenSet = true; m_fragmentSizeBytes = value; }
    inline CreateFuotaTaskRequest& WithFragmentSizeBytes(int value) { SetFragmentSizeBytes(value); return *this;}
    ///@}

    ///@{
    
    inline int GetFragmentIntervalMS() const { return m_fragmentIntervalMS; }
    inline bool FragmentIntervalMSHasBeenSet() const { return m_fragmentIntervalMSHasBeenSet; }
    inline void SetFragmentIntervalMS(int value) { m_fragmentIntervalMSHasBeenSet = true; m_fragmentIntervalMS = value; }
    inline CreateFuotaTaskRequest& WithFragmentIntervalMS(int value) { SetFragmentIntervalMS(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDescriptor() const { return m_descriptor; }
    inline bool DescriptorHasBeenSet() const { return m_descriptorHasBeenSet; }
    template<typename DescriptorT = Aws::String>
    void SetDescriptor(DescriptorT&& value) { m_descriptorHasBeenSet = true; m_descriptor = std::forward<DescriptorT>(value); }
    template<typename DescriptorT = Aws::String>
    CreateFuotaTaskRequest& WithDescriptor(DescriptorT&& value) { SetDescriptor(std::forward<DescriptorT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    LoRaWANFuotaTask m_loRaWAN;
    bool m_loRaWANHasBeenSet = false;

    Aws::String m_firmwareUpdateImage;
    bool m_firmwareUpdateImageHasBeenSet = false;

    Aws::String m_firmwareUpdateRole;
    bool m_firmwareUpdateRoleHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    int m_redundancyPercent{0};
    bool m_redundancyPercentHasBeenSet = false;

    int m_fragmentSizeBytes{0};
    bool m_fragmentSizeBytesHasBeenSet = false;

    int m_fragmentIntervalMS{0};
    bool m_fragmentIntervalMSHasBeenSet = false;

    Aws::String m_descriptor;
    bool m_descriptorHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
