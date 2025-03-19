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
    AWS_GUARDDUTY_API Destination() = default;
    AWS_GUARDDUTY_API Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of the publishing destination.</p>
     */
    inline const Aws::String& GetDestinationId() const { return m_destinationId; }
    inline bool DestinationIdHasBeenSet() const { return m_destinationIdHasBeenSet; }
    template<typename DestinationIdT = Aws::String>
    void SetDestinationId(DestinationIdT&& value) { m_destinationIdHasBeenSet = true; m_destinationId = std::forward<DestinationIdT>(value); }
    template<typename DestinationIdT = Aws::String>
    Destination& WithDestinationId(DestinationIdT&& value) { SetDestinationId(std::forward<DestinationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource used for the publishing destination. Currently, only
     * Amazon S3 buckets are supported.</p>
     */
    inline DestinationType GetDestinationType() const { return m_destinationType; }
    inline bool DestinationTypeHasBeenSet() const { return m_destinationTypeHasBeenSet; }
    inline void SetDestinationType(DestinationType value) { m_destinationTypeHasBeenSet = true; m_destinationType = value; }
    inline Destination& WithDestinationType(DestinationType value) { SetDestinationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the publishing destination.</p>
     */
    inline PublishingStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(PublishingStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Destination& WithStatus(PublishingStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_destinationId;
    bool m_destinationIdHasBeenSet = false;

    DestinationType m_destinationType{DestinationType::NOT_SET};
    bool m_destinationTypeHasBeenSet = false;

    PublishingStatus m_status{PublishingStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
