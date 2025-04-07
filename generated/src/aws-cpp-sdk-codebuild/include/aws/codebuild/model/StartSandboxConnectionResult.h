/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/SSMSession.h>
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
namespace CodeBuild
{
namespace Model
{
  class StartSandboxConnectionResult
  {
  public:
    AWS_CODEBUILD_API StartSandboxConnectionResult() = default;
    AWS_CODEBUILD_API StartSandboxConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API StartSandboxConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the Session Manager session.</p>
     */
    inline const SSMSession& GetSsmSession() const { return m_ssmSession; }
    template<typename SsmSessionT = SSMSession>
    void SetSsmSession(SsmSessionT&& value) { m_ssmSessionHasBeenSet = true; m_ssmSession = std::forward<SsmSessionT>(value); }
    template<typename SsmSessionT = SSMSession>
    StartSandboxConnectionResult& WithSsmSession(SsmSessionT&& value) { SetSsmSession(std::forward<SsmSessionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartSandboxConnectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SSMSession m_ssmSession;
    bool m_ssmSessionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
