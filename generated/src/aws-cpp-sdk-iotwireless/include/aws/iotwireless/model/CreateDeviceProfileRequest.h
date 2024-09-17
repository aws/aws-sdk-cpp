/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/LoRaWANDeviceProfile.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/SidewalkCreateDeviceProfile.h>
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
  class CreateDeviceProfileRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API CreateDeviceProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDeviceProfile"; }

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
    inline CreateDeviceProfileRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateDeviceProfileRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateDeviceProfileRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device profile information to use to create the device profile.</p>
     */
    inline const LoRaWANDeviceProfile& GetLoRaWAN() const{ return m_loRaWAN; }
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }
    inline void SetLoRaWAN(const LoRaWANDeviceProfile& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = value; }
    inline void SetLoRaWAN(LoRaWANDeviceProfile&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::move(value); }
    inline CreateDeviceProfileRequest& WithLoRaWAN(const LoRaWANDeviceProfile& value) { SetLoRaWAN(value); return *this;}
    inline CreateDeviceProfileRequest& WithLoRaWAN(LoRaWANDeviceProfile&& value) { SetLoRaWAN(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to attach to the new device profile. Tags are metadata that you can
     * use to manage a resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateDeviceProfileRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateDeviceProfileRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateDeviceProfileRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateDeviceProfileRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
    inline CreateDeviceProfileRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreateDeviceProfileRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreateDeviceProfileRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Sidewalk-related information for creating the Sidewalk device
     * profile.</p>
     */
    inline const SidewalkCreateDeviceProfile& GetSidewalk() const{ return m_sidewalk; }
    inline bool SidewalkHasBeenSet() const { return m_sidewalkHasBeenSet; }
    inline void SetSidewalk(const SidewalkCreateDeviceProfile& value) { m_sidewalkHasBeenSet = true; m_sidewalk = value; }
    inline void SetSidewalk(SidewalkCreateDeviceProfile&& value) { m_sidewalkHasBeenSet = true; m_sidewalk = std::move(value); }
    inline CreateDeviceProfileRequest& WithSidewalk(const SidewalkCreateDeviceProfile& value) { SetSidewalk(value); return *this;}
    inline CreateDeviceProfileRequest& WithSidewalk(SidewalkCreateDeviceProfile&& value) { SetSidewalk(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    LoRaWANDeviceProfile m_loRaWAN;
    bool m_loRaWANHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    SidewalkCreateDeviceProfile m_sidewalk;
    bool m_sidewalkHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
