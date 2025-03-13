/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/model/WorkUnitRange.h>
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
namespace LakeFormation
{
namespace Model
{
  /**
   * <p>A structure for the output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetWorkUnitsResponse">AWS
   * API Reference</a></p>
   */
  class GetWorkUnitsResult
  {
  public:
    AWS_LAKEFORMATION_API GetWorkUnitsResult() = default;
    AWS_LAKEFORMATION_API GetWorkUnitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API GetWorkUnitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetWorkUnitsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the plan query operation.</p>
     */
    inline const Aws::String& GetQueryId() const { return m_queryId; }
    template<typename QueryIdT = Aws::String>
    void SetQueryId(QueryIdT&& value) { m_queryIdHasBeenSet = true; m_queryId = std::forward<QueryIdT>(value); }
    template<typename QueryIdT = Aws::String>
    GetWorkUnitsResult& WithQueryId(QueryIdT&& value) { SetQueryId(std::forward<QueryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>WorkUnitRangeList</code> object that specifies the valid range of
     * work unit IDs for querying the execution service.</p>
     */
    inline const Aws::Vector<WorkUnitRange>& GetWorkUnitRanges() const { return m_workUnitRanges; }
    template<typename WorkUnitRangesT = Aws::Vector<WorkUnitRange>>
    void SetWorkUnitRanges(WorkUnitRangesT&& value) { m_workUnitRangesHasBeenSet = true; m_workUnitRanges = std::forward<WorkUnitRangesT>(value); }
    template<typename WorkUnitRangesT = Aws::Vector<WorkUnitRange>>
    GetWorkUnitsResult& WithWorkUnitRanges(WorkUnitRangesT&& value) { SetWorkUnitRanges(std::forward<WorkUnitRangesT>(value)); return *this;}
    template<typename WorkUnitRangesT = WorkUnitRange>
    GetWorkUnitsResult& AddWorkUnitRanges(WorkUnitRangesT&& value) { m_workUnitRangesHasBeenSet = true; m_workUnitRanges.emplace_back(std::forward<WorkUnitRangesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetWorkUnitsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_queryId;
    bool m_queryIdHasBeenSet = false;

    Aws::Vector<WorkUnitRange> m_workUnitRanges;
    bool m_workUnitRangesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
