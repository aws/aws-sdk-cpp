/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodeDeploy
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>ListGitHubAccountTokenNames</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListGitHubAccountTokenNamesOutput">AWS
   * API Reference</a></p>
   */
  class ListGitHubAccountTokenNamesResult
  {
  public:
    AWS_CODEDEPLOY_API ListGitHubAccountTokenNamesResult();
    AWS_CODEDEPLOY_API ListGitHubAccountTokenNamesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API ListGitHubAccountTokenNamesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of names of connections to GitHub accounts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTokenNameList() const{ return m_tokenNameList; }

    /**
     * <p>A list of names of connections to GitHub accounts.</p>
     */
    inline void SetTokenNameList(const Aws::Vector<Aws::String>& value) { m_tokenNameList = value; }

    /**
     * <p>A list of names of connections to GitHub accounts.</p>
     */
    inline void SetTokenNameList(Aws::Vector<Aws::String>&& value) { m_tokenNameList = std::move(value); }

    /**
     * <p>A list of names of connections to GitHub accounts.</p>
     */
    inline ListGitHubAccountTokenNamesResult& WithTokenNameList(const Aws::Vector<Aws::String>& value) { SetTokenNameList(value); return *this;}

    /**
     * <p>A list of names of connections to GitHub accounts.</p>
     */
    inline ListGitHubAccountTokenNamesResult& WithTokenNameList(Aws::Vector<Aws::String>&& value) { SetTokenNameList(std::move(value)); return *this;}

    /**
     * <p>A list of names of connections to GitHub accounts.</p>
     */
    inline ListGitHubAccountTokenNamesResult& AddTokenNameList(const Aws::String& value) { m_tokenNameList.push_back(value); return *this; }

    /**
     * <p>A list of names of connections to GitHub accounts.</p>
     */
    inline ListGitHubAccountTokenNamesResult& AddTokenNameList(Aws::String&& value) { m_tokenNameList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of names of connections to GitHub accounts.</p>
     */
    inline ListGitHubAccountTokenNamesResult& AddTokenNameList(const char* value) { m_tokenNameList.push_back(value); return *this; }


    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent <code>ListGitHubAccountTokenNames</code> call to
     * return the next set of names in the list. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent <code>ListGitHubAccountTokenNames</code> call to
     * return the next set of names in the list. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent <code>ListGitHubAccountTokenNames</code> call to
     * return the next set of names in the list. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent <code>ListGitHubAccountTokenNames</code> call to
     * return the next set of names in the list. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent <code>ListGitHubAccountTokenNames</code> call to
     * return the next set of names in the list. </p>
     */
    inline ListGitHubAccountTokenNamesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent <code>ListGitHubAccountTokenNames</code> call to
     * return the next set of names in the list. </p>
     */
    inline ListGitHubAccountTokenNamesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent <code>ListGitHubAccountTokenNames</code> call to
     * return the next set of names in the list. </p>
     */
    inline ListGitHubAccountTokenNamesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_tokenNameList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
