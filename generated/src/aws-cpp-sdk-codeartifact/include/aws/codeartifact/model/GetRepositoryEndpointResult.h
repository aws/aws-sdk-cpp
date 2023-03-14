/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
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
namespace CodeArtifact
{
namespace Model
{
  class GetRepositoryEndpointResult
  {
  public:
    AWS_CODEARTIFACT_API GetRepositoryEndpointResult();
    AWS_CODEARTIFACT_API GetRepositoryEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API GetRepositoryEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A string that specifies the URL of the returned endpoint. </p>
     */
    inline const Aws::String& GetRepositoryEndpoint() const{ return m_repositoryEndpoint; }

    /**
     * <p> A string that specifies the URL of the returned endpoint. </p>
     */
    inline void SetRepositoryEndpoint(const Aws::String& value) { m_repositoryEndpoint = value; }

    /**
     * <p> A string that specifies the URL of the returned endpoint. </p>
     */
    inline void SetRepositoryEndpoint(Aws::String&& value) { m_repositoryEndpoint = std::move(value); }

    /**
     * <p> A string that specifies the URL of the returned endpoint. </p>
     */
    inline void SetRepositoryEndpoint(const char* value) { m_repositoryEndpoint.assign(value); }

    /**
     * <p> A string that specifies the URL of the returned endpoint. </p>
     */
    inline GetRepositoryEndpointResult& WithRepositoryEndpoint(const Aws::String& value) { SetRepositoryEndpoint(value); return *this;}

    /**
     * <p> A string that specifies the URL of the returned endpoint. </p>
     */
    inline GetRepositoryEndpointResult& WithRepositoryEndpoint(Aws::String&& value) { SetRepositoryEndpoint(std::move(value)); return *this;}

    /**
     * <p> A string that specifies the URL of the returned endpoint. </p>
     */
    inline GetRepositoryEndpointResult& WithRepositoryEndpoint(const char* value) { SetRepositoryEndpoint(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetRepositoryEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetRepositoryEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetRepositoryEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_repositoryEndpoint;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
