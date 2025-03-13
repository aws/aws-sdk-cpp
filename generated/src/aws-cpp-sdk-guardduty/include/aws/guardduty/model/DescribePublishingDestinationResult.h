/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/DestinationType.h>
#include <aws/guardduty/model/PublishingStatus.h>
#include <aws/guardduty/model/DestinationProperties.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GuardDuty
{
namespace Model
{
  class DescribePublishingDestinationResult
  {
  public:
    AWS_GUARDDUTY_API DescribePublishingDestinationResult() = default;
    AWS_GUARDDUTY_API DescribePublishingDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API DescribePublishingDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the publishing destination.</p>
     */
    inline const Aws::String& GetDestinationId() const { return m_destinationId; }
    template<typename DestinationIdT = Aws::String>
    void SetDestinationId(DestinationIdT&& value) { m_destinationIdHasBeenSet = true; m_destinationId = std::forward<DestinationIdT>(value); }
    template<typename DestinationIdT = Aws::String>
    DescribePublishingDestinationResult& WithDestinationId(DestinationIdT&& value) { SetDestinationId(std::forward<DestinationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of publishing destination. Currently, only Amazon S3 buckets are
     * supported.</p>
     */
    inline DestinationType GetDestinationType() const { return m_destinationType; }
    inline void SetDestinationType(DestinationType value) { m_destinationTypeHasBeenSet = true; m_destinationType = value; }
    inline DescribePublishingDestinationResult& WithDestinationType(DestinationType value) { SetDestinationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the publishing destination.</p>
     */
    inline PublishingStatus GetStatus() const { return m_status; }
    inline void SetStatus(PublishingStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribePublishingDestinationResult& WithStatus(PublishingStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in epoch millisecond format, at which GuardDuty was first unable to
     * publish findings to the destination.</p>
     */
    inline long long GetPublishingFailureStartTimestamp() const { return m_publishingFailureStartTimestamp; }
    inline void SetPublishingFailureStartTimestamp(long long value) { m_publishingFailureStartTimestampHasBeenSet = true; m_publishingFailureStartTimestamp = value; }
    inline DescribePublishingDestinationResult& WithPublishingFailureStartTimestamp(long long value) { SetPublishingFailureStartTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>DestinationProperties</code> object that includes the
     * <code>DestinationArn</code> and <code>KmsKeyArn</code> of the publishing
     * destination.</p>
     */
    inline const DestinationProperties& GetDestinationProperties() const { return m_destinationProperties; }
    template<typename DestinationPropertiesT = DestinationProperties>
    void SetDestinationProperties(DestinationPropertiesT&& value) { m_destinationPropertiesHasBeenSet = true; m_destinationProperties = std::forward<DestinationPropertiesT>(value); }
    template<typename DestinationPropertiesT = DestinationProperties>
    DescribePublishingDestinationResult& WithDestinationProperties(DestinationPropertiesT&& value) { SetDestinationProperties(std::forward<DestinationPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribePublishingDestinationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_destinationId;
    bool m_destinationIdHasBeenSet = false;

    DestinationType m_destinationType{DestinationType::NOT_SET};
    bool m_destinationTypeHasBeenSet = false;

    PublishingStatus m_status{PublishingStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    long long m_publishingFailureStartTimestamp{0};
    bool m_publishingFailureStartTimestampHasBeenSet = false;

    DestinationProperties m_destinationProperties;
    bool m_destinationPropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
