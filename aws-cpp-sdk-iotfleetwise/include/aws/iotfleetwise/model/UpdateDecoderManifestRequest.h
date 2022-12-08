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


    /**
     * <p> The name of the decoder manifest to update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the decoder manifest to update.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the decoder manifest to update.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the decoder manifest to update.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the decoder manifest to update.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the decoder manifest to update.</p>
     */
    inline UpdateDecoderManifestRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the decoder manifest to update.</p>
     */
    inline UpdateDecoderManifestRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the decoder manifest to update.</p>
     */
    inline UpdateDecoderManifestRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> A brief description of the decoder manifest to update. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> A brief description of the decoder manifest to update. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> A brief description of the decoder manifest to update. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> A brief description of the decoder manifest to update. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> A brief description of the decoder manifest to update. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> A brief description of the decoder manifest to update. </p>
     */
    inline UpdateDecoderManifestRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A brief description of the decoder manifest to update. </p>
     */
    inline UpdateDecoderManifestRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A brief description of the decoder manifest to update. </p>
     */
    inline UpdateDecoderManifestRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> A list of information about decoding additional signals to add to the
     * decoder manifest. </p>
     */
    inline const Aws::Vector<SignalDecoder>& GetSignalDecodersToAdd() const{ return m_signalDecodersToAdd; }

    /**
     * <p> A list of information about decoding additional signals to add to the
     * decoder manifest. </p>
     */
    inline bool SignalDecodersToAddHasBeenSet() const { return m_signalDecodersToAddHasBeenSet; }

    /**
     * <p> A list of information about decoding additional signals to add to the
     * decoder manifest. </p>
     */
    inline void SetSignalDecodersToAdd(const Aws::Vector<SignalDecoder>& value) { m_signalDecodersToAddHasBeenSet = true; m_signalDecodersToAdd = value; }

    /**
     * <p> A list of information about decoding additional signals to add to the
     * decoder manifest. </p>
     */
    inline void SetSignalDecodersToAdd(Aws::Vector<SignalDecoder>&& value) { m_signalDecodersToAddHasBeenSet = true; m_signalDecodersToAdd = std::move(value); }

    /**
     * <p> A list of information about decoding additional signals to add to the
     * decoder manifest. </p>
     */
    inline UpdateDecoderManifestRequest& WithSignalDecodersToAdd(const Aws::Vector<SignalDecoder>& value) { SetSignalDecodersToAdd(value); return *this;}

    /**
     * <p> A list of information about decoding additional signals to add to the
     * decoder manifest. </p>
     */
    inline UpdateDecoderManifestRequest& WithSignalDecodersToAdd(Aws::Vector<SignalDecoder>&& value) { SetSignalDecodersToAdd(std::move(value)); return *this;}

    /**
     * <p> A list of information about decoding additional signals to add to the
     * decoder manifest. </p>
     */
    inline UpdateDecoderManifestRequest& AddSignalDecodersToAdd(const SignalDecoder& value) { m_signalDecodersToAddHasBeenSet = true; m_signalDecodersToAdd.push_back(value); return *this; }

    /**
     * <p> A list of information about decoding additional signals to add to the
     * decoder manifest. </p>
     */
    inline UpdateDecoderManifestRequest& AddSignalDecodersToAdd(SignalDecoder&& value) { m_signalDecodersToAddHasBeenSet = true; m_signalDecodersToAdd.push_back(std::move(value)); return *this; }


    /**
     * <p> A list of updated information about decoding signals to update in the
     * decoder manifest. </p>
     */
    inline const Aws::Vector<SignalDecoder>& GetSignalDecodersToUpdate() const{ return m_signalDecodersToUpdate; }

    /**
     * <p> A list of updated information about decoding signals to update in the
     * decoder manifest. </p>
     */
    inline bool SignalDecodersToUpdateHasBeenSet() const { return m_signalDecodersToUpdateHasBeenSet; }

    /**
     * <p> A list of updated information about decoding signals to update in the
     * decoder manifest. </p>
     */
    inline void SetSignalDecodersToUpdate(const Aws::Vector<SignalDecoder>& value) { m_signalDecodersToUpdateHasBeenSet = true; m_signalDecodersToUpdate = value; }

    /**
     * <p> A list of updated information about decoding signals to update in the
     * decoder manifest. </p>
     */
    inline void SetSignalDecodersToUpdate(Aws::Vector<SignalDecoder>&& value) { m_signalDecodersToUpdateHasBeenSet = true; m_signalDecodersToUpdate = std::move(value); }

    /**
     * <p> A list of updated information about decoding signals to update in the
     * decoder manifest. </p>
     */
    inline UpdateDecoderManifestRequest& WithSignalDecodersToUpdate(const Aws::Vector<SignalDecoder>& value) { SetSignalDecodersToUpdate(value); return *this;}

    /**
     * <p> A list of updated information about decoding signals to update in the
     * decoder manifest. </p>
     */
    inline UpdateDecoderManifestRequest& WithSignalDecodersToUpdate(Aws::Vector<SignalDecoder>&& value) { SetSignalDecodersToUpdate(std::move(value)); return *this;}

    /**
     * <p> A list of updated information about decoding signals to update in the
     * decoder manifest. </p>
     */
    inline UpdateDecoderManifestRequest& AddSignalDecodersToUpdate(const SignalDecoder& value) { m_signalDecodersToUpdateHasBeenSet = true; m_signalDecodersToUpdate.push_back(value); return *this; }

    /**
     * <p> A list of updated information about decoding signals to update in the
     * decoder manifest. </p>
     */
    inline UpdateDecoderManifestRequest& AddSignalDecodersToUpdate(SignalDecoder&& value) { m_signalDecodersToUpdateHasBeenSet = true; m_signalDecodersToUpdate.push_back(std::move(value)); return *this; }


    /**
     * <p> A list of signal decoders to remove from the decoder manifest. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSignalDecodersToRemove() const{ return m_signalDecodersToRemove; }

    /**
     * <p> A list of signal decoders to remove from the decoder manifest. </p>
     */
    inline bool SignalDecodersToRemoveHasBeenSet() const { return m_signalDecodersToRemoveHasBeenSet; }

    /**
     * <p> A list of signal decoders to remove from the decoder manifest. </p>
     */
    inline void SetSignalDecodersToRemove(const Aws::Vector<Aws::String>& value) { m_signalDecodersToRemoveHasBeenSet = true; m_signalDecodersToRemove = value; }

    /**
     * <p> A list of signal decoders to remove from the decoder manifest. </p>
     */
    inline void SetSignalDecodersToRemove(Aws::Vector<Aws::String>&& value) { m_signalDecodersToRemoveHasBeenSet = true; m_signalDecodersToRemove = std::move(value); }

    /**
     * <p> A list of signal decoders to remove from the decoder manifest. </p>
     */
    inline UpdateDecoderManifestRequest& WithSignalDecodersToRemove(const Aws::Vector<Aws::String>& value) { SetSignalDecodersToRemove(value); return *this;}

    /**
     * <p> A list of signal decoders to remove from the decoder manifest. </p>
     */
    inline UpdateDecoderManifestRequest& WithSignalDecodersToRemove(Aws::Vector<Aws::String>&& value) { SetSignalDecodersToRemove(std::move(value)); return *this;}

    /**
     * <p> A list of signal decoders to remove from the decoder manifest. </p>
     */
    inline UpdateDecoderManifestRequest& AddSignalDecodersToRemove(const Aws::String& value) { m_signalDecodersToRemoveHasBeenSet = true; m_signalDecodersToRemove.push_back(value); return *this; }

    /**
     * <p> A list of signal decoders to remove from the decoder manifest. </p>
     */
    inline UpdateDecoderManifestRequest& AddSignalDecodersToRemove(Aws::String&& value) { m_signalDecodersToRemoveHasBeenSet = true; m_signalDecodersToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of signal decoders to remove from the decoder manifest. </p>
     */
    inline UpdateDecoderManifestRequest& AddSignalDecodersToRemove(const char* value) { m_signalDecodersToRemoveHasBeenSet = true; m_signalDecodersToRemove.push_back(value); return *this; }


    /**
     * <p> A list of information about the network interfaces to add to the decoder
     * manifest. </p>
     */
    inline const Aws::Vector<NetworkInterface>& GetNetworkInterfacesToAdd() const{ return m_networkInterfacesToAdd; }

    /**
     * <p> A list of information about the network interfaces to add to the decoder
     * manifest. </p>
     */
    inline bool NetworkInterfacesToAddHasBeenSet() const { return m_networkInterfacesToAddHasBeenSet; }

    /**
     * <p> A list of information about the network interfaces to add to the decoder
     * manifest. </p>
     */
    inline void SetNetworkInterfacesToAdd(const Aws::Vector<NetworkInterface>& value) { m_networkInterfacesToAddHasBeenSet = true; m_networkInterfacesToAdd = value; }

    /**
     * <p> A list of information about the network interfaces to add to the decoder
     * manifest. </p>
     */
    inline void SetNetworkInterfacesToAdd(Aws::Vector<NetworkInterface>&& value) { m_networkInterfacesToAddHasBeenSet = true; m_networkInterfacesToAdd = std::move(value); }

    /**
     * <p> A list of information about the network interfaces to add to the decoder
     * manifest. </p>
     */
    inline UpdateDecoderManifestRequest& WithNetworkInterfacesToAdd(const Aws::Vector<NetworkInterface>& value) { SetNetworkInterfacesToAdd(value); return *this;}

    /**
     * <p> A list of information about the network interfaces to add to the decoder
     * manifest. </p>
     */
    inline UpdateDecoderManifestRequest& WithNetworkInterfacesToAdd(Aws::Vector<NetworkInterface>&& value) { SetNetworkInterfacesToAdd(std::move(value)); return *this;}

    /**
     * <p> A list of information about the network interfaces to add to the decoder
     * manifest. </p>
     */
    inline UpdateDecoderManifestRequest& AddNetworkInterfacesToAdd(const NetworkInterface& value) { m_networkInterfacesToAddHasBeenSet = true; m_networkInterfacesToAdd.push_back(value); return *this; }

    /**
     * <p> A list of information about the network interfaces to add to the decoder
     * manifest. </p>
     */
    inline UpdateDecoderManifestRequest& AddNetworkInterfacesToAdd(NetworkInterface&& value) { m_networkInterfacesToAddHasBeenSet = true; m_networkInterfacesToAdd.push_back(std::move(value)); return *this; }


    /**
     * <p> A list of information about the network interfaces to update in the decoder
     * manifest. </p>
     */
    inline const Aws::Vector<NetworkInterface>& GetNetworkInterfacesToUpdate() const{ return m_networkInterfacesToUpdate; }

    /**
     * <p> A list of information about the network interfaces to update in the decoder
     * manifest. </p>
     */
    inline bool NetworkInterfacesToUpdateHasBeenSet() const { return m_networkInterfacesToUpdateHasBeenSet; }

    /**
     * <p> A list of information about the network interfaces to update in the decoder
     * manifest. </p>
     */
    inline void SetNetworkInterfacesToUpdate(const Aws::Vector<NetworkInterface>& value) { m_networkInterfacesToUpdateHasBeenSet = true; m_networkInterfacesToUpdate = value; }

    /**
     * <p> A list of information about the network interfaces to update in the decoder
     * manifest. </p>
     */
    inline void SetNetworkInterfacesToUpdate(Aws::Vector<NetworkInterface>&& value) { m_networkInterfacesToUpdateHasBeenSet = true; m_networkInterfacesToUpdate = std::move(value); }

    /**
     * <p> A list of information about the network interfaces to update in the decoder
     * manifest. </p>
     */
    inline UpdateDecoderManifestRequest& WithNetworkInterfacesToUpdate(const Aws::Vector<NetworkInterface>& value) { SetNetworkInterfacesToUpdate(value); return *this;}

    /**
     * <p> A list of information about the network interfaces to update in the decoder
     * manifest. </p>
     */
    inline UpdateDecoderManifestRequest& WithNetworkInterfacesToUpdate(Aws::Vector<NetworkInterface>&& value) { SetNetworkInterfacesToUpdate(std::move(value)); return *this;}

    /**
     * <p> A list of information about the network interfaces to update in the decoder
     * manifest. </p>
     */
    inline UpdateDecoderManifestRequest& AddNetworkInterfacesToUpdate(const NetworkInterface& value) { m_networkInterfacesToUpdateHasBeenSet = true; m_networkInterfacesToUpdate.push_back(value); return *this; }

    /**
     * <p> A list of information about the network interfaces to update in the decoder
     * manifest. </p>
     */
    inline UpdateDecoderManifestRequest& AddNetworkInterfacesToUpdate(NetworkInterface&& value) { m_networkInterfacesToUpdateHasBeenSet = true; m_networkInterfacesToUpdate.push_back(std::move(value)); return *this; }


    /**
     * <p> A list of network interfaces to remove from the decoder manifest.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkInterfacesToRemove() const{ return m_networkInterfacesToRemove; }

    /**
     * <p> A list of network interfaces to remove from the decoder manifest.</p>
     */
    inline bool NetworkInterfacesToRemoveHasBeenSet() const { return m_networkInterfacesToRemoveHasBeenSet; }

    /**
     * <p> A list of network interfaces to remove from the decoder manifest.</p>
     */
    inline void SetNetworkInterfacesToRemove(const Aws::Vector<Aws::String>& value) { m_networkInterfacesToRemoveHasBeenSet = true; m_networkInterfacesToRemove = value; }

    /**
     * <p> A list of network interfaces to remove from the decoder manifest.</p>
     */
    inline void SetNetworkInterfacesToRemove(Aws::Vector<Aws::String>&& value) { m_networkInterfacesToRemoveHasBeenSet = true; m_networkInterfacesToRemove = std::move(value); }

    /**
     * <p> A list of network interfaces to remove from the decoder manifest.</p>
     */
    inline UpdateDecoderManifestRequest& WithNetworkInterfacesToRemove(const Aws::Vector<Aws::String>& value) { SetNetworkInterfacesToRemove(value); return *this;}

    /**
     * <p> A list of network interfaces to remove from the decoder manifest.</p>
     */
    inline UpdateDecoderManifestRequest& WithNetworkInterfacesToRemove(Aws::Vector<Aws::String>&& value) { SetNetworkInterfacesToRemove(std::move(value)); return *this;}

    /**
     * <p> A list of network interfaces to remove from the decoder manifest.</p>
     */
    inline UpdateDecoderManifestRequest& AddNetworkInterfacesToRemove(const Aws::String& value) { m_networkInterfacesToRemoveHasBeenSet = true; m_networkInterfacesToRemove.push_back(value); return *this; }

    /**
     * <p> A list of network interfaces to remove from the decoder manifest.</p>
     */
    inline UpdateDecoderManifestRequest& AddNetworkInterfacesToRemove(Aws::String&& value) { m_networkInterfacesToRemoveHasBeenSet = true; m_networkInterfacesToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of network interfaces to remove from the decoder manifest.</p>
     */
    inline UpdateDecoderManifestRequest& AddNetworkInterfacesToRemove(const char* value) { m_networkInterfacesToRemoveHasBeenSet = true; m_networkInterfacesToRemove.push_back(value); return *this; }


    /**
     * <p> The state of the decoder manifest. If the status is <code>ACTIVE</code>, the
     * decoder manifest can't be edited. If the status is <code>DRAFT</code>, you can
     * edit the decoder manifest. </p>
     */
    inline const ManifestStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The state of the decoder manifest. If the status is <code>ACTIVE</code>, the
     * decoder manifest can't be edited. If the status is <code>DRAFT</code>, you can
     * edit the decoder manifest. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The state of the decoder manifest. If the status is <code>ACTIVE</code>, the
     * decoder manifest can't be edited. If the status is <code>DRAFT</code>, you can
     * edit the decoder manifest. </p>
     */
    inline void SetStatus(const ManifestStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The state of the decoder manifest. If the status is <code>ACTIVE</code>, the
     * decoder manifest can't be edited. If the status is <code>DRAFT</code>, you can
     * edit the decoder manifest. </p>
     */
    inline void SetStatus(ManifestStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The state of the decoder manifest. If the status is <code>ACTIVE</code>, the
     * decoder manifest can't be edited. If the status is <code>DRAFT</code>, you can
     * edit the decoder manifest. </p>
     */
    inline UpdateDecoderManifestRequest& WithStatus(const ManifestStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The state of the decoder manifest. If the status is <code>ACTIVE</code>, the
     * decoder manifest can't be edited. If the status is <code>DRAFT</code>, you can
     * edit the decoder manifest. </p>
     */
    inline UpdateDecoderManifestRequest& WithStatus(ManifestStatus&& value) { SetStatus(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
