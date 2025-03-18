/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/FieldIndex.h>
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
  class DescribeFieldIndexesResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API DescribeFieldIndexesResult() = default;
    AWS_CLOUDWATCHLOGS_API DescribeFieldIndexesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API DescribeFieldIndexesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array containing the field index information.</p>
     */
    inline const Aws::Vector<FieldIndex>& GetFieldIndexes() const { return m_fieldIndexes; }
    template<typename FieldIndexesT = Aws::Vector<FieldIndex>>
    void SetFieldIndexes(FieldIndexesT&& value) { m_fieldIndexesHasBeenSet = true; m_fieldIndexes = std::forward<FieldIndexesT>(value); }
    template<typename FieldIndexesT = Aws::Vector<FieldIndex>>
    DescribeFieldIndexesResult& WithFieldIndexes(FieldIndexesT&& value) { SetFieldIndexes(std::forward<FieldIndexesT>(value)); return *this;}
    template<typename FieldIndexesT = FieldIndex>
    DescribeFieldIndexesResult& AddFieldIndexes(FieldIndexesT&& value) { m_fieldIndexesHasBeenSet = true; m_fieldIndexes.emplace_back(std::forward<FieldIndexesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeFieldIndexesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFieldIndexesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FieldIndex> m_fieldIndexes;
    bool m_fieldIndexesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
