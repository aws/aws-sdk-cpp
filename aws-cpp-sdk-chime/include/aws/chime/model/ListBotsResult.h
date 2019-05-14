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
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/Bot.h>
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
namespace Chime
{
namespace Model
{
  class AWS_CHIME_API ListBotsResult
  {
  public:
    ListBotsResult();
    ListBotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListBotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of bots and bot details.</p>
     */
    inline const Aws::Vector<Bot>& GetBots() const{ return m_bots; }

    /**
     * <p>List of bots and bot details.</p>
     */
    inline void SetBots(const Aws::Vector<Bot>& value) { m_bots = value; }

    /**
     * <p>List of bots and bot details.</p>
     */
    inline void SetBots(Aws::Vector<Bot>&& value) { m_bots = std::move(value); }

    /**
     * <p>List of bots and bot details.</p>
     */
    inline ListBotsResult& WithBots(const Aws::Vector<Bot>& value) { SetBots(value); return *this;}

    /**
     * <p>List of bots and bot details.</p>
     */
    inline ListBotsResult& WithBots(Aws::Vector<Bot>&& value) { SetBots(std::move(value)); return *this;}

    /**
     * <p>List of bots and bot details.</p>
     */
    inline ListBotsResult& AddBots(const Bot& value) { m_bots.push_back(value); return *this; }

    /**
     * <p>List of bots and bot details.</p>
     */
    inline ListBotsResult& AddBots(Bot&& value) { m_bots.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListBotsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListBotsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListBotsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Bot> m_bots;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
