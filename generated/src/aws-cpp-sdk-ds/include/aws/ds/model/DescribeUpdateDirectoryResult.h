/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/UpdateInfoEntry.h>
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
  class DescribeUpdateDirectoryResult
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeUpdateDirectoryResult() = default;
    AWS_DIRECTORYSERVICE_API DescribeUpdateDirectoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API DescribeUpdateDirectoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The list of update activities on a directory for the requested update type.
     * </p>
     */
    inline const Aws::Vector<UpdateInfoEntry>& GetUpdateActivities() const { return m_updateActivities; }
    template<typename UpdateActivitiesT = Aws::Vector<UpdateInfoEntry>>
    void SetUpdateActivities(UpdateActivitiesT&& value) { m_updateActivitiesHasBeenSet = true; m_updateActivities = std::forward<UpdateActivitiesT>(value); }
    template<typename UpdateActivitiesT = Aws::Vector<UpdateInfoEntry>>
    DescribeUpdateDirectoryResult& WithUpdateActivities(UpdateActivitiesT&& value) { SetUpdateActivities(std::forward<UpdateActivitiesT>(value)); return *this;}
    template<typename UpdateActivitiesT = UpdateInfoEntry>
    DescribeUpdateDirectoryResult& AddUpdateActivities(UpdateActivitiesT&& value) { m_updateActivitiesHasBeenSet = true; m_updateActivities.emplace_back(std::forward<UpdateActivitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeUpdateDirectoryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeUpdateDirectoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UpdateInfoEntry> m_updateActivities;
    bool m_updateActivitiesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
