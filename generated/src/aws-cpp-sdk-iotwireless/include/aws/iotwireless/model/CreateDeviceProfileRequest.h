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
    AWS_IOTWIRELESS_API CreateDeviceProfileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDeviceProfile"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the new resource.</p>  <p>The following special characters
     * aren't accepted: <code>&lt;&gt;^#~$</code> </p> 
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateDeviceProfileRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device profile information to use to create the device profile.</p>
     */
    inline const LoRaWANDeviceProfile& GetLoRaWAN() const { return m_loRaWAN; }
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }
    template<typename LoRaWANT = LoRaWANDeviceProfile>
    void SetLoRaWAN(LoRaWANT&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::forward<LoRaWANT>(value); }
    template<typename LoRaWANT = LoRaWANDeviceProfile>
    CreateDeviceProfileRequest& WithLoRaWAN(LoRaWANT&& value) { SetLoRaWAN(std::forward<LoRaWANT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to attach to the new device profile. Tags are metadata that you can
     * use to manage a resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateDeviceProfileRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDeviceProfileRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateDeviceProfileRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Sidewalk-related information for creating the Sidewalk device
     * profile.</p>
     */
    inline const SidewalkCreateDeviceProfile& GetSidewalk() const { return m_sidewalk; }
    inline bool SidewalkHasBeenSet() const { return m_sidewalkHasBeenSet; }
    template<typename SidewalkT = SidewalkCreateDeviceProfile>
    void SetSidewalk(SidewalkT&& value) { m_sidewalkHasBeenSet = true; m_sidewalk = std::forward<SidewalkT>(value); }
    template<typename SidewalkT = SidewalkCreateDeviceProfile>
    CreateDeviceProfileRequest& WithSidewalk(SidewalkT&& value) { SetSidewalk(std::forward<SidewalkT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    LoRaWANDeviceProfile m_loRaWAN;
    bool m_loRaWANHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    SidewalkCreateDeviceProfile m_sidewalk;
    bool m_sidewalkHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
