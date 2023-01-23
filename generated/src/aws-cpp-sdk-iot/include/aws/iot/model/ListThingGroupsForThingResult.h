/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListThingGroupsForThingResult
  {
  public:
    AWS_IOT_API ListThingGroupsForThingResult();
    AWS_IOT_API ListThingGroupsForThingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListThingGroupsForThingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListThingGroupsForThingResult& WithThingGroups(const Aws::Vector<GroupNameAndArn>& value) { SetThingGroups(value); return *this;}

    /**
     * <p>The thing groups.</p>
     */
    inline ListThingGroupsForThingResult& WithThingGroups(Aws::Vector<GroupNameAndArn>&& value) { SetThingGroups(std::move(value)); return *this;}

    /**
     * <p>The thing groups.</p>
     */
    inline ListThingGroupsForThingResult& AddThingGroups(const GroupNameAndArn& value) { m_thingGroups.push_back(value); return *this; }

    /**
     * <p>The thing groups.</p>
     */
    inline ListThingGroupsForThingResult& AddThingGroups(GroupNameAndArn&& value) { m_thingGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListThingGroupsForThingResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListThingGroupsForThingResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListThingGroupsForThingResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<GroupNameAndArn> m_thingGroups;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
