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
#include <aws/gamelift/model/Alias.h>
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
  /**
   * <p>Represents the returned data in response to a request action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListAliasesOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API ListAliasesResult
  {
  public:
    ListAliasesResult();
    ListAliasesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListAliasesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Collection of alias records that match the list request.</p>
     */
    inline const Aws::Vector<Alias>& GetAliases() const{ return m_aliases; }

    /**
     * <p>Collection of alias records that match the list request.</p>
     */
    inline void SetAliases(const Aws::Vector<Alias>& value) { m_aliases = value; }

    /**
     * <p>Collection of alias records that match the list request.</p>
     */
    inline void SetAliases(Aws::Vector<Alias>&& value) { m_aliases = std::move(value); }

    /**
     * <p>Collection of alias records that match the list request.</p>
     */
    inline ListAliasesResult& WithAliases(const Aws::Vector<Alias>& value) { SetAliases(value); return *this;}

    /**
     * <p>Collection of alias records that match the list request.</p>
     */
    inline ListAliasesResult& WithAliases(Aws::Vector<Alias>&& value) { SetAliases(std::move(value)); return *this;}

    /**
     * <p>Collection of alias records that match the list request.</p>
     */
    inline ListAliasesResult& AddAliases(const Alias& value) { m_aliases.push_back(value); return *this; }

    /**
     * <p>Collection of alias records that match the list request.</p>
     */
    inline ListAliasesResult& AddAliases(Alias&& value) { m_aliases.push_back(std::move(value)); return *this; }

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
    inline ListAliasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline ListAliasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline ListAliasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Alias> m_aliases;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
