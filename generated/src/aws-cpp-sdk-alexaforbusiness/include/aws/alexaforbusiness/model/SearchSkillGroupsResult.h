/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/SkillGroupData.h>
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
namespace AlexaForBusiness
{
namespace Model
{
  class SearchSkillGroupsResult
  {
  public:
    AWS_ALEXAFORBUSINESS_API SearchSkillGroupsResult();
    AWS_ALEXAFORBUSINESS_API SearchSkillGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ALEXAFORBUSINESS_API SearchSkillGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The skill groups that meet the filter criteria, in sort order.</p>
     */
    inline const Aws::Vector<SkillGroupData>& GetSkillGroups() const{ return m_skillGroups; }

    /**
     * <p>The skill groups that meet the filter criteria, in sort order.</p>
     */
    inline void SetSkillGroups(const Aws::Vector<SkillGroupData>& value) { m_skillGroups = value; }

    /**
     * <p>The skill groups that meet the filter criteria, in sort order.</p>
     */
    inline void SetSkillGroups(Aws::Vector<SkillGroupData>&& value) { m_skillGroups = std::move(value); }

    /**
     * <p>The skill groups that meet the filter criteria, in sort order.</p>
     */
    inline SearchSkillGroupsResult& WithSkillGroups(const Aws::Vector<SkillGroupData>& value) { SetSkillGroups(value); return *this;}

    /**
     * <p>The skill groups that meet the filter criteria, in sort order.</p>
     */
    inline SearchSkillGroupsResult& WithSkillGroups(Aws::Vector<SkillGroupData>&& value) { SetSkillGroups(std::move(value)); return *this;}

    /**
     * <p>The skill groups that meet the filter criteria, in sort order.</p>
     */
    inline SearchSkillGroupsResult& AddSkillGroups(const SkillGroupData& value) { m_skillGroups.push_back(value); return *this; }

    /**
     * <p>The skill groups that meet the filter criteria, in sort order.</p>
     */
    inline SearchSkillGroupsResult& AddSkillGroups(SkillGroupData&& value) { m_skillGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline SearchSkillGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline SearchSkillGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline SearchSkillGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The total number of skill groups returned.</p>
     */
    inline int GetTotalCount() const{ return m_totalCount; }

    /**
     * <p>The total number of skill groups returned.</p>
     */
    inline void SetTotalCount(int value) { m_totalCount = value; }

    /**
     * <p>The total number of skill groups returned.</p>
     */
    inline SearchSkillGroupsResult& WithTotalCount(int value) { SetTotalCount(value); return *this;}

  private:

    Aws::Vector<SkillGroupData> m_skillGroups;

    Aws::String m_nextToken;

    int m_totalCount;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
