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
    AWS_DYNAMODB_API UpdateTimeToLiveResult() = default;
    AWS_DYNAMODB_API UpdateTimeToLiveResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API UpdateTimeToLiveResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Represents the output of an <code>UpdateTimeToLive</code> operation.</p>
     */
    inline const TimeToLiveSpecification& GetTimeToLiveSpecification() const { return m_timeToLiveSpecification; }
    template<typename TimeToLiveSpecificationT = TimeToLiveSpecification>
    void SetTimeToLiveSpecification(TimeToLiveSpecificationT&& value) { m_timeToLiveSpecificationHasBeenSet = true; m_timeToLiveSpecification = std::forward<TimeToLiveSpecificationT>(value); }
    template<typename TimeToLiveSpecificationT = TimeToLiveSpecification>
    UpdateTimeToLiveResult& WithTimeToLiveSpecification(TimeToLiveSpecificationT&& value) { SetTimeToLiveSpecification(std::forward<TimeToLiveSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateTimeToLiveResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TimeToLiveSpecification m_timeToLiveSpecification;
    bool m_timeToLiveSpecificationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
