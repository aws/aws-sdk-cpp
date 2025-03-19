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
    AWS_IOTFLEETWISE_API CreateDecoderManifestRequest() = default;

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
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateDecoderManifestRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the decoder manifest. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateDecoderManifestRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the vehicle model (model manifest). </p>
     */
    inline const Aws::String& GetModelManifestArn() const { return m_modelManifestArn; }
    inline bool ModelManifestArnHasBeenSet() const { return m_modelManifestArnHasBeenSet; }
    template<typename ModelManifestArnT = Aws::String>
    void SetModelManifestArn(ModelManifestArnT&& value) { m_modelManifestArnHasBeenSet = true; m_modelManifestArn = std::forward<ModelManifestArnT>(value); }
    template<typename ModelManifestArnT = Aws::String>
    CreateDecoderManifestRequest& WithModelManifestArn(ModelManifestArnT&& value) { SetModelManifestArn(std::forward<ModelManifestArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of information about signal decoders. </p>
     */
    inline const Aws::Vector<SignalDecoder>& GetSignalDecoders() const { return m_signalDecoders; }
    inline bool SignalDecodersHasBeenSet() const { return m_signalDecodersHasBeenSet; }
    template<typename SignalDecodersT = Aws::Vector<SignalDecoder>>
    void SetSignalDecoders(SignalDecodersT&& value) { m_signalDecodersHasBeenSet = true; m_signalDecoders = std::forward<SignalDecodersT>(value); }
    template<typename SignalDecodersT = Aws::Vector<SignalDecoder>>
    CreateDecoderManifestRequest& WithSignalDecoders(SignalDecodersT&& value) { SetSignalDecoders(std::forward<SignalDecodersT>(value)); return *this;}
    template<typename SignalDecodersT = SignalDecoder>
    CreateDecoderManifestRequest& AddSignalDecoders(SignalDecodersT&& value) { m_signalDecodersHasBeenSet = true; m_signalDecoders.emplace_back(std::forward<SignalDecodersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of information about available network interfaces. </p>
     */
    inline const Aws::Vector<NetworkInterface>& GetNetworkInterfaces() const { return m_networkInterfaces; }
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }
    template<typename NetworkInterfacesT = Aws::Vector<NetworkInterface>>
    void SetNetworkInterfaces(NetworkInterfacesT&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::forward<NetworkInterfacesT>(value); }
    template<typename NetworkInterfacesT = Aws::Vector<NetworkInterface>>
    CreateDecoderManifestRequest& WithNetworkInterfaces(NetworkInterfacesT&& value) { SetNetworkInterfaces(std::forward<NetworkInterfacesT>(value)); return *this;}
    template<typename NetworkInterfacesT = NetworkInterface>
    CreateDecoderManifestRequest& AddNetworkInterfaces(NetworkInterfacesT&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.emplace_back(std::forward<NetworkInterfacesT>(value)); return *this; }
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
    inline DefaultForUnmappedSignalsType GetDefaultForUnmappedSignals() const { return m_defaultForUnmappedSignals; }
    inline bool DefaultForUnmappedSignalsHasBeenSet() const { return m_defaultForUnmappedSignalsHasBeenSet; }
    inline void SetDefaultForUnmappedSignals(DefaultForUnmappedSignalsType value) { m_defaultForUnmappedSignalsHasBeenSet = true; m_defaultForUnmappedSignals = value; }
    inline CreateDecoderManifestRequest& WithDefaultForUnmappedSignals(DefaultForUnmappedSignalsType value) { SetDefaultForUnmappedSignals(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata that can be used to manage the decoder manifest.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateDecoderManifestRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDecoderManifestRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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

    DefaultForUnmappedSignalsType m_defaultForUnmappedSignals{DefaultForUnmappedSignalsType::NOT_SET};
    bool m_defaultForUnmappedSignalsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
