/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/model/SkillGroup.h>
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
  class GetSkillGroupResult
  {
  public:
    AWS_ALEXAFORBUSINESS_API GetSkillGroupResult();
    AWS_ALEXAFORBUSINESS_API GetSkillGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ALEXAFORBUSINESS_API GetSkillGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the skill group requested. Required.</p>
     */
    inline const SkillGroup& GetSkillGroup() const{ return m_skillGroup; }

    /**
     * <p>The details of the skill group requested. Required.</p>
     */
    inline void SetSkillGroup(const SkillGroup& value) { m_skillGroup = value; }

    /**
     * <p>The details of the skill group requested. Required.</p>
     */
    inline void SetSkillGroup(SkillGroup&& value) { m_skillGroup = std::move(value); }

    /**
     * <p>The details of the skill group requested. Required.</p>
     */
    inline GetSkillGroupResult& WithSkillGroup(const SkillGroup& value) { SetSkillGroup(value); return *this;}

    /**
     * <p>The details of the skill group requested. Required.</p>
     */
    inline GetSkillGroupResult& WithSkillGroup(SkillGroup&& value) { SetSkillGroup(std::move(value)); return *this;}

  private:

    SkillGroup m_skillGroup;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
