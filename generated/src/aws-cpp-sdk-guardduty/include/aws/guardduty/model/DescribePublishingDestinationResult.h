﻿/**
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
    AWS_GUARDDUTY_API DescribePublishingDestinationResult();
    AWS_GUARDDUTY_API DescribePublishingDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API DescribePublishingDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the publishing destination.</p>
     */
    inline const Aws::String& GetDestinationId() const{ return m_destinationId; }
    inline void SetDestinationId(const Aws::String& value) { m_destinationId = value; }
    inline void SetDestinationId(Aws::String&& value) { m_destinationId = std::move(value); }
    inline void SetDestinationId(const char* value) { m_destinationId.assign(value); }
    inline DescribePublishingDestinationResult& WithDestinationId(const Aws::String& value) { SetDestinationId(value); return *this;}
    inline DescribePublishingDestinationResult& WithDestinationId(Aws::String&& value) { SetDestinationId(std::move(value)); return *this;}
    inline DescribePublishingDestinationResult& WithDestinationId(const char* value) { SetDestinationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of publishing destination. Currently, only Amazon S3 buckets are
     * supported.</p>
     */
    inline const DestinationType& GetDestinationType() const{ return m_destinationType; }
    inline void SetDestinationType(const DestinationType& value) { m_destinationType = value; }
    inline void SetDestinationType(DestinationType&& value) { m_destinationType = std::move(value); }
    inline DescribePublishingDestinationResult& WithDestinationType(const DestinationType& value) { SetDestinationType(value); return *this;}
    inline DescribePublishingDestinationResult& WithDestinationType(DestinationType&& value) { SetDestinationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the publishing destination.</p>
     */
    inline const PublishingStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const PublishingStatus& value) { m_status = value; }
    inline void SetStatus(PublishingStatus&& value) { m_status = std::move(value); }
    inline DescribePublishingDestinationResult& WithStatus(const PublishingStatus& value) { SetStatus(value); return *this;}
    inline DescribePublishingDestinationResult& WithStatus(PublishingStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in epoch millisecond format, at which GuardDuty was first unable to
     * publish findings to the destination.</p>
     */
    inline long long GetPublishingFailureStartTimestamp() const{ return m_publishingFailureStartTimestamp; }
    inline void SetPublishingFailureStartTimestamp(long long value) { m_publishingFailureStartTimestamp = value; }
    inline DescribePublishingDestinationResult& WithPublishingFailureStartTimestamp(long long value) { SetPublishingFailureStartTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>DestinationProperties</code> object that includes the
     * <code>DestinationArn</code> and <code>KmsKeyArn</code> of the publishing
     * destination.</p>
     */
    inline const DestinationProperties& GetDestinationProperties() const{ return m_destinationProperties; }
    inline void SetDestinationProperties(const DestinationProperties& value) { m_destinationProperties = value; }
    inline void SetDestinationProperties(DestinationProperties&& value) { m_destinationProperties = std::move(value); }
    inline DescribePublishingDestinationResult& WithDestinationProperties(const DestinationProperties& value) { SetDestinationProperties(value); return *this;}
    inline DescribePublishingDestinationResult& WithDestinationProperties(DestinationProperties&& value) { SetDestinationProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribePublishingDestinationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribePublishingDestinationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribePublishingDestinationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_destinationId;

    DestinationType m_destinationType;

    PublishingStatus m_status;

    long long m_publishingFailureStartTimestamp;

    DestinationProperties m_destinationProperties;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
