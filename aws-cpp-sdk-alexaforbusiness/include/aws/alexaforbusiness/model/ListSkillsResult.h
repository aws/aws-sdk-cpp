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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/SkillSummary.h>
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
  class AWS_ALEXAFORBUSINESS_API ListSkillsResult
  {
  public:
    ListSkillsResult();
    ListSkillsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListSkillsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of enabled skills requested. Required.</p>
     */
    inline const Aws::Vector<SkillSummary>& GetSkillSummaries() const{ return m_skillSummaries; }

    /**
     * <p>The list of enabled skills requested. Required.</p>
     */
    inline void SetSkillSummaries(const Aws::Vector<SkillSummary>& value) { m_skillSummaries = value; }

    /**
     * <p>The list of enabled skills requested. Required.</p>
     */
    inline void SetSkillSummaries(Aws::Vector<SkillSummary>&& value) { m_skillSummaries = std::move(value); }

    /**
     * <p>The list of enabled skills requested. Required.</p>
     */
    inline ListSkillsResult& WithSkillSummaries(const Aws::Vector<SkillSummary>& value) { SetSkillSummaries(value); return *this;}

    /**
     * <p>The list of enabled skills requested. Required.</p>
     */
    inline ListSkillsResult& WithSkillSummaries(Aws::Vector<SkillSummary>&& value) { SetSkillSummaries(std::move(value)); return *this;}

    /**
     * <p>The list of enabled skills requested. Required.</p>
     */
    inline ListSkillsResult& AddSkillSummaries(const SkillSummary& value) { m_skillSummaries.push_back(value); return *this; }

    /**
     * <p>The list of enabled skills requested. Required.</p>
     */
    inline ListSkillsResult& AddSkillSummaries(SkillSummary&& value) { m_skillSummaries.push_back(std::move(value)); return *this; }


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
    inline ListSkillsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline ListSkillsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline ListSkillsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SkillSummary> m_skillSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
