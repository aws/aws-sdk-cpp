/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/DestinationType.h>
#include <aws/guardduty/model/PublishingStatus.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the publishing destination, including the ID,
   * type, and status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Destination">AWS
   * API Reference</a></p>
   */
  class Destination
  {
  public:
    AWS_GUARDDUTY_API Destination();
    AWS_GUARDDUTY_API Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique ID of the publishing destination.</p>
     */
    inline const Aws::String& GetDestinationId() const{ return m_destinationId; }

    /**
     * <p>The unique ID of the publishing destination.</p>
     */
    inline bool DestinationIdHasBeenSet() const { return m_destinationIdHasBeenSet; }

    /**
     * <p>The unique ID of the publishing destination.</p>
     */
    inline void SetDestinationId(const Aws::String& value) { m_destinationIdHasBeenSet = true; m_destinationId = value; }

    /**
     * <p>The unique ID of the publishing destination.</p>
     */
    inline void SetDestinationId(Aws::String&& value) { m_destinationIdHasBeenSet = true; m_destinationId = std::move(value); }

    /**
     * <p>The unique ID of the publishing destination.</p>
     */
    inline void SetDestinationId(const char* value) { m_destinationIdHasBeenSet = true; m_destinationId.assign(value); }

    /**
     * <p>The unique ID of the publishing destination.</p>
     */
    inline Destination& WithDestinationId(const Aws::String& value) { SetDestinationId(value); return *this;}

    /**
     * <p>The unique ID of the publishing destination.</p>
     */
    inline Destination& WithDestinationId(Aws::String&& value) { SetDestinationId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the publishing destination.</p>
     */
    inline Destination& WithDestinationId(const char* value) { SetDestinationId(value); return *this;}


    /**
     * <p>The type of resource used for the publishing destination. Currently, only
     * Amazon S3 buckets are supported.</p>
     */
    inline const DestinationType& GetDestinationType() const{ return m_destinationType; }

    /**
     * <p>The type of resource used for the publishing destination. Currently, only
     * Amazon S3 buckets are supported.</p>
     */
    inline bool DestinationTypeHasBeenSet() const { return m_destinationTypeHasBeenSet; }

    /**
     * <p>The type of resource used for the publishing destination. Currently, only
     * Amazon S3 buckets are supported.</p>
     */
    inline void SetDestinationType(const DestinationType& value) { m_destinationTypeHasBeenSet = true; m_destinationType = value; }

    /**
     * <p>The type of resource used for the publishing destination. Currently, only
     * Amazon S3 buckets are supported.</p>
     */
    inline void SetDestinationType(DestinationType&& value) { m_destinationTypeHasBeenSet = true; m_destinationType = std::move(value); }

    /**
     * <p>The type of resource used for the publishing destination. Currently, only
     * Amazon S3 buckets are supported.</p>
     */
    inline Destination& WithDestinationType(const DestinationType& value) { SetDestinationType(value); return *this;}

    /**
     * <p>The type of resource used for the publishing destination. Currently, only
     * Amazon S3 buckets are supported.</p>
     */
    inline Destination& WithDestinationType(DestinationType&& value) { SetDestinationType(std::move(value)); return *this;}


    /**
     * <p>The status of the publishing destination.</p>
     */
    inline const PublishingStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the publishing destination.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the publishing destination.</p>
     */
    inline void SetStatus(const PublishingStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the publishing destination.</p>
     */
    inline void SetStatus(PublishingStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the publishing destination.</p>
     */
    inline Destination& WithStatus(const PublishingStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the publishing destination.</p>
     */
    inline Destination& WithStatus(PublishingStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_destinationId;
    bool m_destinationIdHasBeenSet = false;

    DestinationType m_destinationType;
    bool m_destinationTypeHasBeenSet = false;

    PublishingStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
