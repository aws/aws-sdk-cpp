/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/DomainDescription.h>
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
  class DeleteDomainResult
  {
  public:
    AWS_CODEARTIFACT_API DeleteDomainResult();
    AWS_CODEARTIFACT_API DeleteDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API DeleteDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Contains information about the deleted domain after processing the request.
     * </p>
     */
    inline const DomainDescription& GetDomain() const{ return m_domain; }

    /**
     * <p> Contains information about the deleted domain after processing the request.
     * </p>
     */
    inline void SetDomain(const DomainDescription& value) { m_domain = value; }

    /**
     * <p> Contains information about the deleted domain after processing the request.
     * </p>
     */
    inline void SetDomain(DomainDescription&& value) { m_domain = std::move(value); }

    /**
     * <p> Contains information about the deleted domain after processing the request.
     * </p>
     */
    inline DeleteDomainResult& WithDomain(const DomainDescription& value) { SetDomain(value); return *this;}

    /**
     * <p> Contains information about the deleted domain after processing the request.
     * </p>
     */
    inline DeleteDomainResult& WithDomain(DomainDescription&& value) { SetDomain(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteDomainResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteDomainResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteDomainResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DomainDescription m_domain;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
