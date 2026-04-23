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
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The <code>Status</code> and <code>TrackingNumber</code> information for an
   * inbound or outbound shipment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/Shipment">AWS
   * API Reference</a></p>
   */
  class AWS_SNOWBALL_API Shipment
  {
  public:
    Shipment();
    Shipment(Aws::Utils::Json::JsonView jsonValue);
    Shipment& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Status information for a shipment.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Status information for a shipment.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Status information for a shipment.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Status information for a shipment.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Status information for a shipment.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>Status information for a shipment.</p>
     */
    inline Shipment& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Status information for a shipment.</p>
     */
    inline Shipment& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Status information for a shipment.</p>
     */
    inline Shipment& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The tracking number for this job. Using this tracking number with your
     * region's carrier's website, you can track a Snowball as the carrier transports
     * it.</p> <p>For India, the carrier is Amazon Logistics. For all other regions,
     * UPS is the carrier.</p>
     */
    inline const Aws::String& GetTrackingNumber() const{ return m_trackingNumber; }

    /**
     * <p>The tracking number for this job. Using this tracking number with your
     * region's carrier's website, you can track a Snowball as the carrier transports
     * it.</p> <p>For India, the carrier is Amazon Logistics. For all other regions,
     * UPS is the carrier.</p>
     */
    inline bool TrackingNumberHasBeenSet() const { return m_trackingNumberHasBeenSet; }

    /**
     * <p>The tracking number for this job. Using this tracking number with your
     * region's carrier's website, you can track a Snowball as the carrier transports
     * it.</p> <p>For India, the carrier is Amazon Logistics. For all other regions,
     * UPS is the carrier.</p>
     */
    inline void SetTrackingNumber(const Aws::String& value) { m_trackingNumberHasBeenSet = true; m_trackingNumber = value; }

    /**
     * <p>The tracking number for this job. Using this tracking number with your
     * region's carrier's website, you can track a Snowball as the carrier transports
     * it.</p> <p>For India, the carrier is Amazon Logistics. For all other regions,
     * UPS is the carrier.</p>
     */
    inline void SetTrackingNumber(Aws::String&& value) { m_trackingNumberHasBeenSet = true; m_trackingNumber = std::move(value); }

    /**
     * <p>The tracking number for this job. Using this tracking number with your
     * region's carrier's website, you can track a Snowball as the carrier transports
     * it.</p> <p>For India, the carrier is Amazon Logistics. For all other regions,
     * UPS is the carrier.</p>
     */
    inline void SetTrackingNumber(const char* value) { m_trackingNumberHasBeenSet = true; m_trackingNumber.assign(value); }

    /**
     * <p>The tracking number for this job. Using this tracking number with your
     * region's carrier's website, you can track a Snowball as the carrier transports
     * it.</p> <p>For India, the carrier is Amazon Logistics. For all other regions,
     * UPS is the carrier.</p>
     */
    inline Shipment& WithTrackingNumber(const Aws::String& value) { SetTrackingNumber(value); return *this;}

    /**
     * <p>The tracking number for this job. Using this tracking number with your
     * region's carrier's website, you can track a Snowball as the carrier transports
     * it.</p> <p>For India, the carrier is Amazon Logistics. For all other regions,
     * UPS is the carrier.</p>
     */
    inline Shipment& WithTrackingNumber(Aws::String&& value) { SetTrackingNumber(std::move(value)); return *this;}

    /**
     * <p>The tracking number for this job. Using this tracking number with your
     * region's carrier's website, you can track a Snowball as the carrier transports
     * it.</p> <p>For India, the carrier is Amazon Logistics. For all other regions,
     * UPS is the carrier.</p>
     */
    inline Shipment& WithTrackingNumber(const char* value) { SetTrackingNumber(value); return *this;}

  private:

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_trackingNumber;
    bool m_trackingNumberHasBeenSet;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
