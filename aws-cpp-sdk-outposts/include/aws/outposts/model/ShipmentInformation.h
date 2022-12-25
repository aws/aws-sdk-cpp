/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/ShipmentCarrier.h>
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
namespace Outposts
{
namespace Model
{

  /**
   * <p> Information about a line item shipment. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/ShipmentInformation">AWS
   * API Reference</a></p>
   */
  class ShipmentInformation
  {
  public:
    AWS_OUTPOSTS_API ShipmentInformation();
    AWS_OUTPOSTS_API ShipmentInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API ShipmentInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The tracking number of the shipment. </p>
     */
    inline const Aws::String& GetShipmentTrackingNumber() const{ return m_shipmentTrackingNumber; }

    /**
     * <p> The tracking number of the shipment. </p>
     */
    inline bool ShipmentTrackingNumberHasBeenSet() const { return m_shipmentTrackingNumberHasBeenSet; }

    /**
     * <p> The tracking number of the shipment. </p>
     */
    inline void SetShipmentTrackingNumber(const Aws::String& value) { m_shipmentTrackingNumberHasBeenSet = true; m_shipmentTrackingNumber = value; }

    /**
     * <p> The tracking number of the shipment. </p>
     */
    inline void SetShipmentTrackingNumber(Aws::String&& value) { m_shipmentTrackingNumberHasBeenSet = true; m_shipmentTrackingNumber = std::move(value); }

    /**
     * <p> The tracking number of the shipment. </p>
     */
    inline void SetShipmentTrackingNumber(const char* value) { m_shipmentTrackingNumberHasBeenSet = true; m_shipmentTrackingNumber.assign(value); }

    /**
     * <p> The tracking number of the shipment. </p>
     */
    inline ShipmentInformation& WithShipmentTrackingNumber(const Aws::String& value) { SetShipmentTrackingNumber(value); return *this;}

    /**
     * <p> The tracking number of the shipment. </p>
     */
    inline ShipmentInformation& WithShipmentTrackingNumber(Aws::String&& value) { SetShipmentTrackingNumber(std::move(value)); return *this;}

    /**
     * <p> The tracking number of the shipment. </p>
     */
    inline ShipmentInformation& WithShipmentTrackingNumber(const char* value) { SetShipmentTrackingNumber(value); return *this;}


    /**
     * <p> The carrier of the shipment. </p>
     */
    inline const ShipmentCarrier& GetShipmentCarrier() const{ return m_shipmentCarrier; }

    /**
     * <p> The carrier of the shipment. </p>
     */
    inline bool ShipmentCarrierHasBeenSet() const { return m_shipmentCarrierHasBeenSet; }

    /**
     * <p> The carrier of the shipment. </p>
     */
    inline void SetShipmentCarrier(const ShipmentCarrier& value) { m_shipmentCarrierHasBeenSet = true; m_shipmentCarrier = value; }

    /**
     * <p> The carrier of the shipment. </p>
     */
    inline void SetShipmentCarrier(ShipmentCarrier&& value) { m_shipmentCarrierHasBeenSet = true; m_shipmentCarrier = std::move(value); }

    /**
     * <p> The carrier of the shipment. </p>
     */
    inline ShipmentInformation& WithShipmentCarrier(const ShipmentCarrier& value) { SetShipmentCarrier(value); return *this;}

    /**
     * <p> The carrier of the shipment. </p>
     */
    inline ShipmentInformation& WithShipmentCarrier(ShipmentCarrier&& value) { SetShipmentCarrier(std::move(value)); return *this;}

  private:

    Aws::String m_shipmentTrackingNumber;
    bool m_shipmentTrackingNumberHasBeenSet = false;

    ShipmentCarrier m_shipmentCarrier;
    bool m_shipmentCarrierHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
