/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/TimeToLiveDescription.h>
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
namespace DynamoDB
{
namespace Model
{
  class DescribeTimeToLiveResult
  {
  public:
    AWS_DYNAMODB_API DescribeTimeToLiveResult();
    AWS_DYNAMODB_API DescribeTimeToLiveResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API DescribeTimeToLiveResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p/>
     */
    inline const TimeToLiveDescription& GetTimeToLiveDescription() const{ return m_timeToLiveDescription; }

    /**
     * <p/>
     */
    inline void SetTimeToLiveDescription(const TimeToLiveDescription& value) { m_timeToLiveDescription = value; }

    /**
     * <p/>
     */
    inline void SetTimeToLiveDescription(TimeToLiveDescription&& value) { m_timeToLiveDescription = std::move(value); }

    /**
     * <p/>
     */
    inline DescribeTimeToLiveResult& WithTimeToLiveDescription(const TimeToLiveDescription& value) { SetTimeToLiveDescription(value); return *this;}

    /**
     * <p/>
     */
    inline DescribeTimeToLiveResult& WithTimeToLiveDescription(TimeToLiveDescription&& value) { SetTimeToLiveDescription(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeTimeToLiveResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeTimeToLiveResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeTimeToLiveResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TimeToLiveDescription m_timeToLiveDescription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
