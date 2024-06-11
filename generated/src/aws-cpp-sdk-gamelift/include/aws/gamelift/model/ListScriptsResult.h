/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListScriptsResult
  {
  public:
    AWS_GAMELIFT_API ListScriptsResult();
    AWS_GAMELIFT_API ListScriptsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API ListScriptsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A set of properties describing the requested script.</p>
     */
    inline const Aws::Vector<Script>& GetScripts() const{ return m_scripts; }
    inline void SetScripts(const Aws::Vector<Script>& value) { m_scripts = value; }
    inline void SetScripts(Aws::Vector<Script>&& value) { m_scripts = std::move(value); }
    inline ListScriptsResult& WithScripts(const Aws::Vector<Script>& value) { SetScripts(value); return *this;}
    inline ListScriptsResult& WithScripts(Aws::Vector<Script>&& value) { SetScripts(std::move(value)); return *this;}
    inline ListScriptsResult& AddScripts(const Script& value) { m_scripts.push_back(value); return *this; }
    inline ListScriptsResult& AddScripts(Script&& value) { m_scripts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListScriptsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListScriptsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListScriptsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListScriptsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListScriptsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListScriptsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Script> m_scripts;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
