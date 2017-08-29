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
#include <aws/elasticmapreduce/model/InstanceGroup.h>
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
  /**
   * <p>This input determines which instance groups to retrieve.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListInstanceGroupsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API ListInstanceGroupsResult
  {
  public:
    ListInstanceGroupsResult();
    ListInstanceGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListInstanceGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of instance groups for the cluster and given filters.</p>
     */
    inline const Aws::Vector<InstanceGroup>& GetInstanceGroups() const{ return m_instanceGroups; }

    /**
     * <p>The list of instance groups for the cluster and given filters.</p>
     */
    inline void SetInstanceGroups(const Aws::Vector<InstanceGroup>& value) { m_instanceGroups = value; }

    /**
     * <p>The list of instance groups for the cluster and given filters.</p>
     */
    inline void SetInstanceGroups(Aws::Vector<InstanceGroup>&& value) { m_instanceGroups = std::move(value); }

    /**
     * <p>The list of instance groups for the cluster and given filters.</p>
     */
    inline ListInstanceGroupsResult& WithInstanceGroups(const Aws::Vector<InstanceGroup>& value) { SetInstanceGroups(value); return *this;}

    /**
     * <p>The list of instance groups for the cluster and given filters.</p>
     */
    inline ListInstanceGroupsResult& WithInstanceGroups(Aws::Vector<InstanceGroup>&& value) { SetInstanceGroups(std::move(value)); return *this;}

    /**
     * <p>The list of instance groups for the cluster and given filters.</p>
     */
    inline ListInstanceGroupsResult& AddInstanceGroups(const InstanceGroup& value) { m_instanceGroups.push_back(value); return *this; }

    /**
     * <p>The list of instance groups for the cluster and given filters.</p>
     */
    inline ListInstanceGroupsResult& AddInstanceGroups(InstanceGroup&& value) { m_instanceGroups.push_back(std::move(value)); return *this; }


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
    inline ListInstanceGroupsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListInstanceGroupsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListInstanceGroupsResult& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::Vector<InstanceGroup> m_instanceGroups;

    Aws::String m_marker;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
