/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/TimeToLiveSpecification.h>
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
  class UpdateTimeToLiveResult
  {
  public:
    AWS_DYNAMODB_API UpdateTimeToLiveResult();
    AWS_DYNAMODB_API UpdateTimeToLiveResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API UpdateTimeToLiveResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Represents the output of an <code>UpdateTimeToLive</code> operation.</p>
     */
    inline const TimeToLiveSpecification& GetTimeToLiveSpecification() const{ return m_timeToLiveSpecification; }

    /**
     * <p>Represents the output of an <code>UpdateTimeToLive</code> operation.</p>
     */
    inline void SetTimeToLiveSpecification(const TimeToLiveSpecification& value) { m_timeToLiveSpecification = value; }

    /**
     * <p>Represents the output of an <code>UpdateTimeToLive</code> operation.</p>
     */
    inline void SetTimeToLiveSpecification(TimeToLiveSpecification&& value) { m_timeToLiveSpecification = std::move(value); }

    /**
     * <p>Represents the output of an <code>UpdateTimeToLive</code> operation.</p>
     */
    inline UpdateTimeToLiveResult& WithTimeToLiveSpecification(const TimeToLiveSpecification& value) { SetTimeToLiveSpecification(value); return *this;}

    /**
     * <p>Represents the output of an <code>UpdateTimeToLive</code> operation.</p>
     */
    inline UpdateTimeToLiveResult& WithTimeToLiveSpecification(TimeToLiveSpecification&& value) { SetTimeToLiveSpecification(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateTimeToLiveResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateTimeToLiveResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateTimeToLiveResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TimeToLiveSpecification m_timeToLiveSpecification;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
