/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/SkillsStoreSkill.h>
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
  class ListSkillsStoreSkillsByCategoryResult
  {
  public:
    AWS_ALEXAFORBUSINESS_API ListSkillsStoreSkillsByCategoryResult();
    AWS_ALEXAFORBUSINESS_API ListSkillsStoreSkillsByCategoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ALEXAFORBUSINESS_API ListSkillsStoreSkillsByCategoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The skill store skills.</p>
     */
    inline const Aws::Vector<SkillsStoreSkill>& GetSkillsStoreSkills() const{ return m_skillsStoreSkills; }

    /**
     * <p>The skill store skills.</p>
     */
    inline void SetSkillsStoreSkills(const Aws::Vector<SkillsStoreSkill>& value) { m_skillsStoreSkills = value; }

    /**
     * <p>The skill store skills.</p>
     */
    inline void SetSkillsStoreSkills(Aws::Vector<SkillsStoreSkill>&& value) { m_skillsStoreSkills = std::move(value); }

    /**
     * <p>The skill store skills.</p>
     */
    inline ListSkillsStoreSkillsByCategoryResult& WithSkillsStoreSkills(const Aws::Vector<SkillsStoreSkill>& value) { SetSkillsStoreSkills(value); return *this;}

    /**
     * <p>The skill store skills.</p>
     */
    inline ListSkillsStoreSkillsByCategoryResult& WithSkillsStoreSkills(Aws::Vector<SkillsStoreSkill>&& value) { SetSkillsStoreSkills(std::move(value)); return *this;}

    /**
     * <p>The skill store skills.</p>
     */
    inline ListSkillsStoreSkillsByCategoryResult& AddSkillsStoreSkills(const SkillsStoreSkill& value) { m_skillsStoreSkills.push_back(value); return *this; }

    /**
     * <p>The skill store skills.</p>
     */
    inline ListSkillsStoreSkillsByCategoryResult& AddSkillsStoreSkills(SkillsStoreSkill&& value) { m_skillsStoreSkills.push_back(std::move(value)); return *this; }


    /**
     * <p>The tokens used for pagination.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The tokens used for pagination.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The tokens used for pagination.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The tokens used for pagination.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The tokens used for pagination.</p>
     */
    inline ListSkillsStoreSkillsByCategoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The tokens used for pagination.</p>
     */
    inline ListSkillsStoreSkillsByCategoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The tokens used for pagination.</p>
     */
    inline ListSkillsStoreSkillsByCategoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SkillsStoreSkill> m_skillsStoreSkills;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
