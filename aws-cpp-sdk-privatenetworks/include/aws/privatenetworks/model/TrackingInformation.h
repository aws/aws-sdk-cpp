/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
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
namespace PrivateNetworks
{
namespace Model
{

  /**
   * <p>Information about tracking a shipment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/TrackingInformation">AWS
   * API Reference</a></p>
   */
  class TrackingInformation
  {
  public:
    AWS_PRIVATENETWORKS_API TrackingInformation();
    AWS_PRIVATENETWORKS_API TrackingInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API TrackingInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The tracking number of the shipment.</p>
     */
    inline const Aws::String& GetTrackingNumber() const{ return m_trackingNumber; }

    /**
     * <p>The tracking number of the shipment.</p>
     */
    inline bool TrackingNumberHasBeenSet() const { return m_trackingNumberHasBeenSet; }

    /**
     * <p>The tracking number of the shipment.</p>
     */
    inline void SetTrackingNumber(const Aws::String& value) { m_trackingNumberHasBeenSet = true; m_trackingNumber = value; }

    /**
     * <p>The tracking number of the shipment.</p>
     */
    inline void SetTrackingNumber(Aws::String&& value) { m_trackingNumberHasBeenSet = true; m_trackingNumber = std::move(value); }

    /**
     * <p>The tracking number of the shipment.</p>
     */
    inline void SetTrackingNumber(const char* value) { m_trackingNumberHasBeenSet = true; m_trackingNumber.assign(value); }

    /**
     * <p>The tracking number of the shipment.</p>
     */
    inline TrackingInformation& WithTrackingNumber(const Aws::String& value) { SetTrackingNumber(value); return *this;}

    /**
     * <p>The tracking number of the shipment.</p>
     */
    inline TrackingInformation& WithTrackingNumber(Aws::String&& value) { SetTrackingNumber(std::move(value)); return *this;}

    /**
     * <p>The tracking number of the shipment.</p>
     */
    inline TrackingInformation& WithTrackingNumber(const char* value) { SetTrackingNumber(value); return *this;}

  private:

    Aws::String m_trackingNumber;
    bool m_trackingNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
