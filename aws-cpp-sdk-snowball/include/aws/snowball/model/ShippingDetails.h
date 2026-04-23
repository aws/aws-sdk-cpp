/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/model/ShippingOption.h>
#include <aws/snowball/model/Shipment.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>A job's shipping information, including inbound and outbound tracking numbers
   * and shipping speed options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/ShippingDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SNOWBALL_API ShippingDetails
  {
  public:
    ShippingDetails();
    ShippingDetails(Aws::Utils::Json::JsonView jsonValue);
    ShippingDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The shipping speed for a particular job. This speed doesn't dictate how soon
     * you'll get the Snowball from the job's creation date. This speed represents how
     * quickly it moves to its destination while in transit. Regional shipping speeds
     * are as follows:</p> <ul> <li> <p>In Australia, you have access to express
     * shipping. Typically, Snowballs shipped express are delivered in about a day.</p>
     * </li> <li> <p>In the European Union (EU), you have access to express shipping.
     * Typically, Snowballs shipped express are delivered in about a day. In addition,
     * most countries in the EU have access to standard shipping, which typically takes
     * less than a week, one way.</p> </li> <li> <p>In India, Snowballs are delivered
     * in one to seven days.</p> </li> <li> <p>In the United States of America (US),
     * you have access to one-day shipping and two-day shipping.</p> </li> </ul>
     */
    inline const ShippingOption& GetShippingOption() const{ return m_shippingOption; }

    /**
     * <p>The shipping speed for a particular job. This speed doesn't dictate how soon
     * you'll get the Snowball from the job's creation date. This speed represents how
     * quickly it moves to its destination while in transit. Regional shipping speeds
     * are as follows:</p> <ul> <li> <p>In Australia, you have access to express
     * shipping. Typically, Snowballs shipped express are delivered in about a day.</p>
     * </li> <li> <p>In the European Union (EU), you have access to express shipping.
     * Typically, Snowballs shipped express are delivered in about a day. In addition,
     * most countries in the EU have access to standard shipping, which typically takes
     * less than a week, one way.</p> </li> <li> <p>In India, Snowballs are delivered
     * in one to seven days.</p> </li> <li> <p>In the United States of America (US),
     * you have access to one-day shipping and two-day shipping.</p> </li> </ul>
     */
    inline bool ShippingOptionHasBeenSet() const { return m_shippingOptionHasBeenSet; }

    /**
     * <p>The shipping speed for a particular job. This speed doesn't dictate how soon
     * you'll get the Snowball from the job's creation date. This speed represents how
     * quickly it moves to its destination while in transit. Regional shipping speeds
     * are as follows:</p> <ul> <li> <p>In Australia, you have access to express
     * shipping. Typically, Snowballs shipped express are delivered in about a day.</p>
     * </li> <li> <p>In the European Union (EU), you have access to express shipping.
     * Typically, Snowballs shipped express are delivered in about a day. In addition,
     * most countries in the EU have access to standard shipping, which typically takes
     * less than a week, one way.</p> </li> <li> <p>In India, Snowballs are delivered
     * in one to seven days.</p> </li> <li> <p>In the United States of America (US),
     * you have access to one-day shipping and two-day shipping.</p> </li> </ul>
     */
    inline void SetShippingOption(const ShippingOption& value) { m_shippingOptionHasBeenSet = true; m_shippingOption = value; }

    /**
     * <p>The shipping speed for a particular job. This speed doesn't dictate how soon
     * you'll get the Snowball from the job's creation date. This speed represents how
     * quickly it moves to its destination while in transit. Regional shipping speeds
     * are as follows:</p> <ul> <li> <p>In Australia, you have access to express
     * shipping. Typically, Snowballs shipped express are delivered in about a day.</p>
     * </li> <li> <p>In the European Union (EU), you have access to express shipping.
     * Typically, Snowballs shipped express are delivered in about a day. In addition,
     * most countries in the EU have access to standard shipping, which typically takes
     * less than a week, one way.</p> </li> <li> <p>In India, Snowballs are delivered
     * in one to seven days.</p> </li> <li> <p>In the United States of America (US),
     * you have access to one-day shipping and two-day shipping.</p> </li> </ul>
     */
    inline void SetShippingOption(ShippingOption&& value) { m_shippingOptionHasBeenSet = true; m_shippingOption = std::move(value); }

    /**
     * <p>The shipping speed for a particular job. This speed doesn't dictate how soon
     * you'll get the Snowball from the job's creation date. This speed represents how
     * quickly it moves to its destination while in transit. Regional shipping speeds
     * are as follows:</p> <ul> <li> <p>In Australia, you have access to express
     * shipping. Typically, Snowballs shipped express are delivered in about a day.</p>
     * </li> <li> <p>In the European Union (EU), you have access to express shipping.
     * Typically, Snowballs shipped express are delivered in about a day. In addition,
     * most countries in the EU have access to standard shipping, which typically takes
     * less than a week, one way.</p> </li> <li> <p>In India, Snowballs are delivered
     * in one to seven days.</p> </li> <li> <p>In the United States of America (US),
     * you have access to one-day shipping and two-day shipping.</p> </li> </ul>
     */
    inline ShippingDetails& WithShippingOption(const ShippingOption& value) { SetShippingOption(value); return *this;}

    /**
     * <p>The shipping speed for a particular job. This speed doesn't dictate how soon
     * you'll get the Snowball from the job's creation date. This speed represents how
     * quickly it moves to its destination while in transit. Regional shipping speeds
     * are as follows:</p> <ul> <li> <p>In Australia, you have access to express
     * shipping. Typically, Snowballs shipped express are delivered in about a day.</p>
     * </li> <li> <p>In the European Union (EU), you have access to express shipping.
     * Typically, Snowballs shipped express are delivered in about a day. In addition,
     * most countries in the EU have access to standard shipping, which typically takes
     * less than a week, one way.</p> </li> <li> <p>In India, Snowballs are delivered
     * in one to seven days.</p> </li> <li> <p>In the United States of America (US),
     * you have access to one-day shipping and two-day shipping.</p> </li> </ul>
     */
    inline ShippingDetails& WithShippingOption(ShippingOption&& value) { SetShippingOption(std::move(value)); return *this;}


    /**
     * <p>The <code>Status</code> and <code>TrackingNumber</code> values for a Snowball
     * being returned to AWS for a particular job.</p>
     */
    inline const Shipment& GetInboundShipment() const{ return m_inboundShipment; }

    /**
     * <p>The <code>Status</code> and <code>TrackingNumber</code> values for a Snowball
     * being returned to AWS for a particular job.</p>
     */
    inline bool InboundShipmentHasBeenSet() const { return m_inboundShipmentHasBeenSet; }

    /**
     * <p>The <code>Status</code> and <code>TrackingNumber</code> values for a Snowball
     * being returned to AWS for a particular job.</p>
     */
    inline void SetInboundShipment(const Shipment& value) { m_inboundShipmentHasBeenSet = true; m_inboundShipment = value; }

    /**
     * <p>The <code>Status</code> and <code>TrackingNumber</code> values for a Snowball
     * being returned to AWS for a particular job.</p>
     */
    inline void SetInboundShipment(Shipment&& value) { m_inboundShipmentHasBeenSet = true; m_inboundShipment = std::move(value); }

    /**
     * <p>The <code>Status</code> and <code>TrackingNumber</code> values for a Snowball
     * being returned to AWS for a particular job.</p>
     */
    inline ShippingDetails& WithInboundShipment(const Shipment& value) { SetInboundShipment(value); return *this;}

    /**
     * <p>The <code>Status</code> and <code>TrackingNumber</code> values for a Snowball
     * being returned to AWS for a particular job.</p>
     */
    inline ShippingDetails& WithInboundShipment(Shipment&& value) { SetInboundShipment(std::move(value)); return *this;}


    /**
     * <p>The <code>Status</code> and <code>TrackingNumber</code> values for a Snowball
     * being delivered to the address that you specified for a particular job.</p>
     */
    inline const Shipment& GetOutboundShipment() const{ return m_outboundShipment; }

    /**
     * <p>The <code>Status</code> and <code>TrackingNumber</code> values for a Snowball
     * being delivered to the address that you specified for a particular job.</p>
     */
    inline bool OutboundShipmentHasBeenSet() const { return m_outboundShipmentHasBeenSet; }

    /**
     * <p>The <code>Status</code> and <code>TrackingNumber</code> values for a Snowball
     * being delivered to the address that you specified for a particular job.</p>
     */
    inline void SetOutboundShipment(const Shipment& value) { m_outboundShipmentHasBeenSet = true; m_outboundShipment = value; }

    /**
     * <p>The <code>Status</code> and <code>TrackingNumber</code> values for a Snowball
     * being delivered to the address that you specified for a particular job.</p>
     */
    inline void SetOutboundShipment(Shipment&& value) { m_outboundShipmentHasBeenSet = true; m_outboundShipment = std::move(value); }

    /**
     * <p>The <code>Status</code> and <code>TrackingNumber</code> values for a Snowball
     * being delivered to the address that you specified for a particular job.</p>
     */
    inline ShippingDetails& WithOutboundShipment(const Shipment& value) { SetOutboundShipment(value); return *this;}

    /**
     * <p>The <code>Status</code> and <code>TrackingNumber</code> values for a Snowball
     * being delivered to the address that you specified for a particular job.</p>
     */
    inline ShippingDetails& WithOutboundShipment(Shipment&& value) { SetOutboundShipment(std::move(value)); return *this;}

  private:

    ShippingOption m_shippingOption;
    bool m_shippingOptionHasBeenSet;

    Shipment m_inboundShipment;
    bool m_inboundShipmentHasBeenSet;

    Shipment m_outboundShipment;
    bool m_outboundShipmentHasBeenSet;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
