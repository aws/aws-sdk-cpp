/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/model/AcknowledgmentStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/privatenetworks/model/Address.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/privatenetworks/model/TrackingInformation.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PrivateNetworks
{
namespace Model
{

  /**
   * <p>Information about an order.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/Order">AWS
   * API Reference</a></p>
   */
  class Order
  {
  public:
    AWS_PRIVATENETWORKS_API Order();
    AWS_PRIVATENETWORKS_API Order(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API Order& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The acknowledgement status of the order.</p>
     */
    inline const AcknowledgmentStatus& GetAcknowledgmentStatus() const{ return m_acknowledgmentStatus; }

    /**
     * <p>The acknowledgement status of the order.</p>
     */
    inline bool AcknowledgmentStatusHasBeenSet() const { return m_acknowledgmentStatusHasBeenSet; }

    /**
     * <p>The acknowledgement status of the order.</p>
     */
    inline void SetAcknowledgmentStatus(const AcknowledgmentStatus& value) { m_acknowledgmentStatusHasBeenSet = true; m_acknowledgmentStatus = value; }

    /**
     * <p>The acknowledgement status of the order.</p>
     */
    inline void SetAcknowledgmentStatus(AcknowledgmentStatus&& value) { m_acknowledgmentStatusHasBeenSet = true; m_acknowledgmentStatus = std::move(value); }

    /**
     * <p>The acknowledgement status of the order.</p>
     */
    inline Order& WithAcknowledgmentStatus(const AcknowledgmentStatus& value) { SetAcknowledgmentStatus(value); return *this;}

    /**
     * <p>The acknowledgement status of the order.</p>
     */
    inline Order& WithAcknowledgmentStatus(AcknowledgmentStatus&& value) { SetAcknowledgmentStatus(std::move(value)); return *this;}


    /**
     * <p>The creation time of the order.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The creation time of the order.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The creation time of the order.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The creation time of the order.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The creation time of the order.</p>
     */
    inline Order& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The creation time of the order.</p>
     */
    inline Order& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the network associated with this order.</p>
     */
    inline const Aws::String& GetNetworkArn() const{ return m_networkArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network associated with this order.</p>
     */
    inline bool NetworkArnHasBeenSet() const { return m_networkArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network associated with this order.</p>
     */
    inline void SetNetworkArn(const Aws::String& value) { m_networkArnHasBeenSet = true; m_networkArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network associated with this order.</p>
     */
    inline void SetNetworkArn(Aws::String&& value) { m_networkArnHasBeenSet = true; m_networkArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network associated with this order.</p>
     */
    inline void SetNetworkArn(const char* value) { m_networkArnHasBeenSet = true; m_networkArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network associated with this order.</p>
     */
    inline Order& WithNetworkArn(const Aws::String& value) { SetNetworkArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network associated with this order.</p>
     */
    inline Order& WithNetworkArn(Aws::String&& value) { SetNetworkArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network associated with this order.</p>
     */
    inline Order& WithNetworkArn(const char* value) { SetNetworkArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the network site associated with this
     * order.</p>
     */
    inline const Aws::String& GetNetworkSiteArn() const{ return m_networkSiteArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network site associated with this
     * order.</p>
     */
    inline bool NetworkSiteArnHasBeenSet() const { return m_networkSiteArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network site associated with this
     * order.</p>
     */
    inline void SetNetworkSiteArn(const Aws::String& value) { m_networkSiteArnHasBeenSet = true; m_networkSiteArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network site associated with this
     * order.</p>
     */
    inline void SetNetworkSiteArn(Aws::String&& value) { m_networkSiteArnHasBeenSet = true; m_networkSiteArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network site associated with this
     * order.</p>
     */
    inline void SetNetworkSiteArn(const char* value) { m_networkSiteArnHasBeenSet = true; m_networkSiteArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network site associated with this
     * order.</p>
     */
    inline Order& WithNetworkSiteArn(const Aws::String& value) { SetNetworkSiteArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network site associated with this
     * order.</p>
     */
    inline Order& WithNetworkSiteArn(Aws::String&& value) { SetNetworkSiteArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network site associated with this
     * order.</p>
     */
    inline Order& WithNetworkSiteArn(const char* value) { SetNetworkSiteArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the order.</p>
     */
    inline const Aws::String& GetOrderArn() const{ return m_orderArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the order.</p>
     */
    inline bool OrderArnHasBeenSet() const { return m_orderArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the order.</p>
     */
    inline void SetOrderArn(const Aws::String& value) { m_orderArnHasBeenSet = true; m_orderArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the order.</p>
     */
    inline void SetOrderArn(Aws::String&& value) { m_orderArnHasBeenSet = true; m_orderArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the order.</p>
     */
    inline void SetOrderArn(const char* value) { m_orderArnHasBeenSet = true; m_orderArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the order.</p>
     */
    inline Order& WithOrderArn(const Aws::String& value) { SetOrderArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the order.</p>
     */
    inline Order& WithOrderArn(Aws::String&& value) { SetOrderArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the order.</p>
     */
    inline Order& WithOrderArn(const char* value) { SetOrderArn(value); return *this;}


    /**
     * <p>The shipping address of the order.</p>
     */
    inline const Address& GetShippingAddress() const{ return m_shippingAddress; }

    /**
     * <p>The shipping address of the order.</p>
     */
    inline bool ShippingAddressHasBeenSet() const { return m_shippingAddressHasBeenSet; }

    /**
     * <p>The shipping address of the order.</p>
     */
    inline void SetShippingAddress(const Address& value) { m_shippingAddressHasBeenSet = true; m_shippingAddress = value; }

    /**
     * <p>The shipping address of the order.</p>
     */
    inline void SetShippingAddress(Address&& value) { m_shippingAddressHasBeenSet = true; m_shippingAddress = std::move(value); }

    /**
     * <p>The shipping address of the order.</p>
     */
    inline Order& WithShippingAddress(const Address& value) { SetShippingAddress(value); return *this;}

    /**
     * <p>The shipping address of the order.</p>
     */
    inline Order& WithShippingAddress(Address&& value) { SetShippingAddress(std::move(value)); return *this;}


    /**
     * <p>The tracking information of the order.</p>
     */
    inline const Aws::Vector<TrackingInformation>& GetTrackingInformation() const{ return m_trackingInformation; }

    /**
     * <p>The tracking information of the order.</p>
     */
    inline bool TrackingInformationHasBeenSet() const { return m_trackingInformationHasBeenSet; }

    /**
     * <p>The tracking information of the order.</p>
     */
    inline void SetTrackingInformation(const Aws::Vector<TrackingInformation>& value) { m_trackingInformationHasBeenSet = true; m_trackingInformation = value; }

    /**
     * <p>The tracking information of the order.</p>
     */
    inline void SetTrackingInformation(Aws::Vector<TrackingInformation>&& value) { m_trackingInformationHasBeenSet = true; m_trackingInformation = std::move(value); }

    /**
     * <p>The tracking information of the order.</p>
     */
    inline Order& WithTrackingInformation(const Aws::Vector<TrackingInformation>& value) { SetTrackingInformation(value); return *this;}

    /**
     * <p>The tracking information of the order.</p>
     */
    inline Order& WithTrackingInformation(Aws::Vector<TrackingInformation>&& value) { SetTrackingInformation(std::move(value)); return *this;}

    /**
     * <p>The tracking information of the order.</p>
     */
    inline Order& AddTrackingInformation(const TrackingInformation& value) { m_trackingInformationHasBeenSet = true; m_trackingInformation.push_back(value); return *this; }

    /**
     * <p>The tracking information of the order.</p>
     */
    inline Order& AddTrackingInformation(TrackingInformation&& value) { m_trackingInformationHasBeenSet = true; m_trackingInformation.push_back(std::move(value)); return *this; }

  private:

    AcknowledgmentStatus m_acknowledgmentStatus;
    bool m_acknowledgmentStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_networkArn;
    bool m_networkArnHasBeenSet = false;

    Aws::String m_networkSiteArn;
    bool m_networkSiteArnHasBeenSet = false;

    Aws::String m_orderArn;
    bool m_orderArnHasBeenSet = false;

    Address m_shippingAddress;
    bool m_shippingAddressHasBeenSet = false;

    Aws::Vector<TrackingInformation> m_trackingInformation;
    bool m_trackingInformationHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
