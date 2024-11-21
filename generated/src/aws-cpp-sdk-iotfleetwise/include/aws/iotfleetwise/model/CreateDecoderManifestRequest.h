/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/IoTFleetWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotfleetwise/model/DefaultForUnmappedSignalsType.h>
#include <aws/iotfleetwise/model/SignalDecoder.h>
#include <aws/iotfleetwise/model/NetworkInterface.h>
#include <aws/iotfleetwise/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

  /**
   */
  class CreateDecoderManifestRequest : public IoTFleetWiseRequest
  {
  public:
    AWS_IOTFLEETWISE_API CreateDecoderManifestRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDecoderManifest"; }

    AWS_IOTFLEETWISE_API Aws::String SerializePayload() const override;

    AWS_IOTFLEETWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The unique name of the decoder manifest to create.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateDecoderManifestRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateDecoderManifestRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateDecoderManifestRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the decoder manifest. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateDecoderManifestRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateDecoderManifestRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateDecoderManifestRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the vehicle model (model manifest). </p>
     */
    inline const Aws::String& GetModelManifestArn() const{ return m_modelManifestArn; }
    inline bool ModelManifestArnHasBeenSet() const { return m_modelManifestArnHasBeenSet; }
    inline void SetModelManifestArn(const Aws::String& value) { m_modelManifestArnHasBeenSet = true; m_modelManifestArn = value; }
    inline void SetModelManifestArn(Aws::String&& value) { m_modelManifestArnHasBeenSet = true; m_modelManifestArn = std::move(value); }
    inline void SetModelManifestArn(const char* value) { m_modelManifestArnHasBeenSet = true; m_modelManifestArn.assign(value); }
    inline CreateDecoderManifestRequest& WithModelManifestArn(const Aws::String& value) { SetModelManifestArn(value); return *this;}
    inline CreateDecoderManifestRequest& WithModelManifestArn(Aws::String&& value) { SetModelManifestArn(std::move(value)); return *this;}
    inline CreateDecoderManifestRequest& WithModelManifestArn(const char* value) { SetModelManifestArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of information about signal decoders. </p>
     */
    inline const Aws::Vector<SignalDecoder>& GetSignalDecoders() const{ return m_signalDecoders; }
    inline bool SignalDecodersHasBeenSet() const { return m_signalDecodersHasBeenSet; }
    inline void SetSignalDecoders(const Aws::Vector<SignalDecoder>& value) { m_signalDecodersHasBeenSet = true; m_signalDecoders = value; }
    inline void SetSignalDecoders(Aws::Vector<SignalDecoder>&& value) { m_signalDecodersHasBeenSet = true; m_signalDecoders = std::move(value); }
    inline CreateDecoderManifestRequest& WithSignalDecoders(const Aws::Vector<SignalDecoder>& value) { SetSignalDecoders(value); return *this;}
    inline CreateDecoderManifestRequest& WithSignalDecoders(Aws::Vector<SignalDecoder>&& value) { SetSignalDecoders(std::move(value)); return *this;}
    inline CreateDecoderManifestRequest& AddSignalDecoders(const SignalDecoder& value) { m_signalDecodersHasBeenSet = true; m_signalDecoders.push_back(value); return *this; }
    inline CreateDecoderManifestRequest& AddSignalDecoders(SignalDecoder&& value) { m_signalDecodersHasBeenSet = true; m_signalDecoders.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of information about available network interfaces. </p>
     */
    inline const Aws::Vector<NetworkInterface>& GetNetworkInterfaces() const{ return m_networkInterfaces; }
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }
    inline void SetNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = value; }
    inline void SetNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::move(value); }
    inline CreateDecoderManifestRequest& WithNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { SetNetworkInterfaces(value); return *this;}
    inline CreateDecoderManifestRequest& WithNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { SetNetworkInterfaces(std::move(value)); return *this;}
    inline CreateDecoderManifestRequest& AddNetworkInterfaces(const NetworkInterface& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }
    inline CreateDecoderManifestRequest& AddNetworkInterfaces(NetworkInterface&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Use default decoders for all unmapped signals in the model. You don't need to
     * provide any detailed decoding information.</p>  <p>Access to certain
     * Amazon Web Services IoT FleetWise features is currently gated. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-fleetwise/latest/developerguide/fleetwise-regions.html">Amazon
     * Web Services Region and feature availability</a> in the <i>Amazon Web Services
     * IoT FleetWise Developer Guide</i>.</p> 
     */
    inline const DefaultForUnmappedSignalsType& GetDefaultForUnmappedSignals() const{ return m_defaultForUnmappedSignals; }
    inline bool DefaultForUnmappedSignalsHasBeenSet() const { return m_defaultForUnmappedSignalsHasBeenSet; }
    inline void SetDefaultForUnmappedSignals(const DefaultForUnmappedSignalsType& value) { m_defaultForUnmappedSignalsHasBeenSet = true; m_defaultForUnmappedSignals = value; }
    inline void SetDefaultForUnmappedSignals(DefaultForUnmappedSignalsType&& value) { m_defaultForUnmappedSignalsHasBeenSet = true; m_defaultForUnmappedSignals = std::move(value); }
    inline CreateDecoderManifestRequest& WithDefaultForUnmappedSignals(const DefaultForUnmappedSignalsType& value) { SetDefaultForUnmappedSignals(value); return *this;}
    inline CreateDecoderManifestRequest& WithDefaultForUnmappedSignals(DefaultForUnmappedSignalsType&& value) { SetDefaultForUnmappedSignals(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata that can be used to manage the decoder manifest.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateDecoderManifestRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateDecoderManifestRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateDecoderManifestRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateDecoderManifestRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_modelManifestArn;
    bool m_modelManifestArnHasBeenSet = false;

    Aws::Vector<SignalDecoder> m_signalDecoders;
    bool m_signalDecodersHasBeenSet = false;

    Aws::Vector<NetworkInterface> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet = false;

    DefaultForUnmappedSignalsType m_defaultForUnmappedSignals;
    bool m_defaultForUnmappedSignalsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
