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
  class DisassociateTrackerConsumerRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API DisassociateTrackerConsumerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateTrackerConsumer"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) for the geofence collection to be
     * disassociated from the tracker resource. Used when you need to specify a
     * resource across all AWS. </p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:geofence-collection/ExampleGeofenceCollectionConsumer</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetConsumerArn() const{ return m_consumerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the geofence collection to be
     * disassociated from the tracker resource. Used when you need to specify a
     * resource across all AWS. </p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:geofence-collection/ExampleGeofenceCollectionConsumer</code>
     * </p> </li> </ul>
     */
    inline bool ConsumerArnHasBeenSet() const { return m_consumerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the geofence collection to be
     * disassociated from the tracker resource. Used when you need to specify a
     * resource across all AWS. </p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:geofence-collection/ExampleGeofenceCollectionConsumer</code>
     * </p> </li> </ul>
     */
    inline void SetConsumerArn(const Aws::String& value) { m_consumerArnHasBeenSet = true; m_consumerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the geofence collection to be
     * disassociated from the tracker resource. Used when you need to specify a
     * resource across all AWS. </p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:geofence-collection/ExampleGeofenceCollectionConsumer</code>
     * </p> </li> </ul>
     */
    inline void SetConsumerArn(Aws::String&& value) { m_consumerArnHasBeenSet = true; m_consumerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the geofence collection to be
     * disassociated from the tracker resource. Used when you need to specify a
     * resource across all AWS. </p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:geofence-collection/ExampleGeofenceCollectionConsumer</code>
     * </p> </li> </ul>
     */
    inline void SetConsumerArn(const char* value) { m_consumerArnHasBeenSet = true; m_consumerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the geofence collection to be
     * disassociated from the tracker resource. Used when you need to specify a
     * resource across all AWS. </p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:geofence-collection/ExampleGeofenceCollectionConsumer</code>
     * </p> </li> </ul>
     */
    inline DisassociateTrackerConsumerRequest& WithConsumerArn(const Aws::String& value) { SetConsumerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the geofence collection to be
     * disassociated from the tracker resource. Used when you need to specify a
     * resource across all AWS. </p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:geofence-collection/ExampleGeofenceCollectionConsumer</code>
     * </p> </li> </ul>
     */
    inline DisassociateTrackerConsumerRequest& WithConsumerArn(Aws::String&& value) { SetConsumerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the geofence collection to be
     * disassociated from the tracker resource. Used when you need to specify a
     * resource across all AWS. </p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:geofence-collection/ExampleGeofenceCollectionConsumer</code>
     * </p> </li> </ul>
     */
    inline DisassociateTrackerConsumerRequest& WithConsumerArn(const char* value) { SetConsumerArn(value); return *this;}


    /**
     * <p>The name of the tracker resource to be dissociated from the consumer.</p>
     */
    inline const Aws::String& GetTrackerName() const{ return m_trackerName; }

    /**
     * <p>The name of the tracker resource to be dissociated from the consumer.</p>
     */
    inline bool TrackerNameHasBeenSet() const { return m_trackerNameHasBeenSet; }

    /**
     * <p>The name of the tracker resource to be dissociated from the consumer.</p>
     */
    inline void SetTrackerName(const Aws::String& value) { m_trackerNameHasBeenSet = true; m_trackerName = value; }

    /**
     * <p>The name of the tracker resource to be dissociated from the consumer.</p>
     */
    inline void SetTrackerName(Aws::String&& value) { m_trackerNameHasBeenSet = true; m_trackerName = std::move(value); }

    /**
     * <p>The name of the tracker resource to be dissociated from the consumer.</p>
     */
    inline void SetTrackerName(const char* value) { m_trackerNameHasBeenSet = true; m_trackerName.assign(value); }

    /**
     * <p>The name of the tracker resource to be dissociated from the consumer.</p>
     */
    inline DisassociateTrackerConsumerRequest& WithTrackerName(const Aws::String& value) { SetTrackerName(value); return *this;}

    /**
     * <p>The name of the tracker resource to be dissociated from the consumer.</p>
     */
    inline DisassociateTrackerConsumerRequest& WithTrackerName(Aws::String&& value) { SetTrackerName(std::move(value)); return *this;}

    /**
     * <p>The name of the tracker resource to be dissociated from the consumer.</p>
     */
    inline DisassociateTrackerConsumerRequest& WithTrackerName(const char* value) { SetTrackerName(value); return *this;}

  private:

    Aws::String m_consumerArn;
    bool m_consumerArnHasBeenSet = false;

    Aws::String m_trackerName;
    bool m_trackerNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
