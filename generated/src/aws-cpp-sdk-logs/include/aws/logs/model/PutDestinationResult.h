/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/Destination.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudWatchLogs
{
namespace Model
{
  class PutDestinationResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API PutDestinationResult();
    AWS_CLOUDWATCHLOGS_API PutDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API PutDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The destination.</p>
     */
    inline const Destination& GetDestination() const{ return m_destination; }

    /**
     * <p>The destination.</p>
     */
    inline void SetDestination(const Destination& value) { m_destination = value; }

    /**
     * <p>The destination.</p>
     */
    inline void SetDestination(Destination&& value) { m_destination = std::move(value); }

    /**
     * <p>The destination.</p>
     */
    inline PutDestinationResult& WithDestination(const Destination& value) { SetDestination(value); return *this;}

    /**
     * <p>The destination.</p>
     */
    inline PutDestinationResult& WithDestination(Destination&& value) { SetDestination(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutDestinationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutDestinationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutDestinationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Destination m_destination;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
