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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/Script.h>
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
namespace GameLift
{
namespace Model
{
  class AWS_GAMELIFT_API ListScriptsResult
  {
  public:
    ListScriptsResult();
    ListScriptsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListScriptsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Set of properties describing the requested script.</p>
     */
    inline const Aws::Vector<Script>& GetScripts() const{ return m_scripts; }

    /**
     * <p>Set of properties describing the requested script.</p>
     */
    inline void SetScripts(const Aws::Vector<Script>& value) { m_scripts = value; }

    /**
     * <p>Set of properties describing the requested script.</p>
     */
    inline void SetScripts(Aws::Vector<Script>&& value) { m_scripts = std::move(value); }

    /**
     * <p>Set of properties describing the requested script.</p>
     */
    inline ListScriptsResult& WithScripts(const Aws::Vector<Script>& value) { SetScripts(value); return *this;}

    /**
     * <p>Set of properties describing the requested script.</p>
     */
    inline ListScriptsResult& WithScripts(Aws::Vector<Script>&& value) { SetScripts(std::move(value)); return *this;}

    /**
     * <p>Set of properties describing the requested script.</p>
     */
    inline ListScriptsResult& AddScripts(const Script& value) { m_scripts.push_back(value); return *this; }

    /**
     * <p>Set of properties describing the requested script.</p>
     */
    inline ListScriptsResult& AddScripts(Script&& value) { m_scripts.push_back(std::move(value)); return *this; }


    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline ListScriptsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline ListScriptsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline ListScriptsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Script> m_scripts;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
