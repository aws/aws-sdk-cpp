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
  class AWS_ALEXAFORBUSINESS_API GetSkillGroupResult
  {
  public:
    GetSkillGroupResult();
    GetSkillGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetSkillGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
