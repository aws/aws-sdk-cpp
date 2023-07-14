﻿/**
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
  class AWS_GROUNDSTATION_API ListDataflowEndpointGroupsResult
  {
  public:
    ListDataflowEndpointGroupsResult();
    ListDataflowEndpointGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListDataflowEndpointGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of dataflow endpoint groups.</p>
     */
    inline const Aws::Vector<DataflowEndpointListItem>& GetDataflowEndpointGroupList() const{ return m_dataflowEndpointGroupList; }

    /**
     * <p>A list of dataflow endpoint groups.</p>
     */
    inline void SetDataflowEndpointGroupList(const Aws::Vector<DataflowEndpointListItem>& value) { m_dataflowEndpointGroupList = value; }

    /**
     * <p>A list of dataflow endpoint groups.</p>
     */
    inline void SetDataflowEndpointGroupList(Aws::Vector<DataflowEndpointListItem>&& value) { m_dataflowEndpointGroupList = std::move(value); }

    /**
     * <p>A list of dataflow endpoint groups.</p>
     */
    inline ListDataflowEndpointGroupsResult& WithDataflowEndpointGroupList(const Aws::Vector<DataflowEndpointListItem>& value) { SetDataflowEndpointGroupList(value); return *this;}

    /**
     * <p>A list of dataflow endpoint groups.</p>
     */
    inline ListDataflowEndpointGroupsResult& WithDataflowEndpointGroupList(Aws::Vector<DataflowEndpointListItem>&& value) { SetDataflowEndpointGroupList(std::move(value)); return *this;}

    /**
     * <p>A list of dataflow endpoint groups.</p>
     */
    inline ListDataflowEndpointGroupsResult& AddDataflowEndpointGroupList(const DataflowEndpointListItem& value) { m_dataflowEndpointGroupList.push_back(value); return *this; }

    /**
     * <p>A list of dataflow endpoint groups.</p>
     */
    inline ListDataflowEndpointGroupsResult& AddDataflowEndpointGroupList(DataflowEndpointListItem&& value) { m_dataflowEndpointGroupList.push_back(std::move(value)); return *this; }


    /**
     * <p>Next token returned in the response of a previous
     * <code>ListDataflowEndpointGroups</code> call. Used to get the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Next token returned in the response of a previous
     * <code>ListDataflowEndpointGroups</code> call. Used to get the next page of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Next token returned in the response of a previous
     * <code>ListDataflowEndpointGroups</code> call. Used to get the next page of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Next token returned in the response of a previous
     * <code>ListDataflowEndpointGroups</code> call. Used to get the next page of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Next token returned in the response of a previous
     * <code>ListDataflowEndpointGroups</code> call. Used to get the next page of
     * results.</p>
     */
    inline ListDataflowEndpointGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Next token returned in the response of a previous
     * <code>ListDataflowEndpointGroups</code> call. Used to get the next page of
     * results.</p>
     */
    inline ListDataflowEndpointGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Next token returned in the response of a previous
     * <code>ListDataflowEndpointGroups</code> call. Used to get the next page of
     * results.</p>
     */
    inline ListDataflowEndpointGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DataflowEndpointListItem> m_dataflowEndpointGroupList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
