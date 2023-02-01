/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class DescribePublishingDestinationRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API DescribePublishingDestinationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePublishingDestination"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique ID of the detector associated with the publishing destination to
     * retrieve.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The unique ID of the detector associated with the publishing destination to
     * retrieve.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The unique ID of the detector associated with the publishing destination to
     * retrieve.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The unique ID of the detector associated with the publishing destination to
     * retrieve.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The unique ID of the detector associated with the publishing destination to
     * retrieve.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The unique ID of the detector associated with the publishing destination to
     * retrieve.</p>
     */
    inline DescribePublishingDestinationRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The unique ID of the detector associated with the publishing destination to
     * retrieve.</p>
     */
    inline DescribePublishingDestinationRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the detector associated with the publishing destination to
     * retrieve.</p>
     */
    inline DescribePublishingDestinationRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>The ID of the publishing destination to retrieve.</p>
     */
    inline const Aws::String& GetDestinationId() const{ return m_destinationId; }

    /**
     * <p>The ID of the publishing destination to retrieve.</p>
     */
    inline bool DestinationIdHasBeenSet() const { return m_destinationIdHasBeenSet; }

    /**
     * <p>The ID of the publishing destination to retrieve.</p>
     */
    inline void SetDestinationId(const Aws::String& value) { m_destinationIdHasBeenSet = true; m_destinationId = value; }

    /**
     * <p>The ID of the publishing destination to retrieve.</p>
     */
    inline void SetDestinationId(Aws::String&& value) { m_destinationIdHasBeenSet = true; m_destinationId = std::move(value); }

    /**
     * <p>The ID of the publishing destination to retrieve.</p>
     */
    inline void SetDestinationId(const char* value) { m_destinationIdHasBeenSet = true; m_destinationId.assign(value); }

    /**
     * <p>The ID of the publishing destination to retrieve.</p>
     */
    inline DescribePublishingDestinationRequest& WithDestinationId(const Aws::String& value) { SetDestinationId(value); return *this;}

    /**
     * <p>The ID of the publishing destination to retrieve.</p>
     */
    inline DescribePublishingDestinationRequest& WithDestinationId(Aws::String&& value) { SetDestinationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the publishing destination to retrieve.</p>
     */
    inline DescribePublishingDestinationRequest& WithDestinationId(const char* value) { SetDestinationId(value); return *this;}

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_destinationId;
    bool m_destinationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
