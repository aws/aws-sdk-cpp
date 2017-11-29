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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/GroupNameAndArn.h>
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
namespace IoT
{
namespace Model
{
  class AWS_IOT_API ListThingGroupsResult
  {
  public:
    ListThingGroupsResult();
    ListThingGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListThingGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The thing groups.</p>
     */
    inline const Aws::Vector<GroupNameAndArn>& GetThingGroups() const{ return m_thingGroups; }

    /**
     * <p>The thing groups.</p>
     */
    inline void SetThingGroups(const Aws::Vector<GroupNameAndArn>& value) { m_thingGroups = value; }

    /**
     * <p>The thing groups.</p>
     */
    inline void SetThingGroups(Aws::Vector<GroupNameAndArn>&& value) { m_thingGroups = std::move(value); }

    /**
     * <p>The thing groups.</p>
     */
    inline ListThingGroupsResult& WithThingGroups(const Aws::Vector<GroupNameAndArn>& value) { SetThingGroups(value); return *this;}

    /**
     * <p>The thing groups.</p>
     */
    inline ListThingGroupsResult& WithThingGroups(Aws::Vector<GroupNameAndArn>&& value) { SetThingGroups(std::move(value)); return *this;}

    /**
     * <p>The thing groups.</p>
     */
    inline ListThingGroupsResult& AddThingGroups(const GroupNameAndArn& value) { m_thingGroups.push_back(value); return *this; }

    /**
     * <p>The thing groups.</p>
     */
    inline ListThingGroupsResult& AddThingGroups(GroupNameAndArn&& value) { m_thingGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>The token used to get the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token used to get the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token used to get the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token used to get the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token used to get the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline ListThingGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used to get the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline ListThingGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used to get the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline ListThingGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<GroupNameAndArn> m_thingGroups;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
