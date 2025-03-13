/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/codeconnections/model/RepositoryLinkInfo.h>
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
namespace CodeConnections
{
namespace Model
{
  class GetRepositoryLinkResult
  {
  public:
    AWS_CODECONNECTIONS_API GetRepositoryLinkResult() = default;
    AWS_CODECONNECTIONS_API GetRepositoryLinkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECONNECTIONS_API GetRepositoryLinkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The information returned for a specified repository link.</p>
     */
    inline const RepositoryLinkInfo& GetRepositoryLinkInfo() const { return m_repositoryLinkInfo; }
    template<typename RepositoryLinkInfoT = RepositoryLinkInfo>
    void SetRepositoryLinkInfo(RepositoryLinkInfoT&& value) { m_repositoryLinkInfoHasBeenSet = true; m_repositoryLinkInfo = std::forward<RepositoryLinkInfoT>(value); }
    template<typename RepositoryLinkInfoT = RepositoryLinkInfo>
    GetRepositoryLinkResult& WithRepositoryLinkInfo(RepositoryLinkInfoT&& value) { SetRepositoryLinkInfo(std::forward<RepositoryLinkInfoT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRepositoryLinkResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RepositoryLinkInfo m_repositoryLinkInfo;
    bool m_repositoryLinkInfoHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
