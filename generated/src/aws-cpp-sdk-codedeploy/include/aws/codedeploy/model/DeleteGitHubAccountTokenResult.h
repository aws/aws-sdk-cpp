/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
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
   * <p>Represents the output of a <code>DeleteGitHubAccountToken</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeleteGitHubAccountTokenOutput">AWS
   * API Reference</a></p>
   */
  class DeleteGitHubAccountTokenResult
  {
  public:
    AWS_CODEDEPLOY_API DeleteGitHubAccountTokenResult() = default;
    AWS_CODEDEPLOY_API DeleteGitHubAccountTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API DeleteGitHubAccountTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the GitHub account connection that was deleted.</p>
     */
    inline const Aws::String& GetTokenName() const { return m_tokenName; }
    template<typename TokenNameT = Aws::String>
    void SetTokenName(TokenNameT&& value) { m_tokenNameHasBeenSet = true; m_tokenName = std::forward<TokenNameT>(value); }
    template<typename TokenNameT = Aws::String>
    DeleteGitHubAccountTokenResult& WithTokenName(TokenNameT&& value) { SetTokenName(std::forward<TokenNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteGitHubAccountTokenResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tokenName;
    bool m_tokenNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
