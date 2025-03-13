/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/DataflowEndpointListItem.h>
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
namespace GroundStation
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListDataflowEndpointGroupsResponse">AWS
   * API Reference</a></p>
   */
  class ListDataflowEndpointGroupsResult
  {
  public:
    AWS_GROUNDSTATION_API ListDataflowEndpointGroupsResult() = default;
    AWS_GROUNDSTATION_API ListDataflowEndpointGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API ListDataflowEndpointGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of dataflow endpoint groups.</p>
     */
    inline const Aws::Vector<DataflowEndpointListItem>& GetDataflowEndpointGroupList() const { return m_dataflowEndpointGroupList; }
    template<typename DataflowEndpointGroupListT = Aws::Vector<DataflowEndpointListItem>>
    void SetDataflowEndpointGroupList(DataflowEndpointGroupListT&& value) { m_dataflowEndpointGroupListHasBeenSet = true; m_dataflowEndpointGroupList = std::forward<DataflowEndpointGroupListT>(value); }
    template<typename DataflowEndpointGroupListT = Aws::Vector<DataflowEndpointListItem>>
    ListDataflowEndpointGroupsResult& WithDataflowEndpointGroupList(DataflowEndpointGroupListT&& value) { SetDataflowEndpointGroupList(std::forward<DataflowEndpointGroupListT>(value)); return *this;}
    template<typename DataflowEndpointGroupListT = DataflowEndpointListItem>
    ListDataflowEndpointGroupsResult& AddDataflowEndpointGroupList(DataflowEndpointGroupListT&& value) { m_dataflowEndpointGroupListHasBeenSet = true; m_dataflowEndpointGroupList.emplace_back(std::forward<DataflowEndpointGroupListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Next token returned in the response of a previous
     * <code>ListDataflowEndpointGroups</code> call. Used to get the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDataflowEndpointGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDataflowEndpointGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataflowEndpointListItem> m_dataflowEndpointGroupList;
    bool m_dataflowEndpointGroupListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
