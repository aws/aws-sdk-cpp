/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/IoTFleetWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotfleetwise/model/ManifestStatus.h>
#include <aws/iotfleetwise/model/DefaultForUnmappedSignalsType.h>
#include <aws/iotfleetwise/model/SignalDecoder.h>
#include <aws/iotfleetwise/model/NetworkInterface.h>
#include <utility>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

  /**
   */
  class UpdateDecoderManifestRequest : public IoTFleetWiseRequest
  {
  public:
    AWS_IOTFLEETWISE_API UpdateDecoderManifestRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDecoderManifest"; }

    AWS_IOTFLEETWISE_API Aws::String SerializePayload() const override;

    AWS_IOTFLEETWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The name of the decoder manifest to update.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateDecoderManifestRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A brief description of the decoder manifest to update. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateDecoderManifestRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of information about decoding additional signals to add to the
     * decoder manifest. </p>
     */
    inline const Aws::Vector<SignalDecoder>& GetSignalDecodersToAdd() const { return m_signalDecodersToAdd; }
    inline bool SignalDecodersToAddHasBeenSet() const { return m_signalDecodersToAddHasBeenSet; }
    template<typename SignalDecodersToAddT = Aws::Vector<SignalDecoder>>
    void SetSignalDecodersToAdd(SignalDecodersToAddT&& value) { m_signalDecodersToAddHasBeenSet = true; m_signalDecodersToAdd = std::forward<SignalDecodersToAddT>(value); }
    template<typename SignalDecodersToAddT = Aws::Vector<SignalDecoder>>
    UpdateDecoderManifestRequest& WithSignalDecodersToAdd(SignalDecodersToAddT&& value) { SetSignalDecodersToAdd(std::forward<SignalDecodersToAddT>(value)); return *this;}
    template<typename SignalDecodersToAddT = SignalDecoder>
    UpdateDecoderManifestRequest& AddSignalDecodersToAdd(SignalDecodersToAddT&& value) { m_signalDecodersToAddHasBeenSet = true; m_signalDecodersToAdd.emplace_back(std::forward<SignalDecodersToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of updated information about decoding signals to update in the
     * decoder manifest. </p>
     */
    inline const Aws::Vector<SignalDecoder>& GetSignalDecodersToUpdate() const { return m_signalDecodersToUpdate; }
    inline bool SignalDecodersToUpdateHasBeenSet() const { return m_signalDecodersToUpdateHasBeenSet; }
    template<typename SignalDecodersToUpdateT = Aws::Vector<SignalDecoder>>
    void SetSignalDecodersToUpdate(SignalDecodersToUpdateT&& value) { m_signalDecodersToUpdateHasBeenSet = true; m_signalDecodersToUpdate = std::forward<SignalDecodersToUpdateT>(value); }
    template<typename SignalDecodersToUpdateT = Aws::Vector<SignalDecoder>>
    UpdateDecoderManifestRequest& WithSignalDecodersToUpdate(SignalDecodersToUpdateT&& value) { SetSignalDecodersToUpdate(std::forward<SignalDecodersToUpdateT>(value)); return *this;}
    template<typename SignalDecodersToUpdateT = SignalDecoder>
    UpdateDecoderManifestRequest& AddSignalDecodersToUpdate(SignalDecodersToUpdateT&& value) { m_signalDecodersToUpdateHasBeenSet = true; m_signalDecodersToUpdate.emplace_back(std::forward<SignalDecodersToUpdateT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of signal decoders to remove from the decoder manifest. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSignalDecodersToRemove() const { return m_signalDecodersToRemove; }
    inline bool SignalDecodersToRemoveHasBeenSet() const { return m_signalDecodersToRemoveHasBeenSet; }
    template<typename SignalDecodersToRemoveT = Aws::Vector<Aws::String>>
    void SetSignalDecodersToRemove(SignalDecodersToRemoveT&& value) { m_signalDecodersToRemoveHasBeenSet = true; m_signalDecodersToRemove = std::forward<SignalDecodersToRemoveT>(value); }
    template<typename SignalDecodersToRemoveT = Aws::Vector<Aws::String>>
    UpdateDecoderManifestRequest& WithSignalDecodersToRemove(SignalDecodersToRemoveT&& value) { SetSignalDecodersToRemove(std::forward<SignalDecodersToRemoveT>(value)); return *this;}
    template<typename SignalDecodersToRemoveT = Aws::String>
    UpdateDecoderManifestRequest& AddSignalDecodersToRemove(SignalDecodersToRemoveT&& value) { m_signalDecodersToRemoveHasBeenSet = true; m_signalDecodersToRemove.emplace_back(std::forward<SignalDecodersToRemoveT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of information about the network interfaces to add to the decoder
     * manifest. </p>
     */
    inline const Aws::Vector<NetworkInterface>& GetNetworkInterfacesToAdd() const { return m_networkInterfacesToAdd; }
    inline bool NetworkInterfacesToAddHasBeenSet() const { return m_networkInterfacesToAddHasBeenSet; }
    template<typename NetworkInterfacesToAddT = Aws::Vector<NetworkInterface>>
    void SetNetworkInterfacesToAdd(NetworkInterfacesToAddT&& value) { m_networkInterfacesToAddHasBeenSet = true; m_networkInterfacesToAdd = std::forward<NetworkInterfacesToAddT>(value); }
    template<typename NetworkInterfacesToAddT = Aws::Vector<NetworkInterface>>
    UpdateDecoderManifestRequest& WithNetworkInterfacesToAdd(NetworkInterfacesToAddT&& value) { SetNetworkInterfacesToAdd(std::forward<NetworkInterfacesToAddT>(value)); return *this;}
    template<typename NetworkInterfacesToAddT = NetworkInterface>
    UpdateDecoderManifestRequest& AddNetworkInterfacesToAdd(NetworkInterfacesToAddT&& value) { m_networkInterfacesToAddHasBeenSet = true; m_networkInterfacesToAdd.emplace_back(std::forward<NetworkInterfacesToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of information about the network interfaces to update in the decoder
     * manifest. </p>
     */
    inline const Aws::Vector<NetworkInterface>& GetNetworkInterfacesToUpdate() const { return m_networkInterfacesToUpdate; }
    inline bool NetworkInterfacesToUpdateHasBeenSet() const { return m_networkInterfacesToUpdateHasBeenSet; }
    template<typename NetworkInterfacesToUpdateT = Aws::Vector<NetworkInterface>>
    void SetNetworkInterfacesToUpdate(NetworkInterfacesToUpdateT&& value) { m_networkInterfacesToUpdateHasBeenSet = true; m_networkInterfacesToUpdate = std::forward<NetworkInterfacesToUpdateT>(value); }
    template<typename NetworkInterfacesToUpdateT = Aws::Vector<NetworkInterface>>
    UpdateDecoderManifestRequest& WithNetworkInterfacesToUpdate(NetworkInterfacesToUpdateT&& value) { SetNetworkInterfacesToUpdate(std::forward<NetworkInterfacesToUpdateT>(value)); return *this;}
    template<typename NetworkInterfacesToUpdateT = NetworkInterface>
    UpdateDecoderManifestRequest& AddNetworkInterfacesToUpdate(NetworkInterfacesToUpdateT&& value) { m_networkInterfacesToUpdateHasBeenSet = true; m_networkInterfacesToUpdate.emplace_back(std::forward<NetworkInterfacesToUpdateT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of network interfaces to remove from the decoder manifest.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkInterfacesToRemove() const { return m_networkInterfacesToRemove; }
    inline bool NetworkInterfacesToRemoveHasBeenSet() const { return m_networkInterfacesToRemoveHasBeenSet; }
    template<typename NetworkInterfacesToRemoveT = Aws::Vector<Aws::String>>
    void SetNetworkInterfacesToRemove(NetworkInterfacesToRemoveT&& value) { m_networkInterfacesToRemoveHasBeenSet = true; m_networkInterfacesToRemove = std::forward<NetworkInterfacesToRemoveT>(value); }
    template<typename NetworkInterfacesToRemoveT = Aws::Vector<Aws::String>>
    UpdateDecoderManifestRequest& WithNetworkInterfacesToRemove(NetworkInterfacesToRemoveT&& value) { SetNetworkInterfacesToRemove(std::forward<NetworkInterfacesToRemoveT>(value)); return *this;}
    template<typename NetworkInterfacesToRemoveT = Aws::String>
    UpdateDecoderManifestRequest& AddNetworkInterfacesToRemove(NetworkInterfacesToRemoveT&& value) { m_networkInterfacesToRemoveHasBeenSet = true; m_networkInterfacesToRemove.emplace_back(std::forward<NetworkInterfacesToRemoveT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The state of the decoder manifest. If the status is <code>ACTIVE</code>, the
     * decoder manifest can't be edited. If the status is <code>DRAFT</code>, you can
     * edit the decoder manifest. </p>
     */
    inline ManifestStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ManifestStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateDecoderManifestRequest& WithStatus(ManifestStatus value) { SetStatus(value); return *this;}
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
    inline UpdateDecoderManifestRequest& WithDefaultForUnmappedSignals(DefaultForUnmappedSignalsType value) { SetDefaultForUnmappedSignals(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<SignalDecoder> m_signalDecodersToAdd;
    bool m_signalDecodersToAddHasBeenSet = false;

    Aws::Vector<SignalDecoder> m_signalDecodersToUpdate;
    bool m_signalDecodersToUpdateHasBeenSet = false;

    Aws::Vector<Aws::String> m_signalDecodersToRemove;
    bool m_signalDecodersToRemoveHasBeenSet = false;

    Aws::Vector<NetworkInterface> m_networkInterfacesToAdd;
    bool m_networkInterfacesToAddHasBeenSet = false;

    Aws::Vector<NetworkInterface> m_networkInterfacesToUpdate;
    bool m_networkInterfacesToUpdateHasBeenSet = false;

    Aws::Vector<Aws::String> m_networkInterfacesToRemove;
    bool m_networkInterfacesToRemoveHasBeenSet = false;

    ManifestStatus m_status{ManifestStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    DefaultForUnmappedSignalsType m_defaultForUnmappedSignals{DefaultForUnmappedSignalsType::NOT_SET};
    bool m_defaultForUnmappedSignalsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
