/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/TimeToLiveSpecification.h>
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

  private:

    TimeToLiveSpecification m_timeToLiveSpecification;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
