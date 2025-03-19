/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LocationService
{
namespace Model
{

  /**
   */
  class AssociateTrackerConsumerRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API AssociateTrackerConsumerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateTrackerConsumer"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the tracker resource to be associated with a geofence
     * collection.</p>
     */
    inline const Aws::String& GetTrackerName() const { return m_trackerName; }
    inline bool TrackerNameHasBeenSet() const { return m_trackerNameHasBeenSet; }
    template<typename TrackerNameT = Aws::String>
    void SetTrackerName(TrackerNameT&& value) { m_trackerNameHasBeenSet = true; m_trackerName = std::forward<TrackerNameT>(value); }
    template<typename TrackerNameT = Aws::String>
    AssociateTrackerConsumerRequest& WithTrackerName(TrackerNameT&& value) { SetTrackerName(std::forward<TrackerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the geofence collection to be associated
     * to tracker resource. Used when you need to specify a resource across all Amazon
     * Web Services.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:geofence-collection/ExampleGeofenceCollectionConsumer</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetConsumerArn() const { return m_consumerArn; }
    inline bool ConsumerArnHasBeenSet() const { return m_consumerArnHasBeenSet; }
    template<typename ConsumerArnT = Aws::String>
    void SetConsumerArn(ConsumerArnT&& value) { m_consumerArnHasBeenSet = true; m_consumerArn = std::forward<ConsumerArnT>(value); }
    template<typename ConsumerArnT = Aws::String>
    AssociateTrackerConsumerRequest& WithConsumerArn(ConsumerArnT&& value) { SetConsumerArn(std::forward<ConsumerArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trackerName;
    bool m_trackerNameHasBeenSet = false;

    Aws::String m_consumerArn;
    bool m_consumerArnHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
