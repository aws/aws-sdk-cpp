﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/LoRaWANGateway.h>
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
  class AWS_IOTWIRELESS_API CreateWirelessGatewayRequest : public IoTWirelessRequest
  {
  public:
    CreateWirelessGatewayRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWirelessGateway"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the new resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the new resource.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the new resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the new resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the new resource.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the new resource.</p>
     */
    inline CreateWirelessGatewayRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the new resource.</p>
     */
    inline CreateWirelessGatewayRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the new resource.</p>
     */
    inline CreateWirelessGatewayRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the new resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the new resource.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the new resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the new resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the new resource.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the new resource.</p>
     */
    inline CreateWirelessGatewayRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the new resource.</p>
     */
    inline CreateWirelessGatewayRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the new resource.</p>
     */
    inline CreateWirelessGatewayRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The gateway configuration information to use to create the wireless
     * gateway.</p>
     */
    inline const LoRaWANGateway& GetLoRaWAN() const{ return m_loRaWAN; }

    /**
     * <p>The gateway configuration information to use to create the wireless
     * gateway.</p>
     */
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }

    /**
     * <p>The gateway configuration information to use to create the wireless
     * gateway.</p>
     */
    inline void SetLoRaWAN(const LoRaWANGateway& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = value; }

    /**
     * <p>The gateway configuration information to use to create the wireless
     * gateway.</p>
     */
    inline void SetLoRaWAN(LoRaWANGateway&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::move(value); }

    /**
     * <p>The gateway configuration information to use to create the wireless
     * gateway.</p>
     */
    inline CreateWirelessGatewayRequest& WithLoRaWAN(const LoRaWANGateway& value) { SetLoRaWAN(value); return *this;}

    /**
     * <p>The gateway configuration information to use to create the wireless
     * gateway.</p>
     */
    inline CreateWirelessGatewayRequest& WithLoRaWAN(LoRaWANGateway&& value) { SetLoRaWAN(std::move(value)); return *this;}


    /**
     * <p>The tags to attach to the new wireless gateway. Tags are metadata that you
     * can use to manage a resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to attach to the new wireless gateway. Tags are metadata that you
     * can use to manage a resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to attach to the new wireless gateway. Tags are metadata that you
     * can use to manage a resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to attach to the new wireless gateway. Tags are metadata that you
     * can use to manage a resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to attach to the new wireless gateway. Tags are metadata that you
     * can use to manage a resource.</p>
     */
    inline CreateWirelessGatewayRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to attach to the new wireless gateway. Tags are metadata that you
     * can use to manage a resource.</p>
     */
    inline CreateWirelessGatewayRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to attach to the new wireless gateway. Tags are metadata that you
     * can use to manage a resource.</p>
     */
    inline CreateWirelessGatewayRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to attach to the new wireless gateway. Tags are metadata that you
     * can use to manage a resource.</p>
     */
    inline CreateWirelessGatewayRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


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
    inline CreateWirelessGatewayRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline CreateWirelessGatewayRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline CreateWirelessGatewayRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    LoRaWANGateway m_loRaWAN;
    bool m_loRaWANHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
