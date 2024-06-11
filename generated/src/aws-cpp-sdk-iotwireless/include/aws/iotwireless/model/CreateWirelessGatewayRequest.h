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
  class CreateWirelessGatewayRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API CreateWirelessGatewayRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWirelessGateway"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the new resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateWirelessGatewayRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateWirelessGatewayRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateWirelessGatewayRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the new resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateWirelessGatewayRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateWirelessGatewayRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateWirelessGatewayRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The gateway configuration information to use to create the wireless
     * gateway.</p>
     */
    inline const LoRaWANGateway& GetLoRaWAN() const{ return m_loRaWAN; }
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }
    inline void SetLoRaWAN(const LoRaWANGateway& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = value; }
    inline void SetLoRaWAN(LoRaWANGateway&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::move(value); }
    inline CreateWirelessGatewayRequest& WithLoRaWAN(const LoRaWANGateway& value) { SetLoRaWAN(value); return *this;}
    inline CreateWirelessGatewayRequest& WithLoRaWAN(LoRaWANGateway&& value) { SetLoRaWAN(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to attach to the new wireless gateway. Tags are metadata that you
     * can use to manage a resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateWirelessGatewayRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateWirelessGatewayRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateWirelessGatewayRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateWirelessGatewayRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Each resource must have a unique client request token. The client token is
     * used to implement idempotency. It ensures that the request completes no more
     * than one time. If you retry a request with the same token and the same
     * parameters, the request will complete successfully. However, if you try to
     * create a new resource using the same token but different parameters, an HTTP 409
     * conflict occurs. If you omit this value, AWS SDKs will automatically generate a
     * unique client request. For more information about idempotency, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensuring
     * idempotency in Amazon EC2 API requests</a>.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline CreateWirelessGatewayRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreateWirelessGatewayRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreateWirelessGatewayRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    LoRaWANGateway m_loRaWAN;
    bool m_loRaWANHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
