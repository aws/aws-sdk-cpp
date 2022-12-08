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
    AWS_IOTWIRELESS_API CreateFuotaTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFuotaTask"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline CreateFuotaTaskRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline CreateFuotaTaskRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline CreateFuotaTaskRequest& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline CreateFuotaTaskRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline CreateFuotaTaskRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline CreateFuotaTaskRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline CreateFuotaTaskRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline CreateFuotaTaskRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline CreateFuotaTaskRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    
    inline const LoRaWANFuotaTask& GetLoRaWAN() const{ return m_loRaWAN; }

    
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }

    
    inline void SetLoRaWAN(const LoRaWANFuotaTask& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = value; }

    
    inline void SetLoRaWAN(LoRaWANFuotaTask&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::move(value); }

    
    inline CreateFuotaTaskRequest& WithLoRaWAN(const LoRaWANFuotaTask& value) { SetLoRaWAN(value); return *this;}

    
    inline CreateFuotaTaskRequest& WithLoRaWAN(LoRaWANFuotaTask&& value) { SetLoRaWAN(std::move(value)); return *this;}


    
    inline const Aws::String& GetFirmwareUpdateImage() const{ return m_firmwareUpdateImage; }

    
    inline bool FirmwareUpdateImageHasBeenSet() const { return m_firmwareUpdateImageHasBeenSet; }

    
    inline void SetFirmwareUpdateImage(const Aws::String& value) { m_firmwareUpdateImageHasBeenSet = true; m_firmwareUpdateImage = value; }

    
    inline void SetFirmwareUpdateImage(Aws::String&& value) { m_firmwareUpdateImageHasBeenSet = true; m_firmwareUpdateImage = std::move(value); }

    
    inline void SetFirmwareUpdateImage(const char* value) { m_firmwareUpdateImageHasBeenSet = true; m_firmwareUpdateImage.assign(value); }

    
    inline CreateFuotaTaskRequest& WithFirmwareUpdateImage(const Aws::String& value) { SetFirmwareUpdateImage(value); return *this;}

    
    inline CreateFuotaTaskRequest& WithFirmwareUpdateImage(Aws::String&& value) { SetFirmwareUpdateImage(std::move(value)); return *this;}

    
    inline CreateFuotaTaskRequest& WithFirmwareUpdateImage(const char* value) { SetFirmwareUpdateImage(value); return *this;}


    
    inline const Aws::String& GetFirmwareUpdateRole() const{ return m_firmwareUpdateRole; }

    
    inline bool FirmwareUpdateRoleHasBeenSet() const { return m_firmwareUpdateRoleHasBeenSet; }

    
    inline void SetFirmwareUpdateRole(const Aws::String& value) { m_firmwareUpdateRoleHasBeenSet = true; m_firmwareUpdateRole = value; }

    
    inline void SetFirmwareUpdateRole(Aws::String&& value) { m_firmwareUpdateRoleHasBeenSet = true; m_firmwareUpdateRole = std::move(value); }

    
    inline void SetFirmwareUpdateRole(const char* value) { m_firmwareUpdateRoleHasBeenSet = true; m_firmwareUpdateRole.assign(value); }

    
    inline CreateFuotaTaskRequest& WithFirmwareUpdateRole(const Aws::String& value) { SetFirmwareUpdateRole(value); return *this;}

    
    inline CreateFuotaTaskRequest& WithFirmwareUpdateRole(Aws::String&& value) { SetFirmwareUpdateRole(std::move(value)); return *this;}

    
    inline CreateFuotaTaskRequest& WithFirmwareUpdateRole(const char* value) { SetFirmwareUpdateRole(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CreateFuotaTaskRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CreateFuotaTaskRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateFuotaTaskRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline CreateFuotaTaskRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    LoRaWANFuotaTask m_loRaWAN;
    bool m_loRaWANHasBeenSet = false;

    Aws::String m_firmwareUpdateImage;
    bool m_firmwareUpdateImageHasBeenSet = false;

    Aws::String m_firmwareUpdateRole;
    bool m_firmwareUpdateRoleHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
