/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/RepositoryDescription.h>
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
  class DisassociateExternalConnectionResult
  {
  public:
    AWS_CODEARTIFACT_API DisassociateExternalConnectionResult();
    AWS_CODEARTIFACT_API DisassociateExternalConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API DisassociateExternalConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The repository associated with the removed external connection. </p>
     */
    inline const RepositoryDescription& GetRepository() const{ return m_repository; }

    /**
     * <p> The repository associated with the removed external connection. </p>
     */
    inline void SetRepository(const RepositoryDescription& value) { m_repository = value; }

    /**
     * <p> The repository associated with the removed external connection. </p>
     */
    inline void SetRepository(RepositoryDescription&& value) { m_repository = std::move(value); }

    /**
     * <p> The repository associated with the removed external connection. </p>
     */
    inline DisassociateExternalConnectionResult& WithRepository(const RepositoryDescription& value) { SetRepository(value); return *this;}

    /**
     * <p> The repository associated with the removed external connection. </p>
     */
    inline DisassociateExternalConnectionResult& WithRepository(RepositoryDescription&& value) { SetRepository(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DisassociateExternalConnectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DisassociateExternalConnectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DisassociateExternalConnectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    RepositoryDescription m_repository;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
