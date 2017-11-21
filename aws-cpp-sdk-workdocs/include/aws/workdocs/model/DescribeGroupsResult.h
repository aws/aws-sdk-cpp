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
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/GroupMetadata.h>
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
namespace WorkDocs
{
namespace Model
{
  class AWS_WORKDOCS_API DescribeGroupsResult
  {
  public:
    DescribeGroupsResult();
    DescribeGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of groups.</p>
     */
    inline const Aws::Vector<GroupMetadata>& GetGroups() const{ return m_groups; }

    /**
     * <p>The list of groups.</p>
     */
    inline void SetGroups(const Aws::Vector<GroupMetadata>& value) { m_groups = value; }

    /**
     * <p>The list of groups.</p>
     */
    inline void SetGroups(Aws::Vector<GroupMetadata>&& value) { m_groups = std::move(value); }

    /**
     * <p>The list of groups.</p>
     */
    inline DescribeGroupsResult& WithGroups(const Aws::Vector<GroupMetadata>& value) { SetGroups(value); return *this;}

    /**
     * <p>The list of groups.</p>
     */
    inline DescribeGroupsResult& WithGroups(Aws::Vector<GroupMetadata>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>The list of groups.</p>
     */
    inline DescribeGroupsResult& AddGroups(const GroupMetadata& value) { m_groups.push_back(value); return *this; }

    /**
     * <p>The list of groups.</p>
     */
    inline DescribeGroupsResult& AddGroups(GroupMetadata&& value) { m_groups.push_back(std::move(value)); return *this; }


    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline DescribeGroupsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline DescribeGroupsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline DescribeGroupsResult& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::Vector<GroupMetadata> m_groups;

    Aws::String m_marker;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
