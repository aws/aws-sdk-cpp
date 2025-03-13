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
    AWS_CODEDEPLOY_API ListGitHubAccountTokenNamesResult() = default;
    AWS_CODEDEPLOY_API ListGitHubAccountTokenNamesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API ListGitHubAccountTokenNamesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of names of connections to GitHub accounts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTokenNameList() const { return m_tokenNameList; }
    template<typename TokenNameListT = Aws::Vector<Aws::String>>
    void SetTokenNameList(TokenNameListT&& value) { m_tokenNameListHasBeenSet = true; m_tokenNameList = std::forward<TokenNameListT>(value); }
    template<typename TokenNameListT = Aws::Vector<Aws::String>>
    ListGitHubAccountTokenNamesResult& WithTokenNameList(TokenNameListT&& value) { SetTokenNameList(std::forward<TokenNameListT>(value)); return *this;}
    template<typename TokenNameListT = Aws::String>
    ListGitHubAccountTokenNamesResult& AddTokenNameList(TokenNameListT&& value) { m_tokenNameListHasBeenSet = true; m_tokenNameList.emplace_back(std::forward<TokenNameListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent <code>ListGitHubAccountTokenNames</code> call to
     * return the next set of names in the list. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListGitHubAccountTokenNamesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListGitHubAccountTokenNamesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_tokenNameList;
    bool m_tokenNameListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
