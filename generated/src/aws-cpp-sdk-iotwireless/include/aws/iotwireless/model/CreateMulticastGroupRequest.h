/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/LoRaWANMulticast.h>
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
  class CreateMulticastGroupRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API CreateMulticastGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMulticastGroup"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline CreateMulticastGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline CreateMulticastGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline CreateMulticastGroupRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the multicast group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the multicast group.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the multicast group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the multicast group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the multicast group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the multicast group.</p>
     */
    inline CreateMulticastGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the multicast group.</p>
     */
    inline CreateMulticastGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the multicast group.</p>
     */
    inline CreateMulticastGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline CreateMulticastGroupRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline CreateMulticastGroupRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline CreateMulticastGroupRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    
    inline const LoRaWANMulticast& GetLoRaWAN() const{ return m_loRaWAN; }

    
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }

    
    inline void SetLoRaWAN(const LoRaWANMulticast& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = value; }

    
    inline void SetLoRaWAN(LoRaWANMulticast&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::move(value); }

    
    inline CreateMulticastGroupRequest& WithLoRaWAN(const LoRaWANMulticast& value) { SetLoRaWAN(value); return *this;}

    
    inline CreateMulticastGroupRequest& WithLoRaWAN(LoRaWANMulticast&& value) { SetLoRaWAN(std::move(value)); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CreateMulticastGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CreateMulticastGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateMulticastGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline CreateMulticastGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    LoRaWANMulticast m_loRaWAN;
    bool m_loRaWANHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
