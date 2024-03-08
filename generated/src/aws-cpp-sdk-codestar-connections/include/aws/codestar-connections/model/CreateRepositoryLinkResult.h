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
    AWS_CODESTARCONNECTIONS_API CreateRepositoryLinkResult();
    AWS_CODESTARCONNECTIONS_API CreateRepositoryLinkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTARCONNECTIONS_API CreateRepositoryLinkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The returned information about the created repository link.</p>
     */
    inline const RepositoryLinkInfo& GetRepositoryLinkInfo() const{ return m_repositoryLinkInfo; }

    /**
     * <p>The returned information about the created repository link.</p>
     */
    inline void SetRepositoryLinkInfo(const RepositoryLinkInfo& value) { m_repositoryLinkInfo = value; }

    /**
     * <p>The returned information about the created repository link.</p>
     */
    inline void SetRepositoryLinkInfo(RepositoryLinkInfo&& value) { m_repositoryLinkInfo = std::move(value); }

    /**
     * <p>The returned information about the created repository link.</p>
     */
    inline CreateRepositoryLinkResult& WithRepositoryLinkInfo(const RepositoryLinkInfo& value) { SetRepositoryLinkInfo(value); return *this;}

    /**
     * <p>The returned information about the created repository link.</p>
     */
    inline CreateRepositoryLinkResult& WithRepositoryLinkInfo(RepositoryLinkInfo&& value) { SetRepositoryLinkInfo(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateRepositoryLinkResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateRepositoryLinkResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateRepositoryLinkResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    RepositoryLinkInfo m_repositoryLinkInfo;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
