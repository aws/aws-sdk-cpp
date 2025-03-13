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
    AWS_DYNAMODB_API DescribeTimeToLiveResult() = default;
    AWS_DYNAMODB_API DescribeTimeToLiveResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API DescribeTimeToLiveResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p/>
     */
    inline const TimeToLiveDescription& GetTimeToLiveDescription() const { return m_timeToLiveDescription; }
    template<typename TimeToLiveDescriptionT = TimeToLiveDescription>
    void SetTimeToLiveDescription(TimeToLiveDescriptionT&& value) { m_timeToLiveDescriptionHasBeenSet = true; m_timeToLiveDescription = std::forward<TimeToLiveDescriptionT>(value); }
    template<typename TimeToLiveDescriptionT = TimeToLiveDescription>
    DescribeTimeToLiveResult& WithTimeToLiveDescription(TimeToLiveDescriptionT&& value) { SetTimeToLiveDescription(std::forward<TimeToLiveDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeTimeToLiveResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TimeToLiveDescription m_timeToLiveDescription;
    bool m_timeToLiveDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
