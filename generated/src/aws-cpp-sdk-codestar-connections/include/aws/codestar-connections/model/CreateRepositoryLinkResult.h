/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/codestar-connections/model/RepositoryLinkInfo.h>
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
namespace CodeStarconnections
{
namespace Model
{
  class CreateRepositoryLinkResult
  {
  public:
    AWS_CODESTARCONNECTIONS_API CreateRepositoryLinkResult() = default;
    AWS_CODESTARCONNECTIONS_API CreateRepositoryLinkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTARCONNECTIONS_API CreateRepositoryLinkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The returned information about the created repository link.</p>
     */
    inline const RepositoryLinkInfo& GetRepositoryLinkInfo() const { return m_repositoryLinkInfo; }
    template<typename RepositoryLinkInfoT = RepositoryLinkInfo>
    void SetRepositoryLinkInfo(RepositoryLinkInfoT&& value) { m_repositoryLinkInfoHasBeenSet = true; m_repositoryLinkInfo = std::forward<RepositoryLinkInfoT>(value); }
    template<typename RepositoryLinkInfoT = RepositoryLinkInfo>
    CreateRepositoryLinkResult& WithRepositoryLinkInfo(RepositoryLinkInfoT&& value) { SetRepositoryLinkInfo(std::forward<RepositoryLinkInfoT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateRepositoryLinkResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RepositoryLinkInfo m_repositoryLinkInfo;
    bool m_repositoryLinkInfoHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
