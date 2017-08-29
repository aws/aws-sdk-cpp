/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/InstanceFleet.h>
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
namespace EMR
{
namespace Model
{
  class AWS_EMR_API ListInstanceFleetsResult
  {
  public:
    ListInstanceFleetsResult();
    ListInstanceFleetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListInstanceFleetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of instance fleets for the cluster and given filters.</p>
     */
    inline const Aws::Vector<InstanceFleet>& GetInstanceFleets() const{ return m_instanceFleets; }

    /**
     * <p>The list of instance fleets for the cluster and given filters.</p>
     */
    inline void SetInstanceFleets(const Aws::Vector<InstanceFleet>& value) { m_instanceFleets = value; }

    /**
     * <p>The list of instance fleets for the cluster and given filters.</p>
     */
    inline void SetInstanceFleets(Aws::Vector<InstanceFleet>&& value) { m_instanceFleets = std::move(value); }

    /**
     * <p>The list of instance fleets for the cluster and given filters.</p>
     */
    inline ListInstanceFleetsResult& WithInstanceFleets(const Aws::Vector<InstanceFleet>& value) { SetInstanceFleets(value); return *this;}

    /**
     * <p>The list of instance fleets for the cluster and given filters.</p>
     */
    inline ListInstanceFleetsResult& WithInstanceFleets(Aws::Vector<InstanceFleet>&& value) { SetInstanceFleets(std::move(value)); return *this;}

    /**
     * <p>The list of instance fleets for the cluster and given filters.</p>
     */
    inline ListInstanceFleetsResult& AddInstanceFleets(const InstanceFleet& value) { m_instanceFleets.push_back(value); return *this; }

    /**
     * <p>The list of instance fleets for the cluster and given filters.</p>
     */
    inline ListInstanceFleetsResult& AddInstanceFleets(InstanceFleet&& value) { m_instanceFleets.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListInstanceFleetsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListInstanceFleetsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListInstanceFleetsResult& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::Vector<InstanceFleet> m_instanceFleets;

    Aws::String m_marker;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
