﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/ResourcePolicy.h>
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
  class PutRepositoryPermissionsPolicyResult
  {
  public:
    AWS_CODEARTIFACT_API PutRepositoryPermissionsPolicyResult();
    AWS_CODEARTIFACT_API PutRepositoryPermissionsPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API PutRepositoryPermissionsPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The resource policy that was set after processing the request. </p>
     */
    inline const ResourcePolicy& GetPolicy() const{ return m_policy; }
    inline void SetPolicy(const ResourcePolicy& value) { m_policy = value; }
    inline void SetPolicy(ResourcePolicy&& value) { m_policy = std::move(value); }
    inline PutRepositoryPermissionsPolicyResult& WithPolicy(const ResourcePolicy& value) { SetPolicy(value); return *this;}
    inline PutRepositoryPermissionsPolicyResult& WithPolicy(ResourcePolicy&& value) { SetPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutRepositoryPermissionsPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutRepositoryPermissionsPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutRepositoryPermissionsPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ResourcePolicy m_policy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
