/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/model/HybridUpdateActivities.h>
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
namespace DirectoryService
{
namespace Model
{
  class DescribeHybridADUpdateResult
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeHybridADUpdateResult() = default;
    AWS_DIRECTORYSERVICE_API DescribeHybridADUpdateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API DescribeHybridADUpdateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about update activities for the hybrid directory, organized by
     * update type.</p>
     */
    inline const HybridUpdateActivities& GetUpdateActivities() const { return m_updateActivities; }
    template<typename UpdateActivitiesT = HybridUpdateActivities>
    void SetUpdateActivities(UpdateActivitiesT&& value) { m_updateActivitiesHasBeenSet = true; m_updateActivities = std::forward<UpdateActivitiesT>(value); }
    template<typename UpdateActivitiesT = HybridUpdateActivities>
    DescribeHybridADUpdateResult& WithUpdateActivities(UpdateActivitiesT&& value) { SetUpdateActivities(std::forward<UpdateActivitiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent request to retrieve the next
     * set of items.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeHybridADUpdateResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeHybridADUpdateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    HybridUpdateActivities m_updateActivities;
    bool m_updateActivitiesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
