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
  class GetRepositoryLinkResult
  {
  public:
    AWS_CODESTARCONNECTIONS_API GetRepositoryLinkResult();
    AWS_CODESTARCONNECTIONS_API GetRepositoryLinkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTARCONNECTIONS_API GetRepositoryLinkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The information returned for a specified repository link.</p>
     */
    inline const RepositoryLinkInfo& GetRepositoryLinkInfo() const{ return m_repositoryLinkInfo; }

    /**
     * <p>The information returned for a specified repository link.</p>
     */
    inline void SetRepositoryLinkInfo(const RepositoryLinkInfo& value) { m_repositoryLinkInfo = value; }

    /**
     * <p>The information returned for a specified repository link.</p>
     */
    inline void SetRepositoryLinkInfo(RepositoryLinkInfo&& value) { m_repositoryLinkInfo = std::move(value); }

    /**
     * <p>The information returned for a specified repository link.</p>
     */
    inline GetRepositoryLinkResult& WithRepositoryLinkInfo(const RepositoryLinkInfo& value) { SetRepositoryLinkInfo(value); return *this;}

    /**
     * <p>The information returned for a specified repository link.</p>
     */
    inline GetRepositoryLinkResult& WithRepositoryLinkInfo(RepositoryLinkInfo&& value) { SetRepositoryLinkInfo(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetRepositoryLinkResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetRepositoryLinkResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetRepositoryLinkResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    RepositoryLinkInfo m_repositoryLinkInfo;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
