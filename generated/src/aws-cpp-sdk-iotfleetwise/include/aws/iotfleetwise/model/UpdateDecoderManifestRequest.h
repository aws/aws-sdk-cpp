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
    AWS_IOTFLEETWISE_API UpdateDecoderManifestRequest();

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
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateDecoderManifestRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateDecoderManifestRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateDecoderManifestRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A brief description of the decoder manifest to update. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateDecoderManifestRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateDecoderManifestRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateDecoderManifestRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of information about decoding additional signals to add to the
     * decoder manifest. </p>
     */
    inline const Aws::Vector<SignalDecoder>& GetSignalDecodersToAdd() const{ return m_signalDecodersToAdd; }
    inline bool SignalDecodersToAddHasBeenSet() const { return m_signalDecodersToAddHasBeenSet; }
    inline void SetSignalDecodersToAdd(const Aws::Vector<SignalDecoder>& value) { m_signalDecodersToAddHasBeenSet = true; m_signalDecodersToAdd = value; }
    inline void SetSignalDecodersToAdd(Aws::Vector<SignalDecoder>&& value) { m_signalDecodersToAddHasBeenSet = true; m_signalDecodersToAdd = std::move(value); }
    inline UpdateDecoderManifestRequest& WithSignalDecodersToAdd(const Aws::Vector<SignalDecoder>& value) { SetSignalDecodersToAdd(value); return *this;}
    inline UpdateDecoderManifestRequest& WithSignalDecodersToAdd(Aws::Vector<SignalDecoder>&& value) { SetSignalDecodersToAdd(std::move(value)); return *this;}
    inline UpdateDecoderManifestRequest& AddSignalDecodersToAdd(const SignalDecoder& value) { m_signalDecodersToAddHasBeenSet = true; m_signalDecodersToAdd.push_back(value); return *this; }
    inline UpdateDecoderManifestRequest& AddSignalDecodersToAdd(SignalDecoder&& value) { m_signalDecodersToAddHasBeenSet = true; m_signalDecodersToAdd.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of updated information about decoding signals to update in the
     * decoder manifest. </p>
     */
    inline const Aws::Vector<SignalDecoder>& GetSignalDecodersToUpdate() const{ return m_signalDecodersToUpdate; }
    inline bool SignalDecodersToUpdateHasBeenSet() const { return m_signalDecodersToUpdateHasBeenSet; }
    inline void SetSignalDecodersToUpdate(const Aws::Vector<SignalDecoder>& value) { m_signalDecodersToUpdateHasBeenSet = true; m_signalDecodersToUpdate = value; }
    inline void SetSignalDecodersToUpdate(Aws::Vector<SignalDecoder>&& value) { m_signalDecodersToUpdateHasBeenSet = true; m_signalDecodersToUpdate = std::move(value); }
    inline UpdateDecoderManifestRequest& WithSignalDecodersToUpdate(const Aws::Vector<SignalDecoder>& value) { SetSignalDecodersToUpdate(value); return *this;}
    inline UpdateDecoderManifestRequest& WithSignalDecodersToUpdate(Aws::Vector<SignalDecoder>&& value) { SetSignalDecodersToUpdate(std::move(value)); return *this;}
    inline UpdateDecoderManifestRequest& AddSignalDecodersToUpdate(const SignalDecoder& value) { m_signalDecodersToUpdateHasBeenSet = true; m_signalDecodersToUpdate.push_back(value); return *this; }
    inline UpdateDecoderManifestRequest& AddSignalDecodersToUpdate(SignalDecoder&& value) { m_signalDecodersToUpdateHasBeenSet = true; m_signalDecodersToUpdate.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of signal decoders to remove from the decoder manifest. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSignalDecodersToRemove() const{ return m_signalDecodersToRemove; }
    inline bool SignalDecodersToRemoveHasBeenSet() const { return m_signalDecodersToRemoveHasBeenSet; }
    inline void SetSignalDecodersToRemove(const Aws::Vector<Aws::String>& value) { m_signalDecodersToRemoveHasBeenSet = true; m_signalDecodersToRemove = value; }
    inline void SetSignalDecodersToRemove(Aws::Vector<Aws::String>&& value) { m_signalDecodersToRemoveHasBeenSet = true; m_signalDecodersToRemove = std::move(value); }
    inline UpdateDecoderManifestRequest& WithSignalDecodersToRemove(const Aws::Vector<Aws::String>& value) { SetSignalDecodersToRemove(value); return *this;}
    inline UpdateDecoderManifestRequest& WithSignalDecodersToRemove(Aws::Vector<Aws::String>&& value) { SetSignalDecodersToRemove(std::move(value)); return *this;}
    inline UpdateDecoderManifestRequest& AddSignalDecodersToRemove(const Aws::String& value) { m_signalDecodersToRemoveHasBeenSet = true; m_signalDecodersToRemove.push_back(value); return *this; }
    inline UpdateDecoderManifestRequest& AddSignalDecodersToRemove(Aws::String&& value) { m_signalDecodersToRemoveHasBeenSet = true; m_signalDecodersToRemove.push_back(std::move(value)); return *this; }
    inline UpdateDecoderManifestRequest& AddSignalDecodersToRemove(const char* value) { m_signalDecodersToRemoveHasBeenSet = true; m_signalDecodersToRemove.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of information about the network interfaces to add to the decoder
     * manifest. </p>
     */
    inline const Aws::Vector<NetworkInterface>& GetNetworkInterfacesToAdd() const{ return m_networkInterfacesToAdd; }
    inline bool NetworkInterfacesToAddHasBeenSet() const { return m_networkInterfacesToAddHasBeenSet; }
    inline void SetNetworkInterfacesToAdd(const Aws::Vector<NetworkInterface>& value) { m_networkInterfacesToAddHasBeenSet = true; m_networkInterfacesToAdd = value; }
    inline void SetNetworkInterfacesToAdd(Aws::Vector<NetworkInterface>&& value) { m_networkInterfacesToAddHasBeenSet = true; m_networkInterfacesToAdd = std::move(value); }
    inline UpdateDecoderManifestRequest& WithNetworkInterfacesToAdd(const Aws::Vector<NetworkInterface>& value) { SetNetworkInterfacesToAdd(value); return *this;}
    inline UpdateDecoderManifestRequest& WithNetworkInterfacesToAdd(Aws::Vector<NetworkInterface>&& value) { SetNetworkInterfacesToAdd(std::move(value)); return *this;}
    inline UpdateDecoderManifestRequest& AddNetworkInterfacesToAdd(const NetworkInterface& value) { m_networkInterfacesToAddHasBeenSet = true; m_networkInterfacesToAdd.push_back(value); return *this; }
    inline UpdateDecoderManifestRequest& AddNetworkInterfacesToAdd(NetworkInterface&& value) { m_networkInterfacesToAddHasBeenSet = true; m_networkInterfacesToAdd.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of information about the network interfaces to update in the decoder
     * manifest. </p>
     */
    inline const Aws::Vector<NetworkInterface>& GetNetworkInterfacesToUpdate() const{ return m_networkInterfacesToUpdate; }
    inline bool NetworkInterfacesToUpdateHasBeenSet() const { return m_networkInterfacesToUpdateHasBeenSet; }
    inline void SetNetworkInterfacesToUpdate(const Aws::Vector<NetworkInterface>& value) { m_networkInterfacesToUpdateHasBeenSet = true; m_networkInterfacesToUpdate = value; }
    inline void SetNetworkInterfacesToUpdate(Aws::Vector<NetworkInterface>&& value) { m_networkInterfacesToUpdateHasBeenSet = true; m_networkInterfacesToUpdate = std::move(value); }
    inline UpdateDecoderManifestRequest& WithNetworkInterfacesToUpdate(const Aws::Vector<NetworkInterface>& value) { SetNetworkInterfacesToUpdate(value); return *this;}
    inline UpdateDecoderManifestRequest& WithNetworkInterfacesToUpdate(Aws::Vector<NetworkInterface>&& value) { SetNetworkInterfacesToUpdate(std::move(value)); return *this;}
    inline UpdateDecoderManifestRequest& AddNetworkInterfacesToUpdate(const NetworkInterface& value) { m_networkInterfacesToUpdateHasBeenSet = true; m_networkInterfacesToUpdate.push_back(value); return *this; }
    inline UpdateDecoderManifestRequest& AddNetworkInterfacesToUpdate(NetworkInterface&& value) { m_networkInterfacesToUpdateHasBeenSet = true; m_networkInterfacesToUpdate.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of network interfaces to remove from the decoder manifest.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkInterfacesToRemove() const{ return m_networkInterfacesToRemove; }
    inline bool NetworkInterfacesToRemoveHasBeenSet() const { return m_networkInterfacesToRemoveHasBeenSet; }
    inline void SetNetworkInterfacesToRemove(const Aws::Vector<Aws::String>& value) { m_networkInterfacesToRemoveHasBeenSet = true; m_networkInterfacesToRemove = value; }
    inline void SetNetworkInterfacesToRemove(Aws::Vector<Aws::String>&& value) { m_networkInterfacesToRemoveHasBeenSet = true; m_networkInterfacesToRemove = std::move(value); }
    inline UpdateDecoderManifestRequest& WithNetworkInterfacesToRemove(const Aws::Vector<Aws::String>& value) { SetNetworkInterfacesToRemove(value); return *this;}
    inline UpdateDecoderManifestRequest& WithNetworkInterfacesToRemove(Aws::Vector<Aws::String>&& value) { SetNetworkInterfacesToRemove(std::move(value)); return *this;}
    inline UpdateDecoderManifestRequest& AddNetworkInterfacesToRemove(const Aws::String& value) { m_networkInterfacesToRemoveHasBeenSet = true; m_networkInterfacesToRemove.push_back(value); return *this; }
    inline UpdateDecoderManifestRequest& AddNetworkInterfacesToRemove(Aws::String&& value) { m_networkInterfacesToRemoveHasBeenSet = true; m_networkInterfacesToRemove.push_back(std::move(value)); return *this; }
    inline UpdateDecoderManifestRequest& AddNetworkInterfacesToRemove(const char* value) { m_networkInterfacesToRemoveHasBeenSet = true; m_networkInterfacesToRemove.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The state of the decoder manifest. If the status is <code>ACTIVE</code>, the
     * decoder manifest can't be edited. If the status is <code>DRAFT</code>, you can
     * edit the decoder manifest. </p>
     */
    inline const ManifestStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ManifestStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ManifestStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline UpdateDecoderManifestRequest& WithStatus(const ManifestStatus& value) { SetStatus(value); return *this;}
    inline UpdateDecoderManifestRequest& WithStatus(ManifestStatus&& value) { SetStatus(std::move(value)); return *this;}
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
    inline UpdateDecoderManifestRequest& WithDefaultForUnmappedSignals(const DefaultForUnmappedSignalsType& value) { SetDefaultForUnmappedSignals(value); return *this;}
    inline UpdateDecoderManifestRequest& WithDefaultForUnmappedSignals(DefaultForUnmappedSignalsType&& value) { SetDefaultForUnmappedSignals(std::move(value)); return *this;}
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

    ManifestStatus m_status;
    bool m_statusHasBeenSet = false;

    DefaultForUnmappedSignalsType m_defaultForUnmappedSignals;
    bool m_defaultForUnmappedSignalsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
