/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/DestinationType.h>
#include <aws/guardduty/model/DestinationProperties.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class CreatePublishingDestinationRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API CreatePublishingDestinationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePublishingDestination"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the GuardDuty detector associated with the publishing
     * destination.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The ID of the GuardDuty detector associated with the publishing
     * destination.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The ID of the GuardDuty detector associated with the publishing
     * destination.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The ID of the GuardDuty detector associated with the publishing
     * destination.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The ID of the GuardDuty detector associated with the publishing
     * destination.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The ID of the GuardDuty detector associated with the publishing
     * destination.</p>
     */
    inline CreatePublishingDestinationRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The ID of the GuardDuty detector associated with the publishing
     * destination.</p>
     */
    inline CreatePublishingDestinationRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The ID of the GuardDuty detector associated with the publishing
     * destination.</p>
     */
    inline CreatePublishingDestinationRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>The type of resource for the publishing destination. Currently only Amazon S3
     * buckets are supported.</p>
     */
    inline const DestinationType& GetDestinationType() const{ return m_destinationType; }

    /**
     * <p>The type of resource for the publishing destination. Currently only Amazon S3
     * buckets are supported.</p>
     */
    inline bool DestinationTypeHasBeenSet() const { return m_destinationTypeHasBeenSet; }

    /**
     * <p>The type of resource for the publishing destination. Currently only Amazon S3
     * buckets are supported.</p>
     */
    inline void SetDestinationType(const DestinationType& value) { m_destinationTypeHasBeenSet = true; m_destinationType = value; }

    /**
     * <p>The type of resource for the publishing destination. Currently only Amazon S3
     * buckets are supported.</p>
     */
    inline void SetDestinationType(DestinationType&& value) { m_destinationTypeHasBeenSet = true; m_destinationType = std::move(value); }

    /**
     * <p>The type of resource for the publishing destination. Currently only Amazon S3
     * buckets are supported.</p>
     */
    inline CreatePublishingDestinationRequest& WithDestinationType(const DestinationType& value) { SetDestinationType(value); return *this;}

    /**
     * <p>The type of resource for the publishing destination. Currently only Amazon S3
     * buckets are supported.</p>
     */
    inline CreatePublishingDestinationRequest& WithDestinationType(DestinationType&& value) { SetDestinationType(std::move(value)); return *this;}


    /**
     * <p>The properties of the publishing destination, including the ARNs for the
     * destination and the KMS key used for encryption.</p>
     */
    inline const DestinationProperties& GetDestinationProperties() const{ return m_destinationProperties; }

    /**
     * <p>The properties of the publishing destination, including the ARNs for the
     * destination and the KMS key used for encryption.</p>
     */
    inline bool DestinationPropertiesHasBeenSet() const { return m_destinationPropertiesHasBeenSet; }

    /**
     * <p>The properties of the publishing destination, including the ARNs for the
     * destination and the KMS key used for encryption.</p>
     */
    inline void SetDestinationProperties(const DestinationProperties& value) { m_destinationPropertiesHasBeenSet = true; m_destinationProperties = value; }

    /**
     * <p>The properties of the publishing destination, including the ARNs for the
     * destination and the KMS key used for encryption.</p>
     */
    inline void SetDestinationProperties(DestinationProperties&& value) { m_destinationPropertiesHasBeenSet = true; m_destinationProperties = std::move(value); }

    /**
     * <p>The properties of the publishing destination, including the ARNs for the
     * destination and the KMS key used for encryption.</p>
     */
    inline CreatePublishingDestinationRequest& WithDestinationProperties(const DestinationProperties& value) { SetDestinationProperties(value); return *this;}

    /**
     * <p>The properties of the publishing destination, including the ARNs for the
     * destination and the KMS key used for encryption.</p>
     */
    inline CreatePublishingDestinationRequest& WithDestinationProperties(DestinationProperties&& value) { SetDestinationProperties(std::move(value)); return *this;}


    /**
     * <p>The idempotency token for the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The idempotency token for the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The idempotency token for the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The idempotency token for the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The idempotency token for the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The idempotency token for the request.</p>
     */
    inline CreatePublishingDestinationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The idempotency token for the request.</p>
     */
    inline CreatePublishingDestinationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The idempotency token for the request.</p>
     */
    inline CreatePublishingDestinationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    DestinationType m_destinationType;
    bool m_destinationTypeHasBeenSet = false;

    DestinationProperties m_destinationProperties;
    bool m_destinationPropertiesHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
